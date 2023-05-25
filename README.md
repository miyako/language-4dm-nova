# language-4dm-nova
add syntax highlighting to .4dm files.

```sh
export PATH="$PATH:.tree-sitter-4dm/node_modules/.bin/"
tree-sitter generate ./tree-sitter-4dm/grammar.js
```

```sh
./tree-sitter-4dm/compile_parser.sh ./tree-sitter-4dm/ /Applications/Nova.app
```
