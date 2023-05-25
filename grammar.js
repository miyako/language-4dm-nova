const PREC = {
  key: -10,
  arguments: -1,
  class_function:1,
  attribute_name: 2,
  name: 3,
  variable: 10
}
  
module.exports = grammar({
  name: 'fourd',

  rules: {
    source: $ => repeat($._token),
    _token: $ => choice(
      $.function,
      $.function_block,
      $.class,
      $.local_variable,
      $.process_variable,  
      $.interprocess_variable    
    ),
    _var: $ => /(v|V)(a|A)(r|R)/,
    _property: $ => /(p|P)(r|R)(o|O)(p|P)(e|E)(r|R)(t|T)(y|Y)/,        
    _return: $ => /(r|R)(e|E)(t|T)(u|U)(r|R)(n|N)/,
    _declare: $ => /#(d|D)(e|E)(c|C)(l|L)(a|A)(r|R)(e|E)/,
    _alias: $ => /(a|A)(l|L)(i|I)(a|A)(s|S)/,
    _function: $ => /(f|F)(u|U)(n|N)(c|C)(t|T)(i|I)(o|O)(n|N)/, 
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
      choice(
      $._letter,
      seq($._letter, $._alnum),
      seq($._letter, $._alnumsp, $._letter))
    ),
    _attribute_name: $ => prec(PREC.attribute_name,
      choice(
      $._letter,
      seq($._letter, $._alnum))
    ),    
    function: $ => prec.right(PREC.key, seq(optional($._scope), $._function, optional($._computed), $._attribute_name)),    
    _function_argument: $ => prec(PREC.arguments, seq($.local_variable, optional(repeat(seq(';', $.local_variable))), ':', $.class)),
    _function_arguments: $ => prec(PREC.arguments, seq('(', optional(choice($._function_argument, seq($._function_argument, repeat(seq(';', $._function_argument))))), ')')),
    _function_result: $ => seq('->', $._function_argument),
    function_block: $ => prec(PREC.class_function, prec.right(seq(
      $._attribute_name,
      optional($._function_arguments),
      optional($._function_result)
    ))
    ),
    _class_store_4d: $ => /[4](d|D)/,
    _class_store_ds: $ => /(d|D)(s|S)/,
    _class_store_cs: $ => /(c|C)(s|S)/,
    _class_store: $ => prec(PREC.key, choice($._class_store_4d, $._class_store_ds, $._class_store_cs)),
    _class: $ => prec(PREC.key, seq($._class_store, repeat(seq('.', $._attribute_name)))),
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
    class: $ => prec.right(PREC.key, choice($._basic_type, $._class)),
    local_variable: $ => prec(PREC.variable, seq('$', $._name)),
    process_variable: $ => prec(PREC.variable, seq($._name)),
    interprocess_variable: $ => prec(PREC.variable, seq('<>', $._name)),
    _variable: $ => choice($.local_variable, $.process_variable, $.interprocess_variable)
    
  }
  
});
