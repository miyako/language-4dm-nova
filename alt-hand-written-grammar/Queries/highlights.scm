; 4D syntax highlighting for Nova — captures are Nova THEME SELECTORS.
; Container keyword nodes (if, while, until, for_each...) include their
; conditions; inner captures override outer ones, so the keyword coloring
; shows only where no more specific capture applies.

; ---- Comments ---------------------------------------------------------------
(comment) @comment
(comment_block) @comment

; ---- Literals ---------------------------------------------------------------
(string) @string
(number) @value.number
(date) @value.number
(time) @value.number

; ---- Builtins ---------------------------------------------------------------
(classic_command) @identifier.core.function
(command_suffix) @identifier.core.function
(classic_constant) @identifier.constant
(constant_suffix) @identifier.constant
(system_variable) @identifier.core.global

; ---- Variables & parameters -------------------------------------------------
(local_variable_name) @identifier.variable
(interprocess_variable_name) @identifier.global
(numeric_parameter) @identifier.argument

; ---- Types ------------------------------------------------------------------
(class) @identifier.type

; ---- Pure keyword nodes -----------------------------------------------------
[
  (var) (property) (function) (return) (break) (continue)
  (else) (repeat) (case_of) (begin_sql) (end_sql)
  (end_if) (end_case) (end_for) (end_for_each) (end_while)
  (end_try) (end_use)
  (shared) (exposed) (local) (singleton)
  (declare) (alias) (use) (try) (catch)
] @keyword

; ---- Container keyword nodes (inner captures override) ----------------------
[
  (if) (while) (until) (for) (for_each)
  (class_extends) (class_constructor)
] @keyword

; ---- Operators & punctuation ------------------------------------------------
(operator) @operator
["(" ")" "[" "]" "{" "}"] @bracket
