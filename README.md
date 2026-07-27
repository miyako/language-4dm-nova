# 4D Language for Nova

Syntax highlighting, structure folding, symbols, and SQL injection for
4D (`.4dm`) files in [Nova](https://nova.app), built on the
tree-sitter-fourd grammar (validated at 99.7% against 11,172 real-world
files from the 4d / 4d-depot GitHub organizations).

## Layout

    language-4d.novaextension/       the extension bundle (needs the dylib, see below)
      extension.json
      Syntaxes/fourd.xml    syntax definition: detection, indentation, comments
      Queries/              Nova tree-sitter queries
        highlights.scm      theme selectors for every token class
        folds.scm           If/Case/For/While/Repeat/Try/SQL/function folding
        symbols.scm         class functions (+arguments), properties, superclass
        arguments.scm       parameter subquery for signature help
        injections.scm      SQL inside Begin SQL ... End SQL
    src/                    C sources compiled into the parser dylib
    compile_parser.sh       builds and installs the dylib (macOS only)

## Building the parser

**`src/` is already a matched set — build it as-is.** If the grammar evolves, regenerate
(`tree-sitter generate`) and copy the new `src/parser.c` over — but keep
scanner and grammar in lockstep per the table above. The script compiles
every `.c` file in `parser-src/`.

On macOS with Xcode command line tools:

    ./compile_parser.sh . /Applications/Nova.app

This produces a universal (arm64 + x86_64) `libtree-sitter-fourd.dylib`
inside `language-4d.novaextension/Syntaxes/`, linked against Nova's SyntaxKit with the
rpath Nova requires, and signed (Developer ID Application is hard-coded in build script).

## Installing

Double-click `language-4d.novaextension`, or open the folder in Nova and use
Extensions → Activate Project as Extension for development. 

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
