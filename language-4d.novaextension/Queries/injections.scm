; SQL content is not a node in this grammar; the region between the two
; keyword nodes is the injected body.
((sql_injection_block
   (begin_sql) @injection.content.start
   (end_sql) @injection.content.end)
 (#set! injection.language sql)
)
