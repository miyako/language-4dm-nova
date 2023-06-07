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
    $.classic_command
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
      $.classic_array_block,
      $.classic_compiler_block,
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
      $.string
    ),
    expression_argument: $ => choice(
      '()',
      seq('(', $.value, repeat(seq(';', $.value)), ')')
    ),
    command_suffix: $ => /(:C[0-9]+)/,
    classsic_command_expression: $ => seq(
      $.classic_command, 
      optional($.command_suffix), 
      optional($.expression_argument)),
      
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
    
    class_name: $ => $._class_store,
    class_instance: $ => seq(
      $.class_name, 
      repeat($._node)
    ),
    
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
      $.classsic_command_expression, 
      $.local_variable, 
      $.interprocess_variable,
      $.numeric_parameter,
      $.class_instance,
      $.constant,
      seq($.value, $._binary_operator, $.value)
    )),
    
    
    //appears in function block
    _local: $ => /(l|L)(o|O)(c|C)(a|A)(l|L)/,
    _exposed: $ => /(e|E)(x|X)(p|P)(o|O)(s|S)(e|E)(d|D)/,
    _scope: $ => (choice($._local, $._exposed, seq($._local, $._exposed), seq($._exposed, $._local))),
    _function: $ => 'function', 
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.keyword, seq(choice($._class_store_4d, $._class_store_ds, $._class_store_cs), optional($.command_suffix))),

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
    class: $ => choice($._basic_type, seq($._class_store, repeat(seq('.', $._name)))),  
    function: $ => prec(PREC.keyword, $._function),
    function_name: $ => seq(
      optional($._scope), $.function, repeat($._name)
    ),    
    _function_argument: $ => seq($.local_variable, repeat(seq(';', $.local_variable)), ':', $.class),
    function_arguments: $ => seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')'),
    function_result: $ => seq('->', $._function_argument),
    function_block: $ => seq(
      $.function_name,
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
    _alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)/,    
    alias: $ => prec(PREC.keyword, $._alias),
    alias_name: $ => seq(
      $.alias, $._name
    ), 
    alias_block: $ => seq(
      $.alias_name,
      seq($._name, repeat(seq('.', $._name)))
    ),
    _class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) (e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S)/,
    class_extends: $ => seq(
      $._class_extends,
      seq(choice($._class_store_4d, $._name), repeat(seq('.', $._name)))
    ),
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/,
    class_constructor: $ => seq(
      $._class_constructor
    ),
    _var: $ => /(v|V)(a|A)(r|R)/,
    var: $ => prec(PREC.keyword, $._var),
    var_declaration_block: $ => seq(
      $.var, 
      choice($._name, $.local_variable), 
      repeat(seq(';', choice($._name, $.local_variable))), 
      ':', 
      $.class
    ),
    _property: $ => /(p|P)(r|R)(o|O)(p|P)(e|E)(r|R)(t|T)(y|Y)/, 
    property: $ => prec(PREC.keyword, $._property),
    property_declaration_block: $ => seq(
      $.property,
      $._name, 
      repeat(seq(';', $._name)), 
      ':', 
      $.class
    ),
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/,
    class_constructor: $ => seq(
      $._class_constructor
    ),
    _classic_compiler_blob: $ => seq(/(c|C)_(b|B)(l|L)(o|O)(b|B)/, optional($.command_suffix)),
    _classic_compiler_boolean: $ => seq(/(c|C)_(b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/, optional($.command_suffix)),
    _classic_compiler_collection: $ => seq(/(c|C)_(c|C)(o|O)(l|L)(l|L)(e|E)(c|C)(t|T)(i|I)(o|O)(n|N)/, optional($.command_suffix)),
    _classic_compiler_date: $ => seq(/(c|C)_(d|D)(a|A)(t|T)(e|E)/, optional($.command_suffix)),
    _classic_compiler_longint: $ => seq(/(c|C)_(l|L)(o|O)(n|N)(g|G)(i|I)(n|N)(t|T)/, optional($.command_suffix)),
    _classic_compiler_object: $ => seq(/(c|C)_(o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/, optional($.command_suffix)),
    _classic_compiler_picture: $ => seq(/(c|C)_(p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/, optional($.command_suffix)),
    _classic_compiler_pointer: $ => seq(/(c|C)_(p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/, optional($.command_suffix)),
    _classic_compiler_real: $ => seq(/(c|C)_(r|R)(e|E)(a|A)(l|L)/, optional($.command_suffix)),
    _classic_compiler_text: $ => seq(/(c|C)_(t|T)(e|E)(x|X)(t|T)/, optional($.command_suffix)),
    _classic_compiler_time: $ => seq(/(c|C)_(t|T)(i|I)(m|M)(e|E)/, optional($.command_suffix)),
    _classic_compiler_variant: $ => seq(/(c|C)_(v|V)(a|A)(r|R)(i|I)(a|A)(n|N)(t|T)/, optional($.command_suffix)),
    
    classic_compiler: $ => prec(PREC.keyword, choice(
      $._classic_compiler_blob,
      $._classic_compiler_boolean,
      $._classic_compiler_collection,
      $._classic_compiler_date,
      $._classic_compiler_longint,
      $._classic_compiler_object,
      $._classic_compiler_picture,
      $._classic_compiler_pointer,
      $._classic_compiler_real,
      $._classic_compiler_text,
      $._classic_compiler_time,
      $._classic_compiler_variant
      )
    ),
    classic_compiler_block: $ => seq(
      $.classic_compiler, 
      seq(
        '(', 
        choice($.local_variable, $._name), 
        repeat(seq(';', choice($.local_variable, $._name))), 
        ')')
    ),
    _classic_array_blob: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (b|B)(l|L)(o|O)(b|B)/, optional($.command_suffix)),
        _classic_array_boolean: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/, optional($.command_suffix)),
        _classic_array_date: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (d|D)(a|A)(t|T)(e|E)/, optional($.command_suffix)),
        _classic_array_integer: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (i|I)(n|N)(t|T)(e|E)(g|G)(e|E)(r|R)/, optional($.command_suffix)),
        _classic_array_longint: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (l|L)(o|O)(n|N)(g|G)(i|I)(n|N)(t|T)/, optional($.command_suffix)),
        _classic_array_object: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/, optional($.command_suffix)),
        _classic_array_picture: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/, optional($.command_suffix)),
        _classic_array_pointer: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/, optional($.command_suffix)),
        _classic_array_real: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (r|R)(e|E)(a|A)(l|L)/, optional($.command_suffix)),
        _classic_array_text: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (t|T)(e|E)(x|X)(t|T)/, optional($.command_suffix)),
        _classic_array_time: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y)( | )(t|T)(i|I)(m|M)(e|E)/, optional($.command_suffix)),
    
    classic_array: $ => prec(PREC.keyword, choice(
          $._classic_array_blob,
          $._classic_array_boolean,
          $._classic_array_date,
          $._classic_array_integer,
          $._classic_array_longint,
          $._classic_array_object,
          $._classic_array_picture,
          $._classic_array_pointer,
          $._classic_array_real,
          $._classic_array_text,
          $._classic_array_time
          )
        ),
    classic_array_block: $ => seq(
      $.classic_array, 
      seq(
        '(', 
        choice($.local_variable, $._name), 
        seq(';', choice($.local_variable, $._name, $.value)), 
        optional(seq(';', choice($.local_variable, $._name, $.value))),
        ')')
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

    /*
    operator
    */
    
    _binary_operator: $ => prec(PREC.operator, 
      choice('+', '-', '*', '/', 
      '&&', '||', '&', '|', 
      '^', '~|', '<', 
      '>', '=', '#', '<<', '>>', 
      '??', '?+', '?-', 
      '+=', '-=', '*=', '/=',
      ':=')
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
    [$.local_variable],
    [$.interprocess_variable],
    [$.class_instance],
    [$.value, $.numeric_parameter],
  //  [$.value], 
    [$.literal_block],
    [$.ternary_block, $._statement],
    [$.ternary_block]

  ]

  
});
