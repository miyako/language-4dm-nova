; 4D syntax highlighting for Nova — captures are Nova THEME SELECTORS.

; ---- Comments & header ------------------------------------------------------
(line_comment) @comment
(block_comment) @comment
(attributes_header) @processing

; ---- Literals ---------------------------------------------------------------
(string) @string
(number) @value.number
(time_literal) @value.number
(date_literal) @value.number

; ---- Builtins (tokenized :Cnnn / :Knnn:n and scanner-recognized names) ------
(command) @identifier.core.function
(command_name) @identifier.core.function
(constant) @identifier.constant
(constant_name) @identifier.constant
(system_variable) @identifier.core.global

; Untokenized multi-word plugin/component commands: VP SET CELL STYLE(...)
(multiword_name) @identifier.function

; ---- Variables --------------------------------------------------------------
(local_variable) @identifier.variable
(interprocess_variable) @identifier.global
(parameter_indirection) @identifier.argument

; ---- Database references ----------------------------------------------------
(field_reference) @identifier.property
(table_reference) @identifier.type

; ---- Members & calls --------------------------------------------------------
(postfix_expression member: (identifier) @identifier.property)
(postfix_expression member: (local_variable) @identifier.property)

; ---- Declarations -----------------------------------------------------------
(modifier) @keyword
(function_declaration accessor: _ @keyword)
(function_declaration name: (identifier) @definition.method)
(var_declaration name: (identifier) @identifier.variable)
(property_declaration name: (identifier) @definition.property)
(parameter name: (local_variable) @identifier.argument)
(var_declaration type: (identifier) @identifier.type)
(property_declaration type: (identifier) @identifier.type)
(parameter type: (identifier) @identifier.type)
(function_declaration return_type: (identifier) @identifier.type)

; ---- Keywords that are plain string tokens ----------------------------------
[
  "If" "Else" "While" "Repeat" "Until" "For" "Try" "Catch"
  "var" "property" "Function" "function"
  "return" "break" "continue" "throw" "defer"
  "#DECLARE"
] @keyword

; ---- Keywords that are regex tokens (End if, Case of, ...) ------------------
; These are anonymous regex tokens, unaddressable by name; anchored wildcards
; capture them positionally. The hidden _terminator never appears in the tree,
; so the closing keyword is always the last child.
(if_statement _ @keyword .)
(case_statement . _ @keyword)
(case_statement _ @keyword .)
(while_statement _ @keyword .)
(for_statement _ @keyword .)
(for_each_statement . _ @keyword)
(for_each_statement _ @keyword .)
(try_statement _ @keyword .)
(sql_block . _ @keyword)
(sql_block _ @keyword .)
(extends_clause . _ @keyword)
((function_declaration _ @keyword) (#match? @keyword "^[Cc]lass[ \t]+constructor$"))

; ---- Operators & punctuation ------------------------------------------------
[
  ":=" "+=" "-=" "*=" "/="
  "=" "#" "<" ">" "<=" ">="
  "+" "-" "*" "/" "%" "\\" "^"
  "&" "|" "&&" "||" "^|" "<<" ">>"
  "??" "?+" "?-" "->" "?" "..."
] @operator

["(" ")" "[" "]" "{" "}"] @bracket
(char_ref_open) @bracket
(char_ref_close) @bracket
