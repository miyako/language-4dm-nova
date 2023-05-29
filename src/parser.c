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
#define STATE_COUNT 352
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 274
#define ALIAS_COUNT 0
#define TOKEN_COUNT 166
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__local = 1,
  sym__exposed = 2,
  sym__get = 3,
  sym__set = 4,
  sym__query = 5,
  sym__orderBy = 6,
  sym__letter = 7,
  aux_sym__name_token1 = 8,
  aux_sym__classic_name_token1 = 9,
  anon_sym_SEMI = 10,
  anon_sym_COLON = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_AMP = 21,
  anon_sym_PIPE = 22,
  anon_sym_CARET = 23,
  anon_sym_TILDE_PIPE = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_EQ = 27,
  anon_sym_POUND = 28,
  anon_sym_LT_LT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_QMARK_QMARK = 31,
  anon_sym_QMARK_PLUS = 32,
  anon_sym_QMARK_DASH = 33,
  anon_sym_PLUS_EQ = 34,
  anon_sym_DASH_EQ = 35,
  anon_sym_STAR_EQ = 36,
  anon_sym_SLASH_EQ = 37,
  anon_sym_DOLLAR = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_LT_GT = 41,
  aux_sym_numeric_parameter_token1 = 42,
  anon_sym_DOT = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_QMARK = 46,
  aux_sym_time_token1 = 47,
  anon_sym_BANG = 48,
  aux_sym_date_token1 = 49,
  anon_sym_BANG00_DASH00_DASH00_BANG = 50,
  sym__hex_literal = 51,
  aux_sym__num_literal_token1 = 52,
  aux_sym__exp_literal_token1 = 53,
  anon_sym_DQUOTE = 54,
  anon_sym_BSLASHr = 55,
  anon_sym_BSLASHn = 56,
  anon_sym_BSLASH_DQUOTE = 57,
  anon_sym_BSLASHt = 58,
  anon_sym_BSLASH_BSLASH = 59,
  aux_sym_string_token1 = 60,
  sym__class_constructor = 61,
  sym__class_extends = 62,
  anon_sym_COLON_EQ = 63,
  sym__var = 64,
  sym__property = 65,
  sym__alias = 66,
  sym__declare = 67,
  sym__function = 68,
  sym__return = 69,
  sym__break = 70,
  sym__continue = 71,
  sym__this = 72,
  sym__form = 73,
  sym__super = 74,
  sym__class_store_4d = 75,
  sym__class_store_ds = 76,
  sym__class_store_cs = 77,
  sym__basic_type_text = 78,
  sym__basic_type_date = 79,
  sym__basic_type_time = 80,
  sym__basic_type_boolean = 81,
  sym__basic_type_integer = 82,
  sym__basic_type_real = 83,
  sym__basic_type_pointer = 84,
  sym__basic_type_picture = 85,
  sym__basic_type_blob = 86,
  sym__basic_type_collection = 87,
  sym__basic_type_variant = 88,
  sym__basic_type_object = 89,
  sym__system_variable_ok = 90,
  sym__system_variable_document = 91,
  sym__system_variable_flddelimit = 92,
  sym__system_variable_recdelimit = 93,
  sym__system_variable_error = 94,
  sym__system_variable_error_method = 95,
  sym__system_variable_error_line = 96,
  sym__system_variable_error_formula = 97,
  sym__system_variable_mousedown = 98,
  sym__system_variable_mousex = 99,
  sym__system_variable_mousey = 100,
  sym__system_variable_keycode = 101,
  sym__system_variable_modifiers = 102,
  sym__system_variable_mouseproc = 103,
  aux_sym__classic_compiler_blob_token1 = 104,
  aux_sym__classic_compiler_boolean_token1 = 105,
  aux_sym__classic_compiler_collection_token1 = 106,
  aux_sym__classic_compiler_date_token1 = 107,
  aux_sym__classic_compiler_longint_token1 = 108,
  aux_sym__classic_compiler_object_token1 = 109,
  aux_sym__classic_compiler_picture_token1 = 110,
  aux_sym__classic_compiler_pointer_token1 = 111,
  aux_sym__classic_compiler_real_token1 = 112,
  aux_sym__classic_compiler_text_token1 = 113,
  aux_sym__classic_compiler_time_token1 = 114,
  aux_sym__classic_compiler_variant_token1 = 115,
  aux_sym__classic_array_blob_token1 = 116,
  aux_sym__classic_array_boolean_token1 = 117,
  aux_sym__classic_array_date_token1 = 118,
  aux_sym__classic_array_integer_token1 = 119,
  aux_sym__classic_array_longint_token1 = 120,
  aux_sym__classic_array_object_token1 = 121,
  aux_sym__classic_array_picture_token1 = 122,
  aux_sym__classic_array_pointer_token1 = 123,
  aux_sym__classic_array_real_token1 = 124,
  aux_sym__classic_array_text_token1 = 125,
  aux_sym__classic_array_time_token1 = 126,
  aux_sym_command_suffix_token1 = 127,
  anon_sym_SLASH_SLASH = 128,
  aux_sym_comment_token1 = 129,
  anon_sym_SLASH_STAR = 130,
  aux_sym_comment_token2 = 131,
  sym__if_e = 132,
  sym__if_f = 133,
  sym__else_e = 134,
  sym__else_f = 135,
  sym__end_if_e = 136,
  sym__end_if_f = 137,
  sym__for_each_e = 138,
  sym__for_each_f = 139,
  sym__end_for_each_e = 140,
  sym__end_for_each_f = 141,
  sym__while_e = 142,
  sym__while_f = 143,
  sym__until_e = 144,
  sym__until_f = 145,
  sym__for_e = 146,
  sym__for_f = 147,
  sym__end_for_e = 148,
  sym__end_for_f = 149,
  sym__use_e = 150,
  sym__use_f = 151,
  sym__end_use_e = 152,
  sym__end_use_f = 153,
  sym__repeat_e = 154,
  sym__repeat_f = 155,
  sym__end_while_e = 156,
  sym__end_while_f = 157,
  sym__case_of_e = 158,
  sym__case_of_f = 159,
  sym__end_case_e = 160,
  sym__end_case_f = 161,
  sym__begin_sql_e = 162,
  sym__begin_sql_f = 163,
  sym__end_sql_e = 164,
  sym__end_sql_f = 165,
  sym_source = 166,
  sym__statement = 167,
  sym__computed = 168,
  sym__scope = 169,
  sym__name = 170,
  sym__classic_name = 171,
  sym_function_name = 172,
  sym__function_argument = 173,
  sym_function_arguments = 174,
  sym_function_result = 175,
  sym_alias_name = 176,
  sym__binary_operator = 177,
  sym_class = 178,
  sym_local_variable = 179,
  sym_interprocess_variable = 180,
  sym_numeric_parameter = 181,
  sym__variable = 182,
  sym__mutable = 183,
  sym__immutable = 184,
  sym_class_function = 185,
  sym_generic_function = 186,
  sym__function_parameter = 187,
  sym__functional_expression = 188,
  sym__function_call = 189,
  sym__single_condition = 190,
  sym__condition = 191,
  sym_ternary_block = 192,
  sym_time = 193,
  sym_date = 194,
  sym__dec_literal = 195,
  sym__num_literal = 196,
  sym__exp_literal = 197,
  sym_number = 198,
  sym_string = 199,
  sym_constant = 200,
  sym_function_block = 201,
  sym_declare_block = 202,
  sym_alias_block = 203,
  sym_class_extends = 204,
  sym_class_constructor = 205,
  sym_var_declaration_block = 206,
  sym_classic_compiler_block = 207,
  sym_classic_array_block = 208,
  sym_property_declaration_block = 209,
  sym_return_block = 210,
  sym_assignment_block = 211,
  sym_function_call = 212,
  sym_var = 213,
  sym_property = 214,
  sym_alias = 215,
  sym_declare = 216,
  sym_function = 217,
  sym_return = 218,
  sym_break = 219,
  sym_continue = 220,
  sym_this = 221,
  sym_form = 222,
  sym_super = 223,
  sym__class_store = 224,
  sym__class = 225,
  sym__basic_type = 226,
  sym_system_variable = 227,
  sym__classic_compiler_blob = 228,
  sym__classic_compiler_boolean = 229,
  sym__classic_compiler_collection = 230,
  sym__classic_compiler_date = 231,
  sym__classic_compiler_longint = 232,
  sym__classic_compiler_object = 233,
  sym__classic_compiler_picture = 234,
  sym__classic_compiler_pointer = 235,
  sym__classic_compiler_real = 236,
  sym__classic_compiler_text = 237,
  sym__classic_compiler_time = 238,
  sym__classic_compiler_variant = 239,
  sym_classic_compiler = 240,
  sym__classic_array_blob = 241,
  sym__classic_array_boolean = 242,
  sym__classic_array_date = 243,
  sym__classic_array_integer = 244,
  sym__classic_array_longint = 245,
  sym__classic_array_object = 246,
  sym__classic_array_picture = 247,
  sym__classic_array_pointer = 248,
  sym__classic_array_real = 249,
  sym__classic_array_text = 250,
  sym__classic_array_time = 251,
  sym_classic_array = 252,
  sym_command_suffix = 253,
  sym_comment = 254,
  sym_if = 255,
  sym_else = 256,
  sym_end_if = 257,
  sym__if = 258,
  sym_if_block = 259,
  sym_begin_sql = 260,
  sym_end_sql = 261,
  sym_sql_block = 262,
  aux_sym_source_repeat1 = 263,
  aux_sym__function_argument_repeat1 = 264,
  aux_sym_function_arguments_repeat1 = 265,
  aux_sym__mutable_repeat1 = 266,
  aux_sym__functional_expression_repeat1 = 267,
  aux_sym__condition_repeat1 = 268,
  aux_sym_string_repeat1 = 269,
  aux_sym_var_declaration_block_repeat1 = 270,
  aux_sym_classic_compiler_block_repeat1 = 271,
  aux_sym_property_declaration_block_repeat1 = 272,
  aux_sym_if_block_repeat1 = 273,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE_PIPE] = "~|",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK_PLUS] = "\?+",
  [anon_sym_QMARK_DASH] = "\?-",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_GT] = "<>",
  [aux_sym_numeric_parameter_token1] = "numeric_parameter_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_QMARK] = "\?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_BANG] = "!",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_BANG00_DASH00_DASH00_BANG] = "!00-00-00!",
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
  [sym__class_extends] = "_class_extends",
  [anon_sym_COLON_EQ] = ":=",
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
  [sym__super] = "_super",
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
  [aux_sym__classic_compiler_blob_token1] = "_classic_compiler_blob_token1",
  [aux_sym__classic_compiler_boolean_token1] = "_classic_compiler_boolean_token1",
  [aux_sym__classic_compiler_collection_token1] = "_classic_compiler_collection_token1",
  [aux_sym__classic_compiler_date_token1] = "_classic_compiler_date_token1",
  [aux_sym__classic_compiler_longint_token1] = "_classic_compiler_longint_token1",
  [aux_sym__classic_compiler_object_token1] = "_classic_compiler_object_token1",
  [aux_sym__classic_compiler_picture_token1] = "_classic_compiler_picture_token1",
  [aux_sym__classic_compiler_pointer_token1] = "_classic_compiler_pointer_token1",
  [aux_sym__classic_compiler_real_token1] = "_classic_compiler_real_token1",
  [aux_sym__classic_compiler_text_token1] = "_classic_compiler_text_token1",
  [aux_sym__classic_compiler_time_token1] = "_classic_compiler_time_token1",
  [aux_sym__classic_compiler_variant_token1] = "_classic_compiler_variant_token1",
  [aux_sym__classic_array_blob_token1] = "_classic_array_blob_token1",
  [aux_sym__classic_array_boolean_token1] = "_classic_array_boolean_token1",
  [aux_sym__classic_array_date_token1] = "_classic_array_date_token1",
  [aux_sym__classic_array_integer_token1] = "_classic_array_integer_token1",
  [aux_sym__classic_array_longint_token1] = "_classic_array_longint_token1",
  [aux_sym__classic_array_object_token1] = "_classic_array_object_token1",
  [aux_sym__classic_array_picture_token1] = "_classic_array_picture_token1",
  [aux_sym__classic_array_pointer_token1] = "_classic_array_pointer_token1",
  [aux_sym__classic_array_real_token1] = "_classic_array_real_token1",
  [aux_sym__classic_array_text_token1] = "_classic_array_text_token1",
  [aux_sym__classic_array_time_token1] = "_classic_array_time_token1",
  [aux_sym_command_suffix_token1] = "command_suffix_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym__if_e] = "_if_e",
  [sym__if_f] = "_if_f",
  [sym__else_e] = "_else_e",
  [sym__else_f] = "_else_f",
  [sym__end_if_e] = "_end_if_e",
  [sym__end_if_f] = "_end_if_f",
  [sym__for_each_e] = "_for_each_e",
  [sym__for_each_f] = "_for_each_f",
  [sym__end_for_each_e] = "_end_for_each_e",
  [sym__end_for_each_f] = "_end_for_each_f",
  [sym__while_e] = "_while_e",
  [sym__while_f] = "_while_f",
  [sym__until_e] = "_until_e",
  [sym__until_f] = "_until_f",
  [sym__for_e] = "_for_e",
  [sym__for_f] = "_for_f",
  [sym__end_for_e] = "_end_for_e",
  [sym__end_for_f] = "_end_for_f",
  [sym__use_e] = "_use_e",
  [sym__use_f] = "_use_f",
  [sym__end_use_e] = "_end_use_e",
  [sym__end_use_f] = "_end_use_f",
  [sym__repeat_e] = "_repeat_e",
  [sym__repeat_f] = "_repeat_f",
  [sym__end_while_e] = "_end_while_e",
  [sym__end_while_f] = "_end_while_f",
  [sym__case_of_e] = "_case_of_e",
  [sym__case_of_f] = "_case_of_f",
  [sym__end_case_e] = "_end_case_e",
  [sym__end_case_f] = "_end_case_f",
  [sym__begin_sql_e] = "_begin_sql_e",
  [sym__begin_sql_f] = "_begin_sql_f",
  [sym__end_sql_e] = "_end_sql_e",
  [sym__end_sql_f] = "_end_sql_f",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym__computed] = "_computed",
  [sym__scope] = "_scope",
  [sym__name] = "_name",
  [sym__classic_name] = "_classic_name",
  [sym_function_name] = "function_name",
  [sym__function_argument] = "_function_argument",
  [sym_function_arguments] = "function_arguments",
  [sym_function_result] = "function_result",
  [sym_alias_name] = "alias_name",
  [sym__binary_operator] = "_binary_operator",
  [sym_class] = "class",
  [sym_local_variable] = "local_variable",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_numeric_parameter] = "numeric_parameter",
  [sym__variable] = "_variable",
  [sym__mutable] = "_mutable",
  [sym__immutable] = "_immutable",
  [sym_class_function] = "class_function",
  [sym_generic_function] = "generic_function",
  [sym__function_parameter] = "_function_parameter",
  [sym__functional_expression] = "_functional_expression",
  [sym__function_call] = "_function_call",
  [sym__single_condition] = "_single_condition",
  [sym__condition] = "_condition",
  [sym_ternary_block] = "ternary_block",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_function_block] = "function_block",
  [sym_declare_block] = "declare_block",
  [sym_alias_block] = "alias_block",
  [sym_class_extends] = "class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_var_declaration_block] = "var_declaration_block",
  [sym_classic_compiler_block] = "classic_compiler_block",
  [sym_classic_array_block] = "classic_array_block",
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
  [sym_super] = "super",
  [sym__class_store] = "_class_store",
  [sym__class] = "_class",
  [sym__basic_type] = "_basic_type",
  [sym_system_variable] = "system_variable",
  [sym__classic_compiler_blob] = "_classic_compiler_blob",
  [sym__classic_compiler_boolean] = "_classic_compiler_boolean",
  [sym__classic_compiler_collection] = "_classic_compiler_collection",
  [sym__classic_compiler_date] = "_classic_compiler_date",
  [sym__classic_compiler_longint] = "_classic_compiler_longint",
  [sym__classic_compiler_object] = "_classic_compiler_object",
  [sym__classic_compiler_picture] = "_classic_compiler_picture",
  [sym__classic_compiler_pointer] = "_classic_compiler_pointer",
  [sym__classic_compiler_real] = "_classic_compiler_real",
  [sym__classic_compiler_text] = "_classic_compiler_text",
  [sym__classic_compiler_time] = "_classic_compiler_time",
  [sym__classic_compiler_variant] = "_classic_compiler_variant",
  [sym_classic_compiler] = "classic_compiler",
  [sym__classic_array_blob] = "_classic_array_blob",
  [sym__classic_array_boolean] = "_classic_array_boolean",
  [sym__classic_array_date] = "_classic_array_date",
  [sym__classic_array_integer] = "_classic_array_integer",
  [sym__classic_array_longint] = "_classic_array_longint",
  [sym__classic_array_object] = "_classic_array_object",
  [sym__classic_array_picture] = "_classic_array_picture",
  [sym__classic_array_pointer] = "_classic_array_pointer",
  [sym__classic_array_real] = "_classic_array_real",
  [sym__classic_array_text] = "_classic_array_text",
  [sym__classic_array_time] = "_classic_array_time",
  [sym_classic_array] = "classic_array",
  [sym_command_suffix] = "command_suffix",
  [sym_comment] = "comment",
  [sym_if] = "if",
  [sym_else] = "else",
  [sym_end_if] = "end_if",
  [sym__if] = "_if",
  [sym_if_block] = "if_block",
  [sym_begin_sql] = "begin_sql",
  [sym_end_sql] = "end_sql",
  [sym_sql_block] = "sql_block",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym__mutable_repeat1] = "_mutable_repeat1",
  [aux_sym__functional_expression_repeat1] = "_functional_expression_repeat1",
  [aux_sym__condition_repeat1] = "_condition_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_var_declaration_block_repeat1] = "var_declaration_block_repeat1",
  [aux_sym_classic_compiler_block_repeat1] = "classic_compiler_block_repeat1",
  [aux_sym_property_declaration_block_repeat1] = "property_declaration_block_repeat1",
  [aux_sym_if_block_repeat1] = "if_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE_PIPE] = anon_sym_TILDE_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK_PLUS] = anon_sym_QMARK_PLUS,
  [anon_sym_QMARK_DASH] = anon_sym_QMARK_DASH,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym_numeric_parameter_token1] = aux_sym_numeric_parameter_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_BANG00_DASH00_DASH00_BANG] = anon_sym_BANG00_DASH00_DASH00_BANG,
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
  [sym__class_extends] = sym__class_extends,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
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
  [sym__super] = sym__super,
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
  [aux_sym__classic_compiler_blob_token1] = aux_sym__classic_compiler_blob_token1,
  [aux_sym__classic_compiler_boolean_token1] = aux_sym__classic_compiler_boolean_token1,
  [aux_sym__classic_compiler_collection_token1] = aux_sym__classic_compiler_collection_token1,
  [aux_sym__classic_compiler_date_token1] = aux_sym__classic_compiler_date_token1,
  [aux_sym__classic_compiler_longint_token1] = aux_sym__classic_compiler_longint_token1,
  [aux_sym__classic_compiler_object_token1] = aux_sym__classic_compiler_object_token1,
  [aux_sym__classic_compiler_picture_token1] = aux_sym__classic_compiler_picture_token1,
  [aux_sym__classic_compiler_pointer_token1] = aux_sym__classic_compiler_pointer_token1,
  [aux_sym__classic_compiler_real_token1] = aux_sym__classic_compiler_real_token1,
  [aux_sym__classic_compiler_text_token1] = aux_sym__classic_compiler_text_token1,
  [aux_sym__classic_compiler_time_token1] = aux_sym__classic_compiler_time_token1,
  [aux_sym__classic_compiler_variant_token1] = aux_sym__classic_compiler_variant_token1,
  [aux_sym__classic_array_blob_token1] = aux_sym__classic_array_blob_token1,
  [aux_sym__classic_array_boolean_token1] = aux_sym__classic_array_boolean_token1,
  [aux_sym__classic_array_date_token1] = aux_sym__classic_array_date_token1,
  [aux_sym__classic_array_integer_token1] = aux_sym__classic_array_integer_token1,
  [aux_sym__classic_array_longint_token1] = aux_sym__classic_array_longint_token1,
  [aux_sym__classic_array_object_token1] = aux_sym__classic_array_object_token1,
  [aux_sym__classic_array_picture_token1] = aux_sym__classic_array_picture_token1,
  [aux_sym__classic_array_pointer_token1] = aux_sym__classic_array_pointer_token1,
  [aux_sym__classic_array_real_token1] = aux_sym__classic_array_real_token1,
  [aux_sym__classic_array_text_token1] = aux_sym__classic_array_text_token1,
  [aux_sym__classic_array_time_token1] = aux_sym__classic_array_time_token1,
  [aux_sym_command_suffix_token1] = aux_sym_command_suffix_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym__if_e] = sym__if_e,
  [sym__if_f] = sym__if_f,
  [sym__else_e] = sym__else_e,
  [sym__else_f] = sym__else_f,
  [sym__end_if_e] = sym__end_if_e,
  [sym__end_if_f] = sym__end_if_f,
  [sym__for_each_e] = sym__for_each_e,
  [sym__for_each_f] = sym__for_each_f,
  [sym__end_for_each_e] = sym__end_for_each_e,
  [sym__end_for_each_f] = sym__end_for_each_f,
  [sym__while_e] = sym__while_e,
  [sym__while_f] = sym__while_f,
  [sym__until_e] = sym__until_e,
  [sym__until_f] = sym__until_f,
  [sym__for_e] = sym__for_e,
  [sym__for_f] = sym__for_f,
  [sym__end_for_e] = sym__end_for_e,
  [sym__end_for_f] = sym__end_for_f,
  [sym__use_e] = sym__use_e,
  [sym__use_f] = sym__use_f,
  [sym__end_use_e] = sym__end_use_e,
  [sym__end_use_f] = sym__end_use_f,
  [sym__repeat_e] = sym__repeat_e,
  [sym__repeat_f] = sym__repeat_f,
  [sym__end_while_e] = sym__end_while_e,
  [sym__end_while_f] = sym__end_while_f,
  [sym__case_of_e] = sym__case_of_e,
  [sym__case_of_f] = sym__case_of_f,
  [sym__end_case_e] = sym__end_case_e,
  [sym__end_case_f] = sym__end_case_f,
  [sym__begin_sql_e] = sym__begin_sql_e,
  [sym__begin_sql_f] = sym__begin_sql_f,
  [sym__end_sql_e] = sym__end_sql_e,
  [sym__end_sql_f] = sym__end_sql_f,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym__computed] = sym__computed,
  [sym__scope] = sym__scope,
  [sym__name] = sym__name,
  [sym__classic_name] = sym__classic_name,
  [sym_function_name] = sym_function_name,
  [sym__function_argument] = sym__function_argument,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_result] = sym_function_result,
  [sym_alias_name] = sym_alias_name,
  [sym__binary_operator] = sym__binary_operator,
  [sym_class] = sym_class,
  [sym_local_variable] = sym_local_variable,
  [sym_interprocess_variable] = sym_interprocess_variable,
  [sym_numeric_parameter] = sym_numeric_parameter,
  [sym__variable] = sym__variable,
  [sym__mutable] = sym__mutable,
  [sym__immutable] = sym__immutable,
  [sym_class_function] = sym_class_function,
  [sym_generic_function] = sym_generic_function,
  [sym__function_parameter] = sym__function_parameter,
  [sym__functional_expression] = sym__functional_expression,
  [sym__function_call] = sym__function_call,
  [sym__single_condition] = sym__single_condition,
  [sym__condition] = sym__condition,
  [sym_ternary_block] = sym_ternary_block,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__dec_literal] = sym__dec_literal,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_function_block] = sym_function_block,
  [sym_declare_block] = sym_declare_block,
  [sym_alias_block] = sym_alias_block,
  [sym_class_extends] = sym_class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_var_declaration_block] = sym_var_declaration_block,
  [sym_classic_compiler_block] = sym_classic_compiler_block,
  [sym_classic_array_block] = sym_classic_array_block,
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
  [sym_super] = sym_super,
  [sym__class_store] = sym__class_store,
  [sym__class] = sym__class,
  [sym__basic_type] = sym__basic_type,
  [sym_system_variable] = sym_system_variable,
  [sym__classic_compiler_blob] = sym__classic_compiler_blob,
  [sym__classic_compiler_boolean] = sym__classic_compiler_boolean,
  [sym__classic_compiler_collection] = sym__classic_compiler_collection,
  [sym__classic_compiler_date] = sym__classic_compiler_date,
  [sym__classic_compiler_longint] = sym__classic_compiler_longint,
  [sym__classic_compiler_object] = sym__classic_compiler_object,
  [sym__classic_compiler_picture] = sym__classic_compiler_picture,
  [sym__classic_compiler_pointer] = sym__classic_compiler_pointer,
  [sym__classic_compiler_real] = sym__classic_compiler_real,
  [sym__classic_compiler_text] = sym__classic_compiler_text,
  [sym__classic_compiler_time] = sym__classic_compiler_time,
  [sym__classic_compiler_variant] = sym__classic_compiler_variant,
  [sym_classic_compiler] = sym_classic_compiler,
  [sym__classic_array_blob] = sym__classic_array_blob,
  [sym__classic_array_boolean] = sym__classic_array_boolean,
  [sym__classic_array_date] = sym__classic_array_date,
  [sym__classic_array_integer] = sym__classic_array_integer,
  [sym__classic_array_longint] = sym__classic_array_longint,
  [sym__classic_array_object] = sym__classic_array_object,
  [sym__classic_array_picture] = sym__classic_array_picture,
  [sym__classic_array_pointer] = sym__classic_array_pointer,
  [sym__classic_array_real] = sym__classic_array_real,
  [sym__classic_array_text] = sym__classic_array_text,
  [sym__classic_array_time] = sym__classic_array_time,
  [sym_classic_array] = sym_classic_array,
  [sym_command_suffix] = sym_command_suffix,
  [sym_comment] = sym_comment,
  [sym_if] = sym_if,
  [sym_else] = sym_else,
  [sym_end_if] = sym_end_if,
  [sym__if] = sym__if,
  [sym_if_block] = sym_if_block,
  [sym_begin_sql] = sym_begin_sql,
  [sym_end_sql] = sym_end_sql,
  [sym_sql_block] = sym_sql_block,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym__mutable_repeat1] = aux_sym__mutable_repeat1,
  [aux_sym__functional_expression_repeat1] = aux_sym__functional_expression_repeat1,
  [aux_sym__condition_repeat1] = aux_sym__condition_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_var_declaration_block_repeat1] = aux_sym_var_declaration_block_repeat1,
  [aux_sym_classic_compiler_block_repeat1] = aux_sym_classic_compiler_block_repeat1,
  [aux_sym_property_declaration_block_repeat1] = aux_sym_property_declaration_block_repeat1,
  [aux_sym_if_block_repeat1] = aux_sym_if_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [anon_sym_BANG00_DASH00_DASH00_BANG] = {
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
  [sym__class_extends] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
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
  [sym__super] = {
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
  [aux_sym__classic_compiler_blob_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_collection_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_longint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_object_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_picture_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_pointer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_real_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_compiler_variant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_blob_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_longint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_object_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_picture_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_pointer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_real_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classic_array_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__if_e] = {
    .visible = false,
    .named = true,
  },
  [sym__if_f] = {
    .visible = false,
    .named = true,
  },
  [sym__else_e] = {
    .visible = false,
    .named = true,
  },
  [sym__else_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_if_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_if_f] = {
    .visible = false,
    .named = true,
  },
  [sym__for_each_e] = {
    .visible = false,
    .named = true,
  },
  [sym__for_each_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_for_each_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_for_each_f] = {
    .visible = false,
    .named = true,
  },
  [sym__while_e] = {
    .visible = false,
    .named = true,
  },
  [sym__while_f] = {
    .visible = false,
    .named = true,
  },
  [sym__until_e] = {
    .visible = false,
    .named = true,
  },
  [sym__until_f] = {
    .visible = false,
    .named = true,
  },
  [sym__for_e] = {
    .visible = false,
    .named = true,
  },
  [sym__for_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_for_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_for_f] = {
    .visible = false,
    .named = true,
  },
  [sym__use_e] = {
    .visible = false,
    .named = true,
  },
  [sym__use_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_use_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_use_f] = {
    .visible = false,
    .named = true,
  },
  [sym__repeat_e] = {
    .visible = false,
    .named = true,
  },
  [sym__repeat_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_while_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_while_f] = {
    .visible = false,
    .named = true,
  },
  [sym__case_of_e] = {
    .visible = false,
    .named = true,
  },
  [sym__case_of_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_case_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_case_f] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_sql_e] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_sql_f] = {
    .visible = false,
    .named = true,
  },
  [sym__end_sql_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_sql_f] = {
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
  [sym__binary_operator] = {
    .visible = false,
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
  [sym_numeric_parameter] = {
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
  [sym__immutable] = {
    .visible = false,
    .named = true,
  },
  [sym_class_function] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_function] = {
    .visible = true,
    .named = true,
  },
  [sym__function_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__functional_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call] = {
    .visible = false,
    .named = true,
  },
  [sym__single_condition] = {
    .visible = false,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_block] = {
    .visible = true,
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
  [sym_constant] = {
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
  [sym_classic_compiler_block] = {
    .visible = true,
    .named = true,
  },
  [sym_classic_array_block] = {
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
  [sym_super] = {
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
  [sym__classic_compiler_blob] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_collection] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_date] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_longint] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_object] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_pointer] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_real] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_text] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_time] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_compiler_variant] = {
    .visible = false,
    .named = true,
  },
  [sym_classic_compiler] = {
    .visible = true,
    .named = true,
  },
  [sym__classic_array_blob] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_date] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_longint] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_object] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_pointer] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_real] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_text] = {
    .visible = false,
    .named = true,
  },
  [sym__classic_array_time] = {
    .visible = false,
    .named = true,
  },
  [sym_classic_array] = {
    .visible = true,
    .named = true,
  },
  [sym_command_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_end_if] = {
    .visible = true,
    .named = true,
  },
  [sym__if] = {
    .visible = false,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_end_sql] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_block] = {
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
  [aux_sym__condition_repeat1] = {
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
  [aux_sym_classic_compiler_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_block_repeat1] = {
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
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'h'
                  ? (c >= 'H' && c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
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
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(610);
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '#') ADVANCE(585);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '&') ADVANCE(575);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '+') ADVANCE(566);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(571);
      if (lookahead == '0') ADVANCE(599);
      if (lookahead == '4') ADVANCE(601);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == '>') ADVANCE(582);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(525);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(520);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(532);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(528);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(539);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(526);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(538);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(540);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(523);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(531);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '^') ADVANCE(577);
      if (lookahead == '{') ADVANCE(596);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '}') ADVANCE(597);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(519);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(559);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(426);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(420);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(614);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0) ADVANCE(624);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '&') ADVANCE(575);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '+') ADVANCE(566);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '4') ADVANCE(107);
      if (lookahead == ':') ADVANCE(561);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(579);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == '>') ADVANCE(582);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(70);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == '^') ADVANCE(577);
      if (lookahead == '{') ADVANCE(596);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(698);
      if (lookahead == '/') ADVANCE(695);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(699);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '0') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '0') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(629);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(565);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(502);
      END_STATE();
    case 39:
      if (lookahead == '|') ADVANCE(578);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(473);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(652);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(682);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(346);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(284);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(422);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(665);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(666);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(414);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(700);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(704);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(726);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 211:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(706);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(708);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 254:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(191);
      END_STATE();
    case 255:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(194);
      END_STATE();
    case 256:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(195);
      END_STATE();
    case 257:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(656);
      END_STATE();
    case 258:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(636);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(678);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 292:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(639);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 364:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 367:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(477);
      END_STATE();
    case 368:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(266);
      END_STATE();
    case 369:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      END_STATE();
    case 370:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(268);
      END_STATE();
    case 371:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      END_STATE();
    case 372:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(479);
      END_STATE();
    case 373:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(480);
      END_STATE();
    case 374:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(481);
      END_STATE();
    case 375:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(482);
      END_STATE();
    case 376:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(4);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(687);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 472:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(727);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 488:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(306);
      END_STATE();
    case 489:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(432);
      END_STATE();
    case 490:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(433);
      END_STATE();
    case 491:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(440);
      END_STATE();
    case 492:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(457);
      END_STATE();
    case 493:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      END_STATE();
    case 494:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(517);
      END_STATE();
    case 495:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(631);
      END_STATE();
    case 496:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 497:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 498:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(498)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(541);
      END_STATE();
    case 499:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 500:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 501:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 502:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 503:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 504:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      END_STATE();
    case 505:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(610);
      if (lookahead == '"') ADVANCE(618);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '0') ADVANCE(599);
      if (lookahead == '4') ADVANCE(601);
      if (lookahead == ':') ADVANCE(561);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '?') ADVANCE(606);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 506:
      if (eof) ADVANCE(508);
      if (lookahead == '!') ADVANCE(609);
      if (lookahead == '#') ADVANCE(585);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '&') ADVANCE(575);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '+') ADVANCE(566);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(571);
      if (lookahead == '4') ADVANCE(108);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == '>') ADVANCE(582);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '^') ADVANCE(577);
      if (lookahead == '{') ADVANCE(596);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '}') ADVANCE(597);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 507:
      if (eof) ADVANCE(508);
      if (lookahead == '#') ADVANCE(585);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '&') ADVANCE(575);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '+') ADVANCE(566);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(571);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(560);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == '>') ADVANCE(582);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == '[') ADVANCE(604);
      if (lookahead == ']') ADVANCE(605);
      if (lookahead == '^') ADVANCE(577);
      if (lookahead == '{') ADVANCE(596);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '}') ADVANCE(597);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(656);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(700);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(629);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(591);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(592);
      if (lookahead == '>') ADVANCE(565);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(593);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(698);
      if (lookahead == '/') ADVANCE(695);
      if (lookahead == '=') ADVANCE(594);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(594);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(574);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(586);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(586);
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(587);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(499);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(589);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead == '?') ADVANCE(588);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(29);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '\\') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(624);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__classic_compiler_blob_token1);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__classic_compiler_boolean_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__classic_compiler_collection_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__classic_compiler_date_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__classic_compiler_object_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__classic_compiler_picture_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__classic_compiler_pointer_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__classic_compiler_real_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__classic_compiler_text_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__classic_compiler_time_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__classic_compiler_variant_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__classic_array_blob_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__classic_array_boolean_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__classic_array_date_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__classic_array_integer_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__classic_array_longint_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__classic_array_object_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__classic_array_picture_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__classic_array_pointer_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__classic_array_real_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__classic_array_text_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__classic_array_time_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(25);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__for_each_e);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__for_each_f);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__end_for_each_e);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__while_e);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__for_e);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(639);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__for_f);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__end_for_e);
      if (lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__use_e);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__use_f);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__end_use_e);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__end_use_f);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__end_while_e);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__end_while_f);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 505},
  [2] = {.lex_state = 505},
  [3] = {.lex_state = 505},
  [4] = {.lex_state = 505},
  [5] = {.lex_state = 505},
  [6] = {.lex_state = 505},
  [7] = {.lex_state = 505},
  [8] = {.lex_state = 505},
  [9] = {.lex_state = 505},
  [10] = {.lex_state = 505},
  [11] = {.lex_state = 506},
  [12] = {.lex_state = 507},
  [13] = {.lex_state = 506},
  [14] = {.lex_state = 507},
  [15] = {.lex_state = 507},
  [16] = {.lex_state = 506},
  [17] = {.lex_state = 507},
  [18] = {.lex_state = 506},
  [19] = {.lex_state = 507},
  [20] = {.lex_state = 507},
  [21] = {.lex_state = 507},
  [22] = {.lex_state = 506},
  [23] = {.lex_state = 506},
  [24] = {.lex_state = 507},
  [25] = {.lex_state = 507},
  [26] = {.lex_state = 507},
  [27] = {.lex_state = 507},
  [28] = {.lex_state = 506},
  [29] = {.lex_state = 507},
  [30] = {.lex_state = 506},
  [31] = {.lex_state = 506},
  [32] = {.lex_state = 506},
  [33] = {.lex_state = 506},
  [34] = {.lex_state = 506},
  [35] = {.lex_state = 506},
  [36] = {.lex_state = 506},
  [37] = {.lex_state = 506},
  [38] = {.lex_state = 506},
  [39] = {.lex_state = 506},
  [40] = {.lex_state = 506},
  [41] = {.lex_state = 506},
  [42] = {.lex_state = 506},
  [43] = {.lex_state = 506},
  [44] = {.lex_state = 506},
  [45] = {.lex_state = 506},
  [46] = {.lex_state = 506},
  [47] = {.lex_state = 506},
  [48] = {.lex_state = 505},
  [49] = {.lex_state = 505},
  [50] = {.lex_state = 505},
  [51] = {.lex_state = 505},
  [52] = {.lex_state = 505},
  [53] = {.lex_state = 505},
  [54] = {.lex_state = 505},
  [55] = {.lex_state = 505},
  [56] = {.lex_state = 505},
  [57] = {.lex_state = 505},
  [58] = {.lex_state = 505},
  [59] = {.lex_state = 505},
  [60] = {.lex_state = 505},
  [61] = {.lex_state = 505},
  [62] = {.lex_state = 505},
  [63] = {.lex_state = 505},
  [64] = {.lex_state = 505},
  [65] = {.lex_state = 505},
  [66] = {.lex_state = 505},
  [67] = {.lex_state = 505},
  [68] = {.lex_state = 505},
  [69] = {.lex_state = 505},
  [70] = {.lex_state = 505},
  [71] = {.lex_state = 505},
  [72] = {.lex_state = 505},
  [73] = {.lex_state = 505},
  [74] = {.lex_state = 505},
  [75] = {.lex_state = 505},
  [76] = {.lex_state = 505},
  [77] = {.lex_state = 505},
  [78] = {.lex_state = 505},
  [79] = {.lex_state = 505},
  [80] = {.lex_state = 505},
  [81] = {.lex_state = 505},
  [82] = {.lex_state = 505},
  [83] = {.lex_state = 505},
  [84] = {.lex_state = 505},
  [85] = {.lex_state = 505},
  [86] = {.lex_state = 505},
  [87] = {.lex_state = 505},
  [88] = {.lex_state = 505},
  [89] = {.lex_state = 505},
  [90] = {.lex_state = 505},
  [91] = {.lex_state = 505},
  [92] = {.lex_state = 505},
  [93] = {.lex_state = 505},
  [94] = {.lex_state = 505},
  [95] = {.lex_state = 505},
  [96] = {.lex_state = 505},
  [97] = {.lex_state = 505},
  [98] = {.lex_state = 505},
  [99] = {.lex_state = 505},
  [100] = {.lex_state = 505},
  [101] = {.lex_state = 505},
  [102] = {.lex_state = 505},
  [103] = {.lex_state = 505},
  [104] = {.lex_state = 505},
  [105] = {.lex_state = 505},
  [106] = {.lex_state = 505},
  [107] = {.lex_state = 505},
  [108] = {.lex_state = 505},
  [109] = {.lex_state = 505},
  [110] = {.lex_state = 505},
  [111] = {.lex_state = 505},
  [112] = {.lex_state = 505},
  [113] = {.lex_state = 505},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 21},
  [136] = {.lex_state = 21},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 21},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 205},
  [163] = {.lex_state = 205},
  [164] = {.lex_state = 205},
  [165] = {.lex_state = 22},
  [166] = {.lex_state = 498},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 498},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 22},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 498},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 498},
  [176] = {.lex_state = 498},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 507},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 505},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 505},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 505},
  [187] = {.lex_state = 505},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 505},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 505},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 505},
  [202] = {.lex_state = 505},
  [203] = {.lex_state = 505},
  [204] = {.lex_state = 505},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 693},
  [207] = {.lex_state = 506},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 22},
  [210] = {.lex_state = 22},
  [211] = {.lex_state = 22},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 693},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 505},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 505},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 505},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 505},
  [224] = {.lex_state = 693},
  [225] = {.lex_state = 693},
  [226] = {.lex_state = 693},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 693},
  [229] = {.lex_state = 693},
  [230] = {.lex_state = 693},
  [231] = {.lex_state = 693},
  [232] = {.lex_state = 693},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 505},
  [235] = {.lex_state = 22},
  [236] = {.lex_state = 505},
  [237] = {.lex_state = 693},
  [238] = {.lex_state = 693},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 693},
  [241] = {.lex_state = 693},
  [242] = {.lex_state = 693},
  [243] = {.lex_state = 693},
  [244] = {.lex_state = 505},
  [245] = {.lex_state = 693},
  [246] = {.lex_state = 693},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 693},
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 693},
  [252] = {.lex_state = 693},
  [253] = {.lex_state = 693},
  [254] = {.lex_state = 693},
  [255] = {.lex_state = 693},
  [256] = {.lex_state = 693},
  [257] = {.lex_state = 693},
  [258] = {.lex_state = 693},
  [259] = {.lex_state = 693},
  [260] = {.lex_state = 506},
  [261] = {.lex_state = 22},
  [262] = {.lex_state = 505},
  [263] = {.lex_state = 505},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 505},
  [267] = {.lex_state = 506},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 506},
  [270] = {.lex_state = 506},
  [271] = {.lex_state = 507},
  [272] = {.lex_state = 506},
  [273] = {.lex_state = 506},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 505},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 506},
  [278] = {.lex_state = 506},
  [279] = {.lex_state = 506},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 506},
  [285] = {.lex_state = 506},
  [286] = {.lex_state = 505},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 506},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 22},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 505},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 505},
  [331] = {.lex_state = 506},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 24},
  [336] = {.lex_state = 696},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 506},
  [339] = {.lex_state = 507},
  [340] = {.lex_state = 506},
  [341] = {.lex_state = 505},
  [342] = {.lex_state = 506},
  [343] = {.lex_state = 506},
  [344] = {.lex_state = 506},
  [345] = {.lex_state = 506},
  [346] = {.lex_state = 506},
  [347] = {.lex_state = 505},
  [348] = {.lex_state = 506},
  [349] = {.lex_state = 506},
  [350] = {.lex_state = 506},
  [351] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__local] = ACTIONS(1),
    [sym__exposed] = ACTIONS(1),
    [sym__get] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__query] = ACTIONS(1),
    [sym__orderBy] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_PLUS] = ACTIONS(1),
    [anon_sym_QMARK_DASH] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [aux_sym_numeric_parameter_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(1),
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
    [sym__class_extends] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
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
    [sym__super] = ACTIONS(1),
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
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(1),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(1),
    [aux_sym__classic_array_blob_token1] = ACTIONS(1),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(1),
    [aux_sym__classic_array_date_token1] = ACTIONS(1),
    [aux_sym__classic_array_integer_token1] = ACTIONS(1),
    [aux_sym__classic_array_longint_token1] = ACTIONS(1),
    [aux_sym__classic_array_object_token1] = ACTIONS(1),
    [aux_sym__classic_array_picture_token1] = ACTIONS(1),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(1),
    [aux_sym__classic_array_real_token1] = ACTIONS(1),
    [aux_sym__classic_array_text_token1] = ACTIONS(1),
    [aux_sym__classic_array_time_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [sym__if_e] = ACTIONS(1),
    [sym__if_f] = ACTIONS(1),
    [sym__else_e] = ACTIONS(1),
    [sym__else_f] = ACTIONS(1),
    [sym__end_if_e] = ACTIONS(1),
    [sym__end_if_f] = ACTIONS(1),
    [sym__for_each_e] = ACTIONS(1),
    [sym__for_each_f] = ACTIONS(1),
    [sym__end_for_each_e] = ACTIONS(1),
    [sym__end_for_each_f] = ACTIONS(1),
    [sym__while_e] = ACTIONS(1),
    [sym__while_f] = ACTIONS(1),
    [sym__until_e] = ACTIONS(1),
    [sym__until_f] = ACTIONS(1),
    [sym__for_e] = ACTIONS(1),
    [sym__for_f] = ACTIONS(1),
    [sym__end_for_e] = ACTIONS(1),
    [sym__end_for_f] = ACTIONS(1),
    [sym__use_e] = ACTIONS(1),
    [sym__use_f] = ACTIONS(1),
    [sym__end_use_e] = ACTIONS(1),
    [sym__end_use_f] = ACTIONS(1),
    [sym__repeat_e] = ACTIONS(1),
    [sym__repeat_f] = ACTIONS(1),
    [sym__end_while_e] = ACTIONS(1),
    [sym__end_while_f] = ACTIONS(1),
    [sym__case_of_e] = ACTIONS(1),
    [sym__case_of_f] = ACTIONS(1),
    [sym__end_case_e] = ACTIONS(1),
    [sym__end_case_f] = ACTIONS(1),
    [sym__begin_sql_e] = ACTIONS(1),
    [sym__begin_sql_f] = ACTIONS(1),
    [sym__end_sql_e] = ACTIONS(1),
    [sym__end_sql_f] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(333),
    [sym__statement] = STATE(8),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(8),
    [sym_declare_block] = STATE(8),
    [sym_alias_block] = STATE(8),
    [sym_class_extends] = STATE(8),
    [sym_class_constructor] = STATE(8),
    [sym_var_declaration_block] = STATE(8),
    [sym_classic_compiler_block] = STATE(8),
    [sym_classic_array_block] = STATE(8),
    [sym_property_declaration_block] = STATE(8),
    [sym_return_block] = STATE(8),
    [sym_assignment_block] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(8),
    [sym_continue] = STATE(8),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(8),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(8),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_alias_block] = STATE(2),
    [sym_class_extends] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym_var_declaration_block] = STATE(2),
    [sym_classic_compiler_block] = STATE(2),
    [sym_classic_array_block] = STATE(2),
    [sym_property_declaration_block] = STATE(2),
    [sym_return_block] = STATE(2),
    [sym_assignment_block] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(2),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym__local] = ACTIONS(97),
    [sym__exposed] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(106),
    [sym__class_constructor] = ACTIONS(109),
    [sym__class_extends] = ACTIONS(112),
    [sym__var] = ACTIONS(115),
    [sym__property] = ACTIONS(118),
    [sym__alias] = ACTIONS(121),
    [sym__declare] = ACTIONS(124),
    [sym__function] = ACTIONS(127),
    [sym__return] = ACTIONS(130),
    [sym__break] = ACTIONS(133),
    [sym__continue] = ACTIONS(136),
    [sym__this] = ACTIONS(139),
    [sym__form] = ACTIONS(142),
    [sym__super] = ACTIONS(145),
    [sym__class_store_4d] = ACTIONS(148),
    [sym__class_store_ds] = ACTIONS(148),
    [sym__class_store_cs] = ACTIONS(148),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(151),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(154),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(157),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(160),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(163),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(166),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(169),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(172),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(175),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(178),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(181),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(184),
    [aux_sym__classic_array_blob_token1] = ACTIONS(187),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(190),
    [aux_sym__classic_array_date_token1] = ACTIONS(193),
    [aux_sym__classic_array_integer_token1] = ACTIONS(196),
    [aux_sym__classic_array_longint_token1] = ACTIONS(199),
    [aux_sym__classic_array_object_token1] = ACTIONS(202),
    [aux_sym__classic_array_picture_token1] = ACTIONS(205),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(208),
    [aux_sym__classic_array_real_token1] = ACTIONS(211),
    [aux_sym__classic_array_text_token1] = ACTIONS(214),
    [aux_sym__classic_array_time_token1] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_SLASH_STAR] = ACTIONS(223),
    [sym__if_e] = ACTIONS(226),
    [sym__if_f] = ACTIONS(226),
    [sym__begin_sql_e] = ACTIONS(229),
    [sym__begin_sql_f] = ACTIONS(229),
    [sym__end_sql_e] = ACTIONS(95),
    [sym__end_sql_f] = ACTIONS(95),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_alias_block] = STATE(2),
    [sym_class_extends] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym_var_declaration_block] = STATE(2),
    [sym_classic_compiler_block] = STATE(2),
    [sym_classic_array_block] = STATE(2),
    [sym_property_declaration_block] = STATE(2),
    [sym_return_block] = STATE(2),
    [sym_assignment_block] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(2),
    [sym_begin_sql] = STATE(5),
    [sym_end_sql] = STATE(92),
    [sym_sql_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
    [sym__end_sql_e] = ACTIONS(232),
    [sym__end_sql_f] = ACTIONS(232),
  },
  [4] = {
    [sym__statement] = STATE(98),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(98),
    [sym_declare_block] = STATE(98),
    [sym_alias_block] = STATE(98),
    [sym_class_extends] = STATE(98),
    [sym_class_constructor] = STATE(98),
    [sym_var_declaration_block] = STATE(98),
    [sym_classic_compiler_block] = STATE(98),
    [sym_classic_array_block] = STATE(98),
    [sym_property_declaration_block] = STATE(98),
    [sym_return_block] = STATE(98),
    [sym_assignment_block] = STATE(98),
    [sym_function_call] = STATE(98),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(98),
    [sym_continue] = STATE(98),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(98),
    [sym_if] = STATE(321),
    [sym_end_if] = STATE(69),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(98),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(98),
    [aux_sym_if_block_repeat1] = STATE(7),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__end_if_e] = ACTIONS(234),
    [sym__end_if_f] = ACTIONS(234),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(3),
    [sym_declare_block] = STATE(3),
    [sym_alias_block] = STATE(3),
    [sym_class_extends] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym_var_declaration_block] = STATE(3),
    [sym_classic_compiler_block] = STATE(3),
    [sym_classic_array_block] = STATE(3),
    [sym_property_declaration_block] = STATE(3),
    [sym_return_block] = STATE(3),
    [sym_assignment_block] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(3),
    [sym_continue] = STATE(3),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(3),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(3),
    [sym_begin_sql] = STATE(5),
    [sym_end_sql] = STATE(89),
    [sym_sql_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
    [sym__end_sql_e] = ACTIONS(232),
    [sym__end_sql_f] = ACTIONS(232),
  },
  [6] = {
    [sym__statement] = STATE(98),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(98),
    [sym_declare_block] = STATE(98),
    [sym_alias_block] = STATE(98),
    [sym_class_extends] = STATE(98),
    [sym_class_constructor] = STATE(98),
    [sym_var_declaration_block] = STATE(98),
    [sym_classic_compiler_block] = STATE(98),
    [sym_classic_array_block] = STATE(98),
    [sym_property_declaration_block] = STATE(98),
    [sym_return_block] = STATE(98),
    [sym_assignment_block] = STATE(98),
    [sym_function_call] = STATE(98),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(98),
    [sym_continue] = STATE(98),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(98),
    [sym_if] = STATE(321),
    [sym_end_if] = STATE(67),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(98),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(98),
    [aux_sym_if_block_repeat1] = STATE(4),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__end_if_e] = ACTIONS(234),
    [sym__end_if_f] = ACTIONS(234),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [7] = {
    [sym__statement] = STATE(98),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(98),
    [sym_declare_block] = STATE(98),
    [sym_alias_block] = STATE(98),
    [sym_class_extends] = STATE(98),
    [sym_class_constructor] = STATE(98),
    [sym_var_declaration_block] = STATE(98),
    [sym_classic_compiler_block] = STATE(98),
    [sym_classic_array_block] = STATE(98),
    [sym_property_declaration_block] = STATE(98),
    [sym_return_block] = STATE(98),
    [sym_assignment_block] = STATE(98),
    [sym_function_call] = STATE(98),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(98),
    [sym_continue] = STATE(98),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(98),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(98),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(98),
    [aux_sym_if_block_repeat1] = STATE(7),
    [sym__local] = ACTIONS(236),
    [sym__exposed] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_LT_GT] = ACTIONS(245),
    [sym__class_constructor] = ACTIONS(248),
    [sym__class_extends] = ACTIONS(251),
    [sym__var] = ACTIONS(254),
    [sym__property] = ACTIONS(257),
    [sym__alias] = ACTIONS(260),
    [sym__declare] = ACTIONS(263),
    [sym__function] = ACTIONS(266),
    [sym__return] = ACTIONS(269),
    [sym__break] = ACTIONS(272),
    [sym__continue] = ACTIONS(275),
    [sym__this] = ACTIONS(278),
    [sym__form] = ACTIONS(281),
    [sym__super] = ACTIONS(284),
    [sym__class_store_4d] = ACTIONS(287),
    [sym__class_store_ds] = ACTIONS(287),
    [sym__class_store_cs] = ACTIONS(287),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(290),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(296),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(299),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(302),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(305),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(308),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(311),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(314),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(320),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(323),
    [aux_sym__classic_array_blob_token1] = ACTIONS(326),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(329),
    [aux_sym__classic_array_date_token1] = ACTIONS(332),
    [aux_sym__classic_array_integer_token1] = ACTIONS(335),
    [aux_sym__classic_array_longint_token1] = ACTIONS(338),
    [aux_sym__classic_array_object_token1] = ACTIONS(341),
    [aux_sym__classic_array_picture_token1] = ACTIONS(344),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(347),
    [aux_sym__classic_array_real_token1] = ACTIONS(350),
    [aux_sym__classic_array_text_token1] = ACTIONS(353),
    [aux_sym__classic_array_time_token1] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(359),
    [anon_sym_SLASH_STAR] = ACTIONS(362),
    [sym__if_e] = ACTIONS(365),
    [sym__if_f] = ACTIONS(365),
    [sym__end_if_e] = ACTIONS(368),
    [sym__end_if_f] = ACTIONS(368),
    [sym__begin_sql_e] = ACTIONS(370),
    [sym__begin_sql_f] = ACTIONS(370),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_alias_block] = STATE(2),
    [sym_class_extends] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym_var_declaration_block] = STATE(2),
    [sym_classic_compiler_block] = STATE(2),
    [sym_classic_array_block] = STATE(2),
    [sym_property_declaration_block] = STATE(2),
    [sym_return_block] = STATE(2),
    [sym_assignment_block] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(2),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [9] = {
    [sym__statement] = STATE(110),
    [sym__scope] = STATE(223),
    [sym_function_name] = STATE(222),
    [sym_alias_name] = STATE(205),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(179),
    [sym_class_function] = STATE(73),
    [sym_generic_function] = STATE(73),
    [sym__function_call] = STATE(73),
    [sym_function_block] = STATE(110),
    [sym_declare_block] = STATE(110),
    [sym_alias_block] = STATE(110),
    [sym_class_extends] = STATE(110),
    [sym_class_constructor] = STATE(110),
    [sym_var_declaration_block] = STATE(110),
    [sym_classic_compiler_block] = STATE(110),
    [sym_classic_array_block] = STATE(110),
    [sym_property_declaration_block] = STATE(110),
    [sym_return_block] = STATE(110),
    [sym_assignment_block] = STATE(110),
    [sym_function_call] = STATE(110),
    [sym_var] = STATE(174),
    [sym_property] = STATE(221),
    [sym_alias] = STATE(220),
    [sym_declare] = STATE(218),
    [sym_function] = STATE(162),
    [sym_return] = STATE(10),
    [sym_break] = STATE(110),
    [sym_continue] = STATE(110),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(216),
    [sym__classic_compiler_blob] = STATE(328),
    [sym__classic_compiler_boolean] = STATE(328),
    [sym__classic_compiler_collection] = STATE(328),
    [sym__classic_compiler_date] = STATE(328),
    [sym__classic_compiler_longint] = STATE(328),
    [sym__classic_compiler_object] = STATE(328),
    [sym__classic_compiler_picture] = STATE(328),
    [sym__classic_compiler_pointer] = STATE(328),
    [sym__classic_compiler_real] = STATE(328),
    [sym__classic_compiler_text] = STATE(328),
    [sym__classic_compiler_time] = STATE(328),
    [sym__classic_compiler_variant] = STATE(328),
    [sym_classic_compiler] = STATE(326),
    [sym__classic_array_blob] = STATE(323),
    [sym__classic_array_boolean] = STATE(323),
    [sym__classic_array_date] = STATE(323),
    [sym__classic_array_integer] = STATE(323),
    [sym__classic_array_longint] = STATE(323),
    [sym__classic_array_object] = STATE(323),
    [sym__classic_array_picture] = STATE(323),
    [sym__classic_array_pointer] = STATE(323),
    [sym__classic_array_real] = STATE(323),
    [sym__classic_array_text] = STATE(323),
    [sym__classic_array_time] = STATE(323),
    [sym_classic_array] = STATE(322),
    [sym_comment] = STATE(110),
    [sym_if] = STATE(321),
    [sym__if] = STATE(6),
    [sym_if_block] = STATE(110),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(110),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym__class_constructor] = ACTIONS(13),
    [sym__class_extends] = ACTIONS(15),
    [sym__var] = ACTIONS(17),
    [sym__property] = ACTIONS(19),
    [sym__alias] = ACTIONS(21),
    [sym__declare] = ACTIONS(23),
    [sym__function] = ACTIONS(25),
    [sym__return] = ACTIONS(27),
    [sym__break] = ACTIONS(29),
    [sym__continue] = ACTIONS(31),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(41),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(43),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(45),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(63),
    [aux_sym__classic_array_blob_token1] = ACTIONS(65),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(67),
    [aux_sym__classic_array_date_token1] = ACTIONS(69),
    [aux_sym__classic_array_integer_token1] = ACTIONS(71),
    [aux_sym__classic_array_longint_token1] = ACTIONS(73),
    [aux_sym__classic_array_object_token1] = ACTIONS(75),
    [aux_sym__classic_array_picture_token1] = ACTIONS(77),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(79),
    [aux_sym__classic_array_real_token1] = ACTIONS(81),
    [aux_sym__classic_array_text_token1] = ACTIONS(83),
    [aux_sym__classic_array_time_token1] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [10] = {
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(20),
    [sym_numeric_parameter] = STATE(20),
    [sym__variable] = STATE(25),
    [sym__mutable] = STATE(30),
    [sym__immutable] = STATE(68),
    [sym_class_function] = STATE(68),
    [sym_generic_function] = STATE(68),
    [sym__function_call] = STATE(68),
    [sym__single_condition] = STATE(68),
    [sym_time] = STATE(31),
    [sym_date] = STATE(31),
    [sym__dec_literal] = STATE(46),
    [sym__num_literal] = STATE(46),
    [sym__exp_literal] = STATE(46),
    [sym_number] = STATE(31),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(68),
    [sym_this] = STATE(332),
    [sym_form] = STATE(332),
    [sym_super] = STATE(216),
    [sym__class_store] = STATE(18),
    [sym__class] = STATE(28),
    [sym_system_variable] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym__local] = ACTIONS(375),
    [sym__exposed] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_LT_GT] = ACTIONS(375),
    [aux_sym_numeric_parameter_token1] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(383),
    [sym__hex_literal] = ACTIONS(385),
    [aux_sym__num_literal_token1] = ACTIONS(377),
    [aux_sym__exp_literal_token1] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [sym__class_constructor] = ACTIONS(375),
    [sym__class_extends] = ACTIONS(375),
    [sym__var] = ACTIONS(375),
    [sym__property] = ACTIONS(375),
    [sym__alias] = ACTIONS(375),
    [sym__declare] = ACTIONS(375),
    [sym__function] = ACTIONS(375),
    [sym__return] = ACTIONS(375),
    [sym__break] = ACTIONS(375),
    [sym__continue] = ACTIONS(375),
    [sym__this] = ACTIONS(375),
    [sym__form] = ACTIONS(375),
    [sym__super] = ACTIONS(375),
    [sym__class_store_4d] = ACTIONS(375),
    [sym__class_store_ds] = ACTIONS(375),
    [sym__class_store_cs] = ACTIONS(375),
    [sym__system_variable_ok] = ACTIONS(389),
    [sym__system_variable_document] = ACTIONS(389),
    [sym__system_variable_flddelimit] = ACTIONS(389),
    [sym__system_variable_recdelimit] = ACTIONS(389),
    [sym__system_variable_error] = ACTIONS(391),
    [sym__system_variable_error_method] = ACTIONS(389),
    [sym__system_variable_error_line] = ACTIONS(389),
    [sym__system_variable_error_formula] = ACTIONS(389),
    [sym__system_variable_mousedown] = ACTIONS(389),
    [sym__system_variable_mousex] = ACTIONS(389),
    [sym__system_variable_mousey] = ACTIONS(389),
    [sym__system_variable_keycode] = ACTIONS(389),
    [sym__system_variable_modifiers] = ACTIONS(389),
    [sym__system_variable_mouseproc] = ACTIONS(389),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(375),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(375),
    [aux_sym__classic_array_blob_token1] = ACTIONS(375),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(375),
    [aux_sym__classic_array_date_token1] = ACTIONS(375),
    [aux_sym__classic_array_integer_token1] = ACTIONS(375),
    [aux_sym__classic_array_longint_token1] = ACTIONS(375),
    [aux_sym__classic_array_object_token1] = ACTIONS(375),
    [aux_sym__classic_array_picture_token1] = ACTIONS(375),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(375),
    [aux_sym__classic_array_real_token1] = ACTIONS(375),
    [aux_sym__classic_array_text_token1] = ACTIONS(375),
    [aux_sym__classic_array_time_token1] = ACTIONS(375),
    [anon_sym_SLASH_SLASH] = ACTIONS(375),
    [anon_sym_SLASH_STAR] = ACTIONS(375),
    [sym__if_e] = ACTIONS(375),
    [sym__if_f] = ACTIONS(393),
    [sym__else_e] = ACTIONS(375),
    [sym__else_f] = ACTIONS(375),
    [sym__end_if_e] = ACTIONS(375),
    [sym__end_if_f] = ACTIONS(375),
    [sym__begin_sql_e] = ACTIONS(375),
    [sym__begin_sql_f] = ACTIONS(375),
    [sym__end_sql_e] = ACTIONS(375),
    [sym__end_sql_f] = ACTIONS(375),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym__local] = ACTIONS(395),
    [sym__exposed] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_TILDE_PIPE] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_QMARK_QMARK] = ACTIONS(395),
    [anon_sym_QMARK_PLUS] = ACTIONS(395),
    [anon_sym_QMARK_DASH] = ACTIONS(395),
    [anon_sym_PLUS_EQ] = ACTIONS(395),
    [anon_sym_DASH_EQ] = ACTIONS(395),
    [anon_sym_STAR_EQ] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_LT_GT] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(397),
    [sym__class_constructor] = ACTIONS(395),
    [sym__class_extends] = ACTIONS(395),
    [anon_sym_COLON_EQ] = ACTIONS(395),
    [sym__var] = ACTIONS(395),
    [sym__property] = ACTIONS(395),
    [sym__alias] = ACTIONS(395),
    [sym__declare] = ACTIONS(395),
    [sym__function] = ACTIONS(395),
    [sym__return] = ACTIONS(395),
    [sym__break] = ACTIONS(395),
    [sym__continue] = ACTIONS(395),
    [sym__this] = ACTIONS(395),
    [sym__form] = ACTIONS(395),
    [sym__super] = ACTIONS(395),
    [sym__class_store_4d] = ACTIONS(395),
    [sym__class_store_ds] = ACTIONS(395),
    [sym__class_store_cs] = ACTIONS(395),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(395),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(395),
    [aux_sym__classic_array_blob_token1] = ACTIONS(395),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(395),
    [aux_sym__classic_array_date_token1] = ACTIONS(395),
    [aux_sym__classic_array_integer_token1] = ACTIONS(395),
    [aux_sym__classic_array_longint_token1] = ACTIONS(395),
    [aux_sym__classic_array_object_token1] = ACTIONS(395),
    [aux_sym__classic_array_picture_token1] = ACTIONS(395),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(395),
    [aux_sym__classic_array_real_token1] = ACTIONS(395),
    [aux_sym__classic_array_text_token1] = ACTIONS(395),
    [aux_sym__classic_array_time_token1] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_STAR] = ACTIONS(395),
    [sym__if_e] = ACTIONS(395),
    [sym__if_f] = ACTIONS(397),
    [sym__else_e] = ACTIONS(395),
    [sym__else_f] = ACTIONS(395),
    [sym__end_if_e] = ACTIONS(395),
    [sym__end_if_f] = ACTIONS(395),
    [sym__begin_sql_e] = ACTIONS(395),
    [sym__begin_sql_f] = ACTIONS(395),
    [sym__end_sql_e] = ACTIONS(395),
    [sym__end_sql_f] = ACTIONS(395),
  },
  [12] = {
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym__local] = ACTIONS(401),
    [sym__exposed] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_TILDE_PIPE] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [anon_sym_QMARK_QMARK] = ACTIONS(401),
    [anon_sym_QMARK_PLUS] = ACTIONS(401),
    [anon_sym_QMARK_DASH] = ACTIONS(401),
    [anon_sym_PLUS_EQ] = ACTIONS(401),
    [anon_sym_DASH_EQ] = ACTIONS(401),
    [anon_sym_STAR_EQ] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_LT_GT] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_QMARK] = ACTIONS(403),
    [sym__class_constructor] = ACTIONS(401),
    [sym__class_extends] = ACTIONS(401),
    [anon_sym_COLON_EQ] = ACTIONS(401),
    [sym__var] = ACTIONS(401),
    [sym__property] = ACTIONS(401),
    [sym__alias] = ACTIONS(401),
    [sym__declare] = ACTIONS(401),
    [sym__function] = ACTIONS(401),
    [sym__return] = ACTIONS(401),
    [sym__break] = ACTIONS(401),
    [sym__continue] = ACTIONS(401),
    [sym__this] = ACTIONS(401),
    [sym__form] = ACTIONS(401),
    [sym__super] = ACTIONS(401),
    [sym__class_store_4d] = ACTIONS(401),
    [sym__class_store_ds] = ACTIONS(401),
    [sym__class_store_cs] = ACTIONS(401),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(401),
    [aux_sym__classic_array_blob_token1] = ACTIONS(401),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(401),
    [aux_sym__classic_array_date_token1] = ACTIONS(401),
    [aux_sym__classic_array_integer_token1] = ACTIONS(401),
    [aux_sym__classic_array_longint_token1] = ACTIONS(401),
    [aux_sym__classic_array_object_token1] = ACTIONS(401),
    [aux_sym__classic_array_picture_token1] = ACTIONS(401),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(401),
    [aux_sym__classic_array_real_token1] = ACTIONS(401),
    [aux_sym__classic_array_text_token1] = ACTIONS(401),
    [aux_sym__classic_array_time_token1] = ACTIONS(401),
    [anon_sym_SLASH_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_STAR] = ACTIONS(401),
    [sym__if_e] = ACTIONS(401),
    [sym__if_f] = ACTIONS(403),
    [sym__else_e] = ACTIONS(401),
    [sym__else_f] = ACTIONS(401),
    [sym__end_if_e] = ACTIONS(401),
    [sym__end_if_f] = ACTIONS(401),
    [sym__begin_sql_e] = ACTIONS(401),
    [sym__begin_sql_f] = ACTIONS(401),
    [sym__end_sql_e] = ACTIONS(401),
    [sym__end_sql_f] = ACTIONS(401),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym__local] = ACTIONS(408),
    [sym__exposed] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_AMP_AMP] = ACTIONS(408),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_AMP] = ACTIONS(410),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_CARET] = ACTIONS(408),
    [anon_sym_TILDE_PIPE] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(408),
    [anon_sym_GT_GT] = ACTIONS(408),
    [anon_sym_QMARK_QMARK] = ACTIONS(408),
    [anon_sym_QMARK_PLUS] = ACTIONS(408),
    [anon_sym_QMARK_DASH] = ACTIONS(408),
    [anon_sym_PLUS_EQ] = ACTIONS(408),
    [anon_sym_DASH_EQ] = ACTIONS(408),
    [anon_sym_STAR_EQ] = ACTIONS(408),
    [anon_sym_SLASH_EQ] = ACTIONS(408),
    [anon_sym_DOLLAR] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_LT_GT] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_QMARK] = ACTIONS(410),
    [sym__class_constructor] = ACTIONS(408),
    [sym__class_extends] = ACTIONS(408),
    [anon_sym_COLON_EQ] = ACTIONS(408),
    [sym__var] = ACTIONS(408),
    [sym__property] = ACTIONS(408),
    [sym__alias] = ACTIONS(408),
    [sym__declare] = ACTIONS(408),
    [sym__function] = ACTIONS(408),
    [sym__return] = ACTIONS(408),
    [sym__break] = ACTIONS(408),
    [sym__continue] = ACTIONS(408),
    [sym__this] = ACTIONS(408),
    [sym__form] = ACTIONS(408),
    [sym__super] = ACTIONS(408),
    [sym__class_store_4d] = ACTIONS(408),
    [sym__class_store_ds] = ACTIONS(408),
    [sym__class_store_cs] = ACTIONS(408),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(408),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(408),
    [aux_sym__classic_array_blob_token1] = ACTIONS(408),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(408),
    [aux_sym__classic_array_date_token1] = ACTIONS(408),
    [aux_sym__classic_array_integer_token1] = ACTIONS(408),
    [aux_sym__classic_array_longint_token1] = ACTIONS(408),
    [aux_sym__classic_array_object_token1] = ACTIONS(408),
    [aux_sym__classic_array_picture_token1] = ACTIONS(408),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(408),
    [aux_sym__classic_array_real_token1] = ACTIONS(408),
    [aux_sym__classic_array_text_token1] = ACTIONS(408),
    [aux_sym__classic_array_time_token1] = ACTIONS(408),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_SLASH_STAR] = ACTIONS(408),
    [sym__if_e] = ACTIONS(408),
    [sym__if_f] = ACTIONS(410),
    [sym__else_e] = ACTIONS(408),
    [sym__else_f] = ACTIONS(408),
    [sym__end_if_e] = ACTIONS(408),
    [sym__end_if_f] = ACTIONS(408),
    [sym__begin_sql_e] = ACTIONS(408),
    [sym__begin_sql_f] = ACTIONS(408),
    [sym__end_sql_e] = ACTIONS(408),
    [sym__end_sql_f] = ACTIONS(408),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym__local] = ACTIONS(401),
    [sym__exposed] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(403),
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_SLASH] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_TILDE_PIPE] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [anon_sym_QMARK_QMARK] = ACTIONS(401),
    [anon_sym_QMARK_PLUS] = ACTIONS(401),
    [anon_sym_QMARK_DASH] = ACTIONS(401),
    [anon_sym_PLUS_EQ] = ACTIONS(401),
    [anon_sym_DASH_EQ] = ACTIONS(401),
    [anon_sym_STAR_EQ] = ACTIONS(401),
    [anon_sym_SLASH_EQ] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_LT_GT] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_QMARK] = ACTIONS(403),
    [sym__class_constructor] = ACTIONS(401),
    [sym__class_extends] = ACTIONS(401),
    [anon_sym_COLON_EQ] = ACTIONS(401),
    [sym__var] = ACTIONS(401),
    [sym__property] = ACTIONS(401),
    [sym__alias] = ACTIONS(401),
    [sym__declare] = ACTIONS(401),
    [sym__function] = ACTIONS(401),
    [sym__return] = ACTIONS(401),
    [sym__break] = ACTIONS(401),
    [sym__continue] = ACTIONS(401),
    [sym__this] = ACTIONS(401),
    [sym__form] = ACTIONS(401),
    [sym__super] = ACTIONS(401),
    [sym__class_store_4d] = ACTIONS(401),
    [sym__class_store_ds] = ACTIONS(401),
    [sym__class_store_cs] = ACTIONS(401),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(401),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(401),
    [aux_sym__classic_array_blob_token1] = ACTIONS(401),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(401),
    [aux_sym__classic_array_date_token1] = ACTIONS(401),
    [aux_sym__classic_array_integer_token1] = ACTIONS(401),
    [aux_sym__classic_array_longint_token1] = ACTIONS(401),
    [aux_sym__classic_array_object_token1] = ACTIONS(401),
    [aux_sym__classic_array_picture_token1] = ACTIONS(401),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(401),
    [aux_sym__classic_array_real_token1] = ACTIONS(401),
    [aux_sym__classic_array_text_token1] = ACTIONS(401),
    [aux_sym__classic_array_time_token1] = ACTIONS(401),
    [anon_sym_SLASH_SLASH] = ACTIONS(401),
    [anon_sym_SLASH_STAR] = ACTIONS(401),
    [sym__if_e] = ACTIONS(401),
    [sym__if_f] = ACTIONS(403),
    [sym__else_e] = ACTIONS(401),
    [sym__else_f] = ACTIONS(401),
    [sym__end_if_e] = ACTIONS(401),
    [sym__end_if_f] = ACTIONS(401),
    [sym__begin_sql_e] = ACTIONS(401),
    [sym__begin_sql_f] = ACTIONS(401),
    [sym__end_sql_e] = ACTIONS(401),
    [sym__end_sql_f] = ACTIONS(401),
  },
  [15] = {
    [aux_sym__mutable_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym__local] = ACTIONS(412),
    [sym__exposed] = ACTIONS(412),
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(414),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(414),
    [anon_sym_CARET] = ACTIONS(412),
    [anon_sym_TILDE_PIPE] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_EQ] = ACTIONS(412),
    [anon_sym_POUND] = ACTIONS(414),
    [anon_sym_LT_LT] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_QMARK_QMARK] = ACTIONS(412),
    [anon_sym_QMARK_PLUS] = ACTIONS(412),
    [anon_sym_QMARK_DASH] = ACTIONS(412),
    [anon_sym_PLUS_EQ] = ACTIONS(412),
    [anon_sym_DASH_EQ] = ACTIONS(412),
    [anon_sym_STAR_EQ] = ACTIONS(412),
    [anon_sym_SLASH_EQ] = ACTIONS(412),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_LT_GT] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_QMARK] = ACTIONS(414),
    [sym__class_constructor] = ACTIONS(412),
    [sym__class_extends] = ACTIONS(412),
    [anon_sym_COLON_EQ] = ACTIONS(412),
    [sym__var] = ACTIONS(412),
    [sym__property] = ACTIONS(412),
    [sym__alias] = ACTIONS(412),
    [sym__declare] = ACTIONS(412),
    [sym__function] = ACTIONS(412),
    [sym__return] = ACTIONS(412),
    [sym__break] = ACTIONS(412),
    [sym__continue] = ACTIONS(412),
    [sym__this] = ACTIONS(412),
    [sym__form] = ACTIONS(412),
    [sym__super] = ACTIONS(412),
    [sym__class_store_4d] = ACTIONS(412),
    [sym__class_store_ds] = ACTIONS(412),
    [sym__class_store_cs] = ACTIONS(412),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(412),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(412),
    [aux_sym__classic_array_blob_token1] = ACTIONS(412),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(412),
    [aux_sym__classic_array_date_token1] = ACTIONS(412),
    [aux_sym__classic_array_integer_token1] = ACTIONS(412),
    [aux_sym__classic_array_longint_token1] = ACTIONS(412),
    [aux_sym__classic_array_object_token1] = ACTIONS(412),
    [aux_sym__classic_array_picture_token1] = ACTIONS(412),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(412),
    [aux_sym__classic_array_real_token1] = ACTIONS(412),
    [aux_sym__classic_array_text_token1] = ACTIONS(412),
    [aux_sym__classic_array_time_token1] = ACTIONS(412),
    [anon_sym_SLASH_SLASH] = ACTIONS(412),
    [anon_sym_SLASH_STAR] = ACTIONS(412),
    [sym__if_e] = ACTIONS(412),
    [sym__if_f] = ACTIONS(414),
    [sym__else_e] = ACTIONS(412),
    [sym__else_f] = ACTIONS(412),
    [sym__end_if_e] = ACTIONS(412),
    [sym__end_if_f] = ACTIONS(412),
    [sym__begin_sql_e] = ACTIONS(412),
    [sym__begin_sql_f] = ACTIONS(412),
    [sym__end_sql_e] = ACTIONS(412),
    [sym__end_sql_f] = ACTIONS(412),
  },
  [16] = {
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym__local] = ACTIONS(420),
    [sym__exposed] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(422),
    [anon_sym_AMP_AMP] = ACTIONS(420),
    [anon_sym_PIPE_PIPE] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_CARET] = ACTIONS(420),
    [anon_sym_TILDE_PIPE] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_EQ] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(422),
    [anon_sym_LT_LT] = ACTIONS(420),
    [anon_sym_GT_GT] = ACTIONS(420),
    [anon_sym_QMARK_QMARK] = ACTIONS(420),
    [anon_sym_QMARK_PLUS] = ACTIONS(420),
    [anon_sym_QMARK_DASH] = ACTIONS(420),
    [anon_sym_PLUS_EQ] = ACTIONS(420),
    [anon_sym_DASH_EQ] = ACTIONS(420),
    [anon_sym_STAR_EQ] = ACTIONS(420),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [anon_sym_DOLLAR] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_LT_GT] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_QMARK] = ACTIONS(422),
    [sym__class_constructor] = ACTIONS(420),
    [sym__class_extends] = ACTIONS(420),
    [sym__var] = ACTIONS(420),
    [sym__property] = ACTIONS(420),
    [sym__alias] = ACTIONS(420),
    [sym__declare] = ACTIONS(420),
    [sym__function] = ACTIONS(420),
    [sym__return] = ACTIONS(420),
    [sym__break] = ACTIONS(420),
    [sym__continue] = ACTIONS(420),
    [sym__this] = ACTIONS(420),
    [sym__form] = ACTIONS(420),
    [sym__super] = ACTIONS(420),
    [sym__class_store_4d] = ACTIONS(420),
    [sym__class_store_ds] = ACTIONS(420),
    [sym__class_store_cs] = ACTIONS(420),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(420),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(420),
    [aux_sym__classic_array_blob_token1] = ACTIONS(420),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(420),
    [aux_sym__classic_array_date_token1] = ACTIONS(420),
    [aux_sym__classic_array_integer_token1] = ACTIONS(420),
    [aux_sym__classic_array_longint_token1] = ACTIONS(420),
    [aux_sym__classic_array_object_token1] = ACTIONS(420),
    [aux_sym__classic_array_picture_token1] = ACTIONS(420),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(420),
    [aux_sym__classic_array_real_token1] = ACTIONS(420),
    [aux_sym__classic_array_text_token1] = ACTIONS(420),
    [aux_sym__classic_array_time_token1] = ACTIONS(420),
    [anon_sym_SLASH_SLASH] = ACTIONS(420),
    [anon_sym_SLASH_STAR] = ACTIONS(420),
    [sym__if_e] = ACTIONS(420),
    [sym__if_f] = ACTIONS(422),
    [sym__else_e] = ACTIONS(420),
    [sym__else_f] = ACTIONS(420),
    [sym__end_if_e] = ACTIONS(420),
    [sym__end_if_f] = ACTIONS(420),
    [sym__begin_sql_e] = ACTIONS(420),
    [sym__begin_sql_f] = ACTIONS(420),
    [sym__end_sql_e] = ACTIONS(420),
    [sym__end_sql_f] = ACTIONS(420),
  },
  [17] = {
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym__local] = ACTIONS(424),
    [sym__exposed] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_AMP_AMP] = ACTIONS(424),
    [anon_sym_PIPE_PIPE] = ACTIONS(424),
    [anon_sym_AMP] = ACTIONS(426),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_CARET] = ACTIONS(424),
    [anon_sym_TILDE_PIPE] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_EQ] = ACTIONS(424),
    [anon_sym_POUND] = ACTIONS(426),
    [anon_sym_LT_LT] = ACTIONS(424),
    [anon_sym_GT_GT] = ACTIONS(424),
    [anon_sym_QMARK_QMARK] = ACTIONS(424),
    [anon_sym_QMARK_PLUS] = ACTIONS(424),
    [anon_sym_QMARK_DASH] = ACTIONS(424),
    [anon_sym_PLUS_EQ] = ACTIONS(424),
    [anon_sym_DASH_EQ] = ACTIONS(424),
    [anon_sym_STAR_EQ] = ACTIONS(424),
    [anon_sym_SLASH_EQ] = ACTIONS(424),
    [anon_sym_DOLLAR] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_LT_GT] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_QMARK] = ACTIONS(426),
    [sym__class_constructor] = ACTIONS(424),
    [sym__class_extends] = ACTIONS(424),
    [anon_sym_COLON_EQ] = ACTIONS(424),
    [sym__var] = ACTIONS(424),
    [sym__property] = ACTIONS(424),
    [sym__alias] = ACTIONS(424),
    [sym__declare] = ACTIONS(424),
    [sym__function] = ACTIONS(424),
    [sym__return] = ACTIONS(424),
    [sym__break] = ACTIONS(424),
    [sym__continue] = ACTIONS(424),
    [sym__this] = ACTIONS(424),
    [sym__form] = ACTIONS(424),
    [sym__super] = ACTIONS(424),
    [sym__class_store_4d] = ACTIONS(424),
    [sym__class_store_ds] = ACTIONS(424),
    [sym__class_store_cs] = ACTIONS(424),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(424),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(424),
    [aux_sym__classic_array_blob_token1] = ACTIONS(424),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(424),
    [aux_sym__classic_array_date_token1] = ACTIONS(424),
    [aux_sym__classic_array_integer_token1] = ACTIONS(424),
    [aux_sym__classic_array_longint_token1] = ACTIONS(424),
    [aux_sym__classic_array_object_token1] = ACTIONS(424),
    [aux_sym__classic_array_picture_token1] = ACTIONS(424),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(424),
    [aux_sym__classic_array_real_token1] = ACTIONS(424),
    [aux_sym__classic_array_text_token1] = ACTIONS(424),
    [aux_sym__classic_array_time_token1] = ACTIONS(424),
    [anon_sym_SLASH_SLASH] = ACTIONS(424),
    [anon_sym_SLASH_STAR] = ACTIONS(424),
    [sym__if_e] = ACTIONS(424),
    [sym__if_f] = ACTIONS(426),
    [sym__else_e] = ACTIONS(424),
    [sym__else_f] = ACTIONS(424),
    [sym__end_if_e] = ACTIONS(424),
    [sym__end_if_f] = ACTIONS(424),
    [sym__begin_sql_e] = ACTIONS(424),
    [sym__begin_sql_f] = ACTIONS(424),
    [sym__end_sql_e] = ACTIONS(424),
    [sym__end_sql_f] = ACTIONS(424),
  },
  [18] = {
    [aux_sym__mutable_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(430),
    [sym__local] = ACTIONS(430),
    [sym__exposed] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_CARET] = ACTIONS(430),
    [anon_sym_TILDE_PIPE] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_POUND] = ACTIONS(432),
    [anon_sym_LT_LT] = ACTIONS(430),
    [anon_sym_GT_GT] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_QMARK_PLUS] = ACTIONS(430),
    [anon_sym_QMARK_DASH] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_DOLLAR] = ACTIONS(430),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_LT_GT] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(432),
    [sym__class_constructor] = ACTIONS(430),
    [sym__class_extends] = ACTIONS(430),
    [sym__var] = ACTIONS(430),
    [sym__property] = ACTIONS(430),
    [sym__alias] = ACTIONS(430),
    [sym__declare] = ACTIONS(430),
    [sym__function] = ACTIONS(430),
    [sym__return] = ACTIONS(430),
    [sym__break] = ACTIONS(430),
    [sym__continue] = ACTIONS(430),
    [sym__this] = ACTIONS(430),
    [sym__form] = ACTIONS(430),
    [sym__super] = ACTIONS(430),
    [sym__class_store_4d] = ACTIONS(430),
    [sym__class_store_ds] = ACTIONS(430),
    [sym__class_store_cs] = ACTIONS(430),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(430),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(430),
    [aux_sym__classic_array_blob_token1] = ACTIONS(430),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(430),
    [aux_sym__classic_array_date_token1] = ACTIONS(430),
    [aux_sym__classic_array_integer_token1] = ACTIONS(430),
    [aux_sym__classic_array_longint_token1] = ACTIONS(430),
    [aux_sym__classic_array_object_token1] = ACTIONS(430),
    [aux_sym__classic_array_picture_token1] = ACTIONS(430),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(430),
    [aux_sym__classic_array_real_token1] = ACTIONS(430),
    [aux_sym__classic_array_text_token1] = ACTIONS(430),
    [aux_sym__classic_array_time_token1] = ACTIONS(430),
    [anon_sym_SLASH_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_STAR] = ACTIONS(430),
    [sym__if_e] = ACTIONS(430),
    [sym__if_f] = ACTIONS(432),
    [sym__else_e] = ACTIONS(430),
    [sym__else_f] = ACTIONS(430),
    [sym__end_if_e] = ACTIONS(430),
    [sym__end_if_f] = ACTIONS(430),
    [sym__begin_sql_e] = ACTIONS(430),
    [sym__begin_sql_f] = ACTIONS(430),
    [sym__end_sql_e] = ACTIONS(430),
    [sym__end_sql_f] = ACTIONS(430),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym__local] = ACTIONS(434),
    [sym__exposed] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(436),
    [anon_sym_DASH] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(436),
    [anon_sym_SLASH] = ACTIONS(436),
    [anon_sym_AMP_AMP] = ACTIONS(434),
    [anon_sym_PIPE_PIPE] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(436),
    [anon_sym_PIPE] = ACTIONS(436),
    [anon_sym_CARET] = ACTIONS(434),
    [anon_sym_TILDE_PIPE] = ACTIONS(434),
    [anon_sym_LT] = ACTIONS(436),
    [anon_sym_GT] = ACTIONS(436),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(436),
    [anon_sym_LT_LT] = ACTIONS(434),
    [anon_sym_GT_GT] = ACTIONS(434),
    [anon_sym_QMARK_QMARK] = ACTIONS(434),
    [anon_sym_QMARK_PLUS] = ACTIONS(434),
    [anon_sym_QMARK_DASH] = ACTIONS(434),
    [anon_sym_PLUS_EQ] = ACTIONS(434),
    [anon_sym_DASH_EQ] = ACTIONS(434),
    [anon_sym_STAR_EQ] = ACTIONS(434),
    [anon_sym_SLASH_EQ] = ACTIONS(434),
    [anon_sym_DOLLAR] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_LT_GT] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(434),
    [anon_sym_QMARK] = ACTIONS(436),
    [sym__class_constructor] = ACTIONS(434),
    [sym__class_extends] = ACTIONS(434),
    [anon_sym_COLON_EQ] = ACTIONS(434),
    [sym__var] = ACTIONS(434),
    [sym__property] = ACTIONS(434),
    [sym__alias] = ACTIONS(434),
    [sym__declare] = ACTIONS(434),
    [sym__function] = ACTIONS(434),
    [sym__return] = ACTIONS(434),
    [sym__break] = ACTIONS(434),
    [sym__continue] = ACTIONS(434),
    [sym__this] = ACTIONS(434),
    [sym__form] = ACTIONS(434),
    [sym__super] = ACTIONS(434),
    [sym__class_store_4d] = ACTIONS(434),
    [sym__class_store_ds] = ACTIONS(434),
    [sym__class_store_cs] = ACTIONS(434),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(434),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(434),
    [aux_sym__classic_array_blob_token1] = ACTIONS(434),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(434),
    [aux_sym__classic_array_date_token1] = ACTIONS(434),
    [aux_sym__classic_array_integer_token1] = ACTIONS(434),
    [aux_sym__classic_array_longint_token1] = ACTIONS(434),
    [aux_sym__classic_array_object_token1] = ACTIONS(434),
    [aux_sym__classic_array_picture_token1] = ACTIONS(434),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(434),
    [aux_sym__classic_array_real_token1] = ACTIONS(434),
    [aux_sym__classic_array_text_token1] = ACTIONS(434),
    [aux_sym__classic_array_time_token1] = ACTIONS(434),
    [anon_sym_SLASH_SLASH] = ACTIONS(434),
    [anon_sym_SLASH_STAR] = ACTIONS(434),
    [sym__if_e] = ACTIONS(434),
    [sym__if_f] = ACTIONS(436),
    [sym__else_e] = ACTIONS(434),
    [sym__else_f] = ACTIONS(434),
    [sym__end_if_e] = ACTIONS(434),
    [sym__end_if_f] = ACTIONS(434),
    [sym__begin_sql_e] = ACTIONS(434),
    [sym__begin_sql_f] = ACTIONS(434),
    [sym__end_sql_e] = ACTIONS(434),
    [sym__end_sql_f] = ACTIONS(434),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [sym__local] = ACTIONS(438),
    [sym__exposed] = ACTIONS(438),
    [anon_sym_LPAREN] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_STAR] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_AMP_AMP] = ACTIONS(438),
    [anon_sym_PIPE_PIPE] = ACTIONS(438),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(438),
    [anon_sym_TILDE_PIPE] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_LT_LT] = ACTIONS(438),
    [anon_sym_GT_GT] = ACTIONS(438),
    [anon_sym_QMARK_QMARK] = ACTIONS(438),
    [anon_sym_QMARK_PLUS] = ACTIONS(438),
    [anon_sym_QMARK_DASH] = ACTIONS(438),
    [anon_sym_PLUS_EQ] = ACTIONS(438),
    [anon_sym_DASH_EQ] = ACTIONS(438),
    [anon_sym_STAR_EQ] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(438),
    [anon_sym_DOLLAR] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_LT_GT] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [anon_sym_QMARK] = ACTIONS(440),
    [sym__class_constructor] = ACTIONS(438),
    [sym__class_extends] = ACTIONS(438),
    [anon_sym_COLON_EQ] = ACTIONS(438),
    [sym__var] = ACTIONS(438),
    [sym__property] = ACTIONS(438),
    [sym__alias] = ACTIONS(438),
    [sym__declare] = ACTIONS(438),
    [sym__function] = ACTIONS(438),
    [sym__return] = ACTIONS(438),
    [sym__break] = ACTIONS(438),
    [sym__continue] = ACTIONS(438),
    [sym__this] = ACTIONS(438),
    [sym__form] = ACTIONS(438),
    [sym__super] = ACTIONS(438),
    [sym__class_store_4d] = ACTIONS(438),
    [sym__class_store_ds] = ACTIONS(438),
    [sym__class_store_cs] = ACTIONS(438),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(438),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(438),
    [aux_sym__classic_array_blob_token1] = ACTIONS(438),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(438),
    [aux_sym__classic_array_date_token1] = ACTIONS(438),
    [aux_sym__classic_array_integer_token1] = ACTIONS(438),
    [aux_sym__classic_array_longint_token1] = ACTIONS(438),
    [aux_sym__classic_array_object_token1] = ACTIONS(438),
    [aux_sym__classic_array_picture_token1] = ACTIONS(438),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(438),
    [aux_sym__classic_array_real_token1] = ACTIONS(438),
    [aux_sym__classic_array_text_token1] = ACTIONS(438),
    [aux_sym__classic_array_time_token1] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_STAR] = ACTIONS(438),
    [sym__if_e] = ACTIONS(438),
    [sym__if_f] = ACTIONS(440),
    [sym__else_e] = ACTIONS(438),
    [sym__else_f] = ACTIONS(438),
    [sym__end_if_e] = ACTIONS(438),
    [sym__end_if_f] = ACTIONS(438),
    [sym__begin_sql_e] = ACTIONS(438),
    [sym__begin_sql_f] = ACTIONS(438),
    [sym__end_sql_e] = ACTIONS(438),
    [sym__end_sql_f] = ACTIONS(438),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym__local] = ACTIONS(444),
    [sym__exposed] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(444),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_CARET] = ACTIONS(444),
    [anon_sym_TILDE_PIPE] = ACTIONS(444),
    [anon_sym_LT] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_POUND] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(444),
    [anon_sym_GT_GT] = ACTIONS(444),
    [anon_sym_QMARK_QMARK] = ACTIONS(444),
    [anon_sym_QMARK_PLUS] = ACTIONS(444),
    [anon_sym_QMARK_DASH] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_DOLLAR] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LT_GT] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(446),
    [sym__class_constructor] = ACTIONS(444),
    [sym__class_extends] = ACTIONS(444),
    [anon_sym_COLON_EQ] = ACTIONS(444),
    [sym__var] = ACTIONS(444),
    [sym__property] = ACTIONS(444),
    [sym__alias] = ACTIONS(444),
    [sym__declare] = ACTIONS(444),
    [sym__function] = ACTIONS(444),
    [sym__return] = ACTIONS(444),
    [sym__break] = ACTIONS(444),
    [sym__continue] = ACTIONS(444),
    [sym__this] = ACTIONS(444),
    [sym__form] = ACTIONS(444),
    [sym__super] = ACTIONS(444),
    [sym__class_store_4d] = ACTIONS(444),
    [sym__class_store_ds] = ACTIONS(444),
    [sym__class_store_cs] = ACTIONS(444),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(444),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(444),
    [aux_sym__classic_array_blob_token1] = ACTIONS(444),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(444),
    [aux_sym__classic_array_date_token1] = ACTIONS(444),
    [aux_sym__classic_array_integer_token1] = ACTIONS(444),
    [aux_sym__classic_array_longint_token1] = ACTIONS(444),
    [aux_sym__classic_array_object_token1] = ACTIONS(444),
    [aux_sym__classic_array_picture_token1] = ACTIONS(444),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(444),
    [aux_sym__classic_array_real_token1] = ACTIONS(444),
    [aux_sym__classic_array_text_token1] = ACTIONS(444),
    [aux_sym__classic_array_time_token1] = ACTIONS(444),
    [anon_sym_SLASH_SLASH] = ACTIONS(444),
    [anon_sym_SLASH_STAR] = ACTIONS(444),
    [sym__if_e] = ACTIONS(444),
    [sym__if_f] = ACTIONS(446),
    [sym__else_e] = ACTIONS(444),
    [sym__else_f] = ACTIONS(444),
    [sym__end_if_e] = ACTIONS(444),
    [sym__end_if_f] = ACTIONS(444),
    [sym__begin_sql_e] = ACTIONS(444),
    [sym__begin_sql_f] = ACTIONS(444),
    [sym__end_sql_e] = ACTIONS(444),
    [sym__end_sql_f] = ACTIONS(444),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym__local] = ACTIONS(450),
    [sym__exposed] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_PLUS] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_AMP_AMP] = ACTIONS(450),
    [anon_sym_PIPE_PIPE] = ACTIONS(450),
    [anon_sym_AMP] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_CARET] = ACTIONS(450),
    [anon_sym_TILDE_PIPE] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_POUND] = ACTIONS(452),
    [anon_sym_LT_LT] = ACTIONS(450),
    [anon_sym_GT_GT] = ACTIONS(450),
    [anon_sym_QMARK_QMARK] = ACTIONS(450),
    [anon_sym_QMARK_PLUS] = ACTIONS(450),
    [anon_sym_QMARK_DASH] = ACTIONS(450),
    [anon_sym_PLUS_EQ] = ACTIONS(450),
    [anon_sym_DASH_EQ] = ACTIONS(450),
    [anon_sym_STAR_EQ] = ACTIONS(450),
    [anon_sym_SLASH_EQ] = ACTIONS(450),
    [anon_sym_DOLLAR] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(450),
    [anon_sym_LT_GT] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [anon_sym_QMARK] = ACTIONS(452),
    [sym__class_constructor] = ACTIONS(450),
    [sym__class_extends] = ACTIONS(450),
    [sym__var] = ACTIONS(450),
    [sym__property] = ACTIONS(450),
    [sym__alias] = ACTIONS(450),
    [sym__declare] = ACTIONS(450),
    [sym__function] = ACTIONS(450),
    [sym__return] = ACTIONS(450),
    [sym__break] = ACTIONS(450),
    [sym__continue] = ACTIONS(450),
    [sym__this] = ACTIONS(450),
    [sym__form] = ACTIONS(450),
    [sym__super] = ACTIONS(450),
    [sym__class_store_4d] = ACTIONS(450),
    [sym__class_store_ds] = ACTIONS(450),
    [sym__class_store_cs] = ACTIONS(450),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(450),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(450),
    [aux_sym__classic_array_blob_token1] = ACTIONS(450),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(450),
    [aux_sym__classic_array_date_token1] = ACTIONS(450),
    [aux_sym__classic_array_integer_token1] = ACTIONS(450),
    [aux_sym__classic_array_longint_token1] = ACTIONS(450),
    [aux_sym__classic_array_object_token1] = ACTIONS(450),
    [aux_sym__classic_array_picture_token1] = ACTIONS(450),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(450),
    [aux_sym__classic_array_real_token1] = ACTIONS(450),
    [aux_sym__classic_array_text_token1] = ACTIONS(450),
    [aux_sym__classic_array_time_token1] = ACTIONS(450),
    [anon_sym_SLASH_SLASH] = ACTIONS(450),
    [anon_sym_SLASH_STAR] = ACTIONS(450),
    [sym__if_e] = ACTIONS(450),
    [sym__if_f] = ACTIONS(452),
    [sym__else_e] = ACTIONS(450),
    [sym__else_f] = ACTIONS(450),
    [sym__end_if_e] = ACTIONS(450),
    [sym__end_if_f] = ACTIONS(450),
    [sym__begin_sql_e] = ACTIONS(450),
    [sym__begin_sql_f] = ACTIONS(450),
    [sym__end_sql_e] = ACTIONS(450),
    [sym__end_sql_f] = ACTIONS(450),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym__local] = ACTIONS(454),
    [sym__exposed] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_STAR] = ACTIONS(456),
    [anon_sym_SLASH] = ACTIONS(456),
    [anon_sym_AMP_AMP] = ACTIONS(454),
    [anon_sym_PIPE_PIPE] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_CARET] = ACTIONS(454),
    [anon_sym_TILDE_PIPE] = ACTIONS(454),
    [anon_sym_LT] = ACTIONS(456),
    [anon_sym_GT] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(456),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_QMARK_QMARK] = ACTIONS(454),
    [anon_sym_QMARK_PLUS] = ACTIONS(454),
    [anon_sym_QMARK_DASH] = ACTIONS(454),
    [anon_sym_PLUS_EQ] = ACTIONS(454),
    [anon_sym_DASH_EQ] = ACTIONS(454),
    [anon_sym_STAR_EQ] = ACTIONS(454),
    [anon_sym_SLASH_EQ] = ACTIONS(454),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_LT_GT] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_QMARK] = ACTIONS(456),
    [sym__class_constructor] = ACTIONS(454),
    [sym__class_extends] = ACTIONS(454),
    [sym__var] = ACTIONS(454),
    [sym__property] = ACTIONS(454),
    [sym__alias] = ACTIONS(454),
    [sym__declare] = ACTIONS(454),
    [sym__function] = ACTIONS(454),
    [sym__return] = ACTIONS(454),
    [sym__break] = ACTIONS(454),
    [sym__continue] = ACTIONS(454),
    [sym__this] = ACTIONS(454),
    [sym__form] = ACTIONS(454),
    [sym__super] = ACTIONS(454),
    [sym__class_store_4d] = ACTIONS(454),
    [sym__class_store_ds] = ACTIONS(454),
    [sym__class_store_cs] = ACTIONS(454),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(454),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(454),
    [aux_sym__classic_array_blob_token1] = ACTIONS(454),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(454),
    [aux_sym__classic_array_date_token1] = ACTIONS(454),
    [aux_sym__classic_array_integer_token1] = ACTIONS(454),
    [aux_sym__classic_array_longint_token1] = ACTIONS(454),
    [aux_sym__classic_array_object_token1] = ACTIONS(454),
    [aux_sym__classic_array_picture_token1] = ACTIONS(454),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(454),
    [aux_sym__classic_array_real_token1] = ACTIONS(454),
    [aux_sym__classic_array_text_token1] = ACTIONS(454),
    [aux_sym__classic_array_time_token1] = ACTIONS(454),
    [anon_sym_SLASH_SLASH] = ACTIONS(454),
    [anon_sym_SLASH_STAR] = ACTIONS(454),
    [sym__if_e] = ACTIONS(454),
    [sym__if_f] = ACTIONS(456),
    [sym__else_e] = ACTIONS(454),
    [sym__else_f] = ACTIONS(454),
    [sym__end_if_e] = ACTIONS(454),
    [sym__end_if_f] = ACTIONS(454),
    [sym__begin_sql_e] = ACTIONS(454),
    [sym__begin_sql_f] = ACTIONS(454),
    [sym__end_sql_e] = ACTIONS(454),
    [sym__end_sql_f] = ACTIONS(454),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym__local] = ACTIONS(458),
    [sym__exposed] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_PLUS] = ACTIONS(460),
    [anon_sym_DASH] = ACTIONS(460),
    [anon_sym_STAR] = ACTIONS(460),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_AMP_AMP] = ACTIONS(458),
    [anon_sym_PIPE_PIPE] = ACTIONS(458),
    [anon_sym_AMP] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_CARET] = ACTIONS(458),
    [anon_sym_TILDE_PIPE] = ACTIONS(458),
    [anon_sym_LT] = ACTIONS(460),
    [anon_sym_GT] = ACTIONS(460),
    [anon_sym_EQ] = ACTIONS(458),
    [anon_sym_POUND] = ACTIONS(460),
    [anon_sym_LT_LT] = ACTIONS(458),
    [anon_sym_GT_GT] = ACTIONS(458),
    [anon_sym_QMARK_QMARK] = ACTIONS(458),
    [anon_sym_QMARK_PLUS] = ACTIONS(458),
    [anon_sym_QMARK_DASH] = ACTIONS(458),
    [anon_sym_PLUS_EQ] = ACTIONS(458),
    [anon_sym_DASH_EQ] = ACTIONS(458),
    [anon_sym_STAR_EQ] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(458),
    [anon_sym_DOLLAR] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(458),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_LT_GT] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [anon_sym_QMARK] = ACTIONS(460),
    [sym__class_constructor] = ACTIONS(458),
    [sym__class_extends] = ACTIONS(458),
    [anon_sym_COLON_EQ] = ACTIONS(458),
    [sym__var] = ACTIONS(458),
    [sym__property] = ACTIONS(458),
    [sym__alias] = ACTIONS(458),
    [sym__declare] = ACTIONS(458),
    [sym__function] = ACTIONS(458),
    [sym__return] = ACTIONS(458),
    [sym__break] = ACTIONS(458),
    [sym__continue] = ACTIONS(458),
    [sym__this] = ACTIONS(458),
    [sym__form] = ACTIONS(458),
    [sym__super] = ACTIONS(458),
    [sym__class_store_4d] = ACTIONS(458),
    [sym__class_store_ds] = ACTIONS(458),
    [sym__class_store_cs] = ACTIONS(458),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(458),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(458),
    [aux_sym__classic_array_blob_token1] = ACTIONS(458),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(458),
    [aux_sym__classic_array_date_token1] = ACTIONS(458),
    [aux_sym__classic_array_integer_token1] = ACTIONS(458),
    [aux_sym__classic_array_longint_token1] = ACTIONS(458),
    [aux_sym__classic_array_object_token1] = ACTIONS(458),
    [aux_sym__classic_array_picture_token1] = ACTIONS(458),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(458),
    [aux_sym__classic_array_real_token1] = ACTIONS(458),
    [aux_sym__classic_array_text_token1] = ACTIONS(458),
    [aux_sym__classic_array_time_token1] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_STAR] = ACTIONS(458),
    [sym__if_e] = ACTIONS(458),
    [sym__if_f] = ACTIONS(460),
    [sym__else_e] = ACTIONS(458),
    [sym__else_f] = ACTIONS(458),
    [sym__end_if_e] = ACTIONS(458),
    [sym__end_if_f] = ACTIONS(458),
    [sym__begin_sql_e] = ACTIONS(458),
    [sym__begin_sql_f] = ACTIONS(458),
    [sym__end_sql_e] = ACTIONS(458),
    [sym__end_sql_f] = ACTIONS(458),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [sym__local] = ACTIONS(462),
    [sym__exposed] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(462),
    [anon_sym_PLUS] = ACTIONS(464),
    [anon_sym_DASH] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(464),
    [anon_sym_SLASH] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(462),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_AMP] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_CARET] = ACTIONS(462),
    [anon_sym_TILDE_PIPE] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_LT_LT] = ACTIONS(462),
    [anon_sym_GT_GT] = ACTIONS(462),
    [anon_sym_QMARK_QMARK] = ACTIONS(462),
    [anon_sym_QMARK_PLUS] = ACTIONS(462),
    [anon_sym_QMARK_DASH] = ACTIONS(462),
    [anon_sym_PLUS_EQ] = ACTIONS(462),
    [anon_sym_DASH_EQ] = ACTIONS(462),
    [anon_sym_STAR_EQ] = ACTIONS(462),
    [anon_sym_SLASH_EQ] = ACTIONS(462),
    [anon_sym_DOLLAR] = ACTIONS(462),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_LT_GT] = ACTIONS(462),
    [anon_sym_DOT] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(464),
    [sym__class_constructor] = ACTIONS(462),
    [sym__class_extends] = ACTIONS(462),
    [anon_sym_COLON_EQ] = ACTIONS(462),
    [sym__var] = ACTIONS(462),
    [sym__property] = ACTIONS(462),
    [sym__alias] = ACTIONS(462),
    [sym__declare] = ACTIONS(462),
    [sym__function] = ACTIONS(462),
    [sym__return] = ACTIONS(462),
    [sym__break] = ACTIONS(462),
    [sym__continue] = ACTIONS(462),
    [sym__this] = ACTIONS(462),
    [sym__form] = ACTIONS(462),
    [sym__super] = ACTIONS(462),
    [sym__class_store_4d] = ACTIONS(462),
    [sym__class_store_ds] = ACTIONS(462),
    [sym__class_store_cs] = ACTIONS(462),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(462),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(462),
    [aux_sym__classic_array_blob_token1] = ACTIONS(462),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(462),
    [aux_sym__classic_array_date_token1] = ACTIONS(462),
    [aux_sym__classic_array_integer_token1] = ACTIONS(462),
    [aux_sym__classic_array_longint_token1] = ACTIONS(462),
    [aux_sym__classic_array_object_token1] = ACTIONS(462),
    [aux_sym__classic_array_picture_token1] = ACTIONS(462),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(462),
    [aux_sym__classic_array_real_token1] = ACTIONS(462),
    [aux_sym__classic_array_text_token1] = ACTIONS(462),
    [aux_sym__classic_array_time_token1] = ACTIONS(462),
    [anon_sym_SLASH_SLASH] = ACTIONS(462),
    [anon_sym_SLASH_STAR] = ACTIONS(462),
    [sym__if_e] = ACTIONS(462),
    [sym__if_f] = ACTIONS(464),
    [sym__else_e] = ACTIONS(462),
    [sym__else_f] = ACTIONS(462),
    [sym__end_if_e] = ACTIONS(462),
    [sym__end_if_f] = ACTIONS(462),
    [sym__begin_sql_e] = ACTIONS(462),
    [sym__begin_sql_f] = ACTIONS(462),
    [sym__end_sql_e] = ACTIONS(462),
    [sym__end_sql_f] = ACTIONS(462),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym__local] = ACTIONS(468),
    [sym__exposed] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_AMP_AMP] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_TILDE_PIPE] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_POUND] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_QMARK_QMARK] = ACTIONS(468),
    [anon_sym_QMARK_PLUS] = ACTIONS(468),
    [anon_sym_QMARK_DASH] = ACTIONS(468),
    [anon_sym_PLUS_EQ] = ACTIONS(468),
    [anon_sym_DASH_EQ] = ACTIONS(468),
    [anon_sym_STAR_EQ] = ACTIONS(468),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [anon_sym_DOLLAR] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_LT_GT] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [anon_sym_QMARK] = ACTIONS(470),
    [sym__class_constructor] = ACTIONS(468),
    [sym__class_extends] = ACTIONS(468),
    [anon_sym_COLON_EQ] = ACTIONS(468),
    [sym__var] = ACTIONS(468),
    [sym__property] = ACTIONS(468),
    [sym__alias] = ACTIONS(468),
    [sym__declare] = ACTIONS(468),
    [sym__function] = ACTIONS(468),
    [sym__return] = ACTIONS(468),
    [sym__break] = ACTIONS(468),
    [sym__continue] = ACTIONS(468),
    [sym__this] = ACTIONS(468),
    [sym__form] = ACTIONS(468),
    [sym__super] = ACTIONS(468),
    [sym__class_store_4d] = ACTIONS(468),
    [sym__class_store_ds] = ACTIONS(468),
    [sym__class_store_cs] = ACTIONS(468),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(468),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(468),
    [aux_sym__classic_array_blob_token1] = ACTIONS(468),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(468),
    [aux_sym__classic_array_date_token1] = ACTIONS(468),
    [aux_sym__classic_array_integer_token1] = ACTIONS(468),
    [aux_sym__classic_array_longint_token1] = ACTIONS(468),
    [aux_sym__classic_array_object_token1] = ACTIONS(468),
    [aux_sym__classic_array_picture_token1] = ACTIONS(468),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(468),
    [aux_sym__classic_array_real_token1] = ACTIONS(468),
    [aux_sym__classic_array_text_token1] = ACTIONS(468),
    [aux_sym__classic_array_time_token1] = ACTIONS(468),
    [anon_sym_SLASH_SLASH] = ACTIONS(468),
    [anon_sym_SLASH_STAR] = ACTIONS(468),
    [sym__if_e] = ACTIONS(468),
    [sym__if_f] = ACTIONS(470),
    [sym__else_e] = ACTIONS(468),
    [sym__else_f] = ACTIONS(468),
    [sym__end_if_e] = ACTIONS(468),
    [sym__end_if_f] = ACTIONS(468),
    [sym__begin_sql_e] = ACTIONS(468),
    [sym__begin_sql_f] = ACTIONS(468),
    [sym__end_sql_e] = ACTIONS(468),
    [sym__end_sql_f] = ACTIONS(468),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [sym__local] = ACTIONS(472),
    [sym__exposed] = ACTIONS(472),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_AMP_AMP] = ACTIONS(472),
    [anon_sym_PIPE_PIPE] = ACTIONS(472),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(472),
    [anon_sym_TILDE_PIPE] = ACTIONS(472),
    [anon_sym_LT] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_POUND] = ACTIONS(474),
    [anon_sym_LT_LT] = ACTIONS(472),
    [anon_sym_GT_GT] = ACTIONS(472),
    [anon_sym_QMARK_QMARK] = ACTIONS(472),
    [anon_sym_QMARK_PLUS] = ACTIONS(472),
    [anon_sym_QMARK_DASH] = ACTIONS(472),
    [anon_sym_PLUS_EQ] = ACTIONS(472),
    [anon_sym_DASH_EQ] = ACTIONS(472),
    [anon_sym_STAR_EQ] = ACTIONS(472),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [anon_sym_DOLLAR] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_LT_GT] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(474),
    [sym__class_constructor] = ACTIONS(472),
    [sym__class_extends] = ACTIONS(472),
    [anon_sym_COLON_EQ] = ACTIONS(472),
    [sym__var] = ACTIONS(472),
    [sym__property] = ACTIONS(472),
    [sym__alias] = ACTIONS(472),
    [sym__declare] = ACTIONS(472),
    [sym__function] = ACTIONS(472),
    [sym__return] = ACTIONS(472),
    [sym__break] = ACTIONS(472),
    [sym__continue] = ACTIONS(472),
    [sym__this] = ACTIONS(472),
    [sym__form] = ACTIONS(472),
    [sym__super] = ACTIONS(472),
    [sym__class_store_4d] = ACTIONS(472),
    [sym__class_store_ds] = ACTIONS(472),
    [sym__class_store_cs] = ACTIONS(472),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(472),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(472),
    [aux_sym__classic_array_blob_token1] = ACTIONS(472),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(472),
    [aux_sym__classic_array_date_token1] = ACTIONS(472),
    [aux_sym__classic_array_integer_token1] = ACTIONS(472),
    [aux_sym__classic_array_longint_token1] = ACTIONS(472),
    [aux_sym__classic_array_object_token1] = ACTIONS(472),
    [aux_sym__classic_array_picture_token1] = ACTIONS(472),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(472),
    [aux_sym__classic_array_real_token1] = ACTIONS(472),
    [aux_sym__classic_array_text_token1] = ACTIONS(472),
    [aux_sym__classic_array_time_token1] = ACTIONS(472),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_SLASH_STAR] = ACTIONS(472),
    [sym__if_e] = ACTIONS(472),
    [sym__if_f] = ACTIONS(474),
    [sym__else_e] = ACTIONS(472),
    [sym__else_f] = ACTIONS(472),
    [sym__end_if_e] = ACTIONS(472),
    [sym__end_if_f] = ACTIONS(472),
    [sym__begin_sql_e] = ACTIONS(472),
    [sym__begin_sql_f] = ACTIONS(472),
    [sym__end_sql_e] = ACTIONS(472),
    [sym__end_sql_f] = ACTIONS(472),
  },
  [28] = {
    [sym__functional_expression] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym__local] = ACTIONS(476),
    [sym__exposed] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_STAR] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(476),
    [anon_sym_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(480),
    [anon_sym_PIPE] = ACTIONS(480),
    [anon_sym_CARET] = ACTIONS(476),
    [anon_sym_TILDE_PIPE] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(480),
    [anon_sym_LT_LT] = ACTIONS(476),
    [anon_sym_GT_GT] = ACTIONS(476),
    [anon_sym_QMARK_QMARK] = ACTIONS(476),
    [anon_sym_QMARK_PLUS] = ACTIONS(476),
    [anon_sym_QMARK_DASH] = ACTIONS(476),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_LT_GT] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(480),
    [sym__class_constructor] = ACTIONS(476),
    [sym__class_extends] = ACTIONS(476),
    [sym__var] = ACTIONS(476),
    [sym__property] = ACTIONS(476),
    [sym__alias] = ACTIONS(476),
    [sym__declare] = ACTIONS(476),
    [sym__function] = ACTIONS(476),
    [sym__return] = ACTIONS(476),
    [sym__break] = ACTIONS(476),
    [sym__continue] = ACTIONS(476),
    [sym__this] = ACTIONS(476),
    [sym__form] = ACTIONS(476),
    [sym__super] = ACTIONS(476),
    [sym__class_store_4d] = ACTIONS(476),
    [sym__class_store_ds] = ACTIONS(476),
    [sym__class_store_cs] = ACTIONS(476),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(476),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(476),
    [aux_sym__classic_array_blob_token1] = ACTIONS(476),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(476),
    [aux_sym__classic_array_date_token1] = ACTIONS(476),
    [aux_sym__classic_array_integer_token1] = ACTIONS(476),
    [aux_sym__classic_array_longint_token1] = ACTIONS(476),
    [aux_sym__classic_array_object_token1] = ACTIONS(476),
    [aux_sym__classic_array_picture_token1] = ACTIONS(476),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(476),
    [aux_sym__classic_array_real_token1] = ACTIONS(476),
    [aux_sym__classic_array_text_token1] = ACTIONS(476),
    [aux_sym__classic_array_time_token1] = ACTIONS(476),
    [anon_sym_SLASH_SLASH] = ACTIONS(476),
    [anon_sym_SLASH_STAR] = ACTIONS(476),
    [sym__if_e] = ACTIONS(476),
    [sym__if_f] = ACTIONS(480),
    [sym__else_e] = ACTIONS(476),
    [sym__else_f] = ACTIONS(476),
    [sym__end_if_e] = ACTIONS(476),
    [sym__end_if_f] = ACTIONS(476),
    [sym__begin_sql_e] = ACTIONS(476),
    [sym__begin_sql_f] = ACTIONS(476),
    [sym__end_sql_e] = ACTIONS(476),
    [sym__end_sql_f] = ACTIONS(476),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [sym__local] = ACTIONS(482),
    [sym__exposed] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(484),
    [anon_sym_STAR] = ACTIONS(484),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_AMP] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_CARET] = ACTIONS(482),
    [anon_sym_TILDE_PIPE] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_GT] = ACTIONS(484),
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_POUND] = ACTIONS(484),
    [anon_sym_LT_LT] = ACTIONS(482),
    [anon_sym_GT_GT] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_QMARK_PLUS] = ACTIONS(482),
    [anon_sym_QMARK_DASH] = ACTIONS(482),
    [anon_sym_PLUS_EQ] = ACTIONS(482),
    [anon_sym_DASH_EQ] = ACTIONS(482),
    [anon_sym_STAR_EQ] = ACTIONS(482),
    [anon_sym_SLASH_EQ] = ACTIONS(482),
    [anon_sym_DOLLAR] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_LT_GT] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [anon_sym_QMARK] = ACTIONS(484),
    [sym__class_constructor] = ACTIONS(482),
    [sym__class_extends] = ACTIONS(482),
    [anon_sym_COLON_EQ] = ACTIONS(482),
    [sym__var] = ACTIONS(482),
    [sym__property] = ACTIONS(482),
    [sym__alias] = ACTIONS(482),
    [sym__declare] = ACTIONS(482),
    [sym__function] = ACTIONS(482),
    [sym__return] = ACTIONS(482),
    [sym__break] = ACTIONS(482),
    [sym__continue] = ACTIONS(482),
    [sym__this] = ACTIONS(482),
    [sym__form] = ACTIONS(482),
    [sym__super] = ACTIONS(482),
    [sym__class_store_4d] = ACTIONS(482),
    [sym__class_store_ds] = ACTIONS(482),
    [sym__class_store_cs] = ACTIONS(482),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(482),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(482),
    [aux_sym__classic_array_blob_token1] = ACTIONS(482),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(482),
    [aux_sym__classic_array_date_token1] = ACTIONS(482),
    [aux_sym__classic_array_integer_token1] = ACTIONS(482),
    [aux_sym__classic_array_longint_token1] = ACTIONS(482),
    [aux_sym__classic_array_object_token1] = ACTIONS(482),
    [aux_sym__classic_array_picture_token1] = ACTIONS(482),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(482),
    [aux_sym__classic_array_real_token1] = ACTIONS(482),
    [aux_sym__classic_array_text_token1] = ACTIONS(482),
    [aux_sym__classic_array_time_token1] = ACTIONS(482),
    [anon_sym_SLASH_SLASH] = ACTIONS(482),
    [anon_sym_SLASH_STAR] = ACTIONS(482),
    [sym__if_e] = ACTIONS(482),
    [sym__if_f] = ACTIONS(484),
    [sym__else_e] = ACTIONS(482),
    [sym__else_f] = ACTIONS(482),
    [sym__end_if_e] = ACTIONS(482),
    [sym__end_if_f] = ACTIONS(482),
    [sym__begin_sql_e] = ACTIONS(482),
    [sym__begin_sql_f] = ACTIONS(482),
    [sym__end_sql_e] = ACTIONS(482),
    [sym__end_sql_f] = ACTIONS(482),
  },
  [30] = {
    [sym__functional_expression] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym__local] = ACTIONS(486),
    [sym__exposed] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(488),
    [anon_sym_STAR] = ACTIONS(488),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_AMP] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(486),
    [anon_sym_TILDE_PIPE] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(486),
    [anon_sym_POUND] = ACTIONS(488),
    [anon_sym_LT_LT] = ACTIONS(486),
    [anon_sym_GT_GT] = ACTIONS(486),
    [anon_sym_QMARK_QMARK] = ACTIONS(486),
    [anon_sym_QMARK_PLUS] = ACTIONS(486),
    [anon_sym_QMARK_DASH] = ACTIONS(486),
    [anon_sym_PLUS_EQ] = ACTIONS(486),
    [anon_sym_DASH_EQ] = ACTIONS(486),
    [anon_sym_STAR_EQ] = ACTIONS(486),
    [anon_sym_SLASH_EQ] = ACTIONS(486),
    [anon_sym_DOLLAR] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_LT_GT] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [anon_sym_QMARK] = ACTIONS(488),
    [sym__class_constructor] = ACTIONS(486),
    [sym__class_extends] = ACTIONS(486),
    [sym__var] = ACTIONS(486),
    [sym__property] = ACTIONS(486),
    [sym__alias] = ACTIONS(486),
    [sym__declare] = ACTIONS(486),
    [sym__function] = ACTIONS(486),
    [sym__return] = ACTIONS(486),
    [sym__break] = ACTIONS(486),
    [sym__continue] = ACTIONS(486),
    [sym__this] = ACTIONS(486),
    [sym__form] = ACTIONS(486),
    [sym__super] = ACTIONS(486),
    [sym__class_store_4d] = ACTIONS(486),
    [sym__class_store_ds] = ACTIONS(486),
    [sym__class_store_cs] = ACTIONS(486),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(486),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(486),
    [aux_sym__classic_array_blob_token1] = ACTIONS(486),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(486),
    [aux_sym__classic_array_date_token1] = ACTIONS(486),
    [aux_sym__classic_array_integer_token1] = ACTIONS(486),
    [aux_sym__classic_array_longint_token1] = ACTIONS(486),
    [aux_sym__classic_array_object_token1] = ACTIONS(486),
    [aux_sym__classic_array_picture_token1] = ACTIONS(486),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(486),
    [aux_sym__classic_array_real_token1] = ACTIONS(486),
    [aux_sym__classic_array_text_token1] = ACTIONS(486),
    [aux_sym__classic_array_time_token1] = ACTIONS(486),
    [anon_sym_SLASH_SLASH] = ACTIONS(486),
    [anon_sym_SLASH_STAR] = ACTIONS(486),
    [sym__if_e] = ACTIONS(486),
    [sym__if_f] = ACTIONS(488),
    [sym__else_e] = ACTIONS(486),
    [sym__else_f] = ACTIONS(486),
    [sym__end_if_e] = ACTIONS(486),
    [sym__end_if_f] = ACTIONS(486),
    [sym__begin_sql_e] = ACTIONS(486),
    [sym__begin_sql_f] = ACTIONS(486),
    [sym__end_sql_e] = ACTIONS(486),
    [sym__end_sql_f] = ACTIONS(486),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym__local] = ACTIONS(490),
    [sym__exposed] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_TILDE_PIPE] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(492),
    [anon_sym_EQ] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(490),
    [anon_sym_GT_GT] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_QMARK_PLUS] = ACTIONS(490),
    [anon_sym_QMARK_DASH] = ACTIONS(490),
    [anon_sym_PLUS_EQ] = ACTIONS(490),
    [anon_sym_DASH_EQ] = ACTIONS(490),
    [anon_sym_STAR_EQ] = ACTIONS(490),
    [anon_sym_SLASH_EQ] = ACTIONS(490),
    [anon_sym_DOLLAR] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_LT_GT] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [anon_sym_QMARK] = ACTIONS(492),
    [sym__class_constructor] = ACTIONS(490),
    [sym__class_extends] = ACTIONS(490),
    [sym__var] = ACTIONS(490),
    [sym__property] = ACTIONS(490),
    [sym__alias] = ACTIONS(490),
    [sym__declare] = ACTIONS(490),
    [sym__function] = ACTIONS(490),
    [sym__return] = ACTIONS(490),
    [sym__break] = ACTIONS(490),
    [sym__continue] = ACTIONS(490),
    [sym__this] = ACTIONS(490),
    [sym__form] = ACTIONS(490),
    [sym__super] = ACTIONS(490),
    [sym__class_store_4d] = ACTIONS(490),
    [sym__class_store_ds] = ACTIONS(490),
    [sym__class_store_cs] = ACTIONS(490),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(490),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(490),
    [aux_sym__classic_array_blob_token1] = ACTIONS(490),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(490),
    [aux_sym__classic_array_date_token1] = ACTIONS(490),
    [aux_sym__classic_array_integer_token1] = ACTIONS(490),
    [aux_sym__classic_array_longint_token1] = ACTIONS(490),
    [aux_sym__classic_array_object_token1] = ACTIONS(490),
    [aux_sym__classic_array_picture_token1] = ACTIONS(490),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(490),
    [aux_sym__classic_array_real_token1] = ACTIONS(490),
    [aux_sym__classic_array_text_token1] = ACTIONS(490),
    [aux_sym__classic_array_time_token1] = ACTIONS(490),
    [anon_sym_SLASH_SLASH] = ACTIONS(490),
    [anon_sym_SLASH_STAR] = ACTIONS(490),
    [sym__if_e] = ACTIONS(490),
    [sym__if_f] = ACTIONS(492),
    [sym__else_e] = ACTIONS(490),
    [sym__else_f] = ACTIONS(490),
    [sym__end_if_e] = ACTIONS(490),
    [sym__end_if_f] = ACTIONS(490),
    [sym__begin_sql_e] = ACTIONS(490),
    [sym__begin_sql_f] = ACTIONS(490),
    [sym__end_sql_e] = ACTIONS(490),
    [sym__end_sql_f] = ACTIONS(490),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym__local] = ACTIONS(494),
    [sym__exposed] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_AMP] = ACTIONS(496),
    [anon_sym_PIPE] = ACTIONS(496),
    [anon_sym_CARET] = ACTIONS(494),
    [anon_sym_TILDE_PIPE] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(494),
    [anon_sym_POUND] = ACTIONS(496),
    [anon_sym_LT_LT] = ACTIONS(494),
    [anon_sym_GT_GT] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_QMARK_PLUS] = ACTIONS(494),
    [anon_sym_QMARK_DASH] = ACTIONS(494),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_DOLLAR] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_LT_GT] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(496),
    [sym__class_constructor] = ACTIONS(494),
    [sym__class_extends] = ACTIONS(494),
    [sym__var] = ACTIONS(494),
    [sym__property] = ACTIONS(494),
    [sym__alias] = ACTIONS(494),
    [sym__declare] = ACTIONS(494),
    [sym__function] = ACTIONS(494),
    [sym__return] = ACTIONS(494),
    [sym__break] = ACTIONS(494),
    [sym__continue] = ACTIONS(494),
    [sym__this] = ACTIONS(494),
    [sym__form] = ACTIONS(494),
    [sym__super] = ACTIONS(494),
    [sym__class_store_4d] = ACTIONS(494),
    [sym__class_store_ds] = ACTIONS(494),
    [sym__class_store_cs] = ACTIONS(494),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(494),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(494),
    [aux_sym__classic_array_blob_token1] = ACTIONS(494),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(494),
    [aux_sym__classic_array_date_token1] = ACTIONS(494),
    [aux_sym__classic_array_integer_token1] = ACTIONS(494),
    [aux_sym__classic_array_longint_token1] = ACTIONS(494),
    [aux_sym__classic_array_object_token1] = ACTIONS(494),
    [aux_sym__classic_array_picture_token1] = ACTIONS(494),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(494),
    [aux_sym__classic_array_real_token1] = ACTIONS(494),
    [aux_sym__classic_array_text_token1] = ACTIONS(494),
    [aux_sym__classic_array_time_token1] = ACTIONS(494),
    [anon_sym_SLASH_SLASH] = ACTIONS(494),
    [anon_sym_SLASH_STAR] = ACTIONS(494),
    [sym__if_e] = ACTIONS(494),
    [sym__if_f] = ACTIONS(496),
    [sym__else_e] = ACTIONS(494),
    [sym__else_f] = ACTIONS(494),
    [sym__end_if_e] = ACTIONS(494),
    [sym__end_if_f] = ACTIONS(494),
    [sym__begin_sql_e] = ACTIONS(494),
    [sym__begin_sql_f] = ACTIONS(494),
    [sym__end_sql_e] = ACTIONS(494),
    [sym__end_sql_f] = ACTIONS(494),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [sym__local] = ACTIONS(498),
    [sym__exposed] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(498),
    [anon_sym_TILDE_PIPE] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LT_LT] = ACTIONS(498),
    [anon_sym_GT_GT] = ACTIONS(498),
    [anon_sym_QMARK_QMARK] = ACTIONS(498),
    [anon_sym_QMARK_PLUS] = ACTIONS(498),
    [anon_sym_QMARK_DASH] = ACTIONS(498),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_DOLLAR] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_LT_GT] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(500),
    [sym__class_constructor] = ACTIONS(498),
    [sym__class_extends] = ACTIONS(498),
    [sym__var] = ACTIONS(498),
    [sym__property] = ACTIONS(498),
    [sym__alias] = ACTIONS(498),
    [sym__declare] = ACTIONS(498),
    [sym__function] = ACTIONS(498),
    [sym__return] = ACTIONS(498),
    [sym__break] = ACTIONS(498),
    [sym__continue] = ACTIONS(498),
    [sym__this] = ACTIONS(498),
    [sym__form] = ACTIONS(498),
    [sym__super] = ACTIONS(498),
    [sym__class_store_4d] = ACTIONS(498),
    [sym__class_store_ds] = ACTIONS(498),
    [sym__class_store_cs] = ACTIONS(498),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(498),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(498),
    [aux_sym__classic_array_blob_token1] = ACTIONS(498),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(498),
    [aux_sym__classic_array_date_token1] = ACTIONS(498),
    [aux_sym__classic_array_integer_token1] = ACTIONS(498),
    [aux_sym__classic_array_longint_token1] = ACTIONS(498),
    [aux_sym__classic_array_object_token1] = ACTIONS(498),
    [aux_sym__classic_array_picture_token1] = ACTIONS(498),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(498),
    [aux_sym__classic_array_real_token1] = ACTIONS(498),
    [aux_sym__classic_array_text_token1] = ACTIONS(498),
    [aux_sym__classic_array_time_token1] = ACTIONS(498),
    [anon_sym_SLASH_SLASH] = ACTIONS(498),
    [anon_sym_SLASH_STAR] = ACTIONS(498),
    [sym__if_e] = ACTIONS(498),
    [sym__if_f] = ACTIONS(500),
    [sym__else_e] = ACTIONS(498),
    [sym__else_f] = ACTIONS(498),
    [sym__end_if_e] = ACTIONS(498),
    [sym__end_if_f] = ACTIONS(498),
    [sym__begin_sql_e] = ACTIONS(498),
    [sym__begin_sql_f] = ACTIONS(498),
    [sym__end_sql_e] = ACTIONS(498),
    [sym__end_sql_f] = ACTIONS(498),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym__local] = ACTIONS(502),
    [sym__exposed] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(504),
    [anon_sym_DASH] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_AMP] = ACTIONS(504),
    [anon_sym_PIPE] = ACTIONS(504),
    [anon_sym_CARET] = ACTIONS(502),
    [anon_sym_TILDE_PIPE] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(504),
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_POUND] = ACTIONS(504),
    [anon_sym_LT_LT] = ACTIONS(502),
    [anon_sym_GT_GT] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_QMARK_PLUS] = ACTIONS(502),
    [anon_sym_QMARK_DASH] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(502),
    [anon_sym_DASH_EQ] = ACTIONS(502),
    [anon_sym_STAR_EQ] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(502),
    [anon_sym_DOLLAR] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_LT_GT] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [anon_sym_QMARK] = ACTIONS(504),
    [sym__class_constructor] = ACTIONS(502),
    [sym__class_extends] = ACTIONS(502),
    [sym__var] = ACTIONS(502),
    [sym__property] = ACTIONS(502),
    [sym__alias] = ACTIONS(502),
    [sym__declare] = ACTIONS(502),
    [sym__function] = ACTIONS(502),
    [sym__return] = ACTIONS(502),
    [sym__break] = ACTIONS(502),
    [sym__continue] = ACTIONS(502),
    [sym__this] = ACTIONS(502),
    [sym__form] = ACTIONS(502),
    [sym__super] = ACTIONS(502),
    [sym__class_store_4d] = ACTIONS(502),
    [sym__class_store_ds] = ACTIONS(502),
    [sym__class_store_cs] = ACTIONS(502),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(502),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(502),
    [aux_sym__classic_array_blob_token1] = ACTIONS(502),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(502),
    [aux_sym__classic_array_date_token1] = ACTIONS(502),
    [aux_sym__classic_array_integer_token1] = ACTIONS(502),
    [aux_sym__classic_array_longint_token1] = ACTIONS(502),
    [aux_sym__classic_array_object_token1] = ACTIONS(502),
    [aux_sym__classic_array_picture_token1] = ACTIONS(502),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(502),
    [aux_sym__classic_array_real_token1] = ACTIONS(502),
    [aux_sym__classic_array_text_token1] = ACTIONS(502),
    [aux_sym__classic_array_time_token1] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_STAR] = ACTIONS(502),
    [sym__if_e] = ACTIONS(502),
    [sym__if_f] = ACTIONS(504),
    [sym__else_e] = ACTIONS(502),
    [sym__else_f] = ACTIONS(502),
    [sym__end_if_e] = ACTIONS(502),
    [sym__end_if_f] = ACTIONS(502),
    [sym__begin_sql_e] = ACTIONS(502),
    [sym__begin_sql_f] = ACTIONS(502),
    [sym__end_sql_e] = ACTIONS(502),
    [sym__end_sql_f] = ACTIONS(502),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [sym__local] = ACTIONS(506),
    [sym__exposed] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_AMP] = ACTIONS(508),
    [anon_sym_PIPE] = ACTIONS(508),
    [anon_sym_CARET] = ACTIONS(506),
    [anon_sym_TILDE_PIPE] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(506),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(506),
    [anon_sym_GT_GT] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_QMARK_PLUS] = ACTIONS(506),
    [anon_sym_QMARK_DASH] = ACTIONS(506),
    [anon_sym_PLUS_EQ] = ACTIONS(506),
    [anon_sym_DASH_EQ] = ACTIONS(506),
    [anon_sym_STAR_EQ] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(506),
    [anon_sym_DOLLAR] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_LT_GT] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [anon_sym_QMARK] = ACTIONS(508),
    [sym__class_constructor] = ACTIONS(506),
    [sym__class_extends] = ACTIONS(506),
    [sym__var] = ACTIONS(506),
    [sym__property] = ACTIONS(506),
    [sym__alias] = ACTIONS(506),
    [sym__declare] = ACTIONS(506),
    [sym__function] = ACTIONS(506),
    [sym__return] = ACTIONS(506),
    [sym__break] = ACTIONS(506),
    [sym__continue] = ACTIONS(506),
    [sym__this] = ACTIONS(506),
    [sym__form] = ACTIONS(506),
    [sym__super] = ACTIONS(506),
    [sym__class_store_4d] = ACTIONS(506),
    [sym__class_store_ds] = ACTIONS(506),
    [sym__class_store_cs] = ACTIONS(506),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(506),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(506),
    [aux_sym__classic_array_blob_token1] = ACTIONS(506),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(506),
    [aux_sym__classic_array_date_token1] = ACTIONS(506),
    [aux_sym__classic_array_integer_token1] = ACTIONS(506),
    [aux_sym__classic_array_longint_token1] = ACTIONS(506),
    [aux_sym__classic_array_object_token1] = ACTIONS(506),
    [aux_sym__classic_array_picture_token1] = ACTIONS(506),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(506),
    [aux_sym__classic_array_real_token1] = ACTIONS(506),
    [aux_sym__classic_array_text_token1] = ACTIONS(506),
    [aux_sym__classic_array_time_token1] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_STAR] = ACTIONS(506),
    [sym__if_e] = ACTIONS(506),
    [sym__if_f] = ACTIONS(508),
    [sym__else_e] = ACTIONS(506),
    [sym__else_f] = ACTIONS(506),
    [sym__end_if_e] = ACTIONS(506),
    [sym__end_if_f] = ACTIONS(506),
    [sym__begin_sql_e] = ACTIONS(506),
    [sym__begin_sql_f] = ACTIONS(506),
    [sym__end_sql_e] = ACTIONS(506),
    [sym__end_sql_f] = ACTIONS(506),
  },
  [36] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym__local] = ACTIONS(510),
    [sym__exposed] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(512),
    [anon_sym_SLASH] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(515),
    [anon_sym_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_CARET] = ACTIONS(515),
    [anon_sym_TILDE_PIPE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(512),
    [anon_sym_EQ] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(512),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_QMARK_QMARK] = ACTIONS(515),
    [anon_sym_QMARK_PLUS] = ACTIONS(515),
    [anon_sym_QMARK_DASH] = ACTIONS(515),
    [anon_sym_PLUS_EQ] = ACTIONS(515),
    [anon_sym_DASH_EQ] = ACTIONS(515),
    [anon_sym_STAR_EQ] = ACTIONS(515),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [anon_sym_DOLLAR] = ACTIONS(510),
    [anon_sym_LT_GT] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(518),
    [sym__class_constructor] = ACTIONS(510),
    [sym__class_extends] = ACTIONS(510),
    [sym__var] = ACTIONS(510),
    [sym__property] = ACTIONS(510),
    [sym__alias] = ACTIONS(510),
    [sym__declare] = ACTIONS(510),
    [sym__function] = ACTIONS(510),
    [sym__return] = ACTIONS(510),
    [sym__break] = ACTIONS(510),
    [sym__continue] = ACTIONS(510),
    [sym__this] = ACTIONS(510),
    [sym__form] = ACTIONS(510),
    [sym__super] = ACTIONS(510),
    [sym__class_store_4d] = ACTIONS(510),
    [sym__class_store_ds] = ACTIONS(510),
    [sym__class_store_cs] = ACTIONS(510),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(510),
    [aux_sym__classic_array_blob_token1] = ACTIONS(510),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(510),
    [aux_sym__classic_array_date_token1] = ACTIONS(510),
    [aux_sym__classic_array_integer_token1] = ACTIONS(510),
    [aux_sym__classic_array_longint_token1] = ACTIONS(510),
    [aux_sym__classic_array_object_token1] = ACTIONS(510),
    [aux_sym__classic_array_picture_token1] = ACTIONS(510),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(510),
    [aux_sym__classic_array_real_token1] = ACTIONS(510),
    [aux_sym__classic_array_text_token1] = ACTIONS(510),
    [aux_sym__classic_array_time_token1] = ACTIONS(510),
    [anon_sym_SLASH_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_STAR] = ACTIONS(510),
    [sym__if_e] = ACTIONS(510),
    [sym__if_f] = ACTIONS(518),
    [sym__else_e] = ACTIONS(510),
    [sym__else_f] = ACTIONS(510),
    [sym__end_if_e] = ACTIONS(510),
    [sym__end_if_f] = ACTIONS(510),
    [sym__begin_sql_e] = ACTIONS(510),
    [sym__begin_sql_f] = ACTIONS(510),
    [sym__end_sql_e] = ACTIONS(510),
    [sym__end_sql_f] = ACTIONS(510),
  },
  [37] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(520),
    [sym__local] = ACTIONS(520),
    [sym__exposed] = ACTIONS(520),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(522),
    [anon_sym_SLASH] = ACTIONS(522),
    [anon_sym_AMP_AMP] = ACTIONS(524),
    [anon_sym_PIPE_PIPE] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_CARET] = ACTIONS(524),
    [anon_sym_TILDE_PIPE] = ACTIONS(524),
    [anon_sym_LT] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_LT_LT] = ACTIONS(524),
    [anon_sym_GT_GT] = ACTIONS(524),
    [anon_sym_QMARK_QMARK] = ACTIONS(524),
    [anon_sym_QMARK_PLUS] = ACTIONS(524),
    [anon_sym_QMARK_DASH] = ACTIONS(524),
    [anon_sym_PLUS_EQ] = ACTIONS(524),
    [anon_sym_DASH_EQ] = ACTIONS(524),
    [anon_sym_STAR_EQ] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(520),
    [anon_sym_LT_GT] = ACTIONS(520),
    [anon_sym_QMARK] = ACTIONS(526),
    [sym__class_constructor] = ACTIONS(520),
    [sym__class_extends] = ACTIONS(520),
    [sym__var] = ACTIONS(520),
    [sym__property] = ACTIONS(520),
    [sym__alias] = ACTIONS(520),
    [sym__declare] = ACTIONS(520),
    [sym__function] = ACTIONS(520),
    [sym__return] = ACTIONS(520),
    [sym__break] = ACTIONS(520),
    [sym__continue] = ACTIONS(520),
    [sym__this] = ACTIONS(520),
    [sym__form] = ACTIONS(520),
    [sym__super] = ACTIONS(520),
    [sym__class_store_4d] = ACTIONS(520),
    [sym__class_store_ds] = ACTIONS(520),
    [sym__class_store_cs] = ACTIONS(520),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(520),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(520),
    [aux_sym__classic_array_blob_token1] = ACTIONS(520),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(520),
    [aux_sym__classic_array_date_token1] = ACTIONS(520),
    [aux_sym__classic_array_integer_token1] = ACTIONS(520),
    [aux_sym__classic_array_longint_token1] = ACTIONS(520),
    [aux_sym__classic_array_object_token1] = ACTIONS(520),
    [aux_sym__classic_array_picture_token1] = ACTIONS(520),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(520),
    [aux_sym__classic_array_real_token1] = ACTIONS(520),
    [aux_sym__classic_array_text_token1] = ACTIONS(520),
    [aux_sym__classic_array_time_token1] = ACTIONS(520),
    [anon_sym_SLASH_SLASH] = ACTIONS(520),
    [anon_sym_SLASH_STAR] = ACTIONS(520),
    [sym__if_e] = ACTIONS(520),
    [sym__if_f] = ACTIONS(526),
    [sym__else_e] = ACTIONS(520),
    [sym__else_f] = ACTIONS(520),
    [sym__end_if_e] = ACTIONS(520),
    [sym__end_if_f] = ACTIONS(520),
    [sym__begin_sql_e] = ACTIONS(520),
    [sym__begin_sql_f] = ACTIONS(520),
    [sym__end_sql_e] = ACTIONS(520),
    [sym__end_sql_f] = ACTIONS(520),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym__local] = ACTIONS(528),
    [sym__exposed] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_AMP_AMP] = ACTIONS(528),
    [anon_sym_PIPE_PIPE] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(530),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_TILDE_PIPE] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_EQ] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_LT_LT] = ACTIONS(528),
    [anon_sym_GT_GT] = ACTIONS(528),
    [anon_sym_QMARK_QMARK] = ACTIONS(528),
    [anon_sym_QMARK_PLUS] = ACTIONS(528),
    [anon_sym_QMARK_DASH] = ACTIONS(528),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_LT_GT] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(530),
    [sym__class_constructor] = ACTIONS(528),
    [sym__class_extends] = ACTIONS(528),
    [sym__var] = ACTIONS(528),
    [sym__property] = ACTIONS(528),
    [sym__alias] = ACTIONS(528),
    [sym__declare] = ACTIONS(528),
    [sym__function] = ACTIONS(528),
    [sym__return] = ACTIONS(528),
    [sym__break] = ACTIONS(528),
    [sym__continue] = ACTIONS(528),
    [sym__this] = ACTIONS(528),
    [sym__form] = ACTIONS(528),
    [sym__super] = ACTIONS(528),
    [sym__class_store_4d] = ACTIONS(528),
    [sym__class_store_ds] = ACTIONS(528),
    [sym__class_store_cs] = ACTIONS(528),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(528),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(528),
    [aux_sym__classic_array_blob_token1] = ACTIONS(528),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(528),
    [aux_sym__classic_array_date_token1] = ACTIONS(528),
    [aux_sym__classic_array_integer_token1] = ACTIONS(528),
    [aux_sym__classic_array_longint_token1] = ACTIONS(528),
    [aux_sym__classic_array_object_token1] = ACTIONS(528),
    [aux_sym__classic_array_picture_token1] = ACTIONS(528),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(528),
    [aux_sym__classic_array_real_token1] = ACTIONS(528),
    [aux_sym__classic_array_text_token1] = ACTIONS(528),
    [aux_sym__classic_array_time_token1] = ACTIONS(528),
    [anon_sym_SLASH_SLASH] = ACTIONS(528),
    [anon_sym_SLASH_STAR] = ACTIONS(528),
    [sym__if_e] = ACTIONS(528),
    [sym__if_f] = ACTIONS(530),
    [sym__else_e] = ACTIONS(528),
    [sym__else_f] = ACTIONS(528),
    [sym__end_if_e] = ACTIONS(528),
    [sym__end_if_f] = ACTIONS(528),
    [sym__begin_sql_e] = ACTIONS(528),
    [sym__begin_sql_f] = ACTIONS(528),
    [sym__end_sql_e] = ACTIONS(528),
    [sym__end_sql_f] = ACTIONS(528),
  },
  [39] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(532),
    [sym__local] = ACTIONS(532),
    [sym__exposed] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(522),
    [anon_sym_SLASH] = ACTIONS(522),
    [anon_sym_AMP_AMP] = ACTIONS(524),
    [anon_sym_PIPE_PIPE] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_CARET] = ACTIONS(524),
    [anon_sym_TILDE_PIPE] = ACTIONS(524),
    [anon_sym_LT] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(522),
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(522),
    [anon_sym_LT_LT] = ACTIONS(524),
    [anon_sym_GT_GT] = ACTIONS(524),
    [anon_sym_QMARK_QMARK] = ACTIONS(524),
    [anon_sym_QMARK_PLUS] = ACTIONS(524),
    [anon_sym_QMARK_DASH] = ACTIONS(524),
    [anon_sym_PLUS_EQ] = ACTIONS(524),
    [anon_sym_DASH_EQ] = ACTIONS(524),
    [anon_sym_STAR_EQ] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(532),
    [anon_sym_LT_GT] = ACTIONS(532),
    [anon_sym_QMARK] = ACTIONS(534),
    [sym__class_constructor] = ACTIONS(532),
    [sym__class_extends] = ACTIONS(532),
    [sym__var] = ACTIONS(532),
    [sym__property] = ACTIONS(532),
    [sym__alias] = ACTIONS(532),
    [sym__declare] = ACTIONS(532),
    [sym__function] = ACTIONS(532),
    [sym__return] = ACTIONS(532),
    [sym__break] = ACTIONS(532),
    [sym__continue] = ACTIONS(532),
    [sym__this] = ACTIONS(532),
    [sym__form] = ACTIONS(532),
    [sym__super] = ACTIONS(532),
    [sym__class_store_4d] = ACTIONS(532),
    [sym__class_store_ds] = ACTIONS(532),
    [sym__class_store_cs] = ACTIONS(532),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(532),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(532),
    [aux_sym__classic_array_blob_token1] = ACTIONS(532),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(532),
    [aux_sym__classic_array_date_token1] = ACTIONS(532),
    [aux_sym__classic_array_integer_token1] = ACTIONS(532),
    [aux_sym__classic_array_longint_token1] = ACTIONS(532),
    [aux_sym__classic_array_object_token1] = ACTIONS(532),
    [aux_sym__classic_array_picture_token1] = ACTIONS(532),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(532),
    [aux_sym__classic_array_real_token1] = ACTIONS(532),
    [aux_sym__classic_array_text_token1] = ACTIONS(532),
    [aux_sym__classic_array_time_token1] = ACTIONS(532),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_SLASH_STAR] = ACTIONS(532),
    [sym__if_e] = ACTIONS(532),
    [sym__if_f] = ACTIONS(534),
    [sym__else_e] = ACTIONS(532),
    [sym__else_f] = ACTIONS(532),
    [sym__end_if_e] = ACTIONS(532),
    [sym__end_if_f] = ACTIONS(532),
    [sym__begin_sql_e] = ACTIONS(532),
    [sym__begin_sql_f] = ACTIONS(532),
    [sym__end_sql_e] = ACTIONS(532),
    [sym__end_sql_f] = ACTIONS(532),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym__local] = ACTIONS(536),
    [sym__exposed] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_AMP_AMP] = ACTIONS(536),
    [anon_sym_PIPE_PIPE] = ACTIONS(536),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(536),
    [anon_sym_TILDE_PIPE] = ACTIONS(536),
    [anon_sym_LT] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [anon_sym_EQ] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(538),
    [anon_sym_LT_LT] = ACTIONS(536),
    [anon_sym_GT_GT] = ACTIONS(536),
    [anon_sym_QMARK_QMARK] = ACTIONS(536),
    [anon_sym_QMARK_PLUS] = ACTIONS(536),
    [anon_sym_QMARK_DASH] = ACTIONS(536),
    [anon_sym_PLUS_EQ] = ACTIONS(536),
    [anon_sym_DASH_EQ] = ACTIONS(536),
    [anon_sym_STAR_EQ] = ACTIONS(536),
    [anon_sym_SLASH_EQ] = ACTIONS(536),
    [anon_sym_DOLLAR] = ACTIONS(536),
    [anon_sym_RBRACE] = ACTIONS(536),
    [anon_sym_LT_GT] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [anon_sym_QMARK] = ACTIONS(538),
    [sym__class_constructor] = ACTIONS(536),
    [sym__class_extends] = ACTIONS(536),
    [sym__var] = ACTIONS(536),
    [sym__property] = ACTIONS(536),
    [sym__alias] = ACTIONS(536),
    [sym__declare] = ACTIONS(536),
    [sym__function] = ACTIONS(536),
    [sym__return] = ACTIONS(536),
    [sym__break] = ACTIONS(536),
    [sym__continue] = ACTIONS(536),
    [sym__this] = ACTIONS(536),
    [sym__form] = ACTIONS(536),
    [sym__super] = ACTIONS(536),
    [sym__class_store_4d] = ACTIONS(536),
    [sym__class_store_ds] = ACTIONS(536),
    [sym__class_store_cs] = ACTIONS(536),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(536),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(536),
    [aux_sym__classic_array_blob_token1] = ACTIONS(536),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(536),
    [aux_sym__classic_array_date_token1] = ACTIONS(536),
    [aux_sym__classic_array_integer_token1] = ACTIONS(536),
    [aux_sym__classic_array_longint_token1] = ACTIONS(536),
    [aux_sym__classic_array_object_token1] = ACTIONS(536),
    [aux_sym__classic_array_picture_token1] = ACTIONS(536),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(536),
    [aux_sym__classic_array_real_token1] = ACTIONS(536),
    [aux_sym__classic_array_text_token1] = ACTIONS(536),
    [aux_sym__classic_array_time_token1] = ACTIONS(536),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [anon_sym_SLASH_STAR] = ACTIONS(536),
    [sym__if_e] = ACTIONS(536),
    [sym__if_f] = ACTIONS(538),
    [sym__else_e] = ACTIONS(536),
    [sym__else_f] = ACTIONS(536),
    [sym__end_if_e] = ACTIONS(536),
    [sym__end_if_f] = ACTIONS(536),
    [sym__begin_sql_e] = ACTIONS(536),
    [sym__begin_sql_f] = ACTIONS(536),
    [sym__end_sql_e] = ACTIONS(536),
    [sym__end_sql_f] = ACTIONS(536),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [sym__local] = ACTIONS(540),
    [sym__exposed] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP_AMP] = ACTIONS(540),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(540),
    [anon_sym_TILDE_PIPE] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(542),
    [anon_sym_GT] = ACTIONS(542),
    [anon_sym_EQ] = ACTIONS(540),
    [anon_sym_POUND] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK_QMARK] = ACTIONS(540),
    [anon_sym_QMARK_PLUS] = ACTIONS(540),
    [anon_sym_QMARK_DASH] = ACTIONS(540),
    [anon_sym_PLUS_EQ] = ACTIONS(540),
    [anon_sym_DASH_EQ] = ACTIONS(540),
    [anon_sym_STAR_EQ] = ACTIONS(540),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [anon_sym_DOLLAR] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_LT_GT] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(542),
    [sym__class_constructor] = ACTIONS(540),
    [sym__class_extends] = ACTIONS(540),
    [sym__var] = ACTIONS(540),
    [sym__property] = ACTIONS(540),
    [sym__alias] = ACTIONS(540),
    [sym__declare] = ACTIONS(540),
    [sym__function] = ACTIONS(540),
    [sym__return] = ACTIONS(540),
    [sym__break] = ACTIONS(540),
    [sym__continue] = ACTIONS(540),
    [sym__this] = ACTIONS(540),
    [sym__form] = ACTIONS(540),
    [sym__super] = ACTIONS(540),
    [sym__class_store_4d] = ACTIONS(540),
    [sym__class_store_ds] = ACTIONS(540),
    [sym__class_store_cs] = ACTIONS(540),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(540),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(540),
    [aux_sym__classic_array_blob_token1] = ACTIONS(540),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(540),
    [aux_sym__classic_array_date_token1] = ACTIONS(540),
    [aux_sym__classic_array_integer_token1] = ACTIONS(540),
    [aux_sym__classic_array_longint_token1] = ACTIONS(540),
    [aux_sym__classic_array_object_token1] = ACTIONS(540),
    [aux_sym__classic_array_picture_token1] = ACTIONS(540),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(540),
    [aux_sym__classic_array_real_token1] = ACTIONS(540),
    [aux_sym__classic_array_text_token1] = ACTIONS(540),
    [aux_sym__classic_array_time_token1] = ACTIONS(540),
    [anon_sym_SLASH_SLASH] = ACTIONS(540),
    [anon_sym_SLASH_STAR] = ACTIONS(540),
    [sym__if_e] = ACTIONS(540),
    [sym__if_f] = ACTIONS(542),
    [sym__else_e] = ACTIONS(540),
    [sym__else_f] = ACTIONS(540),
    [sym__end_if_e] = ACTIONS(540),
    [sym__end_if_f] = ACTIONS(540),
    [sym__begin_sql_e] = ACTIONS(540),
    [sym__begin_sql_f] = ACTIONS(540),
    [sym__end_sql_e] = ACTIONS(540),
    [sym__end_sql_f] = ACTIONS(540),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [sym__local] = ACTIONS(544),
    [sym__exposed] = ACTIONS(544),
    [anon_sym_PLUS] = ACTIONS(546),
    [anon_sym_DASH] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(546),
    [anon_sym_SLASH] = ACTIONS(546),
    [anon_sym_AMP_AMP] = ACTIONS(544),
    [anon_sym_PIPE_PIPE] = ACTIONS(544),
    [anon_sym_AMP] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_TILDE_PIPE] = ACTIONS(544),
    [anon_sym_LT] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(546),
    [anon_sym_EQ] = ACTIONS(544),
    [anon_sym_POUND] = ACTIONS(546),
    [anon_sym_LT_LT] = ACTIONS(544),
    [anon_sym_GT_GT] = ACTIONS(544),
    [anon_sym_QMARK_QMARK] = ACTIONS(544),
    [anon_sym_QMARK_PLUS] = ACTIONS(544),
    [anon_sym_QMARK_DASH] = ACTIONS(544),
    [anon_sym_PLUS_EQ] = ACTIONS(544),
    [anon_sym_DASH_EQ] = ACTIONS(544),
    [anon_sym_STAR_EQ] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(544),
    [anon_sym_DOLLAR] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_LT_GT] = ACTIONS(544),
    [anon_sym_RBRACK] = ACTIONS(544),
    [anon_sym_QMARK] = ACTIONS(546),
    [sym__class_constructor] = ACTIONS(544),
    [sym__class_extends] = ACTIONS(544),
    [sym__var] = ACTIONS(544),
    [sym__property] = ACTIONS(544),
    [sym__alias] = ACTIONS(544),
    [sym__declare] = ACTIONS(544),
    [sym__function] = ACTIONS(544),
    [sym__return] = ACTIONS(544),
    [sym__break] = ACTIONS(544),
    [sym__continue] = ACTIONS(544),
    [sym__this] = ACTIONS(544),
    [sym__form] = ACTIONS(544),
    [sym__super] = ACTIONS(544),
    [sym__class_store_4d] = ACTIONS(544),
    [sym__class_store_ds] = ACTIONS(544),
    [sym__class_store_cs] = ACTIONS(544),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(544),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(544),
    [aux_sym__classic_array_blob_token1] = ACTIONS(544),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(544),
    [aux_sym__classic_array_date_token1] = ACTIONS(544),
    [aux_sym__classic_array_integer_token1] = ACTIONS(544),
    [aux_sym__classic_array_longint_token1] = ACTIONS(544),
    [aux_sym__classic_array_object_token1] = ACTIONS(544),
    [aux_sym__classic_array_picture_token1] = ACTIONS(544),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(544),
    [aux_sym__classic_array_real_token1] = ACTIONS(544),
    [aux_sym__classic_array_text_token1] = ACTIONS(544),
    [aux_sym__classic_array_time_token1] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(544),
    [anon_sym_SLASH_STAR] = ACTIONS(544),
    [sym__if_e] = ACTIONS(544),
    [sym__if_f] = ACTIONS(546),
    [sym__else_e] = ACTIONS(544),
    [sym__else_f] = ACTIONS(544),
    [sym__end_if_e] = ACTIONS(544),
    [sym__end_if_f] = ACTIONS(544),
    [sym__begin_sql_e] = ACTIONS(544),
    [sym__begin_sql_f] = ACTIONS(544),
    [sym__end_sql_e] = ACTIONS(544),
    [sym__end_sql_f] = ACTIONS(544),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym__local] = ACTIONS(548),
    [sym__exposed] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_AMP_AMP] = ACTIONS(548),
    [anon_sym_PIPE_PIPE] = ACTIONS(548),
    [anon_sym_AMP] = ACTIONS(550),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_CARET] = ACTIONS(548),
    [anon_sym_TILDE_PIPE] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_EQ] = ACTIONS(548),
    [anon_sym_POUND] = ACTIONS(550),
    [anon_sym_LT_LT] = ACTIONS(548),
    [anon_sym_GT_GT] = ACTIONS(548),
    [anon_sym_QMARK_QMARK] = ACTIONS(548),
    [anon_sym_QMARK_PLUS] = ACTIONS(548),
    [anon_sym_QMARK_DASH] = ACTIONS(548),
    [anon_sym_PLUS_EQ] = ACTIONS(548),
    [anon_sym_DASH_EQ] = ACTIONS(548),
    [anon_sym_STAR_EQ] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [anon_sym_DOLLAR] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_LT_GT] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [anon_sym_QMARK] = ACTIONS(550),
    [sym__class_constructor] = ACTIONS(548),
    [sym__class_extends] = ACTIONS(548),
    [sym__var] = ACTIONS(548),
    [sym__property] = ACTIONS(548),
    [sym__alias] = ACTIONS(548),
    [sym__declare] = ACTIONS(548),
    [sym__function] = ACTIONS(548),
    [sym__return] = ACTIONS(548),
    [sym__break] = ACTIONS(548),
    [sym__continue] = ACTIONS(548),
    [sym__this] = ACTIONS(548),
    [sym__form] = ACTIONS(548),
    [sym__super] = ACTIONS(548),
    [sym__class_store_4d] = ACTIONS(548),
    [sym__class_store_ds] = ACTIONS(548),
    [sym__class_store_cs] = ACTIONS(548),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(548),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(548),
    [aux_sym__classic_array_blob_token1] = ACTIONS(548),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(548),
    [aux_sym__classic_array_date_token1] = ACTIONS(548),
    [aux_sym__classic_array_integer_token1] = ACTIONS(548),
    [aux_sym__classic_array_longint_token1] = ACTIONS(548),
    [aux_sym__classic_array_object_token1] = ACTIONS(548),
    [aux_sym__classic_array_picture_token1] = ACTIONS(548),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(548),
    [aux_sym__classic_array_real_token1] = ACTIONS(548),
    [aux_sym__classic_array_text_token1] = ACTIONS(548),
    [aux_sym__classic_array_time_token1] = ACTIONS(548),
    [anon_sym_SLASH_SLASH] = ACTIONS(548),
    [anon_sym_SLASH_STAR] = ACTIONS(548),
    [sym__if_e] = ACTIONS(548),
    [sym__if_f] = ACTIONS(550),
    [sym__else_e] = ACTIONS(548),
    [sym__else_f] = ACTIONS(548),
    [sym__end_if_e] = ACTIONS(548),
    [sym__end_if_f] = ACTIONS(548),
    [sym__begin_sql_e] = ACTIONS(548),
    [sym__begin_sql_f] = ACTIONS(548),
    [sym__end_sql_e] = ACTIONS(548),
    [sym__end_sql_f] = ACTIONS(548),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [sym__local] = ACTIONS(552),
    [sym__exposed] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(554),
    [anon_sym_DASH] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(554),
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(552),
    [anon_sym_PIPE_PIPE] = ACTIONS(552),
    [anon_sym_AMP] = ACTIONS(554),
    [anon_sym_PIPE] = ACTIONS(554),
    [anon_sym_CARET] = ACTIONS(552),
    [anon_sym_TILDE_PIPE] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_POUND] = ACTIONS(554),
    [anon_sym_LT_LT] = ACTIONS(552),
    [anon_sym_GT_GT] = ACTIONS(552),
    [anon_sym_QMARK_QMARK] = ACTIONS(552),
    [anon_sym_QMARK_PLUS] = ACTIONS(552),
    [anon_sym_QMARK_DASH] = ACTIONS(552),
    [anon_sym_PLUS_EQ] = ACTIONS(552),
    [anon_sym_DASH_EQ] = ACTIONS(552),
    [anon_sym_STAR_EQ] = ACTIONS(552),
    [anon_sym_SLASH_EQ] = ACTIONS(552),
    [anon_sym_DOLLAR] = ACTIONS(552),
    [anon_sym_RBRACE] = ACTIONS(552),
    [anon_sym_LT_GT] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [anon_sym_QMARK] = ACTIONS(554),
    [sym__class_constructor] = ACTIONS(552),
    [sym__class_extends] = ACTIONS(552),
    [sym__var] = ACTIONS(552),
    [sym__property] = ACTIONS(552),
    [sym__alias] = ACTIONS(552),
    [sym__declare] = ACTIONS(552),
    [sym__function] = ACTIONS(552),
    [sym__return] = ACTIONS(552),
    [sym__break] = ACTIONS(552),
    [sym__continue] = ACTIONS(552),
    [sym__this] = ACTIONS(552),
    [sym__form] = ACTIONS(552),
    [sym__super] = ACTIONS(552),
    [sym__class_store_4d] = ACTIONS(552),
    [sym__class_store_ds] = ACTIONS(552),
    [sym__class_store_cs] = ACTIONS(552),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(552),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(552),
    [aux_sym__classic_array_blob_token1] = ACTIONS(552),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(552),
    [aux_sym__classic_array_date_token1] = ACTIONS(552),
    [aux_sym__classic_array_integer_token1] = ACTIONS(552),
    [aux_sym__classic_array_longint_token1] = ACTIONS(552),
    [aux_sym__classic_array_object_token1] = ACTIONS(552),
    [aux_sym__classic_array_picture_token1] = ACTIONS(552),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(552),
    [aux_sym__classic_array_real_token1] = ACTIONS(552),
    [aux_sym__classic_array_text_token1] = ACTIONS(552),
    [aux_sym__classic_array_time_token1] = ACTIONS(552),
    [anon_sym_SLASH_SLASH] = ACTIONS(552),
    [anon_sym_SLASH_STAR] = ACTIONS(552),
    [sym__if_e] = ACTIONS(552),
    [sym__if_f] = ACTIONS(554),
    [sym__else_e] = ACTIONS(552),
    [sym__else_f] = ACTIONS(552),
    [sym__end_if_e] = ACTIONS(552),
    [sym__end_if_f] = ACTIONS(552),
    [sym__begin_sql_e] = ACTIONS(552),
    [sym__begin_sql_f] = ACTIONS(552),
    [sym__end_sql_e] = ACTIONS(552),
    [sym__end_sql_f] = ACTIONS(552),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym__local] = ACTIONS(556),
    [sym__exposed] = ACTIONS(556),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [anon_sym_STAR] = ACTIONS(558),
    [anon_sym_SLASH] = ACTIONS(558),
    [anon_sym_AMP_AMP] = ACTIONS(556),
    [anon_sym_PIPE_PIPE] = ACTIONS(556),
    [anon_sym_AMP] = ACTIONS(558),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_TILDE_PIPE] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(558),
    [anon_sym_GT] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_POUND] = ACTIONS(558),
    [anon_sym_LT_LT] = ACTIONS(556),
    [anon_sym_GT_GT] = ACTIONS(556),
    [anon_sym_QMARK_QMARK] = ACTIONS(556),
    [anon_sym_QMARK_PLUS] = ACTIONS(556),
    [anon_sym_QMARK_DASH] = ACTIONS(556),
    [anon_sym_PLUS_EQ] = ACTIONS(556),
    [anon_sym_DASH_EQ] = ACTIONS(556),
    [anon_sym_STAR_EQ] = ACTIONS(556),
    [anon_sym_SLASH_EQ] = ACTIONS(556),
    [anon_sym_DOLLAR] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_LT_GT] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(556),
    [anon_sym_QMARK] = ACTIONS(558),
    [sym__class_constructor] = ACTIONS(556),
    [sym__class_extends] = ACTIONS(556),
    [sym__var] = ACTIONS(556),
    [sym__property] = ACTIONS(556),
    [sym__alias] = ACTIONS(556),
    [sym__declare] = ACTIONS(556),
    [sym__function] = ACTIONS(556),
    [sym__return] = ACTIONS(556),
    [sym__break] = ACTIONS(556),
    [sym__continue] = ACTIONS(556),
    [sym__this] = ACTIONS(556),
    [sym__form] = ACTIONS(556),
    [sym__super] = ACTIONS(556),
    [sym__class_store_4d] = ACTIONS(556),
    [sym__class_store_ds] = ACTIONS(556),
    [sym__class_store_cs] = ACTIONS(556),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(556),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(556),
    [aux_sym__classic_array_blob_token1] = ACTIONS(556),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(556),
    [aux_sym__classic_array_date_token1] = ACTIONS(556),
    [aux_sym__classic_array_integer_token1] = ACTIONS(556),
    [aux_sym__classic_array_longint_token1] = ACTIONS(556),
    [aux_sym__classic_array_object_token1] = ACTIONS(556),
    [aux_sym__classic_array_picture_token1] = ACTIONS(556),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(556),
    [aux_sym__classic_array_real_token1] = ACTIONS(556),
    [aux_sym__classic_array_text_token1] = ACTIONS(556),
    [aux_sym__classic_array_time_token1] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(556),
    [anon_sym_SLASH_STAR] = ACTIONS(556),
    [sym__if_e] = ACTIONS(556),
    [sym__if_f] = ACTIONS(558),
    [sym__else_e] = ACTIONS(556),
    [sym__else_f] = ACTIONS(556),
    [sym__end_if_e] = ACTIONS(556),
    [sym__end_if_f] = ACTIONS(556),
    [sym__begin_sql_e] = ACTIONS(556),
    [sym__begin_sql_f] = ACTIONS(556),
    [sym__end_sql_e] = ACTIONS(556),
    [sym__end_sql_f] = ACTIONS(556),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [sym__local] = ACTIONS(560),
    [sym__exposed] = ACTIONS(560),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(560),
    [anon_sym_PIPE_PIPE] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_PIPE] = ACTIONS(562),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_TILDE_PIPE] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(560),
    [anon_sym_POUND] = ACTIONS(562),
    [anon_sym_LT_LT] = ACTIONS(560),
    [anon_sym_GT_GT] = ACTIONS(560),
    [anon_sym_QMARK_QMARK] = ACTIONS(560),
    [anon_sym_QMARK_PLUS] = ACTIONS(560),
    [anon_sym_QMARK_DASH] = ACTIONS(560),
    [anon_sym_PLUS_EQ] = ACTIONS(560),
    [anon_sym_DASH_EQ] = ACTIONS(560),
    [anon_sym_STAR_EQ] = ACTIONS(560),
    [anon_sym_SLASH_EQ] = ACTIONS(560),
    [anon_sym_DOLLAR] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_LT_GT] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [anon_sym_QMARK] = ACTIONS(562),
    [sym__class_constructor] = ACTIONS(560),
    [sym__class_extends] = ACTIONS(560),
    [sym__var] = ACTIONS(560),
    [sym__property] = ACTIONS(560),
    [sym__alias] = ACTIONS(560),
    [sym__declare] = ACTIONS(560),
    [sym__function] = ACTIONS(560),
    [sym__return] = ACTIONS(560),
    [sym__break] = ACTIONS(560),
    [sym__continue] = ACTIONS(560),
    [sym__this] = ACTIONS(560),
    [sym__form] = ACTIONS(560),
    [sym__super] = ACTIONS(560),
    [sym__class_store_4d] = ACTIONS(560),
    [sym__class_store_ds] = ACTIONS(560),
    [sym__class_store_cs] = ACTIONS(560),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(560),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(560),
    [aux_sym__classic_array_blob_token1] = ACTIONS(560),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(560),
    [aux_sym__classic_array_date_token1] = ACTIONS(560),
    [aux_sym__classic_array_integer_token1] = ACTIONS(560),
    [aux_sym__classic_array_longint_token1] = ACTIONS(560),
    [aux_sym__classic_array_object_token1] = ACTIONS(560),
    [aux_sym__classic_array_picture_token1] = ACTIONS(560),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(560),
    [aux_sym__classic_array_real_token1] = ACTIONS(560),
    [aux_sym__classic_array_text_token1] = ACTIONS(560),
    [aux_sym__classic_array_time_token1] = ACTIONS(560),
    [anon_sym_SLASH_SLASH] = ACTIONS(560),
    [anon_sym_SLASH_STAR] = ACTIONS(560),
    [sym__if_e] = ACTIONS(560),
    [sym__if_f] = ACTIONS(562),
    [sym__else_e] = ACTIONS(560),
    [sym__else_f] = ACTIONS(560),
    [sym__end_if_e] = ACTIONS(560),
    [sym__end_if_f] = ACTIONS(560),
    [sym__begin_sql_e] = ACTIONS(560),
    [sym__begin_sql_f] = ACTIONS(560),
    [sym__end_sql_e] = ACTIONS(560),
    [sym__end_sql_f] = ACTIONS(560),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym__local] = ACTIONS(510),
    [sym__exposed] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(510),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(510),
    [anon_sym_TILDE_PIPE] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(510),
    [anon_sym_POUND] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(510),
    [anon_sym_GT_GT] = ACTIONS(510),
    [anon_sym_QMARK_QMARK] = ACTIONS(510),
    [anon_sym_QMARK_PLUS] = ACTIONS(510),
    [anon_sym_QMARK_DASH] = ACTIONS(510),
    [anon_sym_PLUS_EQ] = ACTIONS(510),
    [anon_sym_DASH_EQ] = ACTIONS(510),
    [anon_sym_STAR_EQ] = ACTIONS(510),
    [anon_sym_SLASH_EQ] = ACTIONS(510),
    [anon_sym_DOLLAR] = ACTIONS(510),
    [anon_sym_LT_GT] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(518),
    [sym__class_constructor] = ACTIONS(510),
    [sym__class_extends] = ACTIONS(510),
    [sym__var] = ACTIONS(510),
    [sym__property] = ACTIONS(510),
    [sym__alias] = ACTIONS(510),
    [sym__declare] = ACTIONS(510),
    [sym__function] = ACTIONS(510),
    [sym__return] = ACTIONS(510),
    [sym__break] = ACTIONS(510),
    [sym__continue] = ACTIONS(510),
    [sym__this] = ACTIONS(510),
    [sym__form] = ACTIONS(510),
    [sym__super] = ACTIONS(510),
    [sym__class_store_4d] = ACTIONS(510),
    [sym__class_store_ds] = ACTIONS(510),
    [sym__class_store_cs] = ACTIONS(510),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(510),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(510),
    [aux_sym__classic_array_blob_token1] = ACTIONS(510),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(510),
    [aux_sym__classic_array_date_token1] = ACTIONS(510),
    [aux_sym__classic_array_integer_token1] = ACTIONS(510),
    [aux_sym__classic_array_longint_token1] = ACTIONS(510),
    [aux_sym__classic_array_object_token1] = ACTIONS(510),
    [aux_sym__classic_array_picture_token1] = ACTIONS(510),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(510),
    [aux_sym__classic_array_real_token1] = ACTIONS(510),
    [aux_sym__classic_array_text_token1] = ACTIONS(510),
    [aux_sym__classic_array_time_token1] = ACTIONS(510),
    [anon_sym_SLASH_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_STAR] = ACTIONS(510),
    [sym__if_e] = ACTIONS(510),
    [sym__if_f] = ACTIONS(518),
    [sym__else_e] = ACTIONS(510),
    [sym__else_f] = ACTIONS(510),
    [sym__end_if_e] = ACTIONS(510),
    [sym__end_if_f] = ACTIONS(510),
    [sym__begin_sql_e] = ACTIONS(510),
    [sym__begin_sql_f] = ACTIONS(510),
    [sym__end_sql_e] = ACTIONS(510),
    [sym__end_sql_f] = ACTIONS(510),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym__local] = ACTIONS(564),
    [sym__exposed] = ACTIONS(564),
    [anon_sym_DOLLAR] = ACTIONS(564),
    [anon_sym_LT_GT] = ACTIONS(564),
    [aux_sym_numeric_parameter_token1] = ACTIONS(566),
    [anon_sym_QMARK] = ACTIONS(564),
    [anon_sym_BANG] = ACTIONS(566),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(564),
    [sym__hex_literal] = ACTIONS(564),
    [aux_sym__num_literal_token1] = ACTIONS(566),
    [aux_sym__exp_literal_token1] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [sym__class_constructor] = ACTIONS(564),
    [sym__class_extends] = ACTIONS(564),
    [sym__var] = ACTIONS(564),
    [sym__property] = ACTIONS(564),
    [sym__alias] = ACTIONS(564),
    [sym__declare] = ACTIONS(564),
    [sym__function] = ACTIONS(564),
    [sym__return] = ACTIONS(564),
    [sym__break] = ACTIONS(564),
    [sym__continue] = ACTIONS(564),
    [sym__this] = ACTIONS(564),
    [sym__form] = ACTIONS(564),
    [sym__super] = ACTIONS(564),
    [sym__class_store_4d] = ACTIONS(564),
    [sym__class_store_ds] = ACTIONS(564),
    [sym__class_store_cs] = ACTIONS(564),
    [sym__system_variable_ok] = ACTIONS(564),
    [sym__system_variable_document] = ACTIONS(564),
    [sym__system_variable_flddelimit] = ACTIONS(564),
    [sym__system_variable_recdelimit] = ACTIONS(564),
    [sym__system_variable_error] = ACTIONS(566),
    [sym__system_variable_error_method] = ACTIONS(564),
    [sym__system_variable_error_line] = ACTIONS(564),
    [sym__system_variable_error_formula] = ACTIONS(564),
    [sym__system_variable_mousedown] = ACTIONS(564),
    [sym__system_variable_mousex] = ACTIONS(564),
    [sym__system_variable_mousey] = ACTIONS(564),
    [sym__system_variable_keycode] = ACTIONS(564),
    [sym__system_variable_modifiers] = ACTIONS(564),
    [sym__system_variable_mouseproc] = ACTIONS(564),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(564),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(564),
    [aux_sym__classic_array_blob_token1] = ACTIONS(564),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(564),
    [aux_sym__classic_array_date_token1] = ACTIONS(564),
    [aux_sym__classic_array_integer_token1] = ACTIONS(564),
    [aux_sym__classic_array_longint_token1] = ACTIONS(564),
    [aux_sym__classic_array_object_token1] = ACTIONS(564),
    [aux_sym__classic_array_picture_token1] = ACTIONS(564),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(564),
    [aux_sym__classic_array_real_token1] = ACTIONS(564),
    [aux_sym__classic_array_text_token1] = ACTIONS(564),
    [aux_sym__classic_array_time_token1] = ACTIONS(564),
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_SLASH_STAR] = ACTIONS(564),
    [sym__if_e] = ACTIONS(564),
    [sym__if_f] = ACTIONS(566),
    [sym__else_e] = ACTIONS(564),
    [sym__else_f] = ACTIONS(564),
    [sym__end_if_e] = ACTIONS(564),
    [sym__end_if_f] = ACTIONS(564),
    [sym__begin_sql_e] = ACTIONS(564),
    [sym__begin_sql_f] = ACTIONS(564),
    [sym__end_sql_e] = ACTIONS(564),
    [sym__end_sql_f] = ACTIONS(564),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(178), 1,
      aux_sym__functional_expression_repeat1,
    STATE(197), 1,
      sym__function_parameter,
    STATE(214), 1,
      sym_super,
    ACTIONS(572), 2,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(187), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [123] = 30,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(180), 1,
      sym__function_parameter,
    STATE(188), 1,
      aux_sym__functional_expression_repeat1,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(598), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(187), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [246] = 2,
    ACTIONS(602), 1,
      sym__if_f,
    ACTIONS(600), 59,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [311] = 27,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(212), 1,
      sym__function_parameter,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(604), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(187), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [425] = 4,
    ACTIONS(608), 1,
      anon_sym_DASH_GT,
    ACTIONS(610), 1,
      sym__if_f,
    STATE(74), 1,
      sym_function_result,
    ACTIONS(606), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [492] = 2,
    ACTIONS(614), 1,
      sym__if_f,
    ACTIONS(612), 57,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [555] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(618), 1,
      sym__if_f,
    STATE(58), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(616), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [622] = 4,
    ACTIONS(608), 1,
      anon_sym_DASH_GT,
    ACTIONS(622), 1,
      sym__if_f,
    STATE(82), 1,
      sym_function_result,
    ACTIONS(620), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [689] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(626), 1,
      sym__if_f,
    STATE(12), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(624), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [756] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(630), 1,
      sym__if_f,
    STATE(12), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(628), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [823] = 2,
    ACTIONS(634), 1,
      sym__if_f,
    ACTIONS(632), 57,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [886] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(638), 1,
      sym__if_f,
    STATE(57), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(636), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [953] = 2,
    ACTIONS(642), 1,
      sym__if_f,
    ACTIONS(640), 57,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1016] = 2,
    ACTIONS(646), 1,
      sym__if_f,
    ACTIONS(644), 56,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1078] = 3,
    ACTIONS(532), 1,
      anon_sym_QMARK,
    ACTIONS(650), 1,
      sym__if_f,
    ACTIONS(648), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1142] = 2,
    ACTIONS(654), 1,
      sym__if_f,
    ACTIONS(652), 56,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1204] = 2,
    ACTIONS(658), 1,
      sym__if_f,
    ACTIONS(656), 56,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1266] = 3,
    ACTIONS(650), 1,
      sym__if_f,
    ACTIONS(660), 1,
      anon_sym_QMARK,
    ACTIONS(648), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1330] = 2,
    ACTIONS(664), 1,
      sym__if_f,
    ACTIONS(662), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1391] = 2,
    ACTIONS(668), 1,
      sym__if_f,
    ACTIONS(666), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1452] = 2,
    ACTIONS(672), 1,
      sym__if_f,
    ACTIONS(670), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1513] = 2,
    ACTIONS(676), 1,
      sym__if_f,
    ACTIONS(674), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1574] = 2,
    ACTIONS(680), 1,
      sym__if_f,
    ACTIONS(678), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1635] = 2,
    ACTIONS(684), 1,
      sym__if_f,
    ACTIONS(682), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1696] = 2,
    ACTIONS(688), 1,
      sym__if_f,
    ACTIONS(686), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1757] = 2,
    ACTIONS(692), 1,
      sym__if_f,
    ACTIONS(690), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1818] = 2,
    ACTIONS(696), 1,
      sym__if_f,
    ACTIONS(694), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [1879] = 25,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(51), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [1986] = 2,
    ACTIONS(700), 1,
      sym__if_f,
    ACTIONS(698), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2047] = 2,
    ACTIONS(704), 1,
      sym__if_f,
    ACTIONS(702), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2108] = 25,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(244), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [2215] = 2,
    ACTIONS(708), 1,
      sym__if_f,
    ACTIONS(706), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2276] = 2,
    ACTIONS(712), 1,
      sym__if_f,
    ACTIONS(710), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2337] = 2,
    ACTIONS(716), 1,
      sym__if_f,
    ACTIONS(714), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2398] = 26,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(63), 1,
      sym_ternary_block,
    STATE(66), 1,
      sym__condition,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [2507] = 2,
    ACTIONS(720), 1,
      sym__if_f,
    ACTIONS(718), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2568] = 2,
    ACTIONS(724), 1,
      sym__if_f,
    ACTIONS(722), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2629] = 2,
    ACTIONS(728), 1,
      sym__if_f,
    ACTIONS(726), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2690] = 2,
    ACTIONS(732), 1,
      sym__if_f,
    ACTIONS(730), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2751] = 2,
    ACTIONS(736), 1,
      sym__if_f,
    ACTIONS(734), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2812] = 2,
    ACTIONS(740), 1,
      sym__if_f,
    ACTIONS(738), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [2873] = 25,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(51), 2,
      sym__condition,
      sym_ternary_block,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(39), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [2980] = 2,
    ACTIONS(744), 1,
      sym__if_f,
    ACTIONS(742), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [3041] = 2,
    ACTIONS(748), 1,
      sym__if_f,
    ACTIONS(746), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [3102] = 2,
    ACTIONS(752), 1,
      sym__if_f,
    ACTIONS(750), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [3163] = 25,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(217), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3270] = 25,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(262), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(132), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3377] = 2,
    ACTIONS(756), 1,
      sym__if_f,
    ACTIONS(754), 55,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [3438] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(47), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3541] = 4,
    ACTIONS(760), 1,
      sym__if_f,
    STATE(9), 1,
      sym_else,
    ACTIONS(762), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(758), 50,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3604] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(320), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3707] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(329), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3810] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(265), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [3913] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(282), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4016] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(281), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4119] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(324), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4222] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(287), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4325] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(274), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4428] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(325), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4531] = 24,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      anon_sym_LT_GT,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(582), 1,
      anon_sym_BANG,
    ACTIONS(584), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym__system_variable_error,
    STATE(123), 1,
      sym__class_store,
    STATE(126), 1,
      sym__variable,
    STATE(128), 1,
      sym__class,
    STATE(131), 1,
      sym__mutable,
    STATE(214), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(125), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(150), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(138), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(149), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(592), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4634] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(379), 1,
      anon_sym_QMARK,
    ACTIONS(381), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__system_variable_error,
    STATE(18), 1,
      sym__class_store,
    STATE(25), 1,
      sym__variable,
    STATE(28), 1,
      sym__class,
    STATE(30), 1,
      sym__mutable,
    STATE(216), 1,
      sym_super,
    ACTIONS(377), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(385), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(332), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(20), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(46), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(31), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(327), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(389), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [4737] = 1,
    ACTIONS(764), 51,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4791] = 1,
    ACTIONS(766), 51,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4845] = 1,
    ACTIONS(768), 51,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [4899] = 1,
    ACTIONS(770), 49,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym__class_constructor,
      sym__class_extends,
      sym__var,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
      sym__return,
      sym__break,
      sym__continue,
      sym__this,
      sym__form,
      sym__super,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      aux_sym__classic_compiler_blob_token1,
      aux_sym__classic_compiler_boolean_token1,
      aux_sym__classic_compiler_collection_token1,
      aux_sym__classic_compiler_date_token1,
      aux_sym__classic_compiler_longint_token1,
      aux_sym__classic_compiler_object_token1,
      aux_sym__classic_compiler_picture_token1,
      aux_sym__classic_compiler_pointer_token1,
      aux_sym__classic_compiler_real_token1,
      aux_sym__classic_compiler_text_token1,
      aux_sym__classic_compiler_time_token1,
      aux_sym__classic_compiler_variant_token1,
      aux_sym__classic_array_blob_token1,
      aux_sym__classic_array_boolean_token1,
      aux_sym__classic_array_date_token1,
      aux_sym__classic_array_integer_token1,
      aux_sym__classic_array_longint_token1,
      aux_sym__classic_array_object_token1,
      aux_sym__classic_array_picture_token1,
      aux_sym__classic_array_pointer_token1,
      aux_sym__classic_array_real_token1,
      aux_sym__classic_array_text_token1,
      aux_sym__classic_array_time_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4951] = 5,
    ACTIONS(772), 1,
      anon_sym_DOT,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(426), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(424), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [4993] = 4,
    ACTIONS(776), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(403), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(401), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACK,
  [5033] = 5,
    ACTIONS(772), 1,
      anon_sym_DOT,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(414), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(412), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5075] = 2,
    ACTIONS(410), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(408), 21,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [5110] = 2,
    ACTIONS(403), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(401), 21,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [5145] = 4,
    ACTIONS(772), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(422), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(420), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5184] = 3,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(444), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5221] = 3,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(395), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5258] = 2,
    ACTIONS(436), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(434), 21,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [5293] = 4,
    ACTIONS(772), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(432), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(430), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5332] = 2,
    ACTIONS(460), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(458), 21,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [5367] = 3,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(438), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5404] = 3,
    ACTIONS(787), 1,
      anon_sym_DOT,
    ACTIONS(464), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(462), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5440] = 2,
    ACTIONS(452), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(450), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5474] = 4,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym__functional_expression,
    ACTIONS(480), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(476), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5512] = 2,
    ACTIONS(456), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(454), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5546] = 6,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    STATE(108), 1,
      sym__binary_operator,
    STATE(130), 1,
      aux_sym__condition_repeat1,
    ACTIONS(510), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(791), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(794), 15,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5588] = 4,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__functional_expression,
    ACTIONS(488), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(486), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5626] = 6,
    ACTIONS(534), 1,
      anon_sym_QMARK,
    STATE(108), 1,
      sym__binary_operator,
    STATE(133), 1,
      aux_sym__condition_repeat1,
    ACTIONS(532), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(797), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(799), 15,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5668] = 6,
    ACTIONS(526), 1,
      anon_sym_QMARK,
    STATE(108), 1,
      sym__binary_operator,
    STATE(130), 1,
      aux_sym__condition_repeat1,
    ACTIONS(520), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(797), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(799), 15,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5710] = 2,
    ACTIONS(470), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(468), 20,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
  [5744] = 2,
    ACTIONS(484), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(482), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5777] = 2,
    ACTIONS(474), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(472), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5810] = 2,
    ACTIONS(496), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(494), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5842] = 2,
    ACTIONS(492), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(490), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5874] = 2,
    ACTIONS(546), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(544), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5906] = 2,
    ACTIONS(530), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(528), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5938] = 2,
    ACTIONS(550), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(548), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [5970] = 2,
    ACTIONS(500), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(498), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6002] = 2,
    ACTIONS(542), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(540), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6034] = 2,
    ACTIONS(554), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(552), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6066] = 2,
    ACTIONS(508), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(506), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6098] = 2,
    ACTIONS(504), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(502), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6130] = 2,
    ACTIONS(538), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(536), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6162] = 2,
    ACTIONS(558), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(556), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6194] = 2,
    ACTIONS(518), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(510), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6226] = 2,
    ACTIONS(562), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(560), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE_PIPE,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_QMARK_PLUS,
      anon_sym_QMARK_DASH,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [6258] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(61), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6288] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(78), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6318] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(54), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6348] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(80), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6378] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(81), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6408] = 5,
    STATE(18), 1,
      sym__class_store,
    STATE(75), 1,
      sym_class,
    STATE(59), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(801), 12,
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
  [6438] = 3,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(805), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6453] = 3,
    ACTIONS(807), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(805), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6468] = 3,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(811), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6483] = 3,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      aux_sym_string_repeat1,
    ACTIONS(815), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6498] = 3,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(819), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6513] = 4,
    ACTIONS(824), 1,
      aux_sym__name_token1,
    STATE(210), 1,
      sym__computed,
    STATE(290), 1,
      sym__name,
    ACTIONS(822), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [6529] = 4,
    ACTIONS(828), 1,
      aux_sym__name_token1,
    STATE(249), 1,
      sym__computed,
    STATE(276), 1,
      sym__name,
    ACTIONS(826), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [6545] = 1,
    ACTIONS(830), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [6553] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(832), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(268), 2,
      sym__name,
      sym_local_variable,
  [6565] = 3,
    ACTIONS(838), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(836), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(121), 2,
      sym__name,
      sym__classic_name,
  [6577] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(840), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(250), 2,
      sym__name,
      sym_local_variable,
  [6589] = 3,
    ACTIONS(844), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(842), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(11), 2,
      sym__name,
      sym__classic_name,
  [6601] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(846), 1,
      aux_sym__name_token1,
    STATE(283), 2,
      sym__name,
      sym_local_variable,
  [6612] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(848), 1,
      aux_sym__name_token1,
    STATE(183), 2,
      sym__name,
      sym_local_variable,
  [6623] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(850), 1,
      aux_sym__name_token1,
    STATE(215), 2,
      sym__name,
      sym_local_variable,
  [6634] = 4,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_local_variable,
    STATE(195), 1,
      sym__function_argument,
  [6647] = 2,
    ACTIONS(842), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(11), 2,
      sym__name,
      sym__classic_name,
  [6656] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(854), 1,
      aux_sym__name_token1,
    STATE(202), 2,
      sym__name,
      sym_local_variable,
  [6667] = 2,
    ACTIONS(856), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(120), 2,
      sym__name,
      sym__classic_name,
  [6676] = 2,
    ACTIONS(858), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(21), 2,
      sym__name,
      sym__classic_name,
  [6685] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    ACTIONS(860), 1,
      aux_sym__name_token1,
    STATE(247), 2,
      sym__name,
      sym_local_variable,
  [6696] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__functional_expression_repeat1,
  [6706] = 3,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(864), 1,
      anon_sym_COLON_EQ,
    STATE(44), 1,
      sym__functional_expression,
  [6716] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      aux_sym__functional_expression_repeat1,
  [6726] = 3,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_COLON,
    STATE(203), 1,
      aux_sym_var_declaration_block_repeat1,
  [6736] = 2,
    STATE(60), 1,
      sym__name,
    ACTIONS(872), 2,
      aux_sym__name_token1,
      sym__class_store_4d,
  [6744] = 3,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6754] = 3,
    ACTIONS(878), 1,
      anon_sym_SEMI,
    ACTIONS(880), 1,
      anon_sym_COLON,
    STATE(199), 1,
      aux_sym__function_argument_repeat1,
  [6764] = 3,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6774] = 3,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    ACTIONS(889), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_property_declaration_block_repeat1,
  [6784] = 2,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(891), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6792] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__functional_expression_repeat1,
  [6802] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym__function_argument,
    STATE(184), 1,
      sym_local_variable,
  [6812] = 3,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(898), 1,
      anon_sym_COLON,
    STATE(190), 1,
      aux_sym__function_argument_repeat1,
  [6822] = 3,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_function_arguments_repeat1,
  [6832] = 3,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6842] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__functional_expression_repeat1,
  [6852] = 3,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    STATE(184), 1,
      sym_local_variable,
    STATE(233), 1,
      sym__function_argument,
  [6862] = 3,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_function_arguments_repeat1,
  [6872] = 3,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_function_arguments_repeat1,
  [6882] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym__functional_expression_repeat1,
  [6892] = 3,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__functional_expression_repeat1,
  [6902] = 3,
    ACTIONS(878), 1,
      anon_sym_SEMI,
    ACTIONS(917), 1,
      anon_sym_COLON,
    STATE(190), 1,
      aux_sym__function_argument_repeat1,
  [6912] = 3,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym__functional_expression_repeat1,
  [6922] = 3,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      anon_sym_COLON,
    STATE(186), 1,
      aux_sym_property_declaration_block_repeat1,
  [6932] = 3,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_COLON,
    STATE(181), 1,
      aux_sym_var_declaration_block_repeat1,
  [6942] = 3,
    ACTIONS(928), 1,
      anon_sym_SEMI,
    ACTIONS(931), 1,
      anon_sym_COLON,
    STATE(203), 1,
      aux_sym_var_declaration_block_repeat1,
  [6952] = 3,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(936), 1,
      anon_sym_COLON,
    STATE(204), 1,
      aux_sym_property_declaration_block_repeat1,
  [6962] = 2,
    ACTIONS(938), 1,
      aux_sym__name_token1,
    STATE(55), 1,
      sym__name,
  [6969] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(301), 1,
      sym_command_suffix,
  [6976] = 2,
    ACTIONS(942), 1,
      aux_sym_time_token1,
    ACTIONS(944), 1,
      aux_sym_date_token1,
  [6983] = 2,
    ACTIONS(834), 1,
      anon_sym_DOLLAR,
    STATE(236), 1,
      sym_local_variable,
  [6990] = 2,
    ACTIONS(946), 1,
      aux_sym__name_token1,
    STATE(118), 1,
      sym__name,
  [6997] = 2,
    ACTIONS(948), 1,
      aux_sym__name_token1,
    STATE(276), 1,
      sym__name,
  [7004] = 2,
    ACTIONS(950), 1,
      aux_sym__name_token1,
    STATE(15), 1,
      sym__name,
  [7011] = 1,
    ACTIONS(922), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7016] = 2,
    ACTIONS(952), 1,
      aux_sym_command_suffix_token1,
    STATE(129), 1,
      sym_command_suffix,
  [7023] = 2,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym__functional_expression,
  [7030] = 1,
    ACTIONS(931), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7035] = 2,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__functional_expression,
  [7042] = 2,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(954), 1,
      anon_sym_COLON,
  [7049] = 2,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_function_arguments,
  [7056] = 1,
    ACTIONS(936), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7061] = 2,
    ACTIONS(958), 1,
      aux_sym__name_token1,
    STATE(291), 1,
      sym__name,
  [7068] = 2,
    ACTIONS(960), 1,
      aux_sym__name_token1,
    STATE(201), 1,
      sym__name,
  [7075] = 2,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_function_arguments,
  [7082] = 2,
    ACTIONS(25), 1,
      sym__function,
    STATE(163), 1,
      sym_function,
  [7089] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(293), 1,
      sym_command_suffix,
  [7096] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(294), 1,
      sym_command_suffix,
  [7103] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(295), 1,
      sym_command_suffix,
  [7110] = 2,
    ACTIONS(962), 1,
      aux_sym__name_token1,
    STATE(219), 1,
      sym__name,
  [7117] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(296), 1,
      sym_command_suffix,
  [7124] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(297), 1,
      sym_command_suffix,
  [7131] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(298), 1,
      sym_command_suffix,
  [7138] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(299), 1,
      sym_command_suffix,
  [7145] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(300), 1,
      sym_command_suffix,
  [7152] = 1,
    ACTIONS(903), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7157] = 2,
    ACTIONS(964), 1,
      sym__exposed,
    ACTIONS(966), 1,
      sym__function,
  [7164] = 2,
    ACTIONS(968), 1,
      aux_sym__name_token1,
    STATE(116), 1,
      sym__name,
  [7171] = 1,
    ACTIONS(898), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7176] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(302), 1,
      sym_command_suffix,
  [7183] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(303), 1,
      sym_command_suffix,
  [7190] = 2,
    ACTIONS(970), 1,
      aux_sym__name_token1,
    STATE(14), 1,
      sym__name,
  [7197] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(304), 1,
      sym_command_suffix,
  [7204] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(305), 1,
      sym_command_suffix,
  [7211] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(306), 1,
      sym_command_suffix,
  [7218] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(307), 1,
      sym_command_suffix,
  [7225] = 2,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(972), 1,
      anon_sym_COLON,
  [7232] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(308), 1,
      sym_command_suffix,
  [7239] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(264), 1,
      sym_command_suffix,
  [7246] = 1,
    ACTIONS(885), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7251] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(309), 1,
      sym_command_suffix,
  [7258] = 2,
    ACTIONS(974), 1,
      aux_sym__name_token1,
    STATE(280), 1,
      sym__name,
  [7265] = 2,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
  [7272] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(310), 1,
      sym_command_suffix,
  [7279] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(311), 1,
      sym_command_suffix,
  [7286] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(312), 1,
      sym_command_suffix,
  [7293] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(313), 1,
      sym_command_suffix,
  [7300] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(314), 1,
      sym_command_suffix,
  [7307] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(23), 1,
      sym_command_suffix,
  [7314] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(315), 1,
      sym_command_suffix,
  [7321] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(317), 1,
      sym_command_suffix,
  [7328] = 2,
    ACTIONS(940), 1,
      aux_sym_command_suffix_token1,
    STATE(318), 1,
      sym_command_suffix,
  [7335] = 2,
    ACTIONS(980), 1,
      aux_sym_time_token1,
    ACTIONS(982), 1,
      aux_sym_date_token1,
  [7342] = 1,
    ACTIONS(984), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [7347] = 2,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
  [7354] = 2,
    ACTIONS(964), 1,
      sym__local,
    ACTIONS(966), 1,
      sym__function,
  [7361] = 1,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
  [7365] = 1,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
  [7369] = 1,
    ACTIONS(992), 1,
      anon_sym_QMARK,
  [7373] = 1,
    ACTIONS(994), 1,
      anon_sym_BANG,
  [7377] = 1,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
  [7381] = 1,
    ACTIONS(998), 1,
      anon_sym_DASH,
  [7385] = 1,
    ACTIONS(1000), 1,
      aux_sym_time_token1,
  [7389] = 1,
    ACTIONS(1002), 1,
      aux_sym_date_token1,
  [7393] = 1,
    ACTIONS(1002), 1,
      aux_sym_time_token1,
  [7397] = 1,
    ACTIONS(1004), 1,
      anon_sym_DASH,
  [7401] = 1,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
  [7405] = 1,
    ACTIONS(1008), 1,
      anon_sym_COLON,
  [7409] = 1,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
  [7413] = 1,
    ACTIONS(1012), 1,
      aux_sym_time_token1,
  [7417] = 1,
    ACTIONS(1014), 1,
      aux_sym_time_token1,
  [7421] = 1,
    ACTIONS(1016), 1,
      aux_sym_time_token1,
  [7425] = 1,
    ACTIONS(1018), 1,
      anon_sym_LPAREN,
  [7429] = 1,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
  [7433] = 1,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [7437] = 1,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [7441] = 1,
    ACTIONS(1026), 1,
      anon_sym_DASH,
  [7445] = 1,
    ACTIONS(1028), 1,
      anon_sym_DASH,
  [7449] = 1,
    ACTIONS(1030), 1,
      anon_sym_COLON,
  [7453] = 1,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
  [7457] = 1,
    ACTIONS(1034), 1,
      aux_sym__name_token1,
  [7461] = 1,
    ACTIONS(1036), 1,
      aux_sym_time_token1,
  [7465] = 1,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
  [7469] = 1,
    ACTIONS(1040), 1,
      aux_sym__name_token1,
  [7473] = 1,
    ACTIONS(1042), 1,
      anon_sym_SLASH,
  [7477] = 1,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
  [7481] = 1,
    ACTIONS(1046), 1,
      anon_sym_LPAREN,
  [7485] = 1,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
  [7489] = 1,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
  [7493] = 1,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
  [7497] = 1,
    ACTIONS(1054), 1,
      anon_sym_LPAREN,
  [7501] = 1,
    ACTIONS(1056), 1,
      anon_sym_LPAREN,
  [7505] = 1,
    ACTIONS(1058), 1,
      anon_sym_LPAREN,
  [7509] = 1,
    ACTIONS(1060), 1,
      anon_sym_LPAREN,
  [7513] = 1,
    ACTIONS(1062), 1,
      anon_sym_LPAREN,
  [7517] = 1,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
  [7521] = 1,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
  [7525] = 1,
    ACTIONS(1068), 1,
      anon_sym_LPAREN,
  [7529] = 1,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [7533] = 1,
    ACTIONS(1072), 1,
      anon_sym_LPAREN,
  [7537] = 1,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
  [7541] = 1,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
  [7545] = 1,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
  [7549] = 1,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
  [7553] = 1,
    ACTIONS(1082), 1,
      anon_sym_LPAREN,
  [7557] = 1,
    ACTIONS(1084), 1,
      anon_sym_LPAREN,
  [7561] = 1,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
  [7565] = 1,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
  [7569] = 1,
    ACTIONS(787), 1,
      anon_sym_DOT,
  [7573] = 1,
    ACTIONS(1090), 1,
      anon_sym_DOT,
  [7577] = 1,
    ACTIONS(1092), 1,
      anon_sym_DOT,
  [7581] = 1,
    ACTIONS(1094), 1,
      sym__function,
  [7585] = 1,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
  [7589] = 1,
    ACTIONS(1098), 1,
      anon_sym_LPAREN,
  [7593] = 1,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
  [7597] = 1,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
  [7601] = 1,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
  [7605] = 1,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
  [7609] = 1,
    ACTIONS(1108), 1,
      anon_sym_LPAREN,
  [7613] = 1,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
  [7617] = 1,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
  [7621] = 1,
    ACTIONS(1114), 1,
      anon_sym_RBRACK,
  [7625] = 1,
    ACTIONS(1116), 1,
      anon_sym_QMARK,
  [7629] = 1,
    ACTIONS(1118), 1,
      anon_sym_BANG,
  [7633] = 1,
    ACTIONS(466), 1,
      anon_sym_DOT,
  [7637] = 1,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
  [7641] = 1,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
  [7645] = 1,
    ACTIONS(1124), 1,
      aux_sym_comment_token2,
  [7649] = 1,
    ACTIONS(1126), 1,
      aux_sym_comment_token1,
  [7653] = 1,
    ACTIONS(1128), 1,
      anon_sym_LPAREN,
  [7657] = 1,
    ACTIONS(1130), 1,
      aux_sym_time_token1,
  [7661] = 1,
    ACTIONS(1132), 1,
      aux_sym_date_token1,
  [7665] = 1,
    ACTIONS(1132), 1,
      aux_sym_time_token1,
  [7669] = 1,
    ACTIONS(1134), 1,
      anon_sym_COLON,
  [7673] = 1,
    ACTIONS(1136), 1,
      anon_sym_DASH,
  [7677] = 1,
    ACTIONS(1138), 1,
      anon_sym_DASH,
  [7681] = 1,
    ACTIONS(1140), 1,
      aux_sym_time_token1,
  [7685] = 1,
    ACTIONS(1142), 1,
      aux_sym_time_token1,
  [7689] = 1,
    ACTIONS(1144), 1,
      aux_sym_time_token1,
  [7693] = 1,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [7697] = 1,
    ACTIONS(1148), 1,
      anon_sym_DASH,
  [7701] = 1,
    ACTIONS(1150), 1,
      anon_sym_DASH,
  [7705] = 1,
    ACTIONS(1152), 1,
      aux_sym_time_token1,
  [7709] = 1,
    ACTIONS(1154), 1,
      aux_sym__name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 123,
  [SMALL_STATE(51)] = 246,
  [SMALL_STATE(52)] = 311,
  [SMALL_STATE(53)] = 425,
  [SMALL_STATE(54)] = 492,
  [SMALL_STATE(55)] = 555,
  [SMALL_STATE(56)] = 622,
  [SMALL_STATE(57)] = 689,
  [SMALL_STATE(58)] = 756,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 886,
  [SMALL_STATE(61)] = 953,
  [SMALL_STATE(62)] = 1016,
  [SMALL_STATE(63)] = 1078,
  [SMALL_STATE(64)] = 1142,
  [SMALL_STATE(65)] = 1204,
  [SMALL_STATE(66)] = 1266,
  [SMALL_STATE(67)] = 1330,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1452,
  [SMALL_STATE(70)] = 1513,
  [SMALL_STATE(71)] = 1574,
  [SMALL_STATE(72)] = 1635,
  [SMALL_STATE(73)] = 1696,
  [SMALL_STATE(74)] = 1757,
  [SMALL_STATE(75)] = 1818,
  [SMALL_STATE(76)] = 1879,
  [SMALL_STATE(77)] = 1986,
  [SMALL_STATE(78)] = 2047,
  [SMALL_STATE(79)] = 2108,
  [SMALL_STATE(80)] = 2215,
  [SMALL_STATE(81)] = 2276,
  [SMALL_STATE(82)] = 2337,
  [SMALL_STATE(83)] = 2398,
  [SMALL_STATE(84)] = 2507,
  [SMALL_STATE(85)] = 2568,
  [SMALL_STATE(86)] = 2629,
  [SMALL_STATE(87)] = 2690,
  [SMALL_STATE(88)] = 2751,
  [SMALL_STATE(89)] = 2812,
  [SMALL_STATE(90)] = 2873,
  [SMALL_STATE(91)] = 2980,
  [SMALL_STATE(92)] = 3041,
  [SMALL_STATE(93)] = 3102,
  [SMALL_STATE(94)] = 3163,
  [SMALL_STATE(95)] = 3270,
  [SMALL_STATE(96)] = 3377,
  [SMALL_STATE(97)] = 3438,
  [SMALL_STATE(98)] = 3541,
  [SMALL_STATE(99)] = 3604,
  [SMALL_STATE(100)] = 3707,
  [SMALL_STATE(101)] = 3810,
  [SMALL_STATE(102)] = 3913,
  [SMALL_STATE(103)] = 4016,
  [SMALL_STATE(104)] = 4119,
  [SMALL_STATE(105)] = 4222,
  [SMALL_STATE(106)] = 4325,
  [SMALL_STATE(107)] = 4428,
  [SMALL_STATE(108)] = 4531,
  [SMALL_STATE(109)] = 4634,
  [SMALL_STATE(110)] = 4737,
  [SMALL_STATE(111)] = 4791,
  [SMALL_STATE(112)] = 4845,
  [SMALL_STATE(113)] = 4899,
  [SMALL_STATE(114)] = 4951,
  [SMALL_STATE(115)] = 4993,
  [SMALL_STATE(116)] = 5033,
  [SMALL_STATE(117)] = 5075,
  [SMALL_STATE(118)] = 5110,
  [SMALL_STATE(119)] = 5145,
  [SMALL_STATE(120)] = 5184,
  [SMALL_STATE(121)] = 5221,
  [SMALL_STATE(122)] = 5258,
  [SMALL_STATE(123)] = 5293,
  [SMALL_STATE(124)] = 5332,
  [SMALL_STATE(125)] = 5367,
  [SMALL_STATE(126)] = 5404,
  [SMALL_STATE(127)] = 5440,
  [SMALL_STATE(128)] = 5474,
  [SMALL_STATE(129)] = 5512,
  [SMALL_STATE(130)] = 5546,
  [SMALL_STATE(131)] = 5588,
  [SMALL_STATE(132)] = 5626,
  [SMALL_STATE(133)] = 5668,
  [SMALL_STATE(134)] = 5710,
  [SMALL_STATE(135)] = 5744,
  [SMALL_STATE(136)] = 5777,
  [SMALL_STATE(137)] = 5810,
  [SMALL_STATE(138)] = 5842,
  [SMALL_STATE(139)] = 5874,
  [SMALL_STATE(140)] = 5906,
  [SMALL_STATE(141)] = 5938,
  [SMALL_STATE(142)] = 5970,
  [SMALL_STATE(143)] = 6002,
  [SMALL_STATE(144)] = 6034,
  [SMALL_STATE(145)] = 6066,
  [SMALL_STATE(146)] = 6098,
  [SMALL_STATE(147)] = 6130,
  [SMALL_STATE(148)] = 6162,
  [SMALL_STATE(149)] = 6194,
  [SMALL_STATE(150)] = 6226,
  [SMALL_STATE(151)] = 6258,
  [SMALL_STATE(152)] = 6288,
  [SMALL_STATE(153)] = 6318,
  [SMALL_STATE(154)] = 6348,
  [SMALL_STATE(155)] = 6378,
  [SMALL_STATE(156)] = 6408,
  [SMALL_STATE(157)] = 6438,
  [SMALL_STATE(158)] = 6453,
  [SMALL_STATE(159)] = 6468,
  [SMALL_STATE(160)] = 6483,
  [SMALL_STATE(161)] = 6498,
  [SMALL_STATE(162)] = 6513,
  [SMALL_STATE(163)] = 6529,
  [SMALL_STATE(164)] = 6545,
  [SMALL_STATE(165)] = 6553,
  [SMALL_STATE(166)] = 6565,
  [SMALL_STATE(167)] = 6577,
  [SMALL_STATE(168)] = 6589,
  [SMALL_STATE(169)] = 6601,
  [SMALL_STATE(170)] = 6612,
  [SMALL_STATE(171)] = 6623,
  [SMALL_STATE(172)] = 6634,
  [SMALL_STATE(173)] = 6647,
  [SMALL_STATE(174)] = 6656,
  [SMALL_STATE(175)] = 6667,
  [SMALL_STATE(176)] = 6676,
  [SMALL_STATE(177)] = 6685,
  [SMALL_STATE(178)] = 6696,
  [SMALL_STATE(179)] = 6706,
  [SMALL_STATE(180)] = 6716,
  [SMALL_STATE(181)] = 6726,
  [SMALL_STATE(182)] = 6736,
  [SMALL_STATE(183)] = 6744,
  [SMALL_STATE(184)] = 6754,
  [SMALL_STATE(185)] = 6764,
  [SMALL_STATE(186)] = 6774,
  [SMALL_STATE(187)] = 6784,
  [SMALL_STATE(188)] = 6792,
  [SMALL_STATE(189)] = 6802,
  [SMALL_STATE(190)] = 6812,
  [SMALL_STATE(191)] = 6822,
  [SMALL_STATE(192)] = 6832,
  [SMALL_STATE(193)] = 6842,
  [SMALL_STATE(194)] = 6852,
  [SMALL_STATE(195)] = 6862,
  [SMALL_STATE(196)] = 6872,
  [SMALL_STATE(197)] = 6882,
  [SMALL_STATE(198)] = 6892,
  [SMALL_STATE(199)] = 6902,
  [SMALL_STATE(200)] = 6912,
  [SMALL_STATE(201)] = 6922,
  [SMALL_STATE(202)] = 6932,
  [SMALL_STATE(203)] = 6942,
  [SMALL_STATE(204)] = 6952,
  [SMALL_STATE(205)] = 6962,
  [SMALL_STATE(206)] = 6969,
  [SMALL_STATE(207)] = 6976,
  [SMALL_STATE(208)] = 6983,
  [SMALL_STATE(209)] = 6990,
  [SMALL_STATE(210)] = 6997,
  [SMALL_STATE(211)] = 7004,
  [SMALL_STATE(212)] = 7011,
  [SMALL_STATE(213)] = 7016,
  [SMALL_STATE(214)] = 7023,
  [SMALL_STATE(215)] = 7030,
  [SMALL_STATE(216)] = 7035,
  [SMALL_STATE(217)] = 7042,
  [SMALL_STATE(218)] = 7049,
  [SMALL_STATE(219)] = 7056,
  [SMALL_STATE(220)] = 7061,
  [SMALL_STATE(221)] = 7068,
  [SMALL_STATE(222)] = 7075,
  [SMALL_STATE(223)] = 7082,
  [SMALL_STATE(224)] = 7089,
  [SMALL_STATE(225)] = 7096,
  [SMALL_STATE(226)] = 7103,
  [SMALL_STATE(227)] = 7110,
  [SMALL_STATE(228)] = 7117,
  [SMALL_STATE(229)] = 7124,
  [SMALL_STATE(230)] = 7131,
  [SMALL_STATE(231)] = 7138,
  [SMALL_STATE(232)] = 7145,
  [SMALL_STATE(233)] = 7152,
  [SMALL_STATE(234)] = 7157,
  [SMALL_STATE(235)] = 7164,
  [SMALL_STATE(236)] = 7171,
  [SMALL_STATE(237)] = 7176,
  [SMALL_STATE(238)] = 7183,
  [SMALL_STATE(239)] = 7190,
  [SMALL_STATE(240)] = 7197,
  [SMALL_STATE(241)] = 7204,
  [SMALL_STATE(242)] = 7211,
  [SMALL_STATE(243)] = 7218,
  [SMALL_STATE(244)] = 7225,
  [SMALL_STATE(245)] = 7232,
  [SMALL_STATE(246)] = 7239,
  [SMALL_STATE(247)] = 7246,
  [SMALL_STATE(248)] = 7251,
  [SMALL_STATE(249)] = 7258,
  [SMALL_STATE(250)] = 7265,
  [SMALL_STATE(251)] = 7272,
  [SMALL_STATE(252)] = 7279,
  [SMALL_STATE(253)] = 7286,
  [SMALL_STATE(254)] = 7293,
  [SMALL_STATE(255)] = 7300,
  [SMALL_STATE(256)] = 7307,
  [SMALL_STATE(257)] = 7314,
  [SMALL_STATE(258)] = 7321,
  [SMALL_STATE(259)] = 7328,
  [SMALL_STATE(260)] = 7335,
  [SMALL_STATE(261)] = 7342,
  [SMALL_STATE(262)] = 7347,
  [SMALL_STATE(263)] = 7354,
  [SMALL_STATE(264)] = 7361,
  [SMALL_STATE(265)] = 7365,
  [SMALL_STATE(266)] = 7369,
  [SMALL_STATE(267)] = 7373,
  [SMALL_STATE(268)] = 7377,
  [SMALL_STATE(269)] = 7381,
  [SMALL_STATE(270)] = 7385,
  [SMALL_STATE(271)] = 7389,
  [SMALL_STATE(272)] = 7393,
  [SMALL_STATE(273)] = 7397,
  [SMALL_STATE(274)] = 7401,
  [SMALL_STATE(275)] = 7405,
  [SMALL_STATE(276)] = 7409,
  [SMALL_STATE(277)] = 7413,
  [SMALL_STATE(278)] = 7417,
  [SMALL_STATE(279)] = 7421,
  [SMALL_STATE(280)] = 7425,
  [SMALL_STATE(281)] = 7429,
  [SMALL_STATE(282)] = 7433,
  [SMALL_STATE(283)] = 7437,
  [SMALL_STATE(284)] = 7441,
  [SMALL_STATE(285)] = 7445,
  [SMALL_STATE(286)] = 7449,
  [SMALL_STATE(287)] = 7453,
  [SMALL_STATE(288)] = 7457,
  [SMALL_STATE(289)] = 7461,
  [SMALL_STATE(290)] = 7465,
  [SMALL_STATE(291)] = 7469,
  [SMALL_STATE(292)] = 7473,
  [SMALL_STATE(293)] = 7477,
  [SMALL_STATE(294)] = 7481,
  [SMALL_STATE(295)] = 7485,
  [SMALL_STATE(296)] = 7489,
  [SMALL_STATE(297)] = 7493,
  [SMALL_STATE(298)] = 7497,
  [SMALL_STATE(299)] = 7501,
  [SMALL_STATE(300)] = 7505,
  [SMALL_STATE(301)] = 7509,
  [SMALL_STATE(302)] = 7513,
  [SMALL_STATE(303)] = 7517,
  [SMALL_STATE(304)] = 7521,
  [SMALL_STATE(305)] = 7525,
  [SMALL_STATE(306)] = 7529,
  [SMALL_STATE(307)] = 7533,
  [SMALL_STATE(308)] = 7537,
  [SMALL_STATE(309)] = 7541,
  [SMALL_STATE(310)] = 7545,
  [SMALL_STATE(311)] = 7549,
  [SMALL_STATE(312)] = 7553,
  [SMALL_STATE(313)] = 7557,
  [SMALL_STATE(314)] = 7561,
  [SMALL_STATE(315)] = 7565,
  [SMALL_STATE(316)] = 7569,
  [SMALL_STATE(317)] = 7573,
  [SMALL_STATE(318)] = 7577,
  [SMALL_STATE(319)] = 7581,
  [SMALL_STATE(320)] = 7585,
  [SMALL_STATE(321)] = 7589,
  [SMALL_STATE(322)] = 7593,
  [SMALL_STATE(323)] = 7597,
  [SMALL_STATE(324)] = 7601,
  [SMALL_STATE(325)] = 7605,
  [SMALL_STATE(326)] = 7609,
  [SMALL_STATE(327)] = 7613,
  [SMALL_STATE(328)] = 7617,
  [SMALL_STATE(329)] = 7621,
  [SMALL_STATE(330)] = 7625,
  [SMALL_STATE(331)] = 7629,
  [SMALL_STATE(332)] = 7633,
  [SMALL_STATE(333)] = 7637,
  [SMALL_STATE(334)] = 7641,
  [SMALL_STATE(335)] = 7645,
  [SMALL_STATE(336)] = 7649,
  [SMALL_STATE(337)] = 7653,
  [SMALL_STATE(338)] = 7657,
  [SMALL_STATE(339)] = 7661,
  [SMALL_STATE(340)] = 7665,
  [SMALL_STATE(341)] = 7669,
  [SMALL_STATE(342)] = 7673,
  [SMALL_STATE(343)] = 7677,
  [SMALL_STATE(344)] = 7681,
  [SMALL_STATE(345)] = 7685,
  [SMALL_STATE(346)] = 7689,
  [SMALL_STATE(347)] = 7693,
  [SMALL_STATE(348)] = 7697,
  [SMALL_STATE(349)] = 7701,
  [SMALL_STATE(350)] = 7705,
  [SMALL_STATE(351)] = 7709,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(234),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(263),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(168),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(176),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(71),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(182),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(261),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(288),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(351),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(337),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(164),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(93),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(88),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(258),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(257),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(256),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(255),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(254),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(253),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(252),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(251),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(248),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(246),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(245),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(243),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(242),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(241),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(240),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(238),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(237),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(206),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(232),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(231),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(230),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(229),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(228),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(226),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(225),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(224),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(336),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(335),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(334),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(112),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(234),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(263),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(168),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(176),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(71),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(182),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(261),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(288),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(351),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(337),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(164),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(48),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(93),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(88),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(259),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(258),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(257),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(256),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(255),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(254),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(253),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(252),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(251),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(248),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(246),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(245),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(243),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(242),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(241),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(240),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(238),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(237),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(206),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(232),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(231),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(230),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(229),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(228),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(226),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(225),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(224),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(336),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(335),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(334),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(112),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(239),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(97),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(97),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 6),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 8),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 8),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_sql, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(209),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(108),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(108),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(161),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(177),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(208),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(194),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(52),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(171),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(227),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_picture, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_time, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_text, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_real, 2),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_pointer, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_picture, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_object, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_longint, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_integer, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_date, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_boolean, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_blob, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_variant, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_time, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_text, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_real, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_pointer, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_object, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_date, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_collection, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_boolean, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_blob, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
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
