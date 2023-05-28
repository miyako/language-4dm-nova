const PREC = {
  
  /*
  
  comment > operator > statement > compound > token > classic > name > constant > keyword
  
  */
  
  comment:    -12,
  operator:   -11,
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
      $.class_extends,
      $.class_constructor,
      $.var_declaration_block,
      $.property_declaration_block,
      $.alias_block,
      $.return_block,
      $.return,
      $.break, 
      $.continue,
      $.assignment_block,
      $.function_call,
      $.classic_compiler_block,
      $.ternary_block,
      $.if_block,
      $.comment
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
    local_variable: $ => prec(PREC.token, seq('$', $._classic_name, optional(seq('[', $._single_condition, ']')))),
    interprocess_variable: $ => prec(PREC.token, seq('<>', $._classic_name)),
    numeric_parameter: $ => prec(PREC.token, seq('$', /[0-9]+/)),    
    _variable: $ => choice($.local_variable, $.interprocess_variable, $.numeric_parameter),
    _mutable: $ => choice(
      $._variable,
      seq(choice($._variable, $.this, $.form), '.', $._name, repeat(seq('.', $._name)), optional(seq('[', $._single_condition, ']')))
    ),
    _immutable: $ => choice(
      $.constant,
      $.system_variable,
      $._class,
      $.constant  
    ),
    
    class_function: $ => seq(choice($._class, $.super), $._functional_expression),
    generic_function: $ => seq($._mutable, $._functional_expression),
        
    _function_parameter: $ => prec(-1, choice(
      '*', 
      '>', 
      $._condition
    )),
        
    _functional_expression: $=> seq(
      '(', 
      optional($._function_parameter),
      repeat(seq(';', $._function_parameter)),
      ')'
    ),
    
    _function_call: $ => choice($.class_function, $.generic_function),
    
    _single_condition: $ => choice($._mutable, $._immutable, $._function_call),    
    /*
    expression that returns a value
    */
    _condition: $ => prec.right(choice(
      $._single_condition, 
      seq($._single_condition, repeat(seq($._binary_operator, $._single_condition)))
    )),
    
    ternary_block: $ => prec(PREC.compound, seq(
      $._condition,
      '?',
      $._condition,
      ':',
      $._condition
    )),
    
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
      $.string
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
      choice($._name, $._class)
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
      choice($._single_condition, $.ternary_block)
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
           
    this: $ => prec(PREC.keyword, seq($._this, $.command_suffix)),   
    form: $ => prec(PREC.keyword, seq($._form, $.command_suffix)),  
    super: $ => prec(PREC.keyword, seq($._super, $.command_suffix)), 
    
    _generic_command: $ => prec(PREC.keyword, seq($._name, $.command_suffix)), 
        
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.keyword, seq(choice($._class_store_4d, $._class_store_ds, $._class_store_cs), $.command_suffix)),
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
    
    _classic_compiler_longint: $ => seq(/(c|C)(_|_)(l|L)(o|O)(n|N)(g|G)(i|I)(n|N)(t|T)/, $.command_suffix),
    
    classic_compiler: $ => prec(PREC.keyword, choice(
      $._classic_compiler_longint
      )
    ),
    
    command_suffix: $ => prec(PREC.keyword, /(:C[0-9]+)?/),
    
    comment: $ => choice(
        prec(PREC.comment,seq('//', /.*/)),
        prec(PREC.comment,seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        ))
    ),
    _if_e: $ => /(i|I)(f|F)/,
    _if_f: $ => /(s|S)(i|I)/,
    if   : $ => prec(PREC.keyword, choice($._if_e, $._if_f)),
    
    _else_e: $ => /(e|E)(l|L)(s|S)(e|E)/,
    _else_f: $ => /(s|S)(i|I)(n|N)(o|O)(n|N)/,
    else   : $ => prec(PREC.keyword, choice($._else_e, $._else_f)),
    
    _end_if_e: $ => /(e|E)(n|N)(d|D) (i|I)(f|F)/,
    _end_if_f: $ => /(f|F)(i|I)(n|N) (d|D)(e|E) (s|S)(i|I)/,
    end_if   : $ => prec(PREC.keyword, choice($._end_if_e, $._end_if_f)),
    
    /*
    higher than function call
    */
    _if: $ => prec(PREC.statement, seq(
        seq($.if, '(', $._condition, ')')
    )),
    
    if_block: $ => prec(PREC.statement, seq(
        $._if,
        repeat(choice($._statement, seq($._statement, $.else, $._statement))),
        $.end_if
      )
    )
     
  },

  conflicts: $ => [
/*
    [$._single_condition, $._binary_operator],
    [$._single_condition]
*/
  ]

  
});
