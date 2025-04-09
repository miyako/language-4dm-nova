const PREC = {
  comment:    -100,
  operator:   -90,
  token:      -80,
  constant:   -50,
  keyword:    -40
}
  
module.exports = grammar({
  name: 'fourd',

  externals: $=> [
    $.classic_command,
    $.classic_constant
  ],
  rules: {
    source: $ => repeat($._statement),
    _statement: $ => choice(
      $.value,
      $.sql_injection_block,
      $.function_block,
      $.declare_block,
      $.alias_block,
      $.comment,
      $.class_constructor,
      $.class_extends,
      $.var_declaration_block,
      $.property_declaration_block,
      $.case_block,
      $.case,
      $.else_block_case,
      $.use_block,
      $.if_block,
      $.else_block_if,
      $.for_each_block,
      $.repeat_block,
      $.while_block,
      $.for_block,
      $.for_each_block,
      $.return_block,
      $.return,
      $.break, 
      $.continue,
      $.try_block,
      $.try_line,
      $.catch_block,
      $.comment_block
    ),
    
    time: $ => prec(PREC.constant,
      seq('?', /[0-9]{2}/, ':', /[0-9]{2}/, ':', /[0-9]{2}/, '?')
    ),
    date: $ => prec(PREC.constant,
      choice(
      seq('!', /[0-9]{2,4}/, '-', /[0-9]{2}/, '-', /[0-9]{2}/, '!'),
      seq('!', /[0-9]{2}/, '-', /[0-9]{2}/, '-', /[0-9]{2,4}/, '!'),
      '!00-00-00!'
      )
    ),
    _hex_literal: $ => /0[xX][0-9a-fA-F]+/,
    _dec_literal: $ => /[0-9]+/,
    _num_literal: $ => seq(/[0-9]+[.,][0-9]+/),
    _exp_literal: $ => seq(/[0-9]+[.,][0-9]+[eE]-?[0-9]+/),
    number : $ => prec(PREC.constant,
      choice($._dec_literal, $._hex_literal, $._exp_literal, $._num_literal)
    ),
    string: $ => prec(PREC.constant,
      seq('"',
      repeat(choice('\\r', '\\n', '\\"', '\\t', '\\\\', '\\"', /[^"]/)), 
      '"')
    ),
    constant: $ => choice(
      $.time,
      $.date,
      $.number,
      $.string, 
      $.classic_constant_expression
    ),
    expression_argument: $ => choice(
      '()',
      seq('(', $.value, repeat(seq(';', $.value)), ')')
    ),
    command_suffix: $ => /(:C[0-9]+)/,
    classic_command_expression: $ => prec.right(seq(
      $.classic_command, 
      optional($.command_suffix), 
      repeat($._node))),
    constant_suffix: $ => /(:K[0-9]+:[0-9]+)/,
    classic_constant_expression: $ => prec.right(seq(
      $.classic_constant, 
      optional($.constant_suffix)
      )
    ), 
    _name: $ => /([\p{Letter}_]+)([\p{Letter}_0-9]*)/, 
    _node: $ => choice(
      seq('.', $._name),
      seq('[', $.value, ']'),
      seq('{', $.value, '}'),
      $.expression_argument
    ),  
    local_variable_name: $ => seq('$', $._name),  
    local_variable: $ => seq(
      $.local_variable_name, 
      repeat($._node)
    ),
    interprocess_variable_name: $ => seq('<>', $._name),
    interprocess_variable: $ => seq(
      $.interprocess_variable_name, 
      repeat($._node)
    ),
    
    numeric_parameter_name: $ => prec(PREC.token, seq('$', /[0-9]+/)),  
    numeric_parameter: $ => prec.right(seq(
      $.numeric_parameter_name, 
      repeat($._node)
    )),
    
    ternary_block: $ => prec.left(seq(
      $.value,
      '?',
      $.value,
      ':',
      $.value
    )),  
    _object_literal_block: $ => prec.left(
      choice('{}',
      seq('{', $._name, ':', $.value, '}')
      ) 
    ),
    _collection_literal_block: $ => prec.left(
      choice('[]', 
      seq('[', $.value, repeat(seq(';', $.value)), ']')
      )
    ),
    literal_block: $ => choice($._object_literal_block, $._collection_literal_block),
    

    value: $ => prec.right(choice(
      $.ternary_block,
      $.literal_block,
      $.classic_command_expression, 
      $.local_variable, 
      $.interprocess_variable,
      $.numeric_parameter,
      $.system_variable,
      $.constant,
      seq($.value, $.operator, $.value)
    )),
    
    


    
    
    
    _basic_type_text: $ => /(t|T)(e|E)(x|X)(t|T)/,
    _basic_type_date: $ => /(d|D)(a|A)(t|T)(e|E)/,
    _basic_type_time: $ => /(t|T)(i|I)(m|M)(e|E)/,
    _basic_type_boolean: $ => /(b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/,
    _basic_type_integer: $ => /(i|I)(n|N)(t|T)(e|E)(g|G)(e|E)(r|R)/,
    _basic_type_real: $ => /(r|R)(e|E)(a|A)(l|L)/,
    _basic_type_pointer: $ => /(p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/,
    _basic_type_picture: $ => /(p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/,
    _basic_type_blob: $ => /(b|B)(l|L)(o|O)(b|B)/,
    _basic_type_collection: $ => /(c|C)(o|O)(l|L)(l|L)(e|E)(c|C)(t|T)(i|I)(o|O)(n|N)/,
    _basic_type_variant: $ => /(v|V)(a|A)(r|R)(i|I)(a|A)(n|N)(t|T)/,
    _basic_type_object: $ => /(o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/,
    _basic_type: $ => choice(
      $._basic_type_text,
      $._basic_type_date,
      $._basic_type_time,
      $._basic_type_boolean,
      $._basic_type_integer,
      $._basic_type_real,
      $._basic_type_pointer,
      $._basic_type_picture,
      $._basic_type_blob,
      $._basic_type_collection,
      $._basic_type_variant,
      $._basic_type_object
    ),    
    class: $ => choice($._basic_type, seq(choice($.classic_command_expression, $._name), repeat(seq('.', $._name)))),  
    _function_argument: $ => seq(
      choice($.local_variable_name, '...'), 
      repeat(seq(';', choice($.local_variable_name, '...'))),
      ':', 
      $.class
    ),
    function_arguments: $ => seq(
      '(', 
      optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), 
      ')'
    ),
    function_result: $ => choice(
      seq('->', $.local_variable_name, ':', $.class),
      seq(':', $.class)
    ),
    function_block: $ => seq(
      optional(repeat(choice($.shared, $.local, $.exposed))),
      $.function,
      repeat($._name),
      $.function_arguments,
      optional($.function_result)
    ),
    _declare: $ => /#(d|D)(e|E)(c|C)(l|L)(a|A)(r|R)(e|E)/,
    declare: $ => prec(PREC.keyword, $._declare),
    declare_block: $ => seq(
      $.declare,
      $.function_arguments,
      optional($.function_result)
    ),
    _try: $ => /(t|T)(r|R)(y|Y)/,  
    try: $ => prec(PREC.keyword, $._try), 
    try_line: $ => seq(
      $.try,
      '(', $._statement, 
      ')'
    ),
    _catch: $ => /(c|C)(a|A)(t|T)(c|C)(h|H)/, 
    catch: $ => prec(PREC.keyword, $._catch), 
    _end_try: $ => /(e|E)(n|N)(d|D) (t|T)(r|R)(y|Y)/,  
    end_try: $ => prec(PREC.keyword, $._end_try),  
    catch_block: $ => seq(
      $.catch, 
      repeat($._statement), 
      $.end_try
    ),
    try_block: $ => seq(
        choice(
          seq($.try, repeat($._statement), $.end_try),
          seq($.try, repeat($._statement), $.catch_block)
        )
    ),
    _try_statement: $ => choice(
      $.try_line,
      $.try_block
    ),
    /* alias */
    _alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)/,    
    alias: $ => prec(PREC.keyword, $._alias),
    alias_name: $ => seq(
      $._name
    ), 
    alias_path: $ => seq(
      $._name, 
      optional(repeat(seq('.', $._name)))
    ), 
    alias_block: $ => seq(
      $.alias, 
      $.alias_name,
      $.alias_path
    ),
    _class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) (e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S)/,
    class_extends: $ => seq(
      $._class_extends,
      $.class
    ),
    /* function */
    _shared: $ => /(s|S)(h|H)(a|A)(r|R)(e|E)(d|D)/,    
    shared: $ => prec(PREC.keyword, $._shared),
    _singleton: $ => /(s|S)(i|I)(n|N)(g|G)(l|L)(e|E)(t|T)(o|O)(n|N)/,    
    singleton: $ => prec(PREC.keyword, $._singleton),    
    _local: $ => /(l|L)(o|O)(c|C)(a|A)(l|L)/,    
    local: $ => prec(PREC.keyword, $._local),  
    _exposed: $ => /(e|E)(x|X)(p|P)(o|O)(s|S)(e|E)(d|D)/,    
    exposed: $ => prec(PREC.keyword, $._exposed),  
    _function: $ => /(f|F)(u|U)(n|N)(c|C)(t|T)(i|I)(o|O)(n|N)/,   
    function: $ => prec(PREC.keyword, $._function),
      
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/,
    class_constructor: $ => seq(
      optional(repeat(choice($.singleton, $.shared))),
      $._class_constructor
    ),
    
    /* 
    property, var 
    declare and assign default value
    */
    
    _var: $ => /(v|V)(a|A)(r|R)/,
    var: $ => prec(PREC.keyword, $._var),
    var_declaration_block: $ => seq(
      $.var, 
      choice($._name, $.local_variable_name), 
      repeat(seq(';', choice($._name, $.local_variable_name))), 
      optional(seq(':', $.class)), 
      optional(seq(':=', $.value))
    ),
    _property: $ => /(p|P)(r|R)(o|O)(p|P)(e|E)(r|R)(t|T)(y|Y)/, 
    property: $ => prec(PREC.keyword, $._property),
    property_declaration_block: $ => seq(
      $.property,
      $._name, 
      repeat(seq(';', $._name)), 
      optional(seq(':', $.class)), 
      optional(seq(':=', $.value))
    ),
    _for_each_e: $ => /(f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _for_each_f: $ => /(p|P)(o|O)(u|U)(r|R) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    for_each   : $ => prec(PREC.keyword, choice($._for_each_e, $._for_each_f)),
    _end_for_each_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _end_for_each_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    end_for_each   : $ => prec(PREC.keyword, choice($._end_for_each_e, $._end_for_each_f)),
    for_each_block: $ => seq(
      $.for_each,
      '(', $.value, ';', $.value, 
      optional(choice(seq(';', $.value), seq(';', $.value, ';', $.value))),
      ')',
      optional(seq(choice($.while, $.until), '(', $.value, ')')),
      repeat( $._statement),
      $.end_for_each
    ),
    
    /*
    while, repeat
    */
    _while_e: $ => /(w|W)(h|H)(i|I)(l|L)(e|E)/,
    _while_f: $ => /(t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    _while   : $ => prec(PREC.keyword, choice($._while_e, $._while_f)),
    _end_while_e: $ => /(e|E)(n|N)(d|D) (w|W)(h|H)(i|I)(l|L)(e|E)/,
    _end_while_f: $ => /(f|F)(i|I)(n|N) (t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    end_while   : $ => prec(PREC.keyword, choice($._end_while_e, $._end_while_f)),
    while: $ => seq(
      $._while, 
      $.conditions
    ),
    while_block: $ => seq(
      $.while,
      repeat($._statement),
      $.end_while
    ),
    _repeat_e: $ => /(r|R)(e|E)(p|P)(e|E)(a|A)(t|T)/,
    _repeat_f: $ => /(r|R)(e|E)(p|P)(e|E)(t|T)(e|E)(r|R)/,
    repeat   : $ => prec(PREC.keyword, choice($._repeat_e, $._repeat_f)),
    _until_e: $ => /(u|U)(n|N)(t|T)(i|I)(l|L)/,
    _until_f: $ => /(j|J)(u|U)(s|S)(q|Q)(u|U)(e|E)/,
    _until   : $ => prec(PREC.keyword, choice($._until_e, $._until_f)),
    until: $ => seq(
      $._until, 
      $.conditions
    ),
    repeat_block: $ => seq(
      $.repeat,
      repeat($._statement),
      $.until
    ),
    /*
    for
    */
    _for_e : $ => /(f|F)(o|O)(r|R)/,
    _for_f : $ => /(b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    _for   : $ => prec(PREC.keyword, choice($._for_e, $._for_f)),
    for    : $ => seq(
      $._for, 
      '(', 
      $.value, 
      ';', 
      $.value, 
      ';', 
      $.value, 
      optional(seq(';', $.value)), 
      ')'
    ),
    _end_for_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R)/,
    _end_for_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    end_for  : $ => prec(PREC.keyword, choice($._end_for_e, $._end_for_f)),
    for_block: $ => seq(
      $.for,
      repeat($._statement),
      $.end_for
    ),
    /*
    if
    */
    _if_e: $ => /(i|I)(f|F)/,
    _if_f: $ => /(s|S)(i|I)/,
    _if   : $ => prec(PREC.keyword, choice($._if_e, $._if_f)),
    _else_e: $ => /(e|E)(l|L)(s|S)(e|E)/,
    _else_f: $ => /(s|S)(i|I)(n|N)(o|O)(n|N)/,
    else   : $ => prec(PREC.keyword, choice($._else_e, $._else_f)),
    _end_if_e: $ => /(e|E)(n|N)(d|D) (i|I)(f|F)/,
    _end_if_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (s|S)(i|I)/,
    end_if   : $ => prec(PREC.keyword, choice($._end_if_e, $._end_if_f)),
    _condition: $ => seq('(', $.value, ')'),
    _conditions : $ => seq(
      $._condition,  
      optional(repeat(seq($.operator, $._condition)))
    ),
    conditions : $ => choice(seq('(', $._conditions, ')'), $._conditions),
    if: $ => seq(
      $._if, 
      $.conditions
    ),
    else_block_if: $ => seq(
      $.else, 
      repeat($._statement), 
      $.end_if
    ),
    if_block: $ =>  seq(
        choice(
          seq($.if, repeat($._statement), $.end_if),
          seq($.if, repeat($._statement), $.else_block_if)
        )
    ),
    /*
    case
    */
    _case_of_e: $ => /(c|C)(a|A)(s|S)(e|E) (o|O)(f|F)/,
    _case_of_f: $ => /(a|A)(u|U) (c|C)(a|A)(s|S) (o|O)(u|U)/,
    case_of   : $ => prec(PREC.keyword, choice($._case_of_e, $._case_of_f)),    
    _end_case_e: $ => /(e|E)(n|N)(d|D) (c|C)(a|A)(s|S)(e|E)/,
    _end_case_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(a|A)(s|S)/,
    end_case   : $ => prec(PREC.keyword, choice($._end_case_e, $._end_case_f)),
    else_block_case: $ => seq(
      $.else, 
      repeat($._statement), 
      $.end_case
    ),
    case: $ => seq(
      ':', 
      $.conditions
    ),
    case_block: $ => seq(
      choice(
        seq($.case_of, 
          repeat(seq($.case, repeat($._statement))), 
          $.end_case),
        seq($.case_of, 
          repeat(seq($.case, repeat($._statement))), 
          $.else_block_case)
        )
    ),
    _begin_sql_e: $ => /(b|B)(e|E)(g|G)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
    _begin_sql_f: $ => /(d|D)(e|E)(b|B)(u|U)(t|T) (s|S)(q|Q)(l|L)/,
    begin_sql   : $ => prec(PREC.keyword, choice($._begin_sql_e, $._begin_sql_f)),
    _end_sql_e: $ => /(e|E)(n|N)(d|D) (s|S)(q|Q)(l|L)/,
    _end_sql_f: $ => /(f|F)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
    end_sql   : $ => prec(PREC.keyword, choice($._end_sql_e, $._end_sql_f)),
    sql_injection_block: $ => seq(
      $.begin_sql,
      repeat(/.+?/),
      $.end_sql
    ),      
    _use_e: $ => /(u|U)(s|S)(e|E)/,
    _use_f: $ => /(u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    use   : $ => prec(PREC.keyword, choice($._use_e, $._use_f)),
    _use: $ => seq(
        seq($.use, '(', $.value, ')')
    ),
    _end_use_e: $ => /(e|E)(n|N)(d|D) (u|U)(s|S)(e|E)/,
    _end_use_f: $ => /(f|F)(i|I)(n|N) (u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    end_use   : $ => prec(PREC.keyword, choice($._end_use_e, $._end_use_f)),
    use_block: $ => seq(
      $._use,
      repeat($._statement),
      $.end_use
    ),
    
    _ok: $ => /(o|O)(k|K)/,
    _document: $ => /(d|D)(o|O)(c|C)(u|U)(m|M)(e|E)(n|N)(t|T)/,
    _error_formula: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (f|F)(o|O)(r|R)(m|M)(u|U)(l|L)(a|A)/,
    _error_line: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (l|L)(i|I)(n|N)(e|E)/,
    _error_method: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (m|M)(e|E)(t|T)(h|H)(o|O)(d|D)/,
    _error: $ => /(e|E)(r|R)(r|R)(o|O)(r|R)/,
    _flddelimit: $ => /(f|F)(l|L)(d|D)(d|D)(e|E)(l|L)(i|I)(m|M)(i|I)(t|T)/,
    _recdelimit: $ => /(r|R)(e|E)(c|C)(d|D)(e|E)(l|L)(i|I)(m|M)(i|I)(t|T)/,
    _mousedown: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(d|D)(o|O)(w|W)(n|N)/,
    _mousex: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(x|X)/,
    _mousey: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(y|Y)/,
    _keycode: $ => /(k|K)(e|E)(y|Y)(c|C)(o|O)(d|D)(e|E)/,
    _modifiers: $ => /(m|M)(o|O)(d|D)(i|I)(f|F)(i|I)(e|E)(r|R)(s|S)/,
    _mouseproc: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(p|P)(r|R)(o|O)(c|C)/,
    system_variable: $ => prec(PREC.keyword, choice(
      $._ok,
      $._document,
      $._error_formula,
      $._error_line,
      $._error_method,
      $._error,
      $._flddelimit,
      $._recdelimit,
      $._mousedown,
      $._mousex,
      $._mousey,
      $._keycode,
      $._modifiers,
      $._mouseproc
    )),
    _return: $ => /(r|R)(e|E)(t|T)(u|U)(r|R)(n|N)/,
    _break: $ => /(b|B)(r|R)(e|E)(a|A)(k|K)/,
    _continue: $ => /(c|C)(o|O)(n|N)(t|T)(i|I)(n|N)(u|U)(e|E)/,
    return: $ => prec(PREC.keyword, $._return),
    break: $ => prec(PREC.keyword, $._break),
    continue: $ => prec(PREC.keyword, $._continue),
    return_block: $ => seq(
      $.return, 
      $.value
    ),
    /*
    operator
    */
    operator: $ => prec(PREC.operator, 
      choice(
      '+=', '-=', '*=', '/=', '~|',
      '&&', '||', '&', '|', 
      '<<', '>>', 
      '<=', '>=', 
      '<', '>', 
      ':=', 
      '??', '?+', '?-',
      '+', '-', '*', '/', '=', '#', '^', '%'
      )
    ),      
    /* 
    comment
    */
    comment_block: $ => prec(PREC.comment,seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),
    comment: $ => prec(PREC.comment,seq('//', /.*/))
  },
  
  conflicts: $ => [
    [$._statement, $.catch_block],
    [$._statement, $.try_block],
    [$._statement],
    [$.class_constructor, $.function_block],
    
    [$.declare_block, $.function_block],
    [$.function_block],
    [$.declare_block],

    [$.ternary_block, $.property_declaration_block],    
    [$.property_declaration_block],
    
    [$.var_declaration_block],
    [$.var_declaration_block, $.ternary_block],
    [$.return_block, $._statement],
    [$.return_block, $.ternary_block],
    [$.return_block],
    [$.local_variable],
    [$.interprocess_variable],
    [$.literal_block],
    
    [$._statement, $.if_block],
    [$._statement, $.case_block],
    [$.case_block],    
        
    [$.ternary_block, $._statement],
    [$.ternary_block],
    [$.for_each_block, $._while],
    [$._while]

  ]

  
});
