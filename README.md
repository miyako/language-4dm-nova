# 4D Language for Nova

Syntax highlighting, structure folding, symbols, and SQL injection for
4D (`.4dm`) files in [Nova](https://nova.app), built on the
tree-sitter-fourd grammar (validated at 99.7% against 11,172 real-world
files from the 4d / 4d-depot GitHub organizations).

Versions are SemVer read against 4D: the major is the 4D major the module
targets, the minor counts features added to the module, the patch counts fixes.
Releases are published as a notarized, stapled DMG on the
[Releases](https://github.com/miyako/language-4dm-nova/releases) page. What
changed in each one is in [CHANGELOG.md](CHANGELOG.md).

## Layout

    language-4d.novaextension/       the extension bundle (needs the dylib, see below)
      extension.json
      README.md             the user-facing docs Nova shows for the extension
      CHANGELOG.md          a copy of the top-level changelog, rewritten at release
      LICENSE
      Syntaxes/fourd.xml    syntax definition: detection, indentation, comments
      Queries/              Nova tree-sitter queries
        highlights.scm      theme selectors for every token class
        folds.scm           If/Case/For/While/Repeat/Try/SQL/function folding
        symbols.scm         class functions (+arguments), properties, superclass
        arguments.scm       parameter subquery for signature help
        injections.scm      SQL inside Begin SQL ... End SQL
    src/                    C sources compiled into the parser dylib
    compile_parser.sh       builds and installs the dylib (macOS only)
    tools/                  release helpers: version bump, changelog entry
    CHANGELOG.md            what shipped in each release

## Building the parser

**`src/` is already a matched set — build it as-is.** If the grammar evolves, regenerate
(`tree-sitter generate`) and copy the new `src/parser.c` over — but keep
scanner and grammar in lockstep per the table above. The script compiles
every `.c` file in `src/`.

On macOS with Xcode command line tools and a Rust toolchain:

    ./compile_parser.sh . /Applications/Nova.app

This produces a universal (arm64 + x86_64) `libtree-sitter-fourd.dylib`
inside `language-4d.novaextension/Syntaxes/`, links it against Nova's SyntaxKit
with the rpath Nova requires, rebuilds the universal `tool4d-lsp-stdio` bridge
in `bin/`, signs both with the Developer ID Application identity in the
keychain, and packages `language-4d.novaextension.dmg`, notarizes it and
staples the ticket.

The Nova bundle is optional. It only supplies `SyntaxKit.framework` to the
link step, and the dylib references no SyntaxKit symbol (only libSystem and
itself), so a machine without Nova builds the same extension:

    ./compile_parser.sh .                        # no SyntaxKit link
    SKIP_NOTARIZATION=1 ./compile_parser.sh .    # sign only, no DMG

Credentials come from the environment: `DEVELOPER_ID` picks the signing
identity (default: the single Developer ID Application identity), and
notarization uses `NOTARY_PROFILE` or `NOTARYTOOL_APPLE_ID` +
`NOTARYTOOL_TEAM_ID` + `NOTARYTOOL_PASSWORD`.

## Releasing

The **Release** workflow (`workflow_dispatch`) does the whole thing: it bumps
the version, rebuilds and signs both products, notarizes and staples the DMG,
commits the refreshed artifacts, then tags and publishes a GitHub release.

The version lives in `language-4d.novaextension/extension.json`. It is SemVer
read against 4D: `major` is the 4D major the module targets, `minor` counts
features added to the module, `patch` counts fixes — so `20.5.1` is a patch on
the module's fifth feature milestone for 4D 20, not a claim about 4D 20.5. Pick
the component in the dispatch form; the tag is that version, matching the
existing tags here (`21.4.0`, `21.5.0`, `21.5.4`). `patch` is the default, for a
rebuild or a fix; choose `minor` only when the release adds a feature to the
module, and `major` when it moves to a different 4D major.

Repository secrets it reads: `APPLE_DEVELOPER_ID_CERTIFICATE` (base64 `.p12`),
`APPLE_DEVELOPER_ID_CERTIFICATE_PASSWORD`, `KEYCHAIN_PASSWORD`,
`NOTARYTOOL_APPLE_ID`, `NOTARYTOOL_TEAM_ID`, `NOTARYTOOL_PASSWORD`.

The release also writes the `CHANGELOG.md` entry for that version out of the
commits since the previous tag (`tools/changelog.py`) and uses the same entry as
the body of the GitHub release, so the page and the file cannot drift apart. The
section a change lands in comes from the conventional-commit prefix of its
subject (`feat:` → Added, `fix:` → Fixed, `docs:` → Documentation, `build:` and
`ci:` → Build, …), then from the wording of the subject, then from the files it
touches — write the prefix when you want it filed precisely. The workflow does
that itself, so the tool is only for a release cut by hand; note that it refuses
to write a version that already has an entry:

    python3 tools/changelog.py --version 21.5.1 --previous-tag 21.5.0           # read it
    python3 tools/changelog.py --version 21.5.1 --previous-tag 21.5.0 --write   # record it

The entry is copied into the bundle as `language-4d.novaextension/CHANGELOG.md`
along with `README.md` and `LICENSE`, because Nova presents an installed
extension from the package's own files; the release verifies all three are in
the DMG and that the packaged changelog carries the version being published.
That copy leaves out the `## [Unreleased]` heading — the repository keeps it for
commits that are not released yet, but the installed package should start at the
version the reader has:

    python3 tools/changelog.py --package-copy language-4d.novaextension/CHANGELOG.md

Each release publishes `language-4d.novaextension.dmg` (notarized, stapled),
`libtree-sitter-fourd.dylib`, `tool4d-lsp-stdio` and `SHA256SUMS.txt`. The
workflow builds `src/` as-is; regenerating the grammar is
`update-builtins.yml`, a separate pipeline.

## Installing

Download `language-4d.novaextension.dmg` from the
[latest release](https://github.com/miyako/language-4dm-nova/releases/latest),
open it, and add the extension to Nova. The image and both binaries are signed
with a Developer ID Application certificate and notarized with Apple, so
Gatekeeper assesses them without an override.

For development, open the folder in Nova and use Extensions → Activate Project
as Extension.

## Design notes

- **Highlights use Nova theme selectors**, not stock tree-sitter capture
  names. Tokenized builtins (`ALERT:C41`) get `identifier.core.function`;
  untokenized multi-word plugin commands (`VP SET CELL STYLE`) get
  `identifier.function`, so component calls read differently from builtins.
- **Closing keywords are regex tokens** (`End if`, `Case of`, `For each`,
  `Class constructor`) which queries cannot name — and anchored wildcards do
  NOT reach them, because query anchors ignore anonymous nodes. The grammar
  aliases every such token to a named `keyword` node instead, so highlighting
  is one pattern (`(keyword) @keyword`) and folds anchor on named nodes.
- **Folds keep headers visible**: each fold starts after the header's last
  structural node (condition, `)`, parameter list) with `scope.byLine`, so
  collapsing an `If` leaves the condition line on screen, and collapsing a
  function leaves the whole signature including its return clause.
- **Case branches fold individually** in addition to the whole `Case of`
  block, using `@end.after` on the branch's last statement.
- **Comments fold for free**: Nova automatically folds regions highlighted
  with the `comment` selector, which covers `/* ... */` blocks and the
  backslash-continued `//` comment runs the grammar absorbs into one token.
- The SQL injection uses the scanner's `sql_content` token spanning the
  block body.
