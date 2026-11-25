#!/usr/bin/env python3
"""Write the changelog entry for a release out of the commit history.

The release workflow runs this between the version bump and the commit, so the
`CHANGELOG.md` entry, the release notes and the tag all describe the same set of
commits.

Entries are grouped by the Conventional Commit prefix of each subject:

    feat      Added        fix       Fixed
    perf      Changed      docs      Documentation
    refactor  Changed      build     Build
    revert    Changed      ci        Build
    style     Changed      test      Tests
    chore     Other        anything else  Other

Merge commits and the release commits themselves are left out.

Usage:

    tools/changelog.py                          # entry for HEAD, not written
    tools/changelog.py --write                  # prepend it to CHANGELOG.md
    tools/changelog.py --version 21.5.2 \\
        --previous-tag 21.5.1 \\
        --notes-file /tmp/entry.md --write
    tools/changelog.py --package-copy language-4d.novaextension/CHANGELOG.md

`--package-copy` generates nothing: it copies the changelog to the file Nova
presents to someone who installed the extension, dropping the
`## [Unreleased]` placeholder. The repository needs that section so unreleased
commits have somewhere to go; the installed package does not, and an empty
heading on top would be the first thing a reader meets.
"""

from __future__ import annotations

import argparse
import datetime
import re
import subprocess
import sys
from pathlib import Path

CHANGELOG = Path("CHANGELOG.md")

HEADER = """\
# Changelog

All notable changes to this project are documented here. The format follows
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and the version
number tracks the 4D release this extension targets: `21.5.1` is the second
release against 4D 21.5, `21.6.0` would claim 4D 21.6.

Entries are generated from the commit history by `tools/changelog.py`. The
conventional-commit prefix picks the section (`feat:` → Added, `fix:` → Fixed,
`docs:` → Documentation, `build:` and `ci:` → Build, …); a subject without one
is read for its verb, and the files it touches decide in the end. Releases
before 21.5.1 predate this file and are not listed.

"""

# Order matters: it is the order the sections appear in.
SECTIONS = (
    "Added",
    "Changed",
    "Deprecated",
    "Removed",
    "Fixed",
    "Security",
    "Documentation",
    "Build",
    "Tests",
    "Other",
)

CATEGORY_BY_TYPE = {
    "feat": "Added",
    "fix": "Fixed",
    "perf": "Changed",
    "refactor": "Changed",
    "revert": "Changed",
    "style": "Changed",
    "docs": "Documentation",
    "doc": "Documentation",
    "build": "Build",
    "ci": "Build",
    "test": "Tests",
    "tests": "Tests",
}

CONVENTIONAL = re.compile(r"^(?P<type>[a-z]+)(?:\([^)]*\))?!?:\s*(?P<rest>.+)$", re.IGNORECASE)

# Most subjects here predate conventional commits, so the section comes from the
# wording of the subject next, and from the files it touches last.
CATEGORY_BY_WORDING = (
    ("Security", re.compile(r"\b(vulnerab|security|injection|cve)", re.IGNORECASE)),
    ("Deprecated", re.compile(r"\bdeprecat", re.IGNORECASE)),
    ("Removed", re.compile(r"\b(remove[sd]?|delete[sd]?|drop(s|ped)?|rm)\b", re.IGNORECASE)),
    ("Fixed", re.compile(r"\b(fix(es|ed)?|correct(s|ed)?|repair(s|ed)?|no longer|stop(s|ped)?|refuse[sd]?|crash|regression)\b", re.IGNORECASE)),
    ("Added", re.compile(r"\b(add(s|ed)?|introduce[sd]?|new|support(s|ed)?|implement(s|ed)?)\b", re.IGNORECASE)),
    ("Documentation", re.compile(r"\b(doc|docs|document(ation|ed)?|readme|comment(s|ed)?)\b", re.IGNORECASE)),
    ("Build", re.compile(r"\b(build|generat(or|e|es|ed)|cargo|compile|xcode|runner|workflow|ci|install)\b", re.IGNORECASE)),
    ("Tests", re.compile(r"\b(test|tests|tested|spec)\b", re.IGNORECASE)),
    ("Changed", re.compile(r"\b(update[sd]?|bump(s|ed)?|change[sd]?|move[sd]?|rename[sd]?|expand(s|ed)?|fetch(es|ed)?|use[sd]?|switch(es|ed)?)\b", re.IGNORECASE)),
)

