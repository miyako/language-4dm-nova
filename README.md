# language-4dm-nova
add syntax highlighting to .4dm files.

```sh
cd .tree-sitter-4dm
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
```

```sh
./tree-sitter-4dm/compile_parser.sh ./tree-sitter-4dm/ /Applications/Nova.app
```
