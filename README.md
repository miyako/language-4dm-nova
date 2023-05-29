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
* [`var_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/5.%20var_declaration_block.txt) 
* [`property_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/6.%20property_declaration_block.txt) 
* [`alias_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/7.%20alias_block.txt)  

* assignment

**Note**: because of precendence ambiguity, left operand can not be process variable

```4d
$variable.prop:=$value
$1.prop:=$value
```

* function call

**Note**: because of precendence ambiguity, function name can not be process variable