BUILD_PATHS = re.compile(r"^(\.github/|tools/|Makefile|.*\.(yml|yaml|sh|ps1)$)")
DOCUMENTATION_PATHS = re.compile(r".*\.(md|txt)$", re.IGNORECASE)
TEST_PATHS = re.compile(r"(^|/)tests?/|.*_test\..*$|.*\.test\..*$")

# The workflow's own commit and merge commits describe the release, not a change.
SKIPPED = re.compile(r"^(release:|chore\(release\)|Merge )", re.IGNORECASE)


def run_git(root: Path, *args: str) -> str:
    result = subprocess.run(
        ["git", "-C", str(root), *args],
        capture_output=True,
        text=True,
        check=False,
    )
    if result.returncode != 0:
        raise SystemExit(f"git {' '.join(args)} failed: {result.stderr.strip()}")
    return result.stdout


def repository_url(root: Path) -> str | None:
    """Return the https URL of origin, or None when there is no usable remote."""
    result = subprocess.run(
        ["git", "-C", str(root), "remote", "get-url", "origin"],
        capture_output=True,
        text=True,
        check=False,
    )
    if result.returncode != 0:
        return None
    url = result.stdout.strip()
    if not url:
        return None
    if url.startswith("git@"):
        host, _, path = url.partition(":")
        url = f"https://{host.split('@', 1)[-1]}/{path}"
    url = re.sub(r"\.git$", "", url)
    return url.rstrip("/") or None


def latest_tag(root: Path, exclude: set[str]) -> str | None:
    tags = run_git(root, "tag", "--merged", "HEAD", "--sort=-v:refname").split()
    for tag in tags:
        if tag not in exclude:
            return tag
    return None


def commits(root: Path, previous_tag: str | None) -> list[tuple[str, str, list[str]]]:
    """Return (short sha, subject, files) oldest last, without merges or releases."""
    revision = f"{previous_tag}..HEAD" if previous_tag else "HEAD"
    output = run_git(
        root, "log", "--no-merges", "--pretty=format:%x00%h\x1f%s", "--name-only", revision
    )
    entries: list[tuple[str, str, list[str]]] = []
    for record in output.split("\x00"):
        lines = [line for line in record.splitlines() if line.strip()]
        if not lines or "\x1f" not in lines[0]:
            continue
        short, subject = lines[0].split("\x1f", 1)
        subject = subject.strip()
        if not subject or SKIPPED.match(subject):
            continue
        entries.append((short, subject, [line.strip() for line in lines[1:]]))
    entries.reverse()  # oldest first, the way the changes were made
    return entries


def categorize(subject: str, files: list[str]) -> tuple[str, str]:
    """Return (section, bullet text) for one commit."""
    match = CONVENTIONAL.match(subject)
    if match and match.group("type").lower() in CATEGORY_BY_TYPE:
        body = match.group("rest").strip()
        return CATEGORY_BY_TYPE[match.group("type").lower()], body or subject

    for section, pattern in CATEGORY_BY_WORDING:
        if pattern.search(subject):
            return section, subject

    if files:
        if all(BUILD_PATHS.match(name) for name in files):
            return "Build", subject
        if all(DOCUMENTATION_PATHS.match(name) for name in files):
            return "Documentation", subject
        if any(TEST_PATHS.search(name) for name in files):
            return "Tests", subject
    return "Changed", subject


