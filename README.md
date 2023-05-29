# language-4dm-nova
add syntax highlighting to .4dm files.

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## the `fourd` tree-sitter parser

* `source` is a series of `_statement`.

### `_statement`

* [`function_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/1.%20function_block.txt)
* [`declare_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/2.%20declare_block.txt)
* [`class_constructor`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/3.%20class_constructor.txt)
* [`class_extends`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/4.%20class_extends.txt)
* [`var_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/5.%20var_declaration_block.txt) 
* [`property_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/6.%20property_declaration_block.txt) 
* [`alias_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/7.%20alias_block.txt)  
* [`assignment_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/8.%20assignment_block.txt) - process scope not supported because of conflict
* [`function_call`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/9.%20function_call.txt) - process scope not supported because of conflict
* [`classic_compiler_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/10.%20classic_compiler_block.txt)
* [`classic_array_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/11.%20classic_array_block.txt)
* [`return_block`]
* [`return`]
* [`break`]
* [`continue`]
* [`object_literal_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/13.%20object_literal_block.txt)
* [`collection_literal_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/14.%20collection_literal_block.txt)
* [`comment`]
