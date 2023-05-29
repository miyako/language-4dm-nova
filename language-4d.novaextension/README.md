# language-4dm-nova
add syntax highlighting to .4dm files.

<img width="769" alt="" src="https://github.com/miyako/language-4dm-nova/assets/1725068/8bce5422-58de-4631-8f32-13ca54303f2a">

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
* [`if_block`]
* [`repeat_block`]
* [`while_block`]
* [`for_block`]
* [`use_block`]
* [`case_block`]
* [`for_each_block`]
* [`sql_injection_block`] - code switching to sql not working; probably because sql is [not tree-sitter](https://docs.nova.app/syntax-reference/syntaxes/#injections)
* [`comment`]

### classic commands (disabled)

hard-coding every single command does not work well with tree-sitter; the compiler simply enters a death sprial. 

on the other hand, a generic token pattern would partially match and invalidate tokens such as:

* var_declaration_block
* function_block
* classic_compiler_block
* property_declaration_block
* alias_block
* function_call

even if we make the `:C` token suffix mandatory, it will be hard to tokenise reference commands such as `Form` `This` `Super` `cs` `ds` `4D`).

