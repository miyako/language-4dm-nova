const PREC = {
  
  /*
  
  comment > operator > statement > compound > token > classic > name > constant > keyword
  
  */
  
  comment:    -100,
  operator:   -12,
  expression: -11,
  statement:  -10,
  compound:   -9,
  token:      -8,
  classic:    -7,
  name:       -6,
  constant:   -5,
  keyword:    -4
}
  
module.exports = grammar({
  name: 'fourd',

  rules: {
    source: $ => repeat($._statement),
    _statement: $ => choice(
      $.function_block,
      $.declare_block,
      $.class_constructor,
      $.class_extends,
      $.var_declaration_block,
      $.property_declaration_block,
      $.alias_block,
      $.assignment_block,
      $.function_call,
      $.classic_compiler_block,
      $.classic_array_block,
      $.return_block,
      $.return,
      $.break, 
      $.continue,
      $.if_block,
      $.repeat_block,
      $.while_block,
      $.for_block,
      $.use_block,
      $.case_block,
      $.for_each_block,
      $.sql_injection_block,
      //$.classic_command,
      $.comment,
      $.comment_block
    ),
                
    _local: $ => /(l|L)(o|O)(c|C)(a|A)(l|L)/,
    _exposed: $ => /(e|E)(x|X)(p|P)(o|O)(s|S)(e|E)(d|D)/,
    _get: $ => /(g|G)(e|E)(t|T)/,
    _set: $ => /(s|S)(e|E)(t|T)/,
    _query: $ => /(q|Q)(u|U)(e|E)(r|R)(y|Y)/,
    _orderBy: $ => /(o|O)(r|R)(d|D)(e|E)(r|R)(b|B)(y|Y)/,
    _computed: $ => choice($._get, $._set, $._query, $._orderBy),
    _scope: $ => (choice($._local, $._exposed, seq($._local, $._exposed), seq($._exposed, $._local))),
    _letter: $ => /[\p{Letter}_]/,
    _alnum: $ => /[\p{Letter}_0-9]+/,
    _alnumsp: $ => /[\p{Letter}_ 0-9]+/,
    _name: $ => prec(PREC.name, 
      /([\p{Letter}_]+)([\p{Letter}_0-9]*)/
    ), 
    _classic_name: $ => prec(PREC.classic, 
      choice(
      /([\p{Letter}_]+)([\p{Letter}_ 0-9]+)([\p{Letter}_0-9]+)/,
      $._name 
      )
    ),
    
    function_name: $ => prec(PREC.compound, seq(
      optional($._scope), $.function, optional($._computed), $._name
      )
    ),    
    _function_argument: $ => seq($.local_variable, repeat(seq(';', $.local_variable)), ':', $.class),
    function_arguments: $ => seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')'),
    function_result: $ => seq('->', $._function_argument),
    alias_name: $ => prec(PREC.compound, seq($.alias, $._name)), 

    /*
    operator
    */
    
    _binary_operator: $ => prec(PREC.operator, 
      choice('+', '-', '*', '/', 
      '&&', '||', '&', '|', 
      '^', '~|', '<', 
      '>', '=', '#', '<<', '>>', 
      '??', '?+', '?-', 
      '+=', '-=', '*=', '/=')
    ),  
    
    /*
    token
    */

    class: $ => prec(PREC.token, choice($._basic_type, $._class)),
    /*
    can be up to 2 dimensional
    */
    local_variable: $ => prec.right(PREC.token, seq('$', $._classic_name, optional(seq('{', $._single_condition, '}')))),
    interprocess_variable: $ => prec.right(PREC.token, seq('<>', $._classic_name, optional(seq('{', $._single_condition, '}')))),
    /*
    add 1 more dimension
    */    
    numeric_parameter: $ => prec(PREC.token, seq('$', /[0-9]+/)),    
    _variable: $ => seq(choice($.local_variable, $.interprocess_variable, $.numeric_parameter), optional(seq('{', $._single_condition, '}'))),
    /*
    property path or collection element
    */
    _mutable: $ => choice(
      $._variable,
      seq(choice($._variable, $.this, $.form), '.', $._name, repeat(seq('.', $._name)), optional(seq('[', $._single_condition, ']')))
    ),
    /* 
    not allowed as left operand of assignment
    */
    _immutable: $ => choice(
      $.constant,
      $.system_variable,
      $._class,
      $.constant
    ),
        
    /* 
    can't define process scope function call, too broad a pattern
    */
    class_function: $ => seq(choice($._class, $.super), $._functional_expression),
    generic_function: $ => seq($._mutable, $._functional_expression),
    _function_parameter: $ => choice(
      '*', 
      '>', 
      $._condition
    ),
    _functional_expression: $=> seq(
      '(', 
      optional($._function_parameter),
      repeat(seq(';', $._function_parameter)),
      ')'
    ),
    _function_call: $ => choice($.class_function, $.generic_function),
    
    _single_condition: $ => choice($._mutable, $._immutable, $._function_call),    
    /*
    basically an expression that returns a value
    */
    _condition: $ => prec.right(choice(
      prec(PREC.expression, $.ternary_block),
      $._single_condition,  
      $.object_literal_block,
      $.collection_literal_block,
      $.classic_command,
      seq($._single_condition, repeat(seq($._binary_operator, $._single_condition)))
    )),
    /* 
    likewise but can not be combined with a binary operator
    */
    ternary_block: $ => prec.left(seq(
      $._condition,
      '?',
      $._condition,
      ':',
      $._condition
    )),
    object_literal_block: $ => prec.left(
      choice('{}',
      seq('{', $._name, ':', $._condition, '}')
      ) 
    ),
    collection_literal_block: $ => prec.left(
      choice('[]', 
      seq('[', $._condition, repeat(seq(';', $._condition)), ']')
      )
    ),
    
    /* 
    constant
    */
    
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
      $.classic_constant
    ),
        
    /* 
    statements
    */
    
    //must be ordered alphabetically
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/,
    _class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) (e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S)/,
    
    function_block: $ => prec(PREC.statement, seq(
      $.function_name,
      $.function_arguments,
      optional($.function_result)
      )
    ),

    declare_block: $ => prec(PREC.statement, seq(
      $.declare,
      $.function_arguments,
      optional($.function_result)
      )
    ),
    
    alias_block: $ => prec(PREC.statement, seq(
      $.alias_name,
      seq($._name, repeat(seq('.', $._name)))
      )
    ),
    
    class_extends: $ => prec(PREC.statement, seq(
      $._class_extends,
      seq(choice($._class_store_4d, $._name), repeat(seq('.', $._name)))
      )
    ),
    
    class_constructor: $ => prec(PREC.statement, seq(
      $._class_constructor
      )
    ),
        
    var_declaration_block: $ => prec(PREC.statement, seq(
      $.var, 
      choice($._name, $.local_variable), 
      repeat(seq(';', choice($._name, $.local_variable))), 
      ':', 
      $.class)
    ),
    
    classic_compiler_block: $ => prec(PREC.statement, seq(
      $.classic_compiler, 
      seq(
        '(', 
        choice($.local_variable, $._name), 
        repeat(seq(';', choice($.local_variable, $._name))), 
        ')')
      )
    ),
    
    classic_array_block: $ => prec(PREC.statement, seq(
      $.classic_array, 
      seq(
        '(', 
        choice($.local_variable, $._name), 
        seq(';', choice($.local_variable, $._name, $._immutable)), 
        optional(seq(';', choice($.local_variable, $._name, $._immutable))),
        ')')
      )
    ),
    
    property_declaration_block: $ => prec(PREC.statement, seq(
      $.property,
      $._name, 
      repeat(seq(';', $._name)), 
      ':', 
      $.class)
    ),
    
    return_block: $ => prec(PREC.statement, seq(
      $.return, 
      $._single_condition
      )
    ),
        
    assignment_block: $ => prec(PREC.statement, seq(
      $._mutable,
      ':=',
      choice($._condition, $.ternary_block)
      )
    ),
    
    function_call: $ => prec(PREC.statement, $._function_call),
  
    /* 
    keyword
    */
        
    _var: $ => /(v|V)(a|A)(r|R)/,
    _property: $ => /(p|P)(r|R)(o|O)(p|P)(e|E)(r|R)(t|T)(y|Y)/,        
    _alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)/,    
    _declare: $ => /#(d|D)(e|E)(c|C)(l|L)(a|A)(r|R)(e|E)/,
    _function: $ => /(f|F)(u|U)(n|N)(c|C)(t|T)(i|I)(o|O)(n|N)/, 
    
    var: $ => prec(PREC.keyword, $._var),
    property: $ => prec(PREC.keyword, $._property),
    alias: $ => prec(PREC.keyword, $._alias),
    declare: $ => prec(PREC.keyword, $._declare),
    function: $ => prec(PREC.keyword, $._function),
    
    _return: $ => /(r|R)(e|E)(t|T)(u|U)(r|R)(n|N)/,
    _break: $ => /(b|B)(r|R)(e|E)(a|A)(k|K)/,
    _continue: $ => /(c|C)(o|O)(n|N)(t|T)(i|I)(n|N)(u|U)(e|E)/,
    
    return: $ => prec(PREC.keyword, $._return),
    break: $ => prec(PREC.keyword, $._break),
    continue: $ => prec(PREC.keyword, $._continue),
    
    _this: $ => /(t|T)(h|H)(i|I)(s|S)/,
    _form: $ => /(f|F)(o|O)(r|R)(m|M)/,
    _super: $ => /(s|S)(u|U)(p|P)(e|E)(r|R)/,
           
    this: $ => prec(PREC.keyword, seq($._this, $.command_suffix_optional)),   
    form: $ => prec(PREC.keyword, seq($._form, $.command_suffix_optional)),  
    super: $ => prec(PREC.keyword, seq($._super, $.command_suffix_optional)), 
          
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.keyword, seq(choice($._class_store_4d, $._class_store_ds, $._class_store_cs), $.command_suffix_optional)),
    _class: $ => prec(PREC.keyword, seq($._class_store, repeat(seq('.', $._name)))),
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
    _system_variable_ok: $ => /(o|O)(k|K)/,
    _system_variable_document: $ => /(d|D)(o|O)(c|C)(u|U)(m|M)(e|E)(n|N)(t|T)/,
    _system_variable_flddelimit: $ => /(f|F)(l|L)(d|D)(d|D)(e|E)(l|L)(i|I)(m|M)(i|I)(t|T)/,
    _system_variable_recdelimit: $ => /(r|R)(e|E)(c|C)(d|D)(e|E)(l|L)(i|I)(m|M)(i|I)(t|T)/,
    _system_variable_error: $ => /(e|E)(r|R)(r|R)(o|O)(r|R)/,
    _system_variable_error_method: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (m|M)(e|E)(t|T)(h|H)(o|O)(d|D)/,
    _system_variable_error_line: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (l|L)(i|I)(n|N)(e|E)/,
    _system_variable_error_formula: $ => /(e|E)(r|R)(r|R)(o|O)(r|R) (f|F)(o|O)(r|R)(m|M)(u|U)(l|L)(a|A)/,
    _system_variable_mousedown: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(d|D)(o|O)(w|W)(n|N)/,
    _system_variable_mousex: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(x|X)/,
    _system_variable_mousey: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(y|Y)/,
    _system_variable_keycode: $ => /(k|K)(e|E)(y|Y)(c|C)(o|O)(d|D)(e|E)/,
    _system_variable_modifiers: $ => /(m|M)(o|O)(d|D)(i|I)(f|F)(i|I)(e|E)(r|R)(s|S)/,
    _system_variable_mouseproc: $ => /(m|M)(o|O)(u|U)(s|S)(e|E)(p|P)(r|R)(o|O)(c|C)/,
    system_variable: $ => prec(PREC.keyword, choice(
      $._system_variable_ok,
      $._system_variable_document,
      $._system_variable_flddelimit,
      $._system_variable_recdelimit,
      $._system_variable_error,
      $._system_variable_error_method,
      $._system_variable_error_line,
      $._system_variable_error_formula,
      $._system_variable_mousedown,
      $._system_variable_mousex,
      $._system_variable_mousey,
      $._system_variable_keycode,
      $._system_variable_modifiers,
      $._system_variable_mouseproc      
    )),
    
    _classic_compiler_blob: $ => seq(/(c|C)_(b|B)(l|L)(o|O)(b|B)/, $.command_suffix_optional),
    _classic_compiler_boolean: $ => seq(/(c|C)_(b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/, $.command_suffix_optional),
    _classic_compiler_collection: $ => seq(/(c|C)_(c|C)(o|O)(l|L)(l|L)(e|E)(c|C)(t|T)(i|I)(o|O)(n|N)/, $.command_suffix_optional),
    _classic_compiler_date: $ => seq(/(c|C)_(d|D)(a|A)(t|T)(e|E)/, $.command_suffix_optional),
    _classic_compiler_longint: $ => seq(/(c|C)_(l|L)(o|O)(n|N)(g|G)(i|I)(n|N)(t|T)/, $.command_suffix_optional),
    _classic_compiler_object: $ => seq(/(c|C)_(o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/, $.command_suffix_optional),
    _classic_compiler_picture: $ => seq(/(c|C)_(p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/, $.command_suffix_optional),
    _classic_compiler_pointer: $ => seq(/(c|C)_(p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/, $.command_suffix_optional),
    _classic_compiler_real: $ => seq(/(c|C)_(r|R)(e|E)(a|A)(l|L)/, $.command_suffix_optional),
    _classic_compiler_text: $ => seq(/(c|C)_(t|T)(e|E)(x|X)(t|T)/, $.command_suffix_optional),
    _classic_compiler_time: $ => seq(/(c|C)_(t|T)(i|I)(m|M)(e|E)/, $.command_suffix_optional),
    _classic_compiler_variant: $ => seq(/(c|C)_(v|V)(a|A)(r|R)(i|I)(a|A)(n|N)(t|T)/, $.command_suffix_optional),
    
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
    
    _classic_array_blob: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (b|B)(l|L)(o|O)(b|B)/, $.command_suffix_optional),
    _classic_array_boolean: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (b|B)(o|O)(o|O)(l|L)(e|E)(a|A)(n|N)/, $.command_suffix_optional),
    _classic_array_date: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (d|D)(a|A)(t|T)(e|E)/, $.command_suffix_optional),
    _classic_array_integer: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (i|I)(n|N)(t|T)(e|E)(g|G)(e|E)(r|R)/, $.command_suffix_optional),
    _classic_array_longint: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (l|L)(o|O)(n|N)(g|G)(i|I)(n|N)(t|T)/, $.command_suffix_optional),
    _classic_array_object: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (o|O)(b|B)(j|J)(e|E)(c|C)(t|T)/, $.command_suffix_optional),
    _classic_array_picture: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (p|P)(i|I)(c|C)(t|T)(u|U)(r|R)(e|E)/, $.command_suffix_optional),
    _classic_array_pointer: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (p|P)(o|O)(i|I)(n|N)(t|T)(e|E)(r|R)/, $.command_suffix_optional),
    _classic_array_real: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (r|R)(e|E)(a|A)(l|L)/, $.command_suffix_optional),
    _classic_array_text: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y) (t|T)(e|E)(x|X)(t|T)/, $.command_suffix_optional),
    _classic_array_time: $ => seq(/(a|A)(r|R)(r|R)(a|A)(y|Y)( | )(t|T)(i|I)(m|M)(e|E)/, $.command_suffix_optional),

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
    
    command_suffix: $ => prec(PREC.keyword, /(:C[0-9]+)/),
    command_suffix_optional: $ => prec(PREC.keyword, /(:C[0-9]+)?/),
    constant_suffix: $ => prec(PREC.keyword, /:(k|K)[0-9]+:[0-9]+/),
    
    comment_block: $ => prec(PREC.comment,seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),
    
    comment: $ => prec(PREC.comment,seq('//', /.*/)),
      
    _if_e: $ => /(i|I)(f|F)/,
    _if_f: $ => /(s|S)(i|I)/,
    _if   : $ => prec(PREC.keyword, choice($._if_e, $._if_f)),
    _else_e: $ => /(e|E)(l|L)(s|S)(e|E)/,
    _else_f: $ => /(s|S)(i|I)(n|N)(o|O)(n|N)/,
    else   : $ => prec(PREC.keyword, choice($._else_e, $._else_f)),
    _end_if_e: $ => /(e|E)(n|N)(d|D) (i|I)(f|F)/,
    _end_if_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (s|S)(i|I)/,
    end_if   : $ => prec(PREC.keyword, choice($._end_if_e, $._end_if_f)),
    if: $ => prec(PREC.statement, seq(
        seq($._if, '(', $._condition, ')')
    )),
    
    else_block: $ => seq($.else, repeat( $._statement)),
    
    if_block: $ => prec(PREC.statement, seq(
        $.if,
        choice(
          repeat($._statement),
          seq(repeat($._statement), $.else_block)
        ),
        $.end_if
      )
    ),
    _for_each_e: $ => /(f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _for_each_f: $ => /(p|P)(o|O)(u|U)(r|R) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    for_each   : $ => prec(PREC.keyword, choice($._for_each_e, $._for_each_f)),
    
    _end_for_each_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R) (e|E)(a|A)(c|C)(h|H)/,
    _end_for_each_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(h|H)(a|A)(q|Q)(u|U)(e|E)/,
    end_for_each   : $ => prec(PREC.keyword, choice($._end_for_each_e, $._end_for_each_f)),
    for_each_block: $ => prec(PREC.statement, seq(
        $.for_each,
        '(', choice($.local_variable, $.interprocess_variable), ';', $._condition, 
        optional(choice(seq(';', $._condition), seq(';', $._condition, ';', $._condition))),
        ')',
        optional(seq(choice($.while, $.until), '(', $._condition, ')')),
        repeat( $._statement),
        $.end_for_each
      )
    ),
    _while_e: $ => /(w|W)(h|H)(i|I)(l|L)(e|E)/,
    _while_f: $ => /(t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    while   : $ => prec(PREC.keyword, choice($._while_e, $._while_f)),
    _end_while_e: $ => /(e|E)(n|N)(d|D) (w|W)(h|H)(i|I)(l|L)(e|E)/,
    _end_while_f: $ => /(f|F)(i|I)(n|N) (t|T)(a|A)(n|N)(t|T) (q|Q)(u|U)(e|E)/,
    end_while   : $ => prec(PREC.keyword, choice($._end_while_e, $._end_while_f)),
    _while: $ => prec(PREC.statement, seq(
        seq($.while, '(', $._condition, ')')
    )),
    while_block: $ => prec(PREC.statement, seq(
        $._while,
        repeat($._statement),
        $.end_while
      )
    ),
    _repeat_e: $ => /(r|R)(e|E)(p|P)(e|E)(a|A)(t|T)/,
    _repeat_f: $ => /(r|R)(e|E)(p|P)(e|E)(t|T)(e|E)(r|R)/,
    repeat   : $ => prec(PREC.keyword, choice($._repeat_e, $._repeat_f)),
    _until_e: $ => /(u|U)(n|N)(t|T)(i|I)(l|L)/,
    _until_f: $ => /(j|J)(u|U)(s|S)(q|Q)(u|U)(e|E)/,
    until   : $ => prec(PREC.keyword, choice($._until_e, $._until_f)),
    _until: $ => prec(PREC.statement, seq(
        seq($.until, '(', $._condition, ')')
    )),
    repeat_block: $ => prec(PREC.statement, seq(
        $.repeat,
        repeat($._statement),
        $._until
      )
    ),
    _for_e: $ => /(f|F)(o|O)(r|R)/,
    _for_f: $ => /(b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    for   : $ => prec(PREC.keyword, choice($._for_e, $._for_f)),
    _end_for_e: $ => /(e|E)(n|N)(d|D) (f|F)(o|O)(r|R)/,
    _end_for_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (b|B)(o|O)(u|U)(c|C)(l|L)(e|E)/,
    end_for  : $ => prec(PREC.keyword, choice($._end_for_e, $._end_for_f)),
    for_block: $ => prec(PREC.statement, seq(
        seq($.for, '(', choice($.local_variable, $.interprocess_variable), ';', $._condition, ';', $._condition, optional(seq(';', $._condition)), ')'),
        repeat($._statement),
        $.end_for
      )
    ),
    _use_e: $ => /(u|U)(s|S)(e|E)/,
    _use_f: $ => /(u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    use   : $ => prec(PREC.keyword, choice($._use_e, $._use_f)),
    _use: $ => prec(PREC.statement, seq(
        seq($.use, '(', $._mutable, ')')
    )),
    _end_use_e: $ => /(e|E)(n|N)(d|D) (u|U)(s|S)(e|E)/,
    _end_use_f: $ => /(f|F)(i|I)(n|N) (u|U)(t|T)(i|I)(l|L)(i|I)(s|S)(e|E)(r|R)/,
    end_use   : $ => prec(PREC.keyword, choice($._end_use_e, $._end_use_f)),
    use_block: $ => prec(PREC.statement, seq(
        $._use,
        repeat($._statement),
        $.end_use
      )
    ),
    _case_of_e: $ => /(c|C)(a|A)(s|S)(e|E) (o|O)(f|F)/,
    _case_of_f: $ => /(a|A)(u|U) (c|C)(a|A)(s|S) (o|O)(u|U)/,
    case_of   : $ => prec(PREC.keyword, choice($._case_of_e, $._case_of_f)),    
    _end_case_e: $ => /(e|E)(n|N)(d|D) (c|C)(a|A)(s|S)(e|E)/,
    _end_case_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (c|C)(a|A)(s|S)/,
    end_case   : $ => prec(PREC.keyword, choice($._end_case_e, $._end_case_f)),
    case_block: $ => prec(PREC.statement, seq(
        $.case_of,
        choice(
          repeat(seq(':', '(', $._condition, ')', repeat($._statement))),
          seq(repeat(seq(':', '(', $._condition, ')', repeat($._statement))), $.else_block)
        ),
        $.end_case
      )
    ),
    _begin_sql_e: $ => /(b|B)(e|E)(g|G)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
    _begin_sql_f: $ => /(d|D)(e|E)(b|B)(u|U)(t|T) (s|S)(q|Q)(l|L)/,
    begin_sql   : $ => prec(PREC.keyword, choice($._begin_sql_e, $._begin_sql_f)),
    _end_sql_e: $ => /(e|E)(n|N)(d|D) (s|S)(q|Q)(l|L)/,
    _end_sql_f: $ => /(f|F)(i|I)(n|N) (s|S)(q|Q)(l|L)/,
    end_sql   : $ => prec(PREC.keyword, choice($._end_sql_e, $._end_sql_f)),

    sql_injection_block: $ => prec(PREC.statement, seq(
        $.begin_sql,
        repeat(/.+?/),
        $.end_sql
      )
    ),
    
    classic_command: $ => seq(/[A-Za-z]+[A-Z a-z0-9]*[A-Za-z]+/, $.command_suffix, optional($._functional_expression)),
    classic_constant: $ => seq(/[A-Za-z]+[A-Z a-z0-9]*[A-Za-z]+/, $.constant_suffix)

     
  },
  
  conflicts: $ => [

    [$.for_each_block, $._while],
    [$._while]

  ]

  
});
