const PREC = {
  
  /*
  
  operator > statement > compound > token > classic > name > constant > keyword
  
  */
  
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
      $.assignment_block
    ),
    value: $ => choice(
      $.class,
      $.local_variable,
      $.interprocess_variable,
      $.system_variable,
      $.numeric_parameter,
      $.constant
    ),
    constant: $ => choice(
      $.time,
      $.date,
      $.number,
      $.string
    ),
    
    operator: $ => prec(PREC.operator, choice(":=")),    
        
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
    _function_argument: $ => seq($.local_variable, optional(repeat(seq(';', $.local_variable))), ':', $.class),
    function_arguments: $ => seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')'),
    function_result: $ => seq('->', $._function_argument),
    alias_name: $ => prec(PREC.compound, seq($.alias, $._name)), 
    
    /*
    token
    */

    class: $ => prec(PREC.token, choice($._basic_type, $._class)),
    local_variable: $ => prec(PREC.token, seq('$', $._classic_name)),
    interprocess_variable: $ => prec(PREC.token, seq('<>', $._classic_name)),
    _variable: $ => choice($.local_variable, $.interprocess_variable, $.numeric_parameter, $.this),
    _mutable: $ => choice(
      $._variable,
      seq($._variable, '.', $._name, repeat(seq('.', $._name)))
    ),
    numeric_parameter: $ => prec(PREC.token, seq('$', /[0-9]+/)),
    /* 
    use this for blocks that should default to process variable
    */
    _expression: $=> choice($.value, seq($._name, repeat(seq('.', $._name)))),
    /* 
    constant
    */
    
    time: $ => prec(PREC.constant,
      seq('?', /[0-9]{2}/, ':', /[0-9]{2}/, ':', /[0-9]{2}/, '?')
    ),
    date: $ => prec(PREC.constant,
      choice(
      seq('!', /[0-9]{2,4}/, '-', /[0-9]{2}/, '-', /[0-9]{2}/, '!'),
      seq('!', /[0-9]{2}/, '-', /[0-9]{2}/, '-', /[0-9]{2,4}/, '!'))
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
    
    /* 
    statements
    */
    
    _class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) (e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S)/,
    _class_constructor: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/,
    
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
      $.class_extends, 
      $.class
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
    
    property_declaration_block: $ => prec(PREC.statement, seq(
      $.property,
      $._name, 
      repeat(seq(';', $._name)), 
      ':', 
      $.class)
    ),
    
    return_block: $=> prec(PREC.statement, seq(
      $.return, 
      $._expression
      )
    ),
        
    assignment_block: $=> seq(
      $._mutable,
      ':=',
      $._expression
    ),
        
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
       
    this: $ => prec(PREC.keyword, $._this),   
    form: $ => prec(PREC.keyword, $._form),  
        
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.keyword, choice($._class_store_4d, $._class_store_ds, $._class_store_cs)),
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
    ))
    
  
  }
  
});
