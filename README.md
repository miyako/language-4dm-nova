# language-4dm-nova
add syntax highlighting to .4dm files.

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## the `4dlang` tree-sitter parser

* `source` is a series of `_statement`.

### `_statement`

* [`function_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/1.%20function_block.txt)
* [`declare_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/2.%20declare_block.txt)
* [`class_constructor`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/3.%20class_constructor.txt)
* [`class_extends`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/4.%20class_extends.txt)
 
* class

```4d
class constructor
class extends 4D.Entity
```

* local variables

```4d
var $a; $b : Text
```

* properties

```4d
property a; b : Text
```

* alias

```4d
alias name name
alias name name.name
```

* assignment

**Note**: because of precendence ambiguity, left operand can not be process variable

```4d
$variable.prop:=$value
$1.prop:=$value
```

* function call

**Note**: because of precendence ambiguity, function name can not be process variable


