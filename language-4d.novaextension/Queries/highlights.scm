(function_arguments
 (local_variable) @identifier.variable
 (class) @identifier.type.class
)

(function_result
 (local_variable) @identifier.variable
 (class) @identifier.type.class
)

(class_function) @identifier.function

(function_block
 (function_name
  (function) @keyword.construct) @identifier.function
 (function_arguments)?
 (function_result)?
)

(declare_block
 (declare) @keyword.construct
 (function_arguments)?
 (function_result)?
)

(class_constructor) @keyword.construct

(class_extends) @keyword.construct

(var_declaration_block
 ((var) @keyword.construct) 
 (local_variable)? @identifier.variable
 ;optional to allow for process variable as generic node
 (class) @identifier.type.class
) 

(property_declaration_block
 (property) @keyword.construct
 ;property name is a generic node
 (class) @identifier.type.class
)

(alias_block
 (alias_name
  (alias) @keyword.construct) @identifier.function
)

(function_call
 (generic_function)? @identifier.function
 (class_function
  (command_suffix_optional)? @comment)? @identifier.type.class 
)

(classic_compiler_block
 (classic_compiler)
 (local_variable)? @identifier.variable
)

(classic_array_block
 (classic_array)
 (local_variable)? @identifier.variable
)

(return_block
 (return) @keyword.condition
)

(return) @keyword.condition
(break) @keyword.condition
(continue) @keyword.condition

(comment) @comment
(comment_block) @comment

(if_block
 (if) @keyword.condition
 (else_block 
  (else))? @keyword.condition
 (end_if) @keyword.condition
)

(case_block
 (case_of) @keyword.condition
 (else_block 
 (else))? @keyword.condition
 (end_case) @keyword.condition
)

(use_block
 (use) @keyword.condition
 (end_use) @keyword.condition
)

(for_block
 (for) @keyword.condition
 (end_for) @keyword.condition
)

(repeat_block
 (repeat) @keyword.condition
 (until) @keyword.condition
)

(while_block
 (while) @keyword.condition
 (end_while) @keyword.condition
)

(for_each_block
 (for_each) @keyword.condition
 (end_for_each) @keyword.condition
)

(sql_injection_block
 (begin_sql) @keyword.condition
 (end_sql) @keyword.condition
)

; allow out-of-context symbolisation

(numeric_parameter) @identifier.decorator
(local_variable) @identifier.variable

(numeric_parameter_expression
 (numeric_parameter) @identifier.decorator
) @identifier.decorator

(local_variable_expression
 (local_variable) @identifier.variable
) @identifier.variable

(constant)? @identifier.property

;symbols with suffix

(classic_compiler
 (command_suffix_optional)? @comment
) @identifier.type.class

(classic_array
 (command_suffix_optional)? @comment
) @identifier.type.class

(constant
 (classic_constant
  (constant_suffix)? @comment) @identifier.property
)

[":=" ";" "?" ":" "(" ")" "{" "}" "[" "]" "+" "-" "*" "/" "&&" "||" "&" "|" "^" "~|" "<" ">" "=" "#" "<<" ">>" "+=" "-=" "*=" "/=" "??" "?+" "?-" "->"] @operator
