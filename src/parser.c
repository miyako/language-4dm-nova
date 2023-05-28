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
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 131
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
  sym__expression = 94,
  sym_time = 95,
  sym_date = 96,
  sym__dec_literal = 97,
  sym__num_literal = 98,
  sym__exp_literal = 99,
  sym_number = 100,
  sym_string = 101,
  sym_function_block = 102,
  sym_declare_block = 103,
  sym_alias_block = 104,
  sym_class_extends = 105,
  sym_class_constructor = 106,
  sym_var_declaration_block = 107,
  sym_property_declaration_block = 108,
  sym_return_block = 109,
  sym_assignment_block = 110,
  sym_var = 111,
  sym_property = 112,
  sym_alias = 113,
  sym_declare = 114,
  sym_function = 115,
  sym_return = 116,
  sym_break = 117,
  sym_continue = 118,
  sym_this = 119,
  sym__class_store = 120,
  sym__class = 121,
  sym__basic_type = 122,
  sym_system_variable = 123,
  aux_sym_source_repeat1 = 124,
  aux_sym__function_argument_repeat1 = 125,
  aux_sym_function_arguments_repeat1 = 126,
  aux_sym__mutable_repeat1 = 127,
  aux_sym_string_repeat1 = 128,
  aux_sym_var_declaration_block_repeat1 = 129,
  aux_sym_property_declaration_block_repeat1 = 130,
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
  [sym__expression] = "_expression",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_function_block] = "function_block",
  [sym_declare_block] = "declare_block",
  [sym_alias_block] = "alias_block",
  [sym_class_extends] = "class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_var_declaration_block] = "var_declaration_block",
  [sym_property_declaration_block] = "property_declaration_block",
  [sym_return_block] = "return_block",
  [sym_assignment_block] = "assignment_block",
  [sym_var] = "var",
  [sym_property] = "property",
  [sym_alias] = "alias",
  [sym_declare] = "declare",
  [sym_function] = "function",
  [sym_return] = "return",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [sym_this] = "this",
  [sym__class_store] = "_class_store",
  [sym__class] = "_class",
  [sym__basic_type] = "_basic_type",
  [sym_system_variable] = "system_variable",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym__mutable_repeat1] = "_mutable_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [sym__expression] = sym__expression,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__dec_literal] = sym__dec_literal,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_function_block] = sym_function_block,
  [sym_declare_block] = sym_declare_block,
  [sym_alias_block] = sym_alias_block,
  [sym_class_extends] = sym_class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_var_declaration_block] = sym_var_declaration_block,
  [sym_property_declaration_block] = sym_property_declaration_block,
  [sym_return_block] = sym_return_block,
  [sym_assignment_block] = sym_assignment_block,
  [sym_var] = sym_var,
  [sym_property] = sym_property,
  [sym_alias] = sym_alias,
  [sym_declare] = sym_declare,
  [sym_function] = sym_function,
  [sym_return] = sym_return,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [sym_this] = sym_this,
  [sym__class_store] = sym__class_store,
  [sym__class] = sym__class,
  [sym__basic_type] = sym__basic_type,
  [sym_system_variable] = sym_system_variable,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym__mutable_repeat1] = aux_sym__mutable_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [aux_sym_string_repeat1] = {
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
      if (lookahead == '!') ADVANCE(357);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(355);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(341);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(357);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\\') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
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
          lookahead == 's') ADVANCE(387);
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
          lookahead == 'b') ADVANCE(397);
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
          lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
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
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
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
          lookahead == 'g') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
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
          lookahead == 'k') ADVANCE(383);
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
          lookahead == 'l') ADVANCE(394);
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
          lookahead == 's') ADVANCE(388);
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
          lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
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
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
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
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
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
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
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
          lookahead == 'y') ADVANCE(378);
      END_STATE();
    case 153:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(193);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      END_STATE();
    case 159:
      if (eof) ADVANCE(163);
      if (lookahead == '!') ADVANCE(357);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(339);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(342);
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
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '4') ADVANCE(34);
      if (lookahead == ';') ADVANCE(342);
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
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == ';') ADVANCE(342);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__exposed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(253);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(339);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(339);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(253);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(386);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(372);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 403:
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
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 161},
  [8] = {.lex_state = 161},
  [9] = {.lex_state = 161},
  [10] = {.lex_state = 161},
  [11] = {.lex_state = 161},
  [12] = {.lex_state = 161},
  [13] = {.lex_state = 161},
  [14] = {.lex_state = 160},
  [15] = {.lex_state = 161},
  [16] = {.lex_state = 161},
  [17] = {.lex_state = 161},
  [18] = {.lex_state = 161},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 162},
  [22] = {.lex_state = 161},
  [23] = {.lex_state = 161},
  [24] = {.lex_state = 161},
  [25] = {.lex_state = 161},
  [26] = {.lex_state = 160},
  [27] = {.lex_state = 160},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 160},
  [32] = {.lex_state = 160},
  [33] = {.lex_state = 160},
  [34] = {.lex_state = 160},
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
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 58},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 153},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 153},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 159},
  [75] = {.lex_state = 159},
  [76] = {.lex_state = 159},
  [77] = {.lex_state = 159},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 159},
  [81] = {.lex_state = 159},
  [82] = {.lex_state = 159},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 159},
  [85] = {.lex_state = 159},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 159},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 160},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 159},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 160},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 159},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 160},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 159},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 160},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 160},
  [109] = {.lex_state = 159},
  [110] = {.lex_state = 160},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 160},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 160},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 159},
  [119] = {.lex_state = 159},
  [120] = {.lex_state = 159},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 160},
  [123] = {.lex_state = 161},
  [124] = {.lex_state = 160},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 160},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 160},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 160},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 159},
  [137] = {.lex_state = 159},
  [138] = {.lex_state = 159},
  [139] = {.lex_state = 160},
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
    [sym_source] = STATE(121),
    [sym__statement] = STATE(5),
    [sym__scope] = STATE(114),
    [sym_function_name] = STATE(113),
    [sym_alias_name] = STATE(111),
    [sym_local_variable] = STATE(110),
    [sym_interprocess_variable] = STATE(110),
    [sym__variable] = STATE(110),
    [sym__mutable] = STATE(116),
    [sym_numeric_parameter] = STATE(110),
    [sym_function_block] = STATE(5),
    [sym_declare_block] = STATE(5),
    [sym_alias_block] = STATE(5),
    [sym_class_extends] = STATE(7),
    [sym_class_constructor] = STATE(5),
    [sym_var_declaration_block] = STATE(5),
    [sym_property_declaration_block] = STATE(5),
    [sym_return_block] = STATE(5),
    [sym_assignment_block] = STATE(5),
    [sym_var] = STATE(69),
    [sym_property] = STATE(105),
    [sym_alias] = STATE(102),
    [sym_declare] = STATE(101),
    [sym_function] = STATE(65),
    [sym_return] = STATE(2),
    [sym_break] = STATE(5),
    [sym_continue] = STATE(5),
    [sym_this] = STATE(110),
    [aux_sym_source_repeat1] = STATE(5),
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
    [sym_value] = STATE(57),
    [sym_constant] = STATE(55),
    [sym__name] = STATE(27),
    [sym_class] = STATE(55),
    [sym_local_variable] = STATE(55),
    [sym_interprocess_variable] = STATE(55),
    [sym_numeric_parameter] = STATE(55),
    [sym__expression] = STATE(57),
    [sym_time] = STATE(58),
    [sym_date] = STATE(58),
    [sym__dec_literal] = STATE(52),
    [sym__num_literal] = STATE(52),
    [sym__exp_literal] = STATE(52),
    [sym_number] = STATE(58),
    [sym_string] = STATE(58),
    [sym__class_store] = STATE(28),
    [sym__class] = STATE(46),
    [sym__basic_type] = STATE(46),
    [sym_system_variable] = STATE(55),
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
    [sym__class_store_4d] = ACTIONS(49),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__basic_type_text] = ACTIONS(53),
    [sym__basic_type_date] = ACTIONS(53),
    [sym__basic_type_time] = ACTIONS(53),
    [sym__basic_type_boolean] = ACTIONS(53),
    [sym__basic_type_integer] = ACTIONS(53),
    [sym__basic_type_real] = ACTIONS(53),
    [sym__basic_type_pointer] = ACTIONS(53),
    [sym__basic_type_picture] = ACTIONS(53),
    [sym__basic_type_blob] = ACTIONS(53),
    [sym__basic_type_collection] = ACTIONS(53),
    [sym__basic_type_variant] = ACTIONS(53),
    [sym__basic_type_object] = ACTIONS(53),
    [sym__system_variable_ok] = ACTIONS(55),
    [sym__system_variable_document] = ACTIONS(55),
    [sym__system_variable_flddelimit] = ACTIONS(55),
    [sym__system_variable_recdelimit] = ACTIONS(55),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(57),
    [sym__system_variable_error_line] = ACTIONS(57),
    [sym__system_variable_error_formula] = ACTIONS(57),
    [sym__system_variable_mousedown] = ACTIONS(55),
    [sym__system_variable_mousex] = ACTIONS(55),
    [sym__system_variable_mousey] = ACTIONS(55),
    [sym__system_variable_keycode] = ACTIONS(55),
    [sym__system_variable_modifiers] = ACTIONS(55),
    [sym__system_variable_mouseproc] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
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
      sym__class_store_4d,
    STATE(27), 1,
      sym__name,
    STATE(28), 1,
      sym__class_store,
    ACTIONS(39), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(45), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(51), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    STATE(53), 2,
      sym_value,
      sym__expression,
    ACTIONS(57), 3,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
    STATE(52), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(58), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(55), 6,
      sym_constant,
      sym_class,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_system_variable,
    ACTIONS(55), 11,
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
    ACTIONS(53), 12,
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
  [99] = 2,
    ACTIONS(59), 14,
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
    ACTIONS(61), 38,
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
  [156] = 28,
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
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_return,
    STATE(7), 1,
      sym_class_extends,
    STATE(65), 1,
      sym_function,
    STATE(69), 1,
      sym_var,
    STATE(101), 1,
      sym_declare,
    STATE(102), 1,
      sym_alias,
    STATE(105), 1,
      sym_property,
    STATE(111), 1,
      sym_alias_name,
    STATE(113), 1,
      sym_function_name,
    STATE(114), 1,
      sym__scope,
    STATE(116), 1,
      sym__mutable,
    STATE(110), 5,
      sym_local_variable,
      sym_interprocess_variable,
      sym__variable,
      sym_numeric_parameter,
      sym_this,
    STATE(6), 12,
      sym__statement,
      sym_function_block,
      sym_declare_block,
      sym_alias_block,
      sym_class_constructor,
      sym_var_declaration_block,
      sym_property_declaration_block,
      sym_return_block,
      sym_assignment_block,
      sym_break,
      sym_continue,
      aux_sym_source_repeat1,
  [256] = 28,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__local,
    ACTIONS(70), 1,
      sym__exposed,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(76), 1,
      anon_sym_LT_GT,
    ACTIONS(79), 1,
      sym__class_constructor,
    ACTIONS(82), 1,
      sym__var,
    ACTIONS(85), 1,
      sym__property,
    ACTIONS(88), 1,
      sym__alias,
    ACTIONS(91), 1,
      sym__declare,
    ACTIONS(94), 1,
      sym__function,
    ACTIONS(97), 1,
      sym__return,
    ACTIONS(100), 1,
      sym__break,
    ACTIONS(103), 1,
      sym__continue,
    ACTIONS(106), 1,
      sym__this,
    STATE(2), 1,
      sym_return,
    STATE(7), 1,
      sym_class_extends,
    STATE(65), 1,
      sym_function,
    STATE(69), 1,
      sym_var,
    STATE(101), 1,
      sym_declare,
    STATE(102), 1,
      sym_alias,
    STATE(105), 1,
      sym_property,
    STATE(111), 1,
      sym_alias_name,
    STATE(113), 1,
      sym_function_name,
    STATE(114), 1,
      sym__scope,
    STATE(116), 1,
      sym__mutable,
    STATE(110), 5,
      sym_local_variable,
      sym_interprocess_variable,
      sym__variable,
      sym_numeric_parameter,
      sym_this,
    STATE(6), 12,
      sym__statement,
      sym_function_block,
      sym_declare_block,
      sym_alias_block,
      sym_class_constructor,
      sym_var_declaration_block,
      sym_property_declaration_block,
      sym_return_block,
      sym_assignment_block,
      sym_break,
      sym_continue,
      aux_sym_source_repeat1,
  [356] = 7,
    ACTIONS(35), 1,
      sym__var,
    STATE(9), 1,
      sym__class_store,
    STATE(13), 1,
      sym_class,
    STATE(11), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(109), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(111), 12,
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
  [405] = 4,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      sym__var,
    STATE(8), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(113), 29,
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
  [446] = 4,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      sym__var,
    STATE(10), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(120), 29,
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
  [487] = 4,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      sym__var,
    STATE(8), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(126), 29,
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
  [528] = 2,
    ACTIONS(132), 1,
      sym__var,
    ACTIONS(130), 31,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
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
  [565] = 2,
    ACTIONS(118), 1,
      sym__var,
    ACTIONS(113), 30,
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
  [601] = 2,
    ACTIONS(136), 1,
      sym__var,
    ACTIONS(134), 29,
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
  [636] = 3,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(113), 18,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
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
  [663] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(50), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [693] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(44), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [723] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(36), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [753] = 5,
    STATE(32), 1,
      sym_class,
    STATE(73), 1,
      sym__class_store,
    STATE(11), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(143), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(111), 12,
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
  [783] = 1,
    ACTIONS(113), 19,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
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
  [805] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(126), 17,
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
  [831] = 2,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 18,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
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
  [855] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(32), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [885] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(43), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [915] = 5,
    STATE(28), 1,
      sym__class_store,
    STATE(40), 1,
      sym_class,
    STATE(46), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(49), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(141), 12,
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
  [945] = 5,
    STATE(36), 1,
      sym_class,
    STATE(73), 1,
      sym__class_store,
    STATE(11), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(143), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(111), 12,
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
  [975] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(151), 15,
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
  [999] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(153), 15,
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
  [1023] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(120), 15,
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
  [1047] = 1,
    ACTIONS(155), 17,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
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
  [1067] = 3,
    ACTIONS(159), 1,
      anon_sym_DASH_GT,
    STATE(49), 1,
      sym_function_result,
    ACTIONS(157), 15,
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
  [1091] = 1,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      sym__local,
      sym__exposed,
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
  [1111] = 1,
    ACTIONS(163), 17,
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
  [1131] = 3,
    ACTIONS(159), 1,
      anon_sym_DASH_GT,
    STATE(51), 1,
      sym_function_result,
    ACTIONS(165), 15,
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
  [1155] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(167), 15,
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
  [1179] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(169), 15,
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
  [1203] = 1,
    ACTIONS(171), 17,
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
  [1223] = 1,
    ACTIONS(173), 16,
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
  [1242] = 1,
    ACTIONS(175), 16,
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
  [1261] = 1,
    ACTIONS(177), 16,
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
  [1280] = 1,
    ACTIONS(179), 15,
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
  [1298] = 1,
    ACTIONS(181), 15,
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
  [1316] = 1,
    ACTIONS(183), 15,
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
  [1334] = 1,
    ACTIONS(185), 15,
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
  [1352] = 1,
    ACTIONS(187), 15,
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
  [1370] = 1,
    ACTIONS(189), 15,
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
  [1388] = 1,
    ACTIONS(130), 15,
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
  [1406] = 1,
    ACTIONS(191), 15,
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
  [1424] = 1,
    ACTIONS(193), 15,
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
  [1442] = 1,
    ACTIONS(195), 15,
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
  [1460] = 1,
    ACTIONS(197), 15,
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
  [1478] = 1,
    ACTIONS(199), 15,
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
  [1496] = 1,
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
  [1514] = 1,
    ACTIONS(203), 15,
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
  [1532] = 1,
    ACTIONS(205), 15,
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
  [1550] = 1,
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
  [1568] = 1,
    ACTIONS(209), 15,
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
  [1586] = 1,
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
  [1604] = 1,
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
  [1622] = 1,
    ACTIONS(215), 15,
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
  [1640] = 1,
    ACTIONS(217), 15,
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
  [1658] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(221), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1673] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(225), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1688] = 3,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(230), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1703] = 4,
    ACTIONS(234), 1,
      aux_sym__name_token1,
    STATE(95), 1,
      sym__computed,
    STATE(128), 1,
      sym__name,
    ACTIONS(232), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1719] = 4,
    ACTIONS(238), 1,
      aux_sym__name_token1,
    STATE(93), 1,
      sym__computed,
    STATE(115), 1,
      sym__name,
    ACTIONS(236), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1735] = 1,
    ACTIONS(240), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [1743] = 3,
    ACTIONS(244), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(242), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(21), 2,
      sym__name,
      sym__classic_name,
  [1755] = 2,
    ACTIONS(246), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(31), 2,
      sym__name,
      sym__classic_name,
  [1764] = 3,
    ACTIONS(248), 1,
      aux_sym__name_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    STATE(74), 2,
      sym__name,
      sym_local_variable,
  [1775] = 4,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_local_variable,
    STATE(83), 1,
      sym__function_argument,
  [1788] = 2,
    ACTIONS(242), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(21), 2,
      sym__name,
      sym__classic_name,
  [1797] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      aux_sym__name_token1,
    STATE(96), 2,
      sym__name,
      sym_local_variable,
  [1808] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1819] = 3,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_var_declaration_block_repeat1,
  [1829] = 3,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(91), 1,
      aux_sym__function_argument_repeat1,
  [1839] = 3,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym__function_argument_repeat1,
  [1849] = 3,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_var_declaration_block_repeat1,
  [1859] = 3,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_function_arguments_repeat1,
  [1869] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym__function_argument,
    STATE(81), 1,
      sym_local_variable,
  [1879] = 3,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_property_declaration_block_repeat1,
  [1889] = 3,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_COLON,
    STATE(85), 1,
      aux_sym__function_argument_repeat1,
  [1899] = 3,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_property_declaration_block_repeat1,
  [1909] = 3,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_function_arguments_repeat1,
  [1919] = 3,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_var_declaration_block_repeat1,
  [1929] = 3,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym__function_argument_repeat1,
  [1939] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_local_variable,
    STATE(107), 1,
      sym__function_argument,
  [1949] = 3,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_property_declaration_block_repeat1,
  [1959] = 3,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_function_arguments_repeat1,
  [1969] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(302), 1,
      anon_sym_COLON_EQ,
    STATE(90), 1,
      aux_sym__mutable_repeat1,
  [1979] = 3,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
  [1989] = 3,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym__function_argument_repeat1,
  [1999] = 1,
    ACTIONS(308), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [2004] = 2,
    ACTIONS(310), 1,
      aux_sym__name_token1,
    STATE(128), 1,
      sym__name,
  [2011] = 2,
    ACTIONS(312), 1,
      sym__exposed,
    ACTIONS(314), 1,
      sym__function,
  [2018] = 2,
    ACTIONS(316), 1,
      aux_sym__name_token1,
    STATE(134), 1,
      sym__name,
  [2025] = 1,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2030] = 2,
    ACTIONS(318), 1,
      aux_sym__name_token1,
    STATE(12), 1,
      sym__name,
  [2037] = 1,
    ACTIONS(320), 2,
      anon_sym_COLON_EQ,
      anon_sym_DOT,
  [2042] = 2,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym_local_variable,
  [2049] = 1,
    ACTIONS(285), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2054] = 2,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_function_arguments,
  [2061] = 2,
    ACTIONS(324), 1,
      aux_sym__name_token1,
    STATE(135), 1,
      sym__name,
  [2068] = 2,
    ACTIONS(326), 1,
      aux_sym__name_token1,
    STATE(89), 1,
      sym__name,
  [2075] = 2,
    ACTIONS(328), 1,
      aux_sym__name_token1,
    STATE(19), 1,
      sym__name,
  [2082] = 2,
    ACTIONS(330), 1,
      aux_sym__name_token1,
    STATE(87), 1,
      sym__name,
  [2089] = 2,
    ACTIONS(312), 1,
      sym__local,
    ACTIONS(314), 1,
      sym__function,
  [2096] = 1,
    ACTIONS(274), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2101] = 2,
    ACTIONS(332), 1,
      aux_sym_time_token1,
    ACTIONS(334), 1,
      aux_sym_date_token1,
  [2108] = 1,
    ACTIONS(267), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2113] = 2,
    ACTIONS(336), 1,
      anon_sym_COLON_EQ,
    ACTIONS(338), 1,
      anon_sym_DOT,
  [2120] = 2,
    ACTIONS(340), 1,
      aux_sym__name_token1,
    STATE(34), 1,
      sym__name,
  [2127] = 2,
    ACTIONS(342), 1,
      aux_sym__name_token1,
    STATE(100), 1,
      sym__name,
  [2134] = 2,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_function_arguments,
  [2141] = 2,
    ACTIONS(23), 1,
      sym__function,
    STATE(64), 1,
      sym_function,
  [2148] = 1,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
  [2152] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
  [2156] = 1,
    ACTIONS(348), 1,
      aux_sym_time_token1,
  [2160] = 1,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [2164] = 1,
    ACTIONS(352), 1,
      anon_sym_DASH,
  [2168] = 1,
    ACTIONS(354), 1,
      anon_sym_DASH,
  [2172] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [2176] = 1,
    ACTIONS(358), 1,
      aux_sym_time_token1,
  [2180] = 1,
    ACTIONS(360), 1,
      aux_sym_date_token1,
  [2184] = 1,
    ACTIONS(360), 1,
      aux_sym_time_token1,
  [2188] = 1,
    ACTIONS(362), 1,
      anon_sym_QMARK,
  [2192] = 1,
    ACTIONS(364), 1,
      anon_sym_BANG,
  [2196] = 1,
    ACTIONS(366), 1,
      aux_sym_time_token1,
  [2200] = 1,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
  [2204] = 1,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
  [2208] = 1,
    ACTIONS(372), 1,
      aux_sym__name_token1,
  [2212] = 1,
    ACTIONS(374), 1,
      aux_sym_time_token1,
  [2216] = 1,
    ACTIONS(376), 1,
      aux_sym__name_token1,
  [2220] = 1,
    ACTIONS(378), 1,
      sym__function,
  [2224] = 1,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
  [2228] = 1,
    ACTIONS(382), 1,
      aux_sym__name_token1,
  [2232] = 1,
    ACTIONS(384), 1,
      anon_sym_DASH,
  [2236] = 1,
    ACTIONS(386), 1,
      anon_sym_DASH,
  [2240] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [2244] = 1,
    ACTIONS(390), 1,
      aux_sym_time_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 356,
  [SMALL_STATE(8)] = 405,
  [SMALL_STATE(9)] = 446,
  [SMALL_STATE(10)] = 487,
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 565,
  [SMALL_STATE(13)] = 601,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 663,
  [SMALL_STATE(16)] = 693,
  [SMALL_STATE(17)] = 723,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 783,
  [SMALL_STATE(20)] = 805,
  [SMALL_STATE(21)] = 831,
  [SMALL_STATE(22)] = 855,
  [SMALL_STATE(23)] = 885,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 945,
  [SMALL_STATE(26)] = 975,
  [SMALL_STATE(27)] = 999,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1047,
  [SMALL_STATE(30)] = 1067,
  [SMALL_STATE(31)] = 1091,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1131,
  [SMALL_STATE(34)] = 1155,
  [SMALL_STATE(35)] = 1179,
  [SMALL_STATE(36)] = 1203,
  [SMALL_STATE(37)] = 1223,
  [SMALL_STATE(38)] = 1242,
  [SMALL_STATE(39)] = 1261,
  [SMALL_STATE(40)] = 1280,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1316,
  [SMALL_STATE(43)] = 1334,
  [SMALL_STATE(44)] = 1352,
  [SMALL_STATE(45)] = 1370,
  [SMALL_STATE(46)] = 1388,
  [SMALL_STATE(47)] = 1406,
  [SMALL_STATE(48)] = 1424,
  [SMALL_STATE(49)] = 1442,
  [SMALL_STATE(50)] = 1460,
  [SMALL_STATE(51)] = 1478,
  [SMALL_STATE(52)] = 1496,
  [SMALL_STATE(53)] = 1514,
  [SMALL_STATE(54)] = 1532,
  [SMALL_STATE(55)] = 1550,
  [SMALL_STATE(56)] = 1568,
  [SMALL_STATE(57)] = 1586,
  [SMALL_STATE(58)] = 1604,
  [SMALL_STATE(59)] = 1622,
  [SMALL_STATE(60)] = 1640,
  [SMALL_STATE(61)] = 1658,
  [SMALL_STATE(62)] = 1673,
  [SMALL_STATE(63)] = 1688,
  [SMALL_STATE(64)] = 1703,
  [SMALL_STATE(65)] = 1719,
  [SMALL_STATE(66)] = 1735,
  [SMALL_STATE(67)] = 1743,
  [SMALL_STATE(68)] = 1755,
  [SMALL_STATE(69)] = 1764,
  [SMALL_STATE(70)] = 1775,
  [SMALL_STATE(71)] = 1788,
  [SMALL_STATE(72)] = 1797,
  [SMALL_STATE(73)] = 1808,
  [SMALL_STATE(74)] = 1819,
  [SMALL_STATE(75)] = 1829,
  [SMALL_STATE(76)] = 1839,
  [SMALL_STATE(77)] = 1849,
  [SMALL_STATE(78)] = 1859,
  [SMALL_STATE(79)] = 1869,
  [SMALL_STATE(80)] = 1879,
  [SMALL_STATE(81)] = 1889,
  [SMALL_STATE(82)] = 1899,
  [SMALL_STATE(83)] = 1909,
  [SMALL_STATE(84)] = 1919,
  [SMALL_STATE(85)] = 1929,
  [SMALL_STATE(86)] = 1939,
  [SMALL_STATE(87)] = 1949,
  [SMALL_STATE(88)] = 1959,
  [SMALL_STATE(89)] = 1969,
  [SMALL_STATE(90)] = 1979,
  [SMALL_STATE(91)] = 1989,
  [SMALL_STATE(92)] = 1999,
  [SMALL_STATE(93)] = 2004,
  [SMALL_STATE(94)] = 2011,
  [SMALL_STATE(95)] = 2018,
  [SMALL_STATE(96)] = 2025,
  [SMALL_STATE(97)] = 2030,
  [SMALL_STATE(98)] = 2037,
  [SMALL_STATE(99)] = 2042,
  [SMALL_STATE(100)] = 2049,
  [SMALL_STATE(101)] = 2054,
  [SMALL_STATE(102)] = 2061,
  [SMALL_STATE(103)] = 2068,
  [SMALL_STATE(104)] = 2075,
  [SMALL_STATE(105)] = 2082,
  [SMALL_STATE(106)] = 2089,
  [SMALL_STATE(107)] = 2096,
  [SMALL_STATE(108)] = 2101,
  [SMALL_STATE(109)] = 2108,
  [SMALL_STATE(110)] = 2113,
  [SMALL_STATE(111)] = 2120,
  [SMALL_STATE(112)] = 2127,
  [SMALL_STATE(113)] = 2134,
  [SMALL_STATE(114)] = 2141,
  [SMALL_STATE(115)] = 2148,
  [SMALL_STATE(116)] = 2152,
  [SMALL_STATE(117)] = 2156,
  [SMALL_STATE(118)] = 2160,
  [SMALL_STATE(119)] = 2164,
  [SMALL_STATE(120)] = 2168,
  [SMALL_STATE(121)] = 2172,
  [SMALL_STATE(122)] = 2176,
  [SMALL_STATE(123)] = 2180,
  [SMALL_STATE(124)] = 2184,
  [SMALL_STATE(125)] = 2188,
  [SMALL_STATE(126)] = 2192,
  [SMALL_STATE(127)] = 2196,
  [SMALL_STATE(128)] = 2200,
  [SMALL_STATE(129)] = 2204,
  [SMALL_STATE(130)] = 2208,
  [SMALL_STATE(131)] = 2212,
  [SMALL_STATE(132)] = 2216,
  [SMALL_STATE(133)] = 2220,
  [SMALL_STATE(134)] = 2224,
  [SMALL_STATE(135)] = 2228,
  [SMALL_STATE(136)] = 2232,
  [SMALL_STATE(137)] = 2236,
  [SMALL_STATE(138)] = 2240,
  [SMALL_STATE(139)] = 2244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(94),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(106),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(67),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(92),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(132),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(130),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(129),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(66),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(59),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(98),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(97),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(104),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(99),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(86),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(112),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [356] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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
