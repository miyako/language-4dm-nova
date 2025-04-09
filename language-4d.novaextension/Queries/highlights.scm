(class_extends) @keyword.construct 
(declare_block)@keyword.construct




(function_arguments
 (local_variable_name)? @identifier.variable
 (class) @identifier.type.class
)

(function_result
 (local_variable_name)? @identifier.variable
 (class) @identifier.type.class
)



(class_constructor) @keyword.construct



(var_declaration_block
 ((var) @keyword.construct) 
 (local_variable_name)? @identifier.variable
 (interprocess_variable_name)? @identifier.variable
 ;optional to allow for process variable as generic node
 (class)? @identifier.type.class
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

(classic_command_expression
 (classic_command) @start.before @end.after
 (command_suffix)? @comment
 (expression_argument)?
) @identifier.function

(constant
 (classic_constant_expression
  (classic_constant) @start.before @end.after
  (constant_suffix)? @comment
))

(return_block
 (return) @keyword.condition
)

(return) @keyword.condition
(break) @keyword.condition
(continue) @keyword.condition

(comment) @comment
(comment_block) @comment

; conditions

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

(try) @keyword.condition
(catch)? @keyword.condition 
(end_try) @keyword.condition

(if) @keyword.condition
(else)? @keyword.condition
(end_if) @keyword.condition

(case_of) @keyword.condition
(case)? @keyword.condition
(else)? @keyword.condition
(end_case) @keyword.condition

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

[
"+=" "-=" "*=" "/=" "~|"
"&&" "&" "||" "|"
"<<" "<=" "<"
">>" ">=" ">"
":=" 
"??" "?+" "?-"
"+" "-" "*" "/"
"=" "#"
"^" "%"
"?" ":"] @operator
