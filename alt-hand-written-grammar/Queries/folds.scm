; Structure folding. Bodies live INSIDE the *_block nodes for control flow,
; but function_block / class_constructor are header-only siblings — those use
; the heading pattern (scope.level + scope.extend), truncated by the next
; header at the same level.

((if_block (if) @start _ @end.after .)
 (#set! role block)
 (#set! scope.byLine)
)

((else_block_if (else) @start (end_if) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((case_block (case_of) @start _ @end.after .)
 (#set! role block)
 (#set! scope.byLine)
)

((else_block_case (else) @start (end_case) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((while_block (while) @start (end_while) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((for_block (for) @start (end_for) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((for_each_block (for_each) @start (end_for_each) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((repeat_block (repeat) @start (until) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((try_block (try) @start _ @end.after .)
 (#set! role block)
 (#set! scope.byLine)
)

((use_block (use) @start (end_use) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((sql_injection_block (begin_sql) @start (end_sql) @end)
 (#set! role block)
 (#set! scope.byLine)
)

((function_block) @start
 (#set! role function)
 (#set! scope.level 1)
 (#set! scope.extend)
 (#set! scope.byLine)
)

((class_constructor) @start
 (#set! role function)
 (#set! scope.level 1)
 (#set! scope.extend)
 (#set! scope.byLine)
)
