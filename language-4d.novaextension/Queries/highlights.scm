;Types

(class) @identifier.type.class

; Variables

(local_variable) @identifier.variable
(process_variable) @identifier.global
(interprocess_variable) @identifier

; Keywords

(function) @identifier.function
(declare) @identifier.function
(class_extends) @identifier.function
(class_constructor) @identifier.function
(var) @identifier.function
(property) @identifier.function

; Constants
(time) @identifier.constant
(date) @identifier.constant
(number) @identifier.constant
(string) @identifier.constant

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