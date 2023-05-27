const PREC = {
  
  /*
  
  statement > compound > token > classic > name > constant > keyword
  
  */
  
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
      $.declaration_block,
      $.alias_name,
      $._token
    ),
    _token: $ => choice(
      $.var,
      $.property,
      $.alias,
      $.declare,
      $.function,
      $.value
    ),
    value: $ => choice(
      $.class,
      $.local_variable,
      $.interprocess_variable,
      $.attribute,
      $.constant
    ),
    constant: $ => choice(
      $.time,
      $.date,
      $.number,
      $.string
    ),
        
    _return: $ => /(r|R)(e|E)(t|T)(u|U)(r|R)(n|N)/,
    _break: $ => /(b|B)(r|R)(e|E)(a|A)(k|K)/,
    _continue: $ => /(c|C)(o|O)(n|N)(t|T)(i|I)(n|N)(u|U)(e|E)/,
    _local: $ => /(l|L)(o|O)(c|C)(a|A)(l|L)/,
    _exposed: $ => /(e|E)(x|X)(p|P)(o|O)(s|S)(e|E)(d|D)/,
    _get: $ => / (g|G)(e|E)(t|T)/,
    _set: $ => / (s|S)(e|E)(t|T)/,
    _query: $ => / (q|Q)(u|U)(e|E)(r|R)(y|Y)/,
    _orderBy: $ => / (o|O)(r|R)(d|D)(e|E)(r|R)(b|B)(y|Y)/,
    _computed: $ => choice($._get, $._set, $._query, $._orderBy),
    _scope: $ => (choice($._local, $._exposed, seq($._local, $._exposed), seq($._exposed, $._local))),
    _letter: $ => /[\p{Letter}_]/,
    _alnum: $ => /[\p{Letter}_0-9]+/,
    _alnumsp: $ => /[\p{Letter}_ 0-9]+/,
    _name: $ => prec(PREC.name, 
      /([\p{Letter}_]+)([\p{Letter}_0-9]*)/
    ), 
    _classic_name: $ => prec(PREC.classic, 
      /([\p{Letter}_]+)([\p{Letter}_ 0-9]*)([\p{Letter}_0-9]*)/
    ),
    
    function_name: $ => prec(PREC.compound, seq(optional($._scope), $.function, optional($._computed), $._name)),    
    _function_argument: $ => seq($.local_variable, optional(repeat(seq(';', $.local_variable))), ':', $.class),
    function_arguments: $ => seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')'),
    function_result: $ => seq('->', $._function_argument),
    
    alias_name: $ => prec(PREC.compound, seq($.alias, $._name, $._name, repeat(seq(".", $._name)))), 
    
    /*
    token
    */

    class: $ => prec(PREC.token, choice($._basic_type, $._class)),
    local_variable: $ => prec(PREC.token, seq('$', $._classic_name)),
    interprocess_variable: $ => prec(PREC.token, seq('<>', $._classic_name)),
    _variable: $ => choice($.local_variable, $.interprocess_variable),
    attribute: $ => "attribute", //prec(PREC.token, seq($._name, ".", $._name, repeat(seq(".", $._name)))),
    
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
    
    class_extends: $ => /((c|C)(l|L)(a|A)(s|S)(s|S)) (e|E)(x|X)(t|T)(e|E)(n|N)(d|D)(s|S)/,
    _class_extends: $ => seq($.class_extends, ' ', $.class),
    class_constructor: $ => prec(PREC.statement, seq(/((c|C)(l|L)(a|A)(s|S)(s|S)) ((c|C)(o|O)(n|N)(s|S)(t|T)(r|R)(u|U)(c|C)(t|T)(o|O)(r|R))/)),
    class_constructor_block: $ => prec(PREC.statement, choice($._class_extends, $.class_constructor)),
    
    _declaration: $ => choice($.var, $.property),
    _declaration_argument: $ => choice($.local_variable),
    declaration_block: $ => prec(PREC.statement, seq($._declaration_argument, optional(repeat(seq(';', $._declaration_argument))), ':', $.class)),
        
    /* 
    keyword
    */
    
    _var: $ => /(v|V)(a|A)(r|R)/,
    _property: $ => /(p|P)(r|R)(o|O)(p|P)(e|E)(r|R)(t|T)(y|Y)/,        
    _alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)/,    
    _declare: $ => /#(d|D)(e|E)(c|C)(l|L)(a|A)(r|R)(e|E)/,
    _function: $ => /(f|F)(u|U)(n|N)(c|C)(t|T)(i|I)(o|O)(n|N)/, 
    
    var : $ => prec(PREC.keyword, $._var),
    property : $ => prec(PREC.keyword, $._property),
    alias : $ => prec(PREC.keyword, $._alias),
    declare : $ => prec(PREC.keyword, $._declare),
    function : $ => prec(PREC.keyword, $._function),
    
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
    )

  }
  
});
