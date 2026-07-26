; Symbolication. The function NAME is a hidden token in this grammar (no node
; covers it), so the header is captured whole and cut down with transforms.
; Headers are siblings of their bodies, so symbols use the heading pattern.

((function_block) @name @start.before @arguments.target
 (#set! role method)
 (#set! scope.level 1)
 (#set! scope.extend)
 (#set! arguments.query "arguments.scm")
 (#replace! @name "^.*?[Ff]unction[ \t]+" "")
 (#replace! @name "[ \t]*([(]|->|:).*$" "")
)

((class_constructor) @name @start.before @arguments.target
 (#set! role method)
 (#set! scope.level 1)
 (#set! scope.extend)
 (#set! arguments.query "arguments.scm")
 (#replace! @name "^.*$" "constructor")
)

((property_declaration_block) @name @subtree
 (#set! role property)
 (#replace! @name "^property[ \t]+" "")
 (#replace! @name "[ \t]*:.*$" "")
)

((class_extends (class) @name) @subtree
 (#set! role class)
)
