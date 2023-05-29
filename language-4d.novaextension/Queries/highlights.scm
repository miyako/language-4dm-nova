;Types

(class) @identifier.type.class
(classic_compiler) @identifier.type.class
(class_function) @identifier.type.class

; Comment

(comment) @comment
(comment_block) @comment
(command_suffix) @comment

; Keywords

(var) @keyword.construct
(property) @keyword.construct
(alias) @keyword.construct
(declare) @keyword.construct

(return) @keyword.condition
(break) @keyword.condition
(continue) @keyword.condition

(if) @keyword.condition
(else) @keyword.condition
(end_if) @keyword.condition

(case_of) @keyword.condition
(end_case) @keyword.condition

(use) @keyword.condition
(end_use) @keyword.condition

(for) @keyword.condition
(end_for) @keyword.condition

(repeat) @keyword.condition
(until) @keyword.condition
(while) @keyword.condition
(end_while) @keyword.condition

(for_each) @keyword.condition
(end_for_each) @keyword.condition

(begin_sql) @keyword.condition
(end_sql) @keyword.condition

(this) @keyword.self
(form) @keyword.self
(super) @keyword.self

; Functions

(generic_function) @identifier.function
(function_call) @identifier.variable
(classic_command) @identifier.method
(classic_array) @identifier.function
(classic_command) @identifier.function

; Variables

(local_variable) @identifier.variable
(property_declaration_block) @identifier.variable
(var_declaration_block) @identifier.variable
(alias_block) @identifier.variable
(return_block) @identifier.variable
(assignment_block) @identifier.variable
(classic_compiler_block) @identifier.variable
(ternary_block) @identifier.variable
(if_block) @identifier.variable

; Compound Keywords

(function_name) @identifier.function
(alias_name) @identifier.function
(class_extends) @identifier.function
(class_constructor) @identifier.function
(class_extends) @identifier.function

; Constants

(constant) @identifier.property
(interprocess_variable) @identifier.constant
(system_variable) @identifier.constant
(numeric_parameter) @identifier.constant
(object_literal_block) @identifier.constant
(collection_literal_block) @identifier.constant

; Operators

[":=" ";" "?" ":" "(" ")" "{" "}" "[" "]"] @operator

