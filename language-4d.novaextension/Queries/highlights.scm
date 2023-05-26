;Types

(class) @identifier.type.class

; Variables

(local_variable) @identifier.variable
(interprocess_variable) @identifier
(attribute) @identifier.variable

; Keywords

(var) @identifier.function
(property) @identifier.function
(alias) @identifier.function
(declare) @identifier.function
(function) @identifier.function

; Compound Keywords

(function_name) @identifier.function
(alias_name) @identifier.function
(class_extends) @identifier.function
(class_constructor) @identifier.function

; Constants

(constant) @identifier.constant

; Operators

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