# language-4dm-nova
add syntax highlighting to .4dm files.

<img width="658" alt="0.3.0" src="https://github.com/miyako/language-4dm-nova/assets/1725068/c38e9cb8-9268-4132-b562-d7f1b0c5bd7c">

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## updates

* `0.3.0`: added `try`


## the `fourd` tree-sitter parser

* `source` is a series of `_statement`

### `_statement`

* [`value`]
* [`sql_injection_block`]  - EN/FR
* [`function_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/1.%20function_block.txt)
* [`declare_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/2.%20declare_block.txt)
* [`alias_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/7.%20alias_block.txt)  
* [`comment`] 
* [`class_constructor`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/3.%20class_constructor.txt)
* [`class_extends`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/4.%20class_extends.txt)
* [`var_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/5.%20var_declaration_block.txt) 
* [`property_declaration_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/6.%20property_declaration_block.txt) 
* [`classic_array_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/11.%20classic_array_block.txt)
* [`classic_compiler_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/10.%20classic_compiler_block.txt)
* [`function_call`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/9.%20function_call.txt) 
* [`case_block`] - EN/FR
* [`use_block`] - EN/FR
* [`if_block`] - EN/FR 
* [`for_each_block`] - EN/FR
* [`repeat_block`] - EN/FR
* [`while_block`] - EN/FR
* [`for_block`] - EN/FR
* [`return_block`]
* [`return`]
* [`break`]
* [`continue`]
* [`try_block`] - folds
* [`try_line`]
* [`catch_block`] - folds
* [`comment_block`] - folds
 
### included in `value`

* [`ternary_block`]
* [`literal_block`]
* [`classsic_command_expression`]
* [`local_variable`]
* [`interprocess_variable`]
* [`numeric_parameter`]
* [`class_instance`]
* [`constant`]
* [`value`, `_binary_operator`, `value`] - circular

### included in `literal_block`

* [`object_literal_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/13.%20object_literal_block.txt)
* [`collection_literal_block`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/14.%20collection_literal_block.txt)

### included in `constant`

* [`time`] 
* [`date`] 
* [`number`] 
* [`string`] 
* [`classic_constant_expression`]  

### included in `number`

* [`_dec_literal`]
* [`_hex_literal`]
* [`_exp_literal`]
* [`_num_literal`]

## limitations

* process variables, project mothods are not recognised
* SQL code switching not working probably because sql is [not tree-sitter](https://docs.nova.app/syntax-reference/syntaxes/#injections)
