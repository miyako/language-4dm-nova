#!/usr/bin/env python3
"""Resolve a 4D version to the (branch, version) pair tool4d publishes under.

4D publishes two parallel download trains and a branch only ever pairs with a
version from the same train:

    LTS         branch "21.x"    version "21.2"
    R-release   branch "21 Rx"   version "21 R5"

There is no directory listing and no version index at
``resources-download.4d.com``; the only way to know which versions are
*publicly released* is to check the archive itself. A directory path answers
200 with an 87-byte HTML stub, so a status code is not evidence -- only a
``Content-Length`` in the tens of megabytes is. A 404 for a version newer than
the newest published one means that version is still in beta, not that the URL
is wrong.

Usage::

    tools/resolve_version.py --request "21 R5"    # explicit
    tools/resolve_version.py --request "21.2"     # explicit
    tools/resolve_version.py --request ""         # newest published

Prints two shell assignments (``branch=`` and ``version=``) for
``$GITHUB_OUTPUT`` style consumption.
"""

from __future__ import annotations

import argparse
import re
import sys
import urllib.error
import urllib.request

BASE = "https://resources-download.4d.com/release"
ARCHIVE = "tool4d_linux.tar.xz"
PLATFORM = "linux"
MIN_BYTES = 1_000_000

R_TRAIN = re.compile(r"^(\d+)\s*R\s*(\d+)$", re.I)
LTS_TRAIN = re.compile(r"^(\d+)\.(\d+)$")


def archive_url(branch: str, version: str) -> str:
    quoted_branch = branch.replace(" ", "%20")
    quoted_version = version.replace(" ", "%20")
    return f"{BASE}/{quoted_branch}/{quoted_version}/latest/{PLATFORM}/{ARCHIVE}"


def published(branch: str, version: str) -> bool:
    """True only when the endpoint really serves the archive, not a stub."""
    request = urllib.request.Request(archive_url(branch, version), method="HEAD")
    try:
        with urllib.request.urlopen(request, timeout=30) as response:
            length = int(response.headers.get("Content-Length", 0))
            kind = response.headers.get("Content-Type", "")
            return response.status == 200 and length >= MIN_BYTES and "html" not in kind
    except urllib.error.HTTPError:
        return False
    except urllib.error.URLError as exc:
        print(f"warning: {branch} / {version}: {exc}", file=sys.stderr)
        return False


def newest(major: int) -> tuple[str, str]:
    """Newest published version: R-release first, then the LTS minor line."""
    for r in range(9, 0, -1):
        branch, version = f"{major} Rx", f"{major} R{r}"
        if published(branch, version):
            return branch, version
    for minor in range(9, 0, -1):
        branch, version = f"{major}.x", f"{major}.{minor}"
        if published(branch, version):
            return branch, version
    raise SystemExit(
        f"no published tool4d found for 4D {major} on either train; "
        "pass an explicit version such as '21 R5' or '21.2'"
    )


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--request", default="", help="'21 R5', '21.2', or empty for the newest published build")
    parser.add_argument("--major", type=int, default=21, help="major version to scan when --request is empty")
    args = parser.parse_args(argv)

    request = " ".join(args.request.split())
    if request:
        if match := R_TRAIN.match(request):
            branch, version = f"{match.group(1)} Rx", f"{match.group(1)} R{match.group(2)}"
        elif match := LTS_TRAIN.match(request):
            branch, version = f"{match.group(1)}.x", f"{match.group(1)}.{int(match.group(2))}"
        else:
            raise SystemExit(f"cannot interpret {request!r}; expected '21 R5' or '21.2'")

        if not published(branch, version):
            raise SystemExit(
                f"{version} is not published at {archive_url(branch, version)}. "
                "Newer R-releases live in beta until 4D publishes them, and a "
                "branch from one train never pairs with a version from the other."
            )
    else:
        branch, version = newest(args.major)

    url = archive_url(branch, version)
    print(f"branch={branch}")
    print(f"version={version}")
    print(f"url={url}")
    print(f"resolved {version} -> {url}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