def render_entry(
    version: str,
    date: str,
    previous_tag: str | None,
    entries: list[tuple[str, str, list[str]]],
    repo_url: str | None,
) -> str:
    if previous_tag and repo_url:
        heading = f"## [{version}]({repo_url}/compare/{previous_tag}...{version}) - {date}"
    else:
        heading = f"## [{version}] - {date}"

    grouped: dict[str, list[str]] = {}
    for short, subject, files in entries:
        section, text = categorize(subject, files)
        if repo_url:
            text = f"{text} ([`{short}`]({repo_url}/commit/{short}))"
        else:
            text = f"{text} ({short})"
        grouped.setdefault(section, []).append(text)

    lines = [heading, ""]
    if not grouped:
        lines += [
            "_No changes beyond the version bump; the signed artifacts were "
            "rebuilt against the same sources._",
            "",
        ]
        return "\n".join(lines)

    for section in SECTIONS:
        bullets = grouped.get(section)
        if not bullets:
            continue
        lines.append(f"### {section}")
        lines.append("")
        lines += [f"- {bullet}" for bullet in bullets]
        lines.append("")
    return "\n".join(lines).rstrip("\n") + "\n"


def write_changelog(root: Path, version: str, entry: str) -> None:
    path = root / CHANGELOG
    if path.exists():
        text = path.read_text()
    else:
        text = HEADER + "## [Unreleased]\n\n"

    if re.search(rf"^## \[{re.escape(version)}\]", text, re.MULTILINE):
        raise SystemExit(f"CHANGELOG.md already has an entry for {version}")

    # Insert after the `## [Unreleased]` section, i.e. before the newest entry.
    lines = text.splitlines()
    insert_at = None
    seen_unreleased = False
    for index, line in enumerate(lines):
        if line.startswith("## [Unreleased]"):
            seen_unreleased = True
        elif seen_unreleased and line.startswith("## "):
            insert_at = index
            break
    if insert_at is None:
        # No released entry yet: append to the end of the file.
        insert_at = len(lines)
        while insert_at > 0 and not lines[insert_at - 1].strip():
            insert_at -= 1
        lines[insert_at:insert_at] = ["", entry.rstrip("\n"), ""]
    else:
        lines[insert_at:insert_at] = [entry.rstrip("\n"), ""]
    path.write_text("\n".join(lines).rstrip("\n") + "\n")


def write_package_copy(root: Path, destination: Path) -> None:
    """Copy the changelog to the extension bundle without the Unreleased heading."""
    text = (root / CHANGELOG).read_text()
    kept: list[str] = []
    dropped = False
    skipping = False
    for line in text.splitlines():
        if line.startswith("## [Unreleased]"):
            skipping = True
            dropped = True
            continue
        if skipping:
            if not line.strip():
                continue
            skipping = False
        kept.append(line)
    if not dropped:
        sys.stderr.write("note: CHANGELOG.md has no `## [Unreleased]` heading\n")
    destination.write_text("\n".join(kept).rstrip("\n") + "\n")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--root", type=Path, default=Path("."), help="repository root")
    parser.add_argument("--version", help="version to write (default: extension.json)")
    parser.add_argument("--previous-tag", help="tag the entry starts from (default: newest)")
    parser.add_argument("--date", type=str, help="entry date, YYYY-MM-DD (default: today, UTC)")
    parser.add_argument("--notes-file", type=Path, help="write the entry here as well")
    parser.add_argument("--write", action="store_true", help="prepend the entry to CHANGELOG.md")
    parser.add_argument(
        "--package-copy",
        type=Path,
        metavar="PATH",
        help="copy CHANGELOG.md there without the Unreleased heading, and stop",
    )
    args = parser.parse_args(argv)

    root = args.root.resolve()
    if args.package_copy:
        write_package_copy(root, args.package_copy)
        sys.stdout.write(f"wrote {args.package_copy}\n")
        return 0

    if args.version:
        version = args.version
    else:
        import json

        manifest = root / "language-4d.novaextension" / "extension.json"
        if not manifest.exists():
            raise SystemExit("no --version and no language-4d.novaextension/extension.json")
        version = json.loads(manifest.read_text())["version"]

    previous_tag = args.previous_tag or latest_tag(root, {version})
    date = args.date or datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d")

    entry = render_entry(
        version,
        date,
        previous_tag,
        commits(root, previous_tag),
        repository_url(root),
    )

    if args.notes_file:
        args.notes_file.write_text(entry)
    if args.write:
        write_changelog(root, version, entry)

    sys.stdout.write(entry)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
