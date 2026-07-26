; Structure folding for 4D. Closing keywords (End if, End case...) are regex
; tokens, captured positionally as the last child; @start on the header's
; last structural node plus scope.byLine keeps the header line visible.

((if_statement condition: (_) @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((while_statement condition: (_) @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((repeat_statement "Repeat" @start "Until" @end)
 (#set! role block) (#set! scope.byLine))

((for_statement ")" @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((for_each_statement ")" @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((case_statement . _ @start _ @end .)
 (#set! role block) (#set! scope.byLine))

; Each case branch folds from its condition to after its last statement.
((case_branch condition: (_) @start _ @end.after .)
 (#set! role block) (#set! scope.byLine))

((try_statement "Try" @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((use_statement object: (_) @start _ @end .)
 (#set! role block) (#set! scope.byLine))

((sql_block . _ @start _ @end .)
 (#set! role block) (#set! scope.byLine))

; Function bodies: fold after the parameter list; the return clause stays on
; the header line, so byLine leaves the whole signature visible.
((function_declaration (parameter_list) @start _ @end.after .)
 (#set! role function) (#set! scope.byLine))
