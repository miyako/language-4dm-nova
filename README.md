# language-4dm-nova
add syntax highlighting to .4dm files.

<img src="https://github.com/user-attachments/assets/9d4a111c-c3f0-4b8d-a4c6-50f02a27957c" width=400 height=auto />

## to compile

```sh
export PATH="$PATH:./node_modules/.bin/"
tree-sitter generate
./compile_parser.sh . /Applications/Nova.app
```

## updates

* `0.9.0`: added variadic parameter. added local, exposed, shared, singleton. fix classic commands. added declare and init in one line.
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
* [`function_call`](https://github.com/miyako/language-4dm-nova/blob/main/corpus/9.%20function_call.txt) 
* [`case_block`] - EN/FR  - folds (not case level)
* [`use_block`] - EN/FR - folds
* [`if_block`] - EN/FR - folds
* [`for_each_block`] - EN/FR
* [`repeat_block`] - EN/FR - folds
* [`while_block`] - EN/FR - folds
* [`for_block`] - EN/FR - folds
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
* commands/functions that do not take arguments should nevertheless have parentheses
* SQL code switching not working probably because sql is [not tree-sitter](https://docs.nova.app/syntax-reference/syntaxes/#injections)
