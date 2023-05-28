#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON_EQ = 1,
  sym__local = 2,
  sym__exposed = 3,
  sym__get = 4,
  sym__set = 5,
  sym__query = 6,
  sym__orderBy = 7,
  sym__letter = 8,
  aux_sym__name_token1 = 9,
  aux_sym__classic_name_token1 = 10,
  anon_sym_SEMI = 11,
  anon_sym_COLON = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_LT_GT = 17,
  anon_sym_DOT = 18,
  aux_sym_numeric_parameter_token1 = 19,
  anon_sym_QMARK = 20,
  aux_sym_time_token1 = 21,
  anon_sym_BANG = 22,
  aux_sym_date_token1 = 23,
  anon_sym_DASH = 24,
  sym__hex_literal = 25,
  aux_sym__num_literal_token1 = 26,
  aux_sym__exp_literal_token1 = 27,
  anon_sym_DQUOTE = 28,
  anon_sym_BSLASHr = 29,
  anon_sym_BSLASHn = 30,
  anon_sym_BSLASH_DQUOTE = 31,
  anon_sym_BSLASHt = 32,
  anon_sym_BSLASH_BSLASH = 33,
  aux_sym_string_token1 = 34,
  sym__class_constructor = 35,
  sym__var = 36,
  sym__property = 37,
  sym__alias = 38,
  sym__declare = 39,
  sym__function = 40,
  sym__return = 41,
  sym__break = 42,
  sym__continue = 43,
  sym__this = 44,
  sym__form = 45,
  sym__class_store_4d = 46,
  sym__class_store_ds = 47,
  sym__class_store_cs = 48,
  sym__basic_type_text = 49,
  sym__basic_type_date = 50,
  sym__basic_type_time = 51,
  sym__basic_type_boolean = 52,
  sym__basic_type_integer = 53,
  sym__basic_type_real = 54,
  sym__basic_type_pointer = 55,
  sym__basic_type_picture = 56,
  sym__basic_type_blob = 57,
  sym__basic_type_collection = 58,
  sym__basic_type_variant = 59,
  sym__basic_type_object = 60,
  sym__system_variable_ok = 61,
  sym__system_variable_document = 62,
  sym__system_variable_flddelimit = 63,
  sym__system_variable_recdelimit = 64,
  sym__system_variable_error = 65,
  sym__system_variable_error_method = 66,
  sym__system_variable_error_line = 67,
  sym__system_variable_error_formula = 68,
  sym__system_variable_mousedown = 69,
  sym__system_variable_mousex = 70,
  sym__system_variable_mousey = 71,
  sym__system_variable_keycode = 72,
  sym__system_variable_modifiers = 73,
  sym__system_variable_mouseproc = 74,
  sym_source = 75,
  sym__statement = 76,
  sym_value = 77,
  sym_constant = 78,
  sym__computed = 79,
  sym__scope = 80,
  sym__name = 81,
  sym__classic_name = 82,
  sym_function_name = 83,
  sym__function_argument = 84,
  sym_function_arguments = 85,
  sym_function_result = 86,
  sym_alias_name = 87,
  sym_class = 88,
  sym_local_variable = 89,
  sym_interprocess_variable = 90,
  sym__variable = 91,
  sym__mutable = 92,
  sym_numeric_parameter = 93,
  sym__expression_name = 94,
  sym__functional_expression = 95,
  sym__expression = 96,
  sym_time = 97,
  sym_date = 98,
  sym__dec_literal = 99,
  sym__num_literal = 100,
  sym__exp_literal = 101,
  sym_number = 102,
  sym_string = 103,
  sym_function_parameters = 104,
  sym_function_block = 105,
  sym_declare_block = 106,
  sym_alias_block = 107,
  sym_class_extends = 108,
  sym_class_constructor = 109,
  sym_var_declaration_block = 110,
  sym_property_declaration_block = 111,
  sym_return_block = 112,
  sym_assignment_block = 113,
  sym_function_call = 114,
  sym_var = 115,
  sym_property = 116,
  sym_alias = 117,
  sym_declare = 118,
  sym_function = 119,
  sym_return = 120,
  sym_break = 121,
  sym_continue = 122,
  sym_this = 123,
  sym_form = 124,
  sym__class_store = 125,
  sym__class = 126,
  sym__basic_type = 127,
  sym_system_variable = 128,
  aux_sym_source_repeat1 = 129,
  aux_sym__function_argument_repeat1 = 130,
  aux_sym_function_arguments_repeat1 = 131,
  aux_sym__mutable_repeat1 = 132,
  aux_sym__functional_expression_repeat1 = 133,
  aux_sym_string_repeat1 = 134,
  aux_sym_function_parameters_repeat1 = 135,
  aux_sym_var_declaration_block_repeat1 = 136,
  aux_sym_property_declaration_block_repeat1 = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_EQ] = ":=",
  [sym__local] = "_local",
  [sym__exposed] = "_exposed",
  [sym__get] = "_get",
  [sym__set] = "_set",
  [sym__query] = "_query",
  [sym__orderBy] = "_orderBy",
  [sym__letter] = "_letter",
  [aux_sym__name_token1] = "_name_token1",
  [aux_sym__classic_name_token1] = "_classic_name_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOT] = ".",
  [aux_sym_numeric_parameter_token1] = "numeric_parameter_token1",
  [anon_sym_QMARK] = "\?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_BANG] = "!",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [sym__hex_literal] = "_hex_literal",
  [aux_sym__num_literal_token1] = "_num_literal_token1",
  [aux_sym__exp_literal_token1] = "_exp_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token1] = "string_token1",
  [sym__class_constructor] = "_class_constructor",
  [sym__var] = "_var",
  [sym__property] = "_property",
  [sym__alias] = "_alias",
  [sym__declare] = "_declare",
  [sym__function] = "_function",
  [sym__return] = "_return",
  [sym__break] = "_break",
  [sym__continue] = "_continue",
  [sym__this] = "_this",
  [sym__form] = "_form",
  [sym__class_store_4d] = "_class_store_4d",
  [sym__class_store_ds] = "_class_store_ds",
  [sym__class_store_cs] = "_class_store_cs",
  [sym__basic_type_text] = "_basic_type_text",
  [sym__basic_type_date] = "_basic_type_date",
  [sym__basic_type_time] = "_basic_type_time",
  [sym__basic_type_boolean] = "_basic_type_boolean",
  [sym__basic_type_integer] = "_basic_type_integer",
  [sym__basic_type_real] = "_basic_type_real",
  [sym__basic_type_pointer] = "_basic_type_pointer",
  [sym__basic_type_picture] = "_basic_type_picture",
  [sym__basic_type_blob] = "_basic_type_blob",
  [sym__basic_type_collection] = "_basic_type_collection",
  [sym__basic_type_variant] = "_basic_type_variant",
  [sym__basic_type_object] = "_basic_type_object",
  [sym__system_variable_ok] = "_system_variable_ok",
  [sym__system_variable_document] = "_system_variable_document",
  [sym__system_variable_flddelimit] = "_system_variable_flddelimit",
  [sym__system_variable_recdelimit] = "_system_variable_recdelimit",
  [sym__system_variable_error] = "_system_variable_error",
  [sym__system_variable_error_method] = "_system_variable_error_method",
  [sym__system_variable_error_line] = "_system_variable_error_line",
  [sym__system_variable_error_formula] = "_system_variable_error_formula",
  [sym__system_variable_mousedown] = "_system_variable_mousedown",
  [sym__system_variable_mousex] = "_system_variable_mousex",
  [sym__system_variable_mousey] = "_system_variable_mousey",
  [sym__system_variable_keycode] = "_system_variable_keycode",
  [sym__system_variable_modifiers] = "_system_variable_modifiers",
  [sym__system_variable_mouseproc] = "_system_variable_mouseproc",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym_value] = "value",
  [sym_constant] = "constant",
  [sym__computed] = "_computed",
  [sym__scope] = "_scope",
  [sym__name] = "_name",
  [sym__classic_name] = "_classic_name",
  [sym_function_name] = "function_name",
  [sym__function_argument] = "_function_argument",
  [sym_function_arguments] = "function_arguments",
  [sym_function_result] = "function_result",
  [sym_alias_name] = "alias_name",
  [sym_class] = "class",
  [sym_local_variable] = "local_variable",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym__variable] = "_variable",
  [sym__mutable] = "_mutable",
  [sym_numeric_parameter] = "numeric_parameter",
  [sym__expression_name] = "_expression_name",
  [sym__functional_expression] = "_functional_expression",
  [sym__expression] = "_expression",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_function_parameters] = "function_parameters",
  [sym_function_block] = "function_block",
  [sym_declare_block] = "declare_block",
  [sym_alias_block] = "alias_block",
  [sym_class_extends] = "class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_var_declaration_block] = "var_declaration_block",
  [sym_property_declaration_block] = "property_declaration_block",
  [sym_return_block] = "return_block",
  [sym_assignment_block] = "assignment_block",
  [sym_function_call] = "function_call",
  [sym_var] = "var",
  [sym_property] = "property",
  [sym_alias] = "alias",
  [sym_declare] = "declare",
  [sym_function] = "function",
  [sym_return] = "return",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [sym_this] = "this",
  [sym_form] = "form",
  [sym__class_store] = "_class_store",
  [sym__class] = "_class",
  [sym__basic_type] = "_basic_type",
  [sym_system_variable] = "system_variable",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym__mutable_repeat1] = "_mutable_repeat1",
  [aux_sym__functional_expression_repeat1] = "_functional_expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_var_declaration_block_repeat1] = "var_declaration_block_repeat1",
  [aux_sym_property_declaration_block_repeat1] = "property_declaration_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym__local] = sym__local,
  [sym__exposed] = sym__exposed,
  [sym__get] = sym__get,
  [sym__set] = sym__set,
  [sym__query] = sym__query,
  [sym__orderBy] = sym__orderBy,
  [sym__letter] = sym__letter,
  [aux_sym__name_token1] = aux_sym__name_token1,
  [aux_sym__classic_name_token1] = aux_sym__classic_name_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_numeric_parameter_token1] = aux_sym_numeric_parameter_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__hex_literal] = sym__hex_literal,
  [aux_sym__num_literal_token1] = aux_sym__num_literal_token1,
  [aux_sym__exp_literal_token1] = aux_sym__exp_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__class_constructor] = sym__class_constructor,
  [sym__var] = sym__var,
  [sym__property] = sym__property,
  [sym__alias] = sym__alias,
  [sym__declare] = sym__declare,
  [sym__function] = sym__function,
  [sym__return] = sym__return,
  [sym__break] = sym__break,
  [sym__continue] = sym__continue,
  [sym__this] = sym__this,
  [sym__form] = sym__form,
  [sym__class_store_4d] = sym__class_store_4d,
  [sym__class_store_ds] = sym__class_store_ds,
  [sym__class_store_cs] = sym__class_store_cs,
  [sym__basic_type_text] = sym__basic_type_text,
  [sym__basic_type_date] = sym__basic_type_date,
  [sym__basic_type_time] = sym__basic_type_time,
  [sym__basic_type_boolean] = sym__basic_type_boolean,
  [sym__basic_type_integer] = sym__basic_type_integer,
  [sym__basic_type_real] = sym__basic_type_real,
  [sym__basic_type_pointer] = sym__basic_type_pointer,
  [sym__basic_type_picture] = sym__basic_type_picture,
  [sym__basic_type_blob] = sym__basic_type_blob,
  [sym__basic_type_collection] = sym__basic_type_collection,
  [sym__basic_type_variant] = sym__basic_type_variant,
  [sym__basic_type_object] = sym__basic_type_object,
  [sym__system_variable_ok] = sym__system_variable_ok,
  [sym__system_variable_document] = sym__system_variable_document,
  [sym__system_variable_flddelimit] = sym__system_variable_flddelimit,
  [sym__system_variable_recdelimit] = sym__system_variable_recdelimit,
  [sym__system_variable_error] = sym__system_variable_error,
  [sym__system_variable_error_method] = sym__system_variable_error_method,
  [sym__system_variable_error_line] = sym__system_variable_error_line,
  [sym__system_variable_error_formula] = sym__system_variable_error_formula,
  [sym__system_variable_mousedown] = sym__system_variable_mousedown,
  [sym__system_variable_mousex] = sym__system_variable_mousex,
  [sym__system_variable_mousey] = sym__system_variable_mousey,
  [sym__system_variable_keycode] = sym__system_variable_keycode,
  [sym__system_variable_modifiers] = sym__system_variable_modifiers,
  [sym__system_variable_mouseproc] = sym__system_variable_mouseproc,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym_value] = sym_value,
  [sym_constant] = sym_constant,
  [sym__computed] = sym__computed,
  [sym__scope] = sym__scope,
  [sym__name] = sym__name,
  [sym__classic_name] = sym__classic_name,
  [sym_function_name] = sym_function_name,
  [sym__function_argument] = sym__function_argument,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_result] = sym_function_result,
  [sym_alias_name] = sym_alias_name,
  [sym_class] = sym_class,
  [sym_local_variable] = sym_local_variable,
  [sym_interprocess_variable] = sym_interprocess_variable,
  [sym__variable] = sym__variable,
  [sym__mutable] = sym__mutable,
  [sym_numeric_parameter] = sym_numeric_parameter,
  [sym__expression_name] = sym__expression_name,
  [sym__functional_expression] = sym__functional_expression,
  [sym__expression] = sym__expression,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__dec_literal] = sym__dec_literal,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_block] = sym_function_block,
  [sym_declare_block] = sym_declare_block,
  [sym_alias_block] = sym_alias_block,
  [sym_class_extends] = sym_class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_var_declaration_block] = sym_var_declaration_block,
  [sym_property_declaration_block] = sym_property_declaration_block,
  [sym_return_block] = sym_return_block,
  [sym_assignment_block] = sym_assignment_block,
  [sym_function_call] = sym_function_call,
  [sym_var] = sym_var,
  [sym_property] = sym_property,
  [sym_alias] = sym_alias,
  [sym_declare] = sym_declare,
  [sym_function] = sym_function,
  [sym_return] = sym_return,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [sym_this] = sym_this,
  [sym_form] = sym_form,
  [sym__class_store] = sym__class_store,
  [sym__class] = sym__class,
  [sym__basic_type] = sym__basic_type,
  [sym_system_variable] = sym_system_variable,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym__mutable_repeat1] = aux_sym__mutable_repeat1,
  [aux_sym__functional_expression_repeat1] = aux_sym__functional_expression_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_var_declaration_block_repeat1] = aux_sym_var_declaration_block_repeat1,
  [aux_sym_property_declaration_block_repeat1] = aux_sym_property_declaration_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__local] = {
    .visible = false,
    .named = true,
  },
  [sym__exposed] = {
    .visible = false,
    .named = true,
  },
  [sym__get] = {
    .visible = false,
    .named = true,
  },
  [sym__set] = {
    .visible = false,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym__orderBy] = {
    .visible = false,
    .named = true,
  },
  [sym__letter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__num_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exp_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__class_constructor] = {
    .visible = false,
    .named = true,
  },
  [sym__var] = {
    .visible = false,
    .named = true,
  },
  [sym__property] = {
    .visible = false,
    .named = true,
  },
  [sym__alias] = {
    .visible = false,
    .named = true,
  },
  [sym__declare] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
    .named = true,
  },
  [sym__return] = {
    .visible = false,
    .named = true,
  },
  [sym__break] = {
    .visible = false,
    .named = true,
  },
  [sym__continue] = {
    .visible = false,
    .named = true,
  },
  [sym__this] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym__class_store_4d] = {
    .visible = false,
    .named = true,
  },
  [sym__class_store_ds] = {
    .visible = false,
    .named = true,
  },
  [sym__class_store_cs] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_text] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_date] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_time] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_real] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_pointer] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_blob] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_collection] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_variant] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type_object] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_ok] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_document] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_flddelimit] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_recdelimit] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_error] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_error_method] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_error_line] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_error_formula] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_mousedown] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_mousex] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_mousey] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_keycode] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym__system_variable_mouseproc] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__computed] = {
    .visible = false,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_name] = {
    .visible = false,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym__function_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_result] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym__mutable] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_name] = {
    .visible = false,
    .named = true,
  },
  [sym__functional_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__dec_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__num_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__exp_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_block] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_block] = {
    .visible = true,
    .named = true,
  },
  [sym_class_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_class_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_property_declaration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_form] = {
    .visible = true,
    .named = true,
  },
  [sym__class_store] = {
    .visible = false,
    .named = true,
  },
  [sym__class] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type] = {
    .visible = false,
    .named = true,
  },
  [sym_system_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mutable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__functional_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__letter_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'H' && c <= 'Z')
                  : (c <= '_' || (c >= 'h' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym__name_token1_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym__name_token1_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'G' && c <= 'Z')
                  : (c <= '_' || (c >= 'g' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym__name_token1_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= '_' || (c >= 'b' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym__classic_name_token1_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '!') ADVANCE(356);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(345);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == ';') ADVANCE(341);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(183);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(340);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(356);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == ')') ADVANCE(345);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(348);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(396);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(327);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 59:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(382);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 150:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 151:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(193);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 159:
      if (eof) ADVANCE(163);
      if (lookahead == '!') ADVANCE(356);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '0') ADVANCE(350);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(341);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(338);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(345);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(341);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(345);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == '4') ADVANCE(34);
      if (lookahead == ';') ADVANCE(341);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(345);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == ';') ADVANCE(341);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__local);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__exposed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(338);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(338);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(252);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(385);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(371);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 159},
  [9] = {.lex_state = 160},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 161},
  [12] = {.lex_state = 161},
  [13] = {.lex_state = 161},
  [14] = {.lex_state = 161},
  [15] = {.lex_state = 161},
  [16] = {.lex_state = 161},
  [17] = {.lex_state = 161},
  [18] = {.lex_state = 160},
  [19] = {.lex_state = 162},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 160},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 160},
  [24] = {.lex_state = 160},
  [25] = {.lex_state = 160},
  [26] = {.lex_state = 160},
  [27] = {.lex_state = 161},
  [28] = {.lex_state = 161},
  [29] = {.lex_state = 161},
  [30] = {.lex_state = 161},
  [31] = {.lex_state = 161},
  [32] = {.lex_state = 161},
  [33] = {.lex_state = 161},
  [34] = {.lex_state = 161},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 160},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 160},
  [40] = {.lex_state = 160},
  [41] = {.lex_state = 160},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 160},
  [47] = {.lex_state = 160},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 160},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 160},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 160},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 160},
  [61] = {.lex_state = 160},
  [62] = {.lex_state = 160},
  [63] = {.lex_state = 160},
  [64] = {.lex_state = 160},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 160},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 58},
  [79] = {.lex_state = 58},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 58},
  [82] = {.lex_state = 153},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 160},
  [86] = {.lex_state = 160},
  [87] = {.lex_state = 153},
  [88] = {.lex_state = 153},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 159},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 159},
  [94] = {.lex_state = 159},
  [95] = {.lex_state = 159},
  [96] = {.lex_state = 159},
  [97] = {.lex_state = 160},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 160},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 159},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 159},
  [107] = {.lex_state = 159},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 159},
  [110] = {.lex_state = 159},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 159},
  [114] = {.lex_state = 159},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 160},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 160},
  [122] = {.lex_state = 160},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 159},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 160},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 159},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 159},
  [139] = {.lex_state = 159},
  [140] = {.lex_state = 160},
  [141] = {.lex_state = 159},
  [142] = {.lex_state = 161},
  [143] = {.lex_state = 160},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 159},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 160},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 159},
  [152] = {.lex_state = 160},
  [153] = {.lex_state = 160},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 160},
  [159] = {.lex_state = 160},
  [160] = {.lex_state = 159},
  [161] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym__local] = ACTIONS(1),
    [sym__exposed] = ACTIONS(1),
    [sym__get] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__query] = ACTIONS(1),
    [sym__orderBy] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
    [aux_sym__name_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_numeric_parameter_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [aux_sym__num_literal_token1] = ACTIONS(1),
    [aux_sym__exp_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym__class_constructor] = ACTIONS(1),
    [sym__var] = ACTIONS(1),
    [sym__property] = ACTIONS(1),
    [sym__alias] = ACTIONS(1),
    [sym__declare] = ACTIONS(1),
    [sym__function] = ACTIONS(1),
    [sym__return] = ACTIONS(1),
    [sym__break] = ACTIONS(1),
    [sym__continue] = ACTIONS(1),
    [sym__this] = ACTIONS(1),
    [sym__form] = ACTIONS(1),
    [sym__class_store_4d] = ACTIONS(1),
    [sym__class_store_ds] = ACTIONS(1),
    [sym__class_store_cs] = ACTIONS(1),
    [sym__basic_type_text] = ACTIONS(1),
    [sym__basic_type_date] = ACTIONS(1),
    [sym__basic_type_time] = ACTIONS(1),
    [sym__basic_type_boolean] = ACTIONS(1),
    [sym__basic_type_integer] = ACTIONS(1),
    [sym__basic_type_real] = ACTIONS(1),
    [sym__basic_type_pointer] = ACTIONS(1),
    [sym__basic_type_picture] = ACTIONS(1),
    [sym__basic_type_blob] = ACTIONS(1),
    [sym__basic_type_collection] = ACTIONS(1),
    [sym__basic_type_variant] = ACTIONS(1),
    [sym__basic_type_object] = ACTIONS(1),
    [sym__system_variable_ok] = ACTIONS(1),
    [sym__system_variable_document] = ACTIONS(1),
    [sym__system_variable_flddelimit] = ACTIONS(1),
    [sym__system_variable_recdelimit] = ACTIONS(1),
    [sym__system_variable_error] = ACTIONS(1),
    [sym__system_variable_error_method] = ACTIONS(1),
    [sym__system_variable_error_line] = ACTIONS(1),
    [sym__system_variable_error_formula] = ACTIONS(1),
    [sym__system_variable_mousedown] = ACTIONS(1),
    [sym__system_variable_mousex] = ACTIONS(1),
    [sym__system_variable_mousey] = ACTIONS(1),
    [sym__system_variable_keycode] = ACTIONS(1),
    [sym__system_variable_modifiers] = ACTIONS(1),
    [sym__system_variable_mouseproc] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(154),
    [sym__statement] = STATE(9),
    [sym__scope] = STATE(122),
    [sym_function_name] = STATE(123),
    [sym_alias_name] = STATE(124),
    [sym_local_variable] = STATE(97),
    [sym_interprocess_variable] = STATE(97),
    [sym__variable] = STATE(97),
    [sym__mutable] = STATE(99),
    [sym_numeric_parameter] = STATE(97),
    [sym_function_block] = STATE(9),
    [sym_declare_block] = STATE(9),
    [sym_alias_block] = STATE(9),
    [sym_class_extends] = STATE(11),
    [sym_class_constructor] = STATE(9),
    [sym_var_declaration_block] = STATE(9),
    [sym_property_declaration_block] = STATE(9),
    [sym_return_block] = STATE(9),
    [sym_assignment_block] = STATE(9),
    [sym_function_call] = STATE(9),
    [sym_var] = STATE(83),
    [sym_property] = STATE(133),
    [sym_alias] = STATE(135),
    [sym_declare] = STATE(115),
    [sym_function] = STATE(78),
    [sym_return] = STATE(2),
    [sym_break] = STATE(9),
    [sym_continue] = STATE(9),
    [sym_this] = STATE(97),
    [aux_sym_source_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__var] = ACTIONS(15),
    [sym__property] = ACTIONS(17),
    [sym__alias] = ACTIONS(19),
    [sym__declare] = ACTIONS(21),
    [sym__function] = ACTIONS(23),
    [sym__return] = ACTIONS(25),
    [sym__break] = ACTIONS(27),
    [sym__continue] = ACTIONS(29),
    [sym__this] = ACTIONS(31),
  },
  [2] = {
    [sym_value] = STATE(43),
    [sym_constant] = STATE(39),
    [sym__name] = STATE(26),
    [sym_class] = STATE(39),
    [sym_local_variable] = STATE(39),
    [sym_interprocess_variable] = STATE(39),
    [sym_numeric_parameter] = STATE(39),
    [sym__expression_name] = STATE(43),
    [sym__functional_expression] = STATE(62),
    [sym__expression] = STATE(62),
    [sym_time] = STATE(35),
    [sym_date] = STATE(35),
    [sym__dec_literal] = STATE(38),
    [sym__num_literal] = STATE(38),
    [sym__exp_literal] = STATE(38),
    [sym_number] = STATE(35),
    [sym_string] = STATE(35),
    [sym_this] = STATE(39),
    [sym_form] = STATE(39),
    [sym__class_store] = STATE(45),
    [sym__class] = STATE(56),
    [sym__basic_type] = STATE(56),
    [sym_system_variable] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__local] = ACTIONS(35),
    [sym__exposed] = ACTIONS(35),
    [aux_sym__name_token1] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(33),
    [aux_sym_numeric_parameter_token1] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [sym__hex_literal] = ACTIONS(45),
    [aux_sym__num_literal_token1] = ACTIONS(39),
    [aux_sym__exp_literal_token1] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym__class_constructor] = ACTIONS(33),
    [sym__var] = ACTIONS(35),
    [sym__property] = ACTIONS(35),
    [sym__alias] = ACTIONS(35),
    [sym__declare] = ACTIONS(33),
    [sym__function] = ACTIONS(35),
    [sym__return] = ACTIONS(35),
    [sym__break] = ACTIONS(35),
    [sym__continue] = ACTIONS(35),
    [sym__this] = ACTIONS(35),
    [sym__form] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(53),
    [sym__class_store_cs] = ACTIONS(53),
    [sym__basic_type_text] = ACTIONS(55),
    [sym__basic_type_date] = ACTIONS(55),
    [sym__basic_type_time] = ACTIONS(55),
    [sym__basic_type_boolean] = ACTIONS(55),
    [sym__basic_type_integer] = ACTIONS(55),
    [sym__basic_type_real] = ACTIONS(55),
    [sym__basic_type_pointer] = ACTIONS(55),
    [sym__basic_type_picture] = ACTIONS(55),
    [sym__basic_type_blob] = ACTIONS(55),
    [sym__basic_type_collection] = ACTIONS(55),
    [sym__basic_type_variant] = ACTIONS(55),
    [sym__basic_type_object] = ACTIONS(55),
    [sym__system_variable_ok] = ACTIONS(57),
    [sym__system_variable_document] = ACTIONS(57),
    [sym__system_variable_flddelimit] = ACTIONS(57),
    [sym__system_variable_recdelimit] = ACTIONS(57),
    [sym__system_variable_error] = ACTIONS(57),
    [sym__system_variable_error_method] = ACTIONS(59),
    [sym__system_variable_error_line] = ACTIONS(59),
    [sym__system_variable_error_formula] = ACTIONS(59),
    [sym__system_variable_mousedown] = ACTIONS(57),
    [sym__system_variable_mousex] = ACTIONS(57),
    [sym__system_variable_mousey] = ACTIONS(57),
    [sym__system_variable_keycode] = ACTIONS(57),
    [sym__system_variable_modifiers] = ACTIONS(57),
    [sym__system_variable_mouseproc] = ACTIONS(57),
  },
  [3] = {
    [sym_value] = STATE(43),
    [sym_constant] = STATE(39),
    [sym__name] = STATE(26),
    [sym_class] = STATE(39),
    [sym_local_variable] = STATE(39),
    [sym_interprocess_variable] = STATE(39),
    [sym_numeric_parameter] = STATE(39),
    [sym__expression_name] = STATE(43),
    [sym__functional_expression] = STATE(102),
    [sym__expression] = STATE(102),
    [sym_time] = STATE(35),
    [sym_date] = STATE(35),
    [sym__dec_literal] = STATE(38),
    [sym__num_literal] = STATE(38),
    [sym__exp_literal] = STATE(38),
    [sym_number] = STATE(35),
    [sym_string] = STATE(35),
    [sym_this] = STATE(39),
    [sym_form] = STATE(39),
    [sym__class_store] = STATE(80),
    [sym__class] = STATE(12),
    [sym__basic_type] = STATE(12),
    [sym_system_variable] = STATE(39),
    [aux_sym__name_token1] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [sym__hex_literal] = ACTIONS(45),
    [aux_sym__num_literal_token1] = ACTIONS(39),
    [aux_sym__exp_literal_token1] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym__this] = ACTIONS(63),
    [sym__form] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(65),
    [sym__class_store_ds] = ACTIONS(67),
    [sym__class_store_cs] = ACTIONS(67),
    [sym__basic_type_text] = ACTIONS(69),
    [sym__basic_type_date] = ACTIONS(69),
    [sym__basic_type_time] = ACTIONS(69),
    [sym__basic_type_boolean] = ACTIONS(69),
    [sym__basic_type_integer] = ACTIONS(69),
    [sym__basic_type_real] = ACTIONS(69),
    [sym__basic_type_pointer] = ACTIONS(69),
    [sym__basic_type_picture] = ACTIONS(69),
    [sym__basic_type_blob] = ACTIONS(69),
    [sym__basic_type_collection] = ACTIONS(69),
    [sym__basic_type_variant] = ACTIONS(69),
    [sym__basic_type_object] = ACTIONS(69),
    [sym__system_variable_ok] = ACTIONS(57),
    [sym__system_variable_document] = ACTIONS(57),
    [sym__system_variable_flddelimit] = ACTIONS(57),
    [sym__system_variable_recdelimit] = ACTIONS(57),
    [sym__system_variable_error] = ACTIONS(57),
    [sym__system_variable_error_method] = ACTIONS(59),
    [sym__system_variable_error_line] = ACTIONS(59),
    [sym__system_variable_error_formula] = ACTIONS(59),
    [sym__system_variable_mousedown] = ACTIONS(57),
    [sym__system_variable_mousex] = ACTIONS(57),
    [sym__system_variable_mousey] = ACTIONS(57),
    [sym__system_variable_keycode] = ACTIONS(57),
    [sym__system_variable_modifiers] = ACTIONS(57),
    [sym__system_variable_mouseproc] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(37), 1,
      aux_sym__name_token1,
    ACTIONS(41), 1,
      anon_sym_QMARK,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__form,
    ACTIONS(63), 1,
      sym__this,
    ACTIONS(65), 1,
      sym__class_store_4d,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__name,
    STATE(80), 1,
      sym__class_store,
    STATE(112), 1,
      sym__functional_expression,
    ACTIONS(39), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(45), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(67), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    STATE(150), 2,
      sym_value,
      sym__expression_name,
    ACTIONS(59), 3,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(35), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 8,
      sym_constant,
      sym_class,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_this,
      sym_form,
      sym_system_variable,
    ACTIONS(57), 11,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
    ACTIONS(69), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [113] = 23,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(37), 1,
      aux_sym__name_token1,
    ACTIONS(41), 1,
      anon_sym_QMARK,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__form,
    ACTIONS(51), 1,
      sym__class_store_4d,
    ACTIONS(63), 1,
      sym__this,
    STATE(26), 1,
      sym__name,
    STATE(45), 1,
      sym__class_store,
    ACTIONS(39), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(45), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(53), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(43), 2,
      sym_value,
      sym__expression_name,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    STATE(71), 2,
      sym__functional_expression,
      sym__expression,
    ACTIONS(59), 3,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(35), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 8,
      sym_constant,
      sym_class,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_this,
      sym_form,
      sym_system_variable,
    ACTIONS(57), 11,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
    ACTIONS(55), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [224] = 23,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(37), 1,
      aux_sym__name_token1,
    ACTIONS(41), 1,
      anon_sym_QMARK,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__form,
    ACTIONS(63), 1,
      sym__this,
    ACTIONS(65), 1,
      sym__class_store_4d,
    STATE(26), 1,
      sym__name,
    STATE(80), 1,
      sym__class_store,
    ACTIONS(39), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(45), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(67), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    STATE(43), 2,
      sym_value,
      sym__expression_name,
    STATE(129), 2,
      sym__functional_expression,
      sym__expression,
    ACTIONS(59), 3,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(35), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 8,
      sym_constant,
      sym_class,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_this,
      sym_form,
      sym_system_variable,
    ACTIONS(57), 11,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
    ACTIONS(69), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [335] = 23,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(37), 1,
      aux_sym__name_token1,
    ACTIONS(41), 1,
      anon_sym_QMARK,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__form,
    ACTIONS(63), 1,
      sym__this,
    ACTIONS(65), 1,
      sym__class_store_4d,
    STATE(26), 1,
      sym__name,
    STATE(80), 1,
      sym__class_store,
    STATE(127), 1,
      sym__functional_expression,
    ACTIONS(39), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(45), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(67), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    STATE(150), 2,
      sym_value,
      sym__expression_name,
    ACTIONS(59), 3,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(35), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 8,
      sym_constant,
      sym_class,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_this,
      sym_form,
      sym_system_variable,
    ACTIONS(57), 11,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
    ACTIONS(69), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [445] = 2,
    ACTIONS(73), 14,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym__class_constructor,
      sym__declare,
      sym__class_store_4d,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    ACTIONS(75), 39,
      sym__local,
      sym__exposed,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
      sym__var,
      sym__property,
      sym__alias,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [503] = 28,
    ACTIONS(5), 1,
      sym__local,
    ACTIONS(7), 1,
      sym__exposed,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(13), 1,
      sym__class_constructor,
    ACTIONS(15), 1,
      sym__var,
    ACTIONS(17), 1,
      sym__property,
    ACTIONS(19), 1,
      sym__alias,
    ACTIONS(21), 1,
      sym__declare,
    ACTIONS(23), 1,
      sym__function,
    ACTIONS(25), 1,
      sym__return,
    ACTIONS(27), 1,
      sym__break,
    ACTIONS(29), 1,
      sym__continue,
    ACTIONS(31), 1,
      sym__this,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_return,
    STATE(11), 1,
      sym_class_extends,
    STATE(78), 1,
      sym_function,
    STATE(83), 1,
      sym_var,
    STATE(99), 1,
      sym__mutable,
    STATE(115), 1,
      sym_declare,
    STATE(122), 1,
      sym__scope,
    STATE(123), 1,
      sym_function_name,
    STATE(124), 1,
      sym_alias_name,
    STATE(133), 1,
      sym_property,
    STATE(135), 1,
      sym_alias,
    STATE(97), 5,
      sym_local_variable,
      sym_interprocess_variable,
      sym__variable,
      sym_numeric_parameter,
      sym_this,
    STATE(10), 13,
      sym__statement,
      sym_function_block,
      sym_declare_block,
      sym_alias_block,
      sym_class_constructor,
      sym_var_declaration_block,
      sym_property_declaration_block,
      sym_return_block,
      sym_assignment_block,
      sym_function_call,
      sym_break,
      sym_continue,
      aux_sym_source_repeat1,
  [604] = 28,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym__local,
    ACTIONS(84), 1,
      sym__exposed,
    ACTIONS(87), 1,
      anon_sym_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_LT_GT,
    ACTIONS(93), 1,
      sym__class_constructor,
    ACTIONS(96), 1,
      sym__var,
    ACTIONS(99), 1,
      sym__property,
    ACTIONS(102), 1,
      sym__alias,
    ACTIONS(105), 1,
      sym__declare,
    ACTIONS(108), 1,
      sym__function,
    ACTIONS(111), 1,
      sym__return,
    ACTIONS(114), 1,
      sym__break,
    ACTIONS(117), 1,
      sym__continue,
    ACTIONS(120), 1,
      sym__this,
    STATE(2), 1,
      sym_return,
    STATE(11), 1,
      sym_class_extends,
    STATE(78), 1,
      sym_function,
    STATE(83), 1,
      sym_var,
    STATE(99), 1,
      sym__mutable,
    STATE(115), 1,
      sym_declare,
    STATE(122), 1,
      sym__scope,
    STATE(123), 1,
      sym_function_name,
    STATE(124), 1,
      sym_alias_name,
    STATE(133), 1,
      sym_property,
    STATE(135), 1,
      sym_alias,
    STATE(97), 5,
      sym_local_variable,
      sym_interprocess_variable,
      sym__variable,
      sym_numeric_parameter,
      sym_this,
    STATE(10), 13,
      sym__statement,
      sym_function_block,
      sym_declare_block,
      sym_alias_block,
      sym_class_constructor,
      sym_var_declaration_block,
      sym_property_declaration_block,
      sym_return_block,
      sym_assignment_block,
      sym_function_call,
      sym_break,
      sym_continue,
      aux_sym_source_repeat1,
  [705] = 7,
    ACTIONS(35), 1,
      sym__var,
    STATE(13), 1,
      sym__class_store,
    STATE(17), 1,
      sym_class,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(123), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(125), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
    ACTIONS(33), 14,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [754] = 2,
    ACTIONS(129), 1,
      sym__var,
    ACTIONS(127), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [792] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      sym__var,
    STATE(15), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(131), 29,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [833] = 4,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      sym__var,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(137), 29,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [874] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(146), 1,
      sym__var,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(144), 29,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [915] = 2,
    ACTIONS(142), 1,
      sym__var,
    ACTIONS(137), 30,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [951] = 2,
    ACTIONS(150), 1,
      sym__var,
    ACTIONS(148), 29,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [986] = 3,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(137), 19,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1014] = 2,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(155), 20,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1040] = 1,
    ACTIONS(159), 20,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1063] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(144), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1090] = 1,
    ACTIONS(137), 20,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1113] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(163), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1140] = 1,
    ACTIONS(165), 20,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1163] = 1,
    ACTIONS(167), 20,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1186] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(169), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1213] = 5,
    STATE(48), 1,
      sym_class,
    STATE(80), 1,
      sym__class_store,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(65), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(125), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1243] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(63), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1273] = 5,
    STATE(46), 1,
      sym_class,
    STATE(80), 1,
      sym__class_store,
    STATE(12), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(65), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(125), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1303] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(46), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1333] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(66), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1363] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(59), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1393] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(64), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1423] = 5,
    STATE(45), 1,
      sym__class_store,
    STATE(48), 1,
      sym_class,
    STATE(56), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(171), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [1453] = 1,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1474] = 1,
    ACTIONS(175), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1495] = 1,
    ACTIONS(177), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1516] = 1,
    ACTIONS(179), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1537] = 1,
    ACTIONS(181), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1558] = 1,
    ACTIONS(183), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1579] = 1,
    ACTIONS(185), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1600] = 1,
    ACTIONS(187), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1621] = 2,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1644] = 1,
    ACTIONS(193), 18,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1665] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1690] = 1,
    ACTIONS(195), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1710] = 1,
    ACTIONS(197), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1730] = 1,
    ACTIONS(199), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1750] = 3,
    ACTIONS(203), 1,
      anon_sym_DASH_GT,
    STATE(69), 1,
      sym_function_result,
    ACTIONS(201), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1774] = 1,
    ACTIONS(205), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1794] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(207), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1818] = 1,
    ACTIONS(209), 17,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1838] = 3,
    ACTIONS(203), 1,
      anon_sym_DASH_GT,
    STATE(68), 1,
      sym_function_result,
    ACTIONS(211), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1862] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(213), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1886] = 1,
    ACTIONS(215), 16,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1905] = 1,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1924] = 1,
    ACTIONS(217), 16,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1943] = 1,
    ACTIONS(219), 16,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1962] = 1,
    ACTIONS(221), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1980] = 1,
    ACTIONS(223), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [1998] = 1,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2016] = 1,
    ACTIONS(227), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2034] = 1,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2052] = 1,
    ACTIONS(231), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2070] = 1,
    ACTIONS(233), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2088] = 1,
    ACTIONS(235), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2106] = 1,
    ACTIONS(237), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2124] = 1,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2142] = 1,
    ACTIONS(241), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2160] = 1,
    ACTIONS(243), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2178] = 1,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2196] = 1,
    ACTIONS(247), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2214] = 1,
    ACTIONS(249), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2232] = 1,
    ACTIONS(251), 15,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
  [2250] = 3,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_string_repeat1,
    ACTIONS(255), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2265] = 3,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(259), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2280] = 3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(263), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2295] = 4,
    ACTIONS(268), 1,
      aux_sym__name_token1,
    STATE(126), 1,
      sym__computed,
    STATE(146), 1,
      sym__name,
    ACTIONS(266), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2311] = 4,
    ACTIONS(272), 1,
      aux_sym__name_token1,
    STATE(117), 1,
      sym__computed,
    STATE(161), 1,
      sym__name,
    ACTIONS(270), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2327] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2339] = 1,
    ACTIONS(274), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [2347] = 3,
    ACTIONS(278), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(276), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(19), 2,
      sym__name,
      sym__classic_name,
  [2359] = 3,
    ACTIONS(280), 1,
      aux_sym__name_token1,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    STATE(103), 2,
      sym__name,
      sym_local_variable,
  [2370] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      aux_sym__name_token1,
    STATE(130), 2,
      sym__name,
      sym_local_variable,
  [2381] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(86), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(286), 2,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
  [2392] = 3,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(288), 2,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
  [2403] = 2,
    ACTIONS(276), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(19), 2,
      sym__name,
      sym__classic_name,
  [2412] = 2,
    ACTIONS(290), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(20), 2,
      sym__name,
      sym__classic_name,
  [2421] = 4,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_local_variable,
    STATE(108), 1,
      sym__function_argument,
  [2434] = 3,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_var_declaration_block_repeat1,
  [2444] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_local_variable,
    STATE(125), 1,
      sym__function_argument,
  [2454] = 3,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_function_arguments_repeat1,
  [2464] = 3,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_property_declaration_block_repeat1,
  [2474] = 3,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(106), 1,
      aux_sym__function_argument_repeat1,
  [2484] = 3,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_COLON,
    STATE(106), 1,
      aux_sym__function_argument_repeat1,
  [2494] = 3,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym__function_argument_repeat1,
  [2504] = 2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(314), 2,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
  [2512] = 3,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym__functional_expression_repeat1,
  [2522] = 3,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_function_parameters,
  [2532] = 3,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym__functional_expression_repeat1,
  [2542] = 3,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_parameters_repeat1,
  [2552] = 3,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_function_parameters_repeat1,
  [2562] = 3,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_COLON,
    STATE(90), 1,
      aux_sym_var_declaration_block_repeat1,
  [2572] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym__function_argument,
    STATE(96), 1,
      sym_local_variable,
  [2582] = 3,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_parameters_repeat1,
  [2592] = 3,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(106), 1,
      aux_sym__function_argument_repeat1,
  [2602] = 3,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(94), 1,
      aux_sym__function_argument_repeat1,
  [2612] = 3,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_function_arguments_repeat1,
  [2622] = 3,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_var_declaration_block_repeat1,
  [2632] = 3,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_COLON,
    STATE(93), 1,
      aux_sym_property_declaration_block_repeat1,
  [2642] = 3,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_function_arguments_repeat1,
  [2652] = 3,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym__functional_expression_repeat1,
  [2662] = 3,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_property_declaration_block_repeat1,
  [2672] = 1,
    ACTIONS(347), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2677] = 2,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_function_arguments,
  [2684] = 2,
    ACTIONS(374), 1,
      aux_sym__name_token1,
    STATE(136), 1,
      sym__name,
  [2691] = 2,
    ACTIONS(376), 1,
      aux_sym__name_token1,
    STATE(137), 1,
      sym__name,
  [2698] = 2,
    ACTIONS(378), 1,
      sym__local,
    ACTIONS(380), 1,
      sym__function,
  [2705] = 1,
    ACTIONS(382), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [2710] = 2,
    ACTIONS(384), 1,
      aux_sym__name_token1,
    STATE(16), 1,
      sym__name,
  [2717] = 2,
    ACTIONS(386), 1,
      aux_sym_time_token1,
    ACTIONS(388), 1,
      aux_sym_date_token1,
  [2724] = 2,
    ACTIONS(23), 1,
      sym__function,
    STATE(79), 1,
      sym_function,
  [2731] = 2,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_function_arguments,
  [2738] = 2,
    ACTIONS(390), 1,
      aux_sym__name_token1,
    STATE(54), 1,
      sym__name,
  [2745] = 1,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2750] = 2,
    ACTIONS(392), 1,
      aux_sym__name_token1,
    STATE(161), 1,
      sym__name,
  [2757] = 1,
    ACTIONS(321), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2762] = 2,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym_local_variable,
  [2769] = 1,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2774] = 1,
    ACTIONS(356), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2779] = 2,
    ACTIONS(394), 1,
      aux_sym__name_token1,
    STATE(22), 1,
      sym__name,
  [2786] = 2,
    ACTIONS(396), 1,
      aux_sym__name_token1,
    STATE(85), 1,
      sym__name,
  [2793] = 2,
    ACTIONS(398), 1,
      aux_sym__name_token1,
    STATE(110), 1,
      sym__name,
  [2800] = 2,
    ACTIONS(378), 1,
      sym__exposed,
    ACTIONS(380), 1,
      sym__function,
  [2807] = 2,
    ACTIONS(400), 1,
      aux_sym__name_token1,
    STATE(144), 1,
      sym__name,
  [2814] = 1,
    ACTIONS(370), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2819] = 1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
  [2823] = 1,
    ACTIONS(404), 1,
      anon_sym_DASH,
  [2827] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [2831] = 1,
    ACTIONS(408), 1,
      sym__function,
  [2835] = 1,
    ACTIONS(410), 1,
      anon_sym_DASH,
  [2839] = 1,
    ACTIONS(412), 1,
      aux_sym_date_token1,
  [2843] = 1,
    ACTIONS(412), 1,
      aux_sym_time_token1,
  [2847] = 1,
    ACTIONS(414), 1,
      aux_sym__name_token1,
  [2851] = 1,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [2855] = 1,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
  [2859] = 1,
    ACTIONS(420), 1,
      anon_sym_QMARK,
  [2863] = 1,
    ACTIONS(422), 1,
      anon_sym_BANG,
  [2867] = 1,
    ACTIONS(424), 1,
      aux_sym_time_token1,
  [2871] = 1,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
  [2875] = 1,
    ACTIONS(426), 1,
      anon_sym_DASH,
  [2879] = 1,
    ACTIONS(428), 1,
      aux_sym_time_token1,
  [2883] = 1,
    ACTIONS(430), 1,
      aux_sym_time_token1,
  [2887] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [2891] = 1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [2895] = 1,
    ACTIONS(436), 1,
      aux_sym__name_token1,
  [2899] = 1,
    ACTIONS(438), 1,
      aux_sym__name_token1,
  [2903] = 1,
    ACTIONS(440), 1,
      aux_sym_time_token1,
  [2907] = 1,
    ACTIONS(442), 1,
      aux_sym_time_token1,
  [2911] = 1,
    ACTIONS(444), 1,
      anon_sym_DASH,
  [2915] = 1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 445,
  [SMALL_STATE(9)] = 503,
  [SMALL_STATE(10)] = 604,
  [SMALL_STATE(11)] = 705,
  [SMALL_STATE(12)] = 754,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 833,
  [SMALL_STATE(15)] = 874,
  [SMALL_STATE(16)] = 915,
  [SMALL_STATE(17)] = 951,
  [SMALL_STATE(18)] = 986,
  [SMALL_STATE(19)] = 1014,
  [SMALL_STATE(20)] = 1040,
  [SMALL_STATE(21)] = 1063,
  [SMALL_STATE(22)] = 1090,
  [SMALL_STATE(23)] = 1113,
  [SMALL_STATE(24)] = 1140,
  [SMALL_STATE(25)] = 1163,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1213,
  [SMALL_STATE(28)] = 1243,
  [SMALL_STATE(29)] = 1273,
  [SMALL_STATE(30)] = 1303,
  [SMALL_STATE(31)] = 1333,
  [SMALL_STATE(32)] = 1363,
  [SMALL_STATE(33)] = 1393,
  [SMALL_STATE(34)] = 1423,
  [SMALL_STATE(35)] = 1453,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1495,
  [SMALL_STATE(38)] = 1516,
  [SMALL_STATE(39)] = 1537,
  [SMALL_STATE(40)] = 1558,
  [SMALL_STATE(41)] = 1579,
  [SMALL_STATE(42)] = 1600,
  [SMALL_STATE(43)] = 1621,
  [SMALL_STATE(44)] = 1644,
  [SMALL_STATE(45)] = 1665,
  [SMALL_STATE(46)] = 1690,
  [SMALL_STATE(47)] = 1710,
  [SMALL_STATE(48)] = 1730,
  [SMALL_STATE(49)] = 1750,
  [SMALL_STATE(50)] = 1774,
  [SMALL_STATE(51)] = 1794,
  [SMALL_STATE(52)] = 1818,
  [SMALL_STATE(53)] = 1838,
  [SMALL_STATE(54)] = 1862,
  [SMALL_STATE(55)] = 1886,
  [SMALL_STATE(56)] = 1905,
  [SMALL_STATE(57)] = 1924,
  [SMALL_STATE(58)] = 1943,
  [SMALL_STATE(59)] = 1962,
  [SMALL_STATE(60)] = 1980,
  [SMALL_STATE(61)] = 1998,
  [SMALL_STATE(62)] = 2016,
  [SMALL_STATE(63)] = 2034,
  [SMALL_STATE(64)] = 2052,
  [SMALL_STATE(65)] = 2070,
  [SMALL_STATE(66)] = 2088,
  [SMALL_STATE(67)] = 2106,
  [SMALL_STATE(68)] = 2124,
  [SMALL_STATE(69)] = 2142,
  [SMALL_STATE(70)] = 2160,
  [SMALL_STATE(71)] = 2178,
  [SMALL_STATE(72)] = 2196,
  [SMALL_STATE(73)] = 2214,
  [SMALL_STATE(74)] = 2232,
  [SMALL_STATE(75)] = 2250,
  [SMALL_STATE(76)] = 2265,
  [SMALL_STATE(77)] = 2280,
  [SMALL_STATE(78)] = 2295,
  [SMALL_STATE(79)] = 2311,
  [SMALL_STATE(80)] = 2327,
  [SMALL_STATE(81)] = 2339,
  [SMALL_STATE(82)] = 2347,
  [SMALL_STATE(83)] = 2359,
  [SMALL_STATE(84)] = 2370,
  [SMALL_STATE(85)] = 2381,
  [SMALL_STATE(86)] = 2392,
  [SMALL_STATE(87)] = 2403,
  [SMALL_STATE(88)] = 2412,
  [SMALL_STATE(89)] = 2421,
  [SMALL_STATE(90)] = 2434,
  [SMALL_STATE(91)] = 2444,
  [SMALL_STATE(92)] = 2454,
  [SMALL_STATE(93)] = 2464,
  [SMALL_STATE(94)] = 2474,
  [SMALL_STATE(95)] = 2484,
  [SMALL_STATE(96)] = 2494,
  [SMALL_STATE(97)] = 2504,
  [SMALL_STATE(98)] = 2512,
  [SMALL_STATE(99)] = 2522,
  [SMALL_STATE(100)] = 2532,
  [SMALL_STATE(101)] = 2542,
  [SMALL_STATE(102)] = 2552,
  [SMALL_STATE(103)] = 2562,
  [SMALL_STATE(104)] = 2572,
  [SMALL_STATE(105)] = 2582,
  [SMALL_STATE(106)] = 2592,
  [SMALL_STATE(107)] = 2602,
  [SMALL_STATE(108)] = 2612,
  [SMALL_STATE(109)] = 2622,
  [SMALL_STATE(110)] = 2632,
  [SMALL_STATE(111)] = 2642,
  [SMALL_STATE(112)] = 2652,
  [SMALL_STATE(113)] = 2662,
  [SMALL_STATE(114)] = 2672,
  [SMALL_STATE(115)] = 2677,
  [SMALL_STATE(116)] = 2684,
  [SMALL_STATE(117)] = 2691,
  [SMALL_STATE(118)] = 2698,
  [SMALL_STATE(119)] = 2705,
  [SMALL_STATE(120)] = 2710,
  [SMALL_STATE(121)] = 2717,
  [SMALL_STATE(122)] = 2724,
  [SMALL_STATE(123)] = 2731,
  [SMALL_STATE(124)] = 2738,
  [SMALL_STATE(125)] = 2745,
  [SMALL_STATE(126)] = 2750,
  [SMALL_STATE(127)] = 2757,
  [SMALL_STATE(128)] = 2762,
  [SMALL_STATE(129)] = 2769,
  [SMALL_STATE(130)] = 2774,
  [SMALL_STATE(131)] = 2779,
  [SMALL_STATE(132)] = 2786,
  [SMALL_STATE(133)] = 2793,
  [SMALL_STATE(134)] = 2800,
  [SMALL_STATE(135)] = 2807,
  [SMALL_STATE(136)] = 2814,
  [SMALL_STATE(137)] = 2819,
  [SMALL_STATE(138)] = 2823,
  [SMALL_STATE(139)] = 2827,
  [SMALL_STATE(140)] = 2831,
  [SMALL_STATE(141)] = 2835,
  [SMALL_STATE(142)] = 2839,
  [SMALL_STATE(143)] = 2843,
  [SMALL_STATE(144)] = 2847,
  [SMALL_STATE(145)] = 2851,
  [SMALL_STATE(146)] = 2855,
  [SMALL_STATE(147)] = 2859,
  [SMALL_STATE(148)] = 2863,
  [SMALL_STATE(149)] = 2867,
  [SMALL_STATE(150)] = 2871,
  [SMALL_STATE(151)] = 2875,
  [SMALL_STATE(152)] = 2879,
  [SMALL_STATE(153)] = 2883,
  [SMALL_STATE(154)] = 2887,
  [SMALL_STATE(155)] = 2891,
  [SMALL_STATE(156)] = 2895,
  [SMALL_STATE(157)] = 2899,
  [SMALL_STATE(158)] = 2903,
  [SMALL_STATE(159)] = 2907,
  [SMALL_STATE(160)] = 2911,
  [SMALL_STATE(161)] = 2915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(134),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(118),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(88),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(119),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(157),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(156),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(155),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(70),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(120),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(131),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_name, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_name, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(77),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(128),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(84),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(91),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(116),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [432] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fourd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
