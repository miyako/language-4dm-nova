# 4D Language for Nova

Syntax highlighting, structure folding, symbols, and SQL injection for
4D (`.4dm`) files in [Nova](https://nova.app), built on the
tree-sitter-fourd grammar (validated at 99.7% against 11,172 real-world
files from the 4d / 4d-depot GitHub organizations).

## Layout

    4D.novaextension/       the extension bundle (needs the dylib, see below)
      extension.json
      Syntaxes/fourd.xml    syntax definition: detection, indentation, comments
      Queries/              Nova tree-sitter queries
        highlights.scm      theme selectors for every token class
        folds.scm           If/Case/For/While/Repeat/Try/SQL/function folding
        symbols.scm         class functions (+arguments), properties, superclass
        arguments.scm       parameter subquery for signature help
        injections.scm      SQL inside Begin SQL ... End SQL
    parser-src/             C sources compiled into the parser dylib
    compile_parser.sh       builds and installs the dylib (macOS only)

## Which grammar is this? (read before building)

Two 4D grammar codebases exist in this project's history, and **mixing their
files is what broke the first build** (query errors in Nova, and a parser
that hangs on `Function` headers):

| | Production grammar (THIS bundle) | Hand-written "classic" grammar |
|---|---|---|
| Root node | `source_file` | `source` |
| Externals | 11 (`_terminator`, `_function_start`, ..., `_error_sentinel`) | 2 (`classic_command`, `classic_constant`) |
| Corpus pass rate | 99.6% of 11,172 files | ~9% (no commands in value position) |
| Matching scanner | `parser-src/scanner.c` (11-symbol enum) | `alt-hand-written-grammar/scanner-for-classic-grammar.c` |
| Matching queries | `4D.novaextension/Queries/` | `alt-hand-written-grammar/Queries/` |

A scanner's `enum TokenType` must match its grammar's `externals` array
position-for-position; compiling one grammar's `parser.c` with the other's
`scanner.c` is undefined behavior. `parser-src/` in this bundle is a verified
matched set: production `parser.c` + its scanner + `builtins.h`, tested
end-to-end against the full corpus before packaging.

Two bugs were also fixed in the production scanner along the way: the
function-start peek now falls through to builtin matching when the first word
is not a modifier (so `ALERT("x")` at statement start lexes as a
`command_name`), and a zero-width terminator is emitted at EOF (so files
without a trailing newline don't end in `MISSING _terminator`).

## Building the parser

**`parser-src/` is already a matched set — build it as-is.** If the grammar evolves, regenerate
(`tree-sitter generate`) and copy the new `src/parser.c` over — but keep
scanner and grammar in lockstep per the table above. The script compiles
every `.c` file in `parser-src/`.

On macOS with Xcode command line tools:

    ./compile_parser.sh                       # Nova at /Applications/Nova.app
    ./compile_parser.sh ~/Downloads/Nova.app  # or wherever Nova lives

This produces a universal (arm64 + x86_64) `libtree-sitter-fourd.dylib`
inside `4D.novaextension/Syntaxes/`, linked against Nova's SyntaxKit with the
rpath Nova requires, and ad-hoc signed.

## Installing

Double-click `4D.novaextension`, or open the folder in Nova and use
Extensions → Activate Project as Extension for development. If the bundle
was downloaded (quarantined), clear the flag first:

    xattr -dr com.apple.quarantine 4D.novaextension

## Design notes

- **Highlights use Nova theme selectors**, not stock tree-sitter capture
  names. Tokenized builtins (`ALERT:C41`) get `identifier.core.function`;
  untokenized multi-word plugin commands (`VP SET CELL STYLE`) get
  `identifier.function`, so component calls read differently from builtins.
- **Closing keywords are regex tokens** (`End if`, `End case`, `Case of`,
  `For each`, `Class extends`, `Class constructor`) and cannot be addressed
  by name in queries. Both highlights and folds capture them positionally
  with anchored wildcards (`_ @keyword .` — the hidden terminator never
  appears in the tree, so the closer is always the last child).
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
- `alt-hand-written-grammar/` holds a corrected minimal scanner and a full
  Nova query set for the classic 2-external grammar, should that architecture
  be revived — its queries use the heading pattern (`scope.level` +
  `scope.extend`) because that grammar's function headers are siblings of
  their bodies, and `#replace!` transforms to extract function names, which
  are hidden tokens there.
