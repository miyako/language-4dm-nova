(function_arguments
 (local_variable_name) @identifier.variable
 (class) @identifier.type.class
)

(function_result
 (local_variable_name) @identifier.variable
 (class) @identifier.type.class
)

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
 (local_variable_name)? @identifier.variable
 (interprocess_variable_name)? @identifier.variable
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

(classsic_command_expression
 (classic_command) @start.before @end.after
 (command_suffix)? @comment
 (expression_argument)?
) @identifier.function

(constant
 (classic_constant_expression
  (classic_constant) @start.before @end.after
  (constant_suffix)? @comment
))

(class_instance
 (class_name) @start.before @end.after
 (command_suffix)? @comment
 (expression_argument)?
) @identifier.type.class

(classic_compiler_block
 (classic_compiler)
 (local_variable_name)? @identifier.variable
 (interprocess_variable_name)? @identifier.variable
)

(classic_array_block
 (classic_array)
 (local_variable_name)? @identifier.variable
 (interprocess_variable_name)? @identifier.variable
)

(return_block
 (return) @keyword.condition
)

(return) @keyword.condition
(break) @keyword.condition
(continue) @keyword.condition

(comment) @comment
(comment_block) @comment

; conditions

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

; injection

(sql_injection_block
 (begin_sql) @keyword.condition
 (end_sql) @keyword.condition
)

; allow out-of-context symbolisation for these only

(numeric_parameter) @identifier.decorator
(local_variable) @identifier.variable
(constant)? @identifier.property

;symbols with suffix

(classic_compiler
 (command_suffix)? @comment
) @identifier.type.class

(classic_array
 (command_suffix)? @comment
) @identifier.type.class

[":=" ";" "?" ":" "(" ")" "{" "}" "[" "]" "+" "-" "*" "/" "&&" "||" "&" "|" "^" "~|" "<" ">" "=" "#" "<<" ">>" "+=" "-=" "*=" "/=" "??" "?+" "?-" "->"] @operator
