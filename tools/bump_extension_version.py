#!/usr/bin/env python3
"""Bump the Nova extension version and report the release tag.

`language-4d.novaextension/extension.json` holds the version Nova displays and
the one the release tag carries. It is SemVer read against 4D, so a bump moves
one component of that same number:

    --bump patch   21.5.0 -> 21.5.1     a fix
    --bump minor   21.5.0 -> 21.6.0     a feature added to the module
    --bump major   21.5.0 -> 22.0.0     a different 4D major

The major tracks the 4D major the module targets, the minor counts features
added to the module -- not 4D minor releases -- and the patch counts fixes. The
tag is the version itself (``21.5.1``), matching the tags this repository
already carries (``21.4.0``, ``21.5.0``). The grammar's own ``package.json``
version and the bridge's ``Cargo.toml`` version are separate artifact versions
and are not touched.

Only the version string is rewritten, so the manifest keeps its formatting and
the diff stays one line.
"""

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

MANIFEST = Path("language-4d.novaextension/extension.json")
VERSION_PATTERN = re.compile(r'^(\d+)\.(\d+)\.(\d+)$')
TAG_PREFIX = ""  # tags match the 4D release version, without a v prefix


def read_version(manifest: Path) -> str:
    """Return the manifest's version, validating the three-number form."""
    try:
        data = json.loads(manifest.read_text(encoding="utf-8"))
    except FileNotFoundError:
        raise SystemExit(f"missing manifest: {manifest}")
    except json.JSONDecodeError as error:
        raise SystemExit(f"{manifest} is not valid JSON: {error}")

    version = data.get("version")
    if not isinstance(version, str):
        raise SystemExit(f"{manifest} has no Text version field")
    if not VERSION_PATTERN.match(version):
        raise SystemExit(
            f'{manifest}: version "{version}" is not major.minor.patch'
        )
    return version


def bump(version: str, component: str) -> str:
    """Return ``version`` with ``component`` incremented and lower ones reset."""
    major, minor, patch = (int(part) for part in VERSION_PATTERN.match(version).groups())
    if component == "major":
        major, minor, patch = major + 1, 0, 0
    elif component == "minor":
        minor, patch = minor + 1, 0
    elif component == "patch":
        patch += 1
    else:  # pragma: no cover - argparse restricts the choices
        raise SystemExit(f"unknown component: {component}")
    return f"{major}.{minor}.{patch}"


def write_version(manifest: Path, current: str, next_version: str) -> None:
    """Replace exactly the current version string, preserving the layout."""
    text = manifest.read_text(encoding="utf-8")
    pattern = re.compile(r'("version"\s*:\s*")' + re.escape(current) + r'(")')
    updated, count = pattern.subn(r"\g<1>" + next_version + r"\g<2>", text)
    if count != 1:
        raise SystemExit(
            f'{manifest}: expected one "version": "{current}" field, found {count}'
        )
    manifest.write_text(updated, encoding="utf-8")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", default=".", help="repository root")
    parser.add_argument(
        "--bump",
        choices=("major", "minor", "patch"),
        help="component to increment; omit to only report the current version",
    )
    parser.add_argument(
        "--set",
        dest="set_version",
        help="write this exact version instead of bumping (recovery only)",
    )
    parser.add_argument(
        "--github-output",
        help="append current/next/tag to this file (GITHUB_OUTPUT)",
    )
    args = parser.parse_args(argv)

    manifest = Path(args.root) / MANIFEST
    current = read_version(manifest)

    if args.bump and args.set_version:
        raise SystemExit("pass --bump or --set, not both")
    if args.set_version:
        if not VERSION_PATTERN.match(args.set_version):
            raise SystemExit(f'--set "{args.set_version}" is not major.minor.patch')
        next_version = args.set_version
    elif args.bump:
        next_version = bump(current, args.bump)
    else:
        next_version = current

    if next_version != current:
        write_version(manifest, current, next_version)

    tag = TAG_PREFIX + next_version
    print(f"current: {current}")
    print(f"next:    {next_version}")
    print(f"tag:     {tag}")

    if args.github_output:
        with open(args.github_output, "a", encoding="utf-8") as output:
            output.write(f"current={current}\n")
            output.write(f"version={next_version}\n")
            output.write(f"tag={tag}\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
