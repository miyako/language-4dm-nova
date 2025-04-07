((if_block
  (if) @start
  (end_if) @end)
 (#set! role block)
)

((case_block
  (case_of) @start
  (end_case) @end)
 (#set! role block)
)




((for_each_block
  (for_each) @start
  (end_for_each) @end)
 (#set! role block)
)

((while_block
  (while) @start
  (end_while) @end)
 (#set! role block)
)

((repeat_block
  (repeat) @start
  (until) @end)
 (#set! role block)
)

((for_block
  (for) @start
  (end_for) @end)
 (#set! role block)
)

((try_block
  (try) @start
  (end_try) @end)
 (#set! role block)
)

((try_block
  (try) @start
  (catch_block
   (catch) @end))
 (#set! role block)
)

((catch_block
  (catch) @start
  (end_try) @end)
 (#set! role block)
)
