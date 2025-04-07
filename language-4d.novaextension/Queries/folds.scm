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
