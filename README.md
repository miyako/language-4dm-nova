# language-4dm-nova
add syntax highlighting to .4dm files.

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## features

language-4d currently supports the following features:

* class member function declaration
* project method declaration
* local, process, interprocess variables
* value types

<img width="434" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/19182eab-eb51-4253-bad6-bf416b6abf3a">
