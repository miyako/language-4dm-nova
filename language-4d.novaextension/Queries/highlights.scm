;Types

(class) @identifier.type.class

; Keywords

(var) @identifier.function
(property) @identifier.function
(alias) @identifier.function
(declare) @identifier.function
(function) @identifier.function
(return) @identifier.function
(break) @identifier.function
(continue) @identifier.function
(this) @identifier.function
(form) @identifier.function

; Variables

(local_variable) @identifier.variable
(property_declaration_block) @identifier.variable
(var_declaration_block) @identifier.variable
(alias_block) @identifier.variable
(return_block) @identifier.variable
(assignment_block) @identifier.variable
(function_call) @identifier.variable
;(function_call) @identifier.variable

; Compound Keywords

(function_name) @identifier.function
(alias_name) @identifier.function
(class_extends) @identifier.function
(class_constructor) @identifier.function

; Constants

(constant) @identifier.constant
(interprocess_variable) @identifier.constant
(system_variable) @identifier.constant
(numeric_parameter) @identifier.constant

; Operators

["(" ";" ":" ")" ":="] @operator

;[
;	"+" "-" "*" "/"
;	"&" "|"
;	"%" "\"
;	"^"
;	"^|"
;	"<" ">"
;	">=" "<="
;	"=" "#"
;	"<<" ">>"
;	"??" "?+" "?-"
;	"+=" "-=" "/=" "*="
;	"||" "&&"
;] @operator

; Punctuation

;["(" ")" "[" "]" "{" "}" "[[" "]]"] @punctuation.bracket