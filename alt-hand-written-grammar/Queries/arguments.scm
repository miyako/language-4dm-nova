; The '.' anchor pairs each name with the type that immediately follows it
; among named siblings, so ($a : Text; $b : Integer) yields two arguments.
(function_arguments
  (local_variable_name) @name
  .
  (class)? @type
)
