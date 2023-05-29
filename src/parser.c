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
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 280
#define ALIAS_COUNT 0
#define TOKEN_COUNT 167
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
  anon_sym_SLASH_STAR = 128,
  aux_sym_comment_block_token1 = 129,
  anon_sym_SLASH_SLASH = 130,
  aux_sym__comment_token1 = 131,
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
  aux_sym_sql_block_token1 = 166,
  sym_source = 167,
  sym__statement = 168,
  sym__computed = 169,
  sym__scope = 170,
  sym__name = 171,
  sym__classic_name = 172,
  sym_function_name = 173,
  sym__function_argument = 174,
  sym_function_arguments = 175,
  sym_function_result = 176,
  sym_alias_name = 177,
  sym__binary_operator = 178,
  sym_class = 179,
  sym_local_variable = 180,
  sym_interprocess_variable = 181,
  sym_numeric_parameter = 182,
  sym__variable = 183,
  sym__mutable = 184,
  sym__immutable = 185,
  sym_class_function = 186,
  sym_generic_function = 187,
  sym__function_parameter = 188,
  sym__functional_expression = 189,
  sym__function_call = 190,
  sym__single_condition = 191,
  sym__condition = 192,
  sym_ternary_block = 193,
  sym_object_literal_block = 194,
  sym_time = 195,
  sym_date = 196,
  sym__dec_literal = 197,
  sym__num_literal = 198,
  sym__exp_literal = 199,
  sym_number = 200,
  sym_string = 201,
  sym_constant = 202,
  sym_function_block = 203,
  sym_declare_block = 204,
  sym_alias_block = 205,
  sym_class_extends = 206,
  sym_class_constructor = 207,
  sym_var_declaration_block = 208,
  sym_classic_compiler_block = 209,
  sym_classic_array_block = 210,
  sym_property_declaration_block = 211,
  sym_return_block = 212,
  sym_assignment_block = 213,
  sym_function_call = 214,
  sym_var = 215,
  sym_property = 216,
  sym_alias = 217,
  sym_declare = 218,
  sym_function = 219,
  sym_return = 220,
  sym_break = 221,
  sym_continue = 222,
  sym_this = 223,
  sym_form = 224,
  sym_super = 225,
  sym__class_store = 226,
  sym__class = 227,
  sym__basic_type = 228,
  sym_system_variable = 229,
  sym__classic_compiler_blob = 230,
  sym__classic_compiler_boolean = 231,
  sym__classic_compiler_collection = 232,
  sym__classic_compiler_date = 233,
  sym__classic_compiler_longint = 234,
  sym__classic_compiler_object = 235,
  sym__classic_compiler_picture = 236,
  sym__classic_compiler_pointer = 237,
  sym__classic_compiler_real = 238,
  sym__classic_compiler_text = 239,
  sym__classic_compiler_time = 240,
  sym__classic_compiler_variant = 241,
  sym_classic_compiler = 242,
  sym__classic_array_blob = 243,
  sym__classic_array_boolean = 244,
  sym__classic_array_date = 245,
  sym__classic_array_integer = 246,
  sym__classic_array_longint = 247,
  sym__classic_array_object = 248,
  sym__classic_array_picture = 249,
  sym__classic_array_pointer = 250,
  sym__classic_array_real = 251,
  sym__classic_array_text = 252,
  sym__classic_array_time = 253,
  sym_classic_array = 254,
  sym_command_suffix = 255,
  sym_comment_block = 256,
  sym__comment = 257,
  sym_comment = 258,
  sym_if = 259,
  sym_else = 260,
  sym_end_if = 261,
  sym__if = 262,
  sym_if_block = 263,
  sym_begin_sql = 264,
  sym_end_sql = 265,
  sym_sql_block = 266,
  sym_sql_injection_block = 267,
  aux_sym_source_repeat1 = 268,
  aux_sym__function_argument_repeat1 = 269,
  aux_sym_function_arguments_repeat1 = 270,
  aux_sym__mutable_repeat1 = 271,
  aux_sym__functional_expression_repeat1 = 272,
  aux_sym__condition_repeat1 = 273,
  aux_sym_string_repeat1 = 274,
  aux_sym_var_declaration_block_repeat1 = 275,
  aux_sym_classic_compiler_block_repeat1 = 276,
  aux_sym_property_declaration_block_repeat1 = 277,
  aux_sym_if_block_repeat1 = 278,
  aux_sym_sql_block_repeat1 = 279,
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
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_block_token1] = "comment_block_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
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
  [aux_sym_sql_block_token1] = "sql_block_token1",
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
  [sym_object_literal_block] = "object_literal_block",
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
  [sym_comment_block] = "comment_block",
  [sym__comment] = "_comment",
  [sym_comment] = "comment",
  [sym_if] = "if",
  [sym_else] = "else",
  [sym_end_if] = "end_if",
  [sym__if] = "_if",
  [sym_if_block] = "if_block",
  [sym_begin_sql] = "begin_sql",
  [sym_end_sql] = "end_sql",
  [sym_sql_block] = "sql_block",
  [sym_sql_injection_block] = "sql_injection_block",
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
  [aux_sym_sql_block_repeat1] = "sql_block_repeat1",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_block_token1] = aux_sym_comment_block_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__comment_token1] = aux_sym__comment_token1,
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
  [aux_sym_sql_block_token1] = aux_sym_sql_block_token1,
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
  [sym_object_literal_block] = sym_object_literal_block,
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
  [sym_comment_block] = sym_comment_block,
  [sym__comment] = sym__comment,
  [sym_comment] = sym_comment,
  [sym_if] = sym_if,
  [sym_else] = sym_else,
  [sym_end_if] = sym_end_if,
  [sym__if] = sym__if,
  [sym_if_block] = sym_if_block,
  [sym_begin_sql] = sym_begin_sql,
  [sym_end_sql] = sym_end_sql,
  [sym_sql_block] = sym_sql_block,
  [sym_sql_injection_block] = sym_sql_injection_block,
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
  [aux_sym_sql_block_repeat1] = aux_sym_sql_block_repeat1,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_token1] = {
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
  [aux_sym_sql_block_token1] = {
    .visible = false,
    .named = false,
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
  [sym_object_literal_block] = {
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
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
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
  [sym_sql_injection_block] = {
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
  [aux_sym_sql_block_repeat1] = {
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
      if (eof) ADVANCE(509);
      if (lookahead == '!') ADVANCE(611);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '&') ADVANCE(576);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(567);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '0') ADVANCE(600);
      if (lookahead == '4') ADVANCE(602);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == ';') ADVANCE(561);
      if (lookahead == '<') ADVANCE(581);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(583);
      if (lookahead == '?') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(526);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(533);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(540);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(527);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(541);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(524);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      if (lookahead == '[') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(606);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(577);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(520);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(560);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(343);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(421);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(373);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(428);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(375);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(615);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (lookahead != 0) ADVANCE(625);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '\\') ADVANCE(624);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(585);
      if (lookahead == '&') ADVANCE(576);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(567);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(573);
      if (lookahead == '4') ADVANCE(108);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == ';') ADVANCE(561);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(583);
      if (lookahead == '?') ADVANCE(608);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(71);
      if (lookahead == '[') ADVANCE(605);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(577);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(696);
      if (lookahead == '/') ADVANCE(698);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(697);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == '0') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '0') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(630);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(566);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(503);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(579);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(474);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(653);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(671);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(683);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(495);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(285);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(670);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(423);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(461);
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
          lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(401);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(666);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
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
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(701);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(546);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(555);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(709);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(348);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 255:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(192);
      END_STATE();
    case 256:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(195);
      END_STATE();
    case 257:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(196);
      END_STATE();
    case 258:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(657);
      END_STATE();
    case 259:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(637);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(679);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 292:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 293:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
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
          lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 366:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 368:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(478);
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
          lookahead == 'q') ADVANCE(270);
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
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(483);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 378:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 379:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      END_STATE();
    case 412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(5);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      END_STATE();
    case 432:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(680);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(688);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(687);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 473:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(728);
      END_STATE();
    case 474:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 489:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(307);
      END_STATE();
    case 490:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(433);
      END_STATE();
    case 491:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(434);
      END_STATE();
    case 492:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 493:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(458);
      END_STATE();
    case 494:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(516);
      END_STATE();
    case 495:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(518);
      END_STATE();
    case 496:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(632);
      END_STATE();
    case 497:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 498:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 499:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(499)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(542);
      END_STATE();
    case 500:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 501:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 502:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      END_STATE();
    case 503:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 504:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 505:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(616);
      END_STATE();
    case 506:
      if (eof) ADVANCE(509);
      if (lookahead == '!') ADVANCE(611);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(600);
      if (lookahead == '4') ADVANCE(602);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == ';') ADVANCE(561);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '>') ADVANCE(582);
      if (lookahead == '?') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 507:
      if (eof) ADVANCE(509);
      if (lookahead == '!') ADVANCE(610);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '&') ADVANCE(576);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(567);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == ';') ADVANCE(561);
      if (lookahead == '<') ADVANCE(581);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(583);
      if (lookahead == '?') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == ']') ADVANCE(606);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(577);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 508:
      if (eof) ADVANCE(509);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '$') ADVANCE(596);
      if (lookahead == '&') ADVANCE(576);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(567);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead == '4') ADVANCE(110);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(561);
      if (lookahead == '<') ADVANCE(581);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(583);
      if (lookahead == '?') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == '[') ADVANCE(605);
      if (lookahead == ']') ADVANCE(606);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '|') ADVANCE(577);
      if (lookahead == '}') ADVANCE(598);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(224);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(657);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(701);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(630);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(593);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(566);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(594);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(696);
      if (lookahead == '/') ADVANCE(698);
      if (lookahead == '=') ADVANCE(595);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(595);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(574);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(575);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(587);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(587);
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(500);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(590);
      if (lookahead == '-') ADVANCE(591);
      if (lookahead == '?') ADVANCE(589);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(30);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '\\') ADVANCE(624);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(625);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__classic_compiler_blob_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__classic_compiler_boolean_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__classic_compiler_collection_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__classic_compiler_date_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__classic_compiler_object_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__classic_compiler_picture_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__classic_compiler_pointer_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__classic_compiler_real_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__classic_compiler_text_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__classic_compiler_time_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__classic_compiler_variant_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__classic_array_blob_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__classic_array_boolean_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__classic_array_date_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__classic_array_integer_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__classic_array_longint_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__classic_array_object_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__classic_array_picture_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__classic_array_pointer_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__classic_array_real_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__classic_array_text_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__classic_array_time_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_comment_block_token1);
      if (lookahead == '*') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(26);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__for_each_e);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__for_each_f);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__end_for_each_e);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__while_e);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__for_e);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__for_f);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__end_for_e);
      if (lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__use_e);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__use_f);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__end_use_e);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__end_use_f);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__end_while_e);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__end_while_f);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__end_sql_e);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__end_sql_f);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == ' ') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == ' ') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 506},
  [2] = {.lex_state = 506},
  [3] = {.lex_state = 506},
  [4] = {.lex_state = 506},
  [5] = {.lex_state = 506},
  [6] = {.lex_state = 506},
  [7] = {.lex_state = 506},
  [8] = {.lex_state = 506},
  [9] = {.lex_state = 507},
  [10] = {.lex_state = 507},
  [11] = {.lex_state = 508},
  [12] = {.lex_state = 508},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 507},
  [15] = {.lex_state = 508},
  [16] = {.lex_state = 507},
  [17] = {.lex_state = 508},
  [18] = {.lex_state = 508},
  [19] = {.lex_state = 507},
  [20] = {.lex_state = 508},
  [21] = {.lex_state = 507},
  [22] = {.lex_state = 508},
  [23] = {.lex_state = 508},
  [24] = {.lex_state = 508},
  [25] = {.lex_state = 507},
  [26] = {.lex_state = 507},
  [27] = {.lex_state = 508},
  [28] = {.lex_state = 508},
  [29] = {.lex_state = 507},
  [30] = {.lex_state = 507},
  [31] = {.lex_state = 507},
  [32] = {.lex_state = 507},
  [33] = {.lex_state = 507},
  [34] = {.lex_state = 507},
  [35] = {.lex_state = 507},
  [36] = {.lex_state = 507},
  [37] = {.lex_state = 507},
  [38] = {.lex_state = 507},
  [39] = {.lex_state = 507},
  [40] = {.lex_state = 507},
  [41] = {.lex_state = 507},
  [42] = {.lex_state = 507},
  [43] = {.lex_state = 507},
  [44] = {.lex_state = 507},
  [45] = {.lex_state = 507},
  [46] = {.lex_state = 506},
  [47] = {.lex_state = 506},
  [48] = {.lex_state = 506},
  [49] = {.lex_state = 506},
  [50] = {.lex_state = 506},
  [51] = {.lex_state = 506},
  [52] = {.lex_state = 506},
  [53] = {.lex_state = 506},
  [54] = {.lex_state = 506},
  [55] = {.lex_state = 506},
  [56] = {.lex_state = 506},
  [57] = {.lex_state = 506},
  [58] = {.lex_state = 506},
  [59] = {.lex_state = 506},
  [60] = {.lex_state = 506},
  [61] = {.lex_state = 506},
  [62] = {.lex_state = 506},
  [63] = {.lex_state = 506},
  [64] = {.lex_state = 506},
  [65] = {.lex_state = 506},
  [66] = {.lex_state = 506},
  [67] = {.lex_state = 506},
  [68] = {.lex_state = 506},
  [69] = {.lex_state = 506},
  [70] = {.lex_state = 506},
  [71] = {.lex_state = 506},
  [72] = {.lex_state = 506},
  [73] = {.lex_state = 506},
  [74] = {.lex_state = 506},
  [75] = {.lex_state = 506},
  [76] = {.lex_state = 506},
  [77] = {.lex_state = 506},
  [78] = {.lex_state = 506},
  [79] = {.lex_state = 506},
  [80] = {.lex_state = 506},
  [81] = {.lex_state = 506},
  [82] = {.lex_state = 506},
  [83] = {.lex_state = 506},
  [84] = {.lex_state = 506},
  [85] = {.lex_state = 506},
  [86] = {.lex_state = 506},
  [87] = {.lex_state = 506},
  [88] = {.lex_state = 506},
  [89] = {.lex_state = 506},
  [90] = {.lex_state = 506},
  [91] = {.lex_state = 506},
  [92] = {.lex_state = 506},
  [93] = {.lex_state = 506},
  [94] = {.lex_state = 506},
  [95] = {.lex_state = 506},
  [96] = {.lex_state = 506},
  [97] = {.lex_state = 506},
  [98] = {.lex_state = 506},
  [99] = {.lex_state = 506},
  [100] = {.lex_state = 506},
  [101] = {.lex_state = 506},
  [102] = {.lex_state = 506},
  [103] = {.lex_state = 506},
  [104] = {.lex_state = 506},
  [105] = {.lex_state = 506},
  [106] = {.lex_state = 506},
  [107] = {.lex_state = 506},
  [108] = {.lex_state = 506},
  [109] = {.lex_state = 506},
  [110] = {.lex_state = 506},
  [111] = {.lex_state = 506},
  [112] = {.lex_state = 506},
  [113] = {.lex_state = 506},
  [114] = {.lex_state = 506},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 22},
  [148] = {.lex_state = 22},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 22},
  [157] = {.lex_state = 22},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 20},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 206},
  [164] = {.lex_state = 206},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 499},
  [170] = {.lex_state = 499},
  [171] = {.lex_state = 206},
  [172] = {.lex_state = 499},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 499},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 499},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 506},
  [184] = {.lex_state = 35},
  [185] = {.lex_state = 506},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 506},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 506},
  [191] = {.lex_state = 506},
  [192] = {.lex_state = 506},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 508},
  [203] = {.lex_state = 506},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 506},
  [207] = {.lex_state = 506},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 506},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 506},
  [212] = {.lex_state = 507},
  [213] = {.lex_state = 23},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 694},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 506},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 506},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 506},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 506},
  [229] = {.lex_state = 506},
  [230] = {.lex_state = 694},
  [231] = {.lex_state = 694},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 694},
  [234] = {.lex_state = 694},
  [235] = {.lex_state = 694},
  [236] = {.lex_state = 694},
  [237] = {.lex_state = 694},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 694},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 694},
  [243] = {.lex_state = 694},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 694},
  [246] = {.lex_state = 694},
  [247] = {.lex_state = 694},
  [248] = {.lex_state = 694},
  [249] = {.lex_state = 694},
  [250] = {.lex_state = 506},
  [251] = {.lex_state = 694},
  [252] = {.lex_state = 694},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 694},
  [255] = {.lex_state = 506},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 694},
  [258] = {.lex_state = 694},
  [259] = {.lex_state = 506},
  [260] = {.lex_state = 694},
  [261] = {.lex_state = 694},
  [262] = {.lex_state = 694},
  [263] = {.lex_state = 694},
  [264] = {.lex_state = 694},
  [265] = {.lex_state = 694},
  [266] = {.lex_state = 694},
  [267] = {.lex_state = 507},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 506},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 507},
  [273] = {.lex_state = 507},
  [274] = {.lex_state = 506},
  [275] = {.lex_state = 507},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 507},
  [278] = {.lex_state = 508},
  [279] = {.lex_state = 507},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 506},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 507},
  [285] = {.lex_state = 507},
  [286] = {.lex_state = 507},
  [287] = {.lex_state = 506},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 507},
  [293] = {.lex_state = 507},
  [294] = {.lex_state = 506},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 23},
  [297] = {.lex_state = 507},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 23},
  [300] = {.lex_state = 22},
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
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 506},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 506},
  [339] = {.lex_state = 507},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 699},
  [344] = {.lex_state = 25},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 507},
  [347] = {.lex_state = 508},
  [348] = {.lex_state = 507},
  [349] = {.lex_state = 506},
  [350] = {.lex_state = 507},
  [351] = {.lex_state = 507},
  [352] = {.lex_state = 507},
  [353] = {.lex_state = 507},
  [354] = {.lex_state = 507},
  [355] = {.lex_state = 506},
  [356] = {.lex_state = 507},
  [357] = {.lex_state = 507},
  [358] = {.lex_state = 507},
  [359] = {.lex_state = 23},
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
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
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
    [sym_source] = STATE(341),
    [sym__statement] = STATE(5),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(5),
    [sym_declare_block] = STATE(5),
    [sym_alias_block] = STATE(5),
    [sym_class_extends] = STATE(5),
    [sym_class_constructor] = STATE(5),
    [sym_var_declaration_block] = STATE(5),
    [sym_classic_compiler_block] = STATE(5),
    [sym_classic_array_block] = STATE(5),
    [sym_property_declaration_block] = STATE(5),
    [sym_return_block] = STATE(5),
    [sym_assignment_block] = STATE(5),
    [sym_function_call] = STATE(5),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(5),
    [sym_continue] = STATE(5),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(5),
    [sym_if] = STATE(329),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(5),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [2] = {
    [sym__statement] = STATE(87),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(87),
    [sym_declare_block] = STATE(87),
    [sym_alias_block] = STATE(87),
    [sym_class_extends] = STATE(87),
    [sym_class_constructor] = STATE(87),
    [sym_var_declaration_block] = STATE(87),
    [sym_classic_compiler_block] = STATE(87),
    [sym_classic_array_block] = STATE(87),
    [sym_property_declaration_block] = STATE(87),
    [sym_return_block] = STATE(87),
    [sym_assignment_block] = STATE(87),
    [sym_function_call] = STATE(87),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(87),
    [sym_continue] = STATE(87),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(87),
    [sym_if] = STATE(329),
    [sym_end_if] = STATE(73),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(87),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(87),
    [aux_sym_if_block_repeat1] = STATE(3),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__end_if_e] = ACTIONS(95),
    [sym__end_if_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [3] = {
    [sym__statement] = STATE(87),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(87),
    [sym_declare_block] = STATE(87),
    [sym_alias_block] = STATE(87),
    [sym_class_extends] = STATE(87),
    [sym_class_constructor] = STATE(87),
    [sym_var_declaration_block] = STATE(87),
    [sym_classic_compiler_block] = STATE(87),
    [sym_classic_array_block] = STATE(87),
    [sym_property_declaration_block] = STATE(87),
    [sym_return_block] = STATE(87),
    [sym_assignment_block] = STATE(87),
    [sym_function_call] = STATE(87),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(87),
    [sym_continue] = STATE(87),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(87),
    [sym_if] = STATE(329),
    [sym_end_if] = STATE(99),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(87),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(87),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__end_if_e] = ACTIONS(95),
    [sym__end_if_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [4] = {
    [sym__statement] = STATE(87),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(87),
    [sym_declare_block] = STATE(87),
    [sym_alias_block] = STATE(87),
    [sym_class_extends] = STATE(87),
    [sym_class_constructor] = STATE(87),
    [sym_var_declaration_block] = STATE(87),
    [sym_classic_compiler_block] = STATE(87),
    [sym_classic_array_block] = STATE(87),
    [sym_property_declaration_block] = STATE(87),
    [sym_return_block] = STATE(87),
    [sym_assignment_block] = STATE(87),
    [sym_function_call] = STATE(87),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(87),
    [sym_continue] = STATE(87),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(87),
    [sym_if] = STATE(329),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(87),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(87),
    [aux_sym_if_block_repeat1] = STATE(4),
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
    [anon_sym_SLASH_STAR] = ACTIONS(220),
    [anon_sym_SLASH_SLASH] = ACTIONS(223),
    [sym__if_e] = ACTIONS(226),
    [sym__if_f] = ACTIONS(226),
    [sym__end_if_e] = ACTIONS(229),
    [sym__end_if_f] = ACTIONS(229),
    [sym__begin_sql_e] = ACTIONS(231),
    [sym__begin_sql_f] = ACTIONS(231),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(6),
    [sym_declare_block] = STATE(6),
    [sym_alias_block] = STATE(6),
    [sym_class_extends] = STATE(6),
    [sym_class_constructor] = STATE(6),
    [sym_var_declaration_block] = STATE(6),
    [sym_classic_compiler_block] = STATE(6),
    [sym_classic_array_block] = STATE(6),
    [sym_property_declaration_block] = STATE(6),
    [sym_return_block] = STATE(6),
    [sym_assignment_block] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(329),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(6),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(234),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(6),
    [sym_declare_block] = STATE(6),
    [sym_alias_block] = STATE(6),
    [sym_class_extends] = STATE(6),
    [sym_class_constructor] = STATE(6),
    [sym_var_declaration_block] = STATE(6),
    [sym_classic_compiler_block] = STATE(6),
    [sym_classic_array_block] = STATE(6),
    [sym_property_declaration_block] = STATE(6),
    [sym_return_block] = STATE(6),
    [sym_assignment_block] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(329),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(6),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym__local] = ACTIONS(238),
    [sym__exposed] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [anon_sym_LT_GT] = ACTIONS(247),
    [sym__class_constructor] = ACTIONS(250),
    [sym__class_extends] = ACTIONS(253),
    [sym__var] = ACTIONS(256),
    [sym__property] = ACTIONS(259),
    [sym__alias] = ACTIONS(262),
    [sym__declare] = ACTIONS(265),
    [sym__function] = ACTIONS(268),
    [sym__return] = ACTIONS(271),
    [sym__break] = ACTIONS(274),
    [sym__continue] = ACTIONS(277),
    [sym__this] = ACTIONS(280),
    [sym__form] = ACTIONS(283),
    [sym__super] = ACTIONS(286),
    [sym__class_store_4d] = ACTIONS(289),
    [sym__class_store_ds] = ACTIONS(289),
    [sym__class_store_cs] = ACTIONS(289),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(292),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(295),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(298),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(301),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(304),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(307),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(310),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(316),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(319),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(322),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(325),
    [aux_sym__classic_array_blob_token1] = ACTIONS(328),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(331),
    [aux_sym__classic_array_date_token1] = ACTIONS(334),
    [aux_sym__classic_array_integer_token1] = ACTIONS(337),
    [aux_sym__classic_array_longint_token1] = ACTIONS(340),
    [aux_sym__classic_array_object_token1] = ACTIONS(343),
    [aux_sym__classic_array_picture_token1] = ACTIONS(346),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(349),
    [aux_sym__classic_array_real_token1] = ACTIONS(352),
    [aux_sym__classic_array_text_token1] = ACTIONS(355),
    [aux_sym__classic_array_time_token1] = ACTIONS(358),
    [anon_sym_SLASH_STAR] = ACTIONS(361),
    [anon_sym_SLASH_SLASH] = ACTIONS(364),
    [sym__if_e] = ACTIONS(367),
    [sym__if_f] = ACTIONS(367),
    [sym__begin_sql_e] = ACTIONS(370),
    [sym__begin_sql_f] = ACTIONS(370),
  },
  [7] = {
    [sym__statement] = STATE(112),
    [sym__scope] = STATE(228),
    [sym_function_name] = STATE(210),
    [sym_alias_name] = STATE(226),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(202),
    [sym_class_function] = STATE(108),
    [sym_generic_function] = STATE(108),
    [sym__function_call] = STATE(108),
    [sym_function_block] = STATE(112),
    [sym_declare_block] = STATE(112),
    [sym_alias_block] = STATE(112),
    [sym_class_extends] = STATE(112),
    [sym_class_constructor] = STATE(112),
    [sym_var_declaration_block] = STATE(112),
    [sym_classic_compiler_block] = STATE(112),
    [sym_classic_array_block] = STATE(112),
    [sym_property_declaration_block] = STATE(112),
    [sym_return_block] = STATE(112),
    [sym_assignment_block] = STATE(112),
    [sym_function_call] = STATE(112),
    [sym_var] = STATE(175),
    [sym_property] = STATE(225),
    [sym_alias] = STATE(224),
    [sym_declare] = STATE(222),
    [sym_function] = STATE(163),
    [sym_return] = STATE(8),
    [sym_break] = STATE(112),
    [sym_continue] = STATE(112),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(220),
    [sym__classic_compiler_blob] = STATE(336),
    [sym__classic_compiler_boolean] = STATE(336),
    [sym__classic_compiler_collection] = STATE(336),
    [sym__classic_compiler_date] = STATE(336),
    [sym__classic_compiler_longint] = STATE(336),
    [sym__classic_compiler_object] = STATE(336),
    [sym__classic_compiler_picture] = STATE(336),
    [sym__classic_compiler_pointer] = STATE(336),
    [sym__classic_compiler_real] = STATE(336),
    [sym__classic_compiler_text] = STATE(336),
    [sym__classic_compiler_time] = STATE(336),
    [sym__classic_compiler_variant] = STATE(336),
    [sym_classic_compiler] = STATE(334),
    [sym__classic_array_blob] = STATE(331),
    [sym__classic_array_boolean] = STATE(331),
    [sym__classic_array_date] = STATE(331),
    [sym__classic_array_integer] = STATE(331),
    [sym__classic_array_longint] = STATE(331),
    [sym__classic_array_object] = STATE(331),
    [sym__classic_array_picture] = STATE(331),
    [sym__classic_array_pointer] = STATE(331),
    [sym__classic_array_real] = STATE(331),
    [sym__classic_array_text] = STATE(331),
    [sym__classic_array_time] = STATE(331),
    [sym_classic_array] = STATE(330),
    [sym_comment_block] = STATE(78),
    [sym__comment] = STATE(78),
    [sym_comment] = STATE(112),
    [sym_if] = STATE(329),
    [sym__if] = STATE(2),
    [sym_if_block] = STATE(112),
    [sym_begin_sql] = STATE(165),
    [sym_sql_injection_block] = STATE(112),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
  },
  [8] = {
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(24),
    [sym__mutable] = STATE(26),
    [sym__immutable] = STATE(98),
    [sym_class_function] = STATE(98),
    [sym_generic_function] = STATE(98),
    [sym__function_call] = STATE(98),
    [sym__single_condition] = STATE(98),
    [sym_time] = STATE(42),
    [sym_date] = STATE(42),
    [sym__dec_literal] = STATE(39),
    [sym__num_literal] = STATE(39),
    [sym__exp_literal] = STATE(39),
    [sym_number] = STATE(42),
    [sym_string] = STATE(42),
    [sym_constant] = STATE(98),
    [sym_this] = STATE(340),
    [sym_form] = STATE(340),
    [sym_super] = STATE(220),
    [sym__class_store] = STATE(16),
    [sym__class] = STATE(25),
    [sym_system_variable] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym__local] = ACTIONS(373),
    [sym__exposed] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_LT_GT] = ACTIONS(373),
    [aux_sym_numeric_parameter_token1] = ACTIONS(375),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(379),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(381),
    [sym__hex_literal] = ACTIONS(383),
    [aux_sym__num_literal_token1] = ACTIONS(375),
    [aux_sym__exp_literal_token1] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym__class_constructor] = ACTIONS(373),
    [sym__class_extends] = ACTIONS(373),
    [sym__var] = ACTIONS(373),
    [sym__property] = ACTIONS(373),
    [sym__alias] = ACTIONS(373),
    [sym__declare] = ACTIONS(373),
    [sym__function] = ACTIONS(373),
    [sym__return] = ACTIONS(373),
    [sym__break] = ACTIONS(373),
    [sym__continue] = ACTIONS(373),
    [sym__this] = ACTIONS(373),
    [sym__form] = ACTIONS(373),
    [sym__super] = ACTIONS(373),
    [sym__class_store_4d] = ACTIONS(373),
    [sym__class_store_ds] = ACTIONS(373),
    [sym__class_store_cs] = ACTIONS(373),
    [sym__system_variable_ok] = ACTIONS(387),
    [sym__system_variable_document] = ACTIONS(387),
    [sym__system_variable_flddelimit] = ACTIONS(387),
    [sym__system_variable_recdelimit] = ACTIONS(387),
    [sym__system_variable_error] = ACTIONS(389),
    [sym__system_variable_error_method] = ACTIONS(387),
    [sym__system_variable_error_line] = ACTIONS(387),
    [sym__system_variable_error_formula] = ACTIONS(387),
    [sym__system_variable_mousedown] = ACTIONS(387),
    [sym__system_variable_mousex] = ACTIONS(387),
    [sym__system_variable_mousey] = ACTIONS(387),
    [sym__system_variable_keycode] = ACTIONS(387),
    [sym__system_variable_modifiers] = ACTIONS(387),
    [sym__system_variable_mouseproc] = ACTIONS(387),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(373),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(373),
    [aux_sym__classic_array_blob_token1] = ACTIONS(373),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(373),
    [aux_sym__classic_array_date_token1] = ACTIONS(373),
    [aux_sym__classic_array_integer_token1] = ACTIONS(373),
    [aux_sym__classic_array_longint_token1] = ACTIONS(373),
    [aux_sym__classic_array_object_token1] = ACTIONS(373),
    [aux_sym__classic_array_picture_token1] = ACTIONS(373),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(373),
    [aux_sym__classic_array_real_token1] = ACTIONS(373),
    [aux_sym__classic_array_text_token1] = ACTIONS(373),
    [aux_sym__classic_array_time_token1] = ACTIONS(373),
    [anon_sym_SLASH_STAR] = ACTIONS(373),
    [anon_sym_SLASH_SLASH] = ACTIONS(373),
    [sym__if_e] = ACTIONS(373),
    [sym__if_f] = ACTIONS(391),
    [sym__else_e] = ACTIONS(373),
    [sym__else_f] = ACTIONS(373),
    [sym__end_if_e] = ACTIONS(373),
    [sym__end_if_f] = ACTIONS(373),
    [sym__begin_sql_e] = ACTIONS(373),
    [sym__begin_sql_f] = ACTIONS(373),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym__local] = ACTIONS(393),
    [sym__exposed] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym_TILDE_PIPE] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_QMARK_QMARK] = ACTIONS(393),
    [anon_sym_QMARK_PLUS] = ACTIONS(393),
    [anon_sym_QMARK_DASH] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(393),
    [anon_sym_DASH_EQ] = ACTIONS(393),
    [anon_sym_STAR_EQ] = ACTIONS(393),
    [anon_sym_SLASH_EQ] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_LT_GT] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(395),
    [sym__class_constructor] = ACTIONS(393),
    [sym__class_extends] = ACTIONS(393),
    [anon_sym_COLON_EQ] = ACTIONS(393),
    [sym__var] = ACTIONS(393),
    [sym__property] = ACTIONS(393),
    [sym__alias] = ACTIONS(393),
    [sym__declare] = ACTIONS(393),
    [sym__function] = ACTIONS(393),
    [sym__return] = ACTIONS(393),
    [sym__break] = ACTIONS(393),
    [sym__continue] = ACTIONS(393),
    [sym__this] = ACTIONS(393),
    [sym__form] = ACTIONS(393),
    [sym__super] = ACTIONS(393),
    [sym__class_store_4d] = ACTIONS(393),
    [sym__class_store_ds] = ACTIONS(393),
    [sym__class_store_cs] = ACTIONS(393),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(393),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(393),
    [aux_sym__classic_array_blob_token1] = ACTIONS(393),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(393),
    [aux_sym__classic_array_date_token1] = ACTIONS(393),
    [aux_sym__classic_array_integer_token1] = ACTIONS(393),
    [aux_sym__classic_array_longint_token1] = ACTIONS(393),
    [aux_sym__classic_array_object_token1] = ACTIONS(393),
    [aux_sym__classic_array_picture_token1] = ACTIONS(393),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(393),
    [aux_sym__classic_array_real_token1] = ACTIONS(393),
    [aux_sym__classic_array_text_token1] = ACTIONS(393),
    [aux_sym__classic_array_time_token1] = ACTIONS(393),
    [anon_sym_SLASH_STAR] = ACTIONS(393),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [sym__if_e] = ACTIONS(393),
    [sym__if_f] = ACTIONS(395),
    [sym__else_e] = ACTIONS(393),
    [sym__else_f] = ACTIONS(393),
    [sym__end_if_e] = ACTIONS(393),
    [sym__end_if_f] = ACTIONS(393),
    [sym__begin_sql_e] = ACTIONS(393),
    [sym__begin_sql_f] = ACTIONS(393),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym__local] = ACTIONS(397),
    [sym__exposed] = ACTIONS(397),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(399),
    [anon_sym_DASH] = ACTIONS(399),
    [anon_sym_STAR] = ACTIONS(399),
    [anon_sym_SLASH] = ACTIONS(399),
    [anon_sym_AMP_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_TILDE_PIPE] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_QMARK_QMARK] = ACTIONS(397),
    [anon_sym_QMARK_PLUS] = ACTIONS(397),
    [anon_sym_QMARK_DASH] = ACTIONS(397),
    [anon_sym_PLUS_EQ] = ACTIONS(397),
    [anon_sym_DASH_EQ] = ACTIONS(397),
    [anon_sym_STAR_EQ] = ACTIONS(397),
    [anon_sym_SLASH_EQ] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_LT_GT] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(399),
    [sym__class_constructor] = ACTIONS(397),
    [sym__class_extends] = ACTIONS(397),
    [anon_sym_COLON_EQ] = ACTIONS(397),
    [sym__var] = ACTIONS(397),
    [sym__property] = ACTIONS(397),
    [sym__alias] = ACTIONS(397),
    [sym__declare] = ACTIONS(397),
    [sym__function] = ACTIONS(397),
    [sym__return] = ACTIONS(397),
    [sym__break] = ACTIONS(397),
    [sym__continue] = ACTIONS(397),
    [sym__this] = ACTIONS(397),
    [sym__form] = ACTIONS(397),
    [sym__super] = ACTIONS(397),
    [sym__class_store_4d] = ACTIONS(397),
    [sym__class_store_ds] = ACTIONS(397),
    [sym__class_store_cs] = ACTIONS(397),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(397),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(397),
    [aux_sym__classic_array_blob_token1] = ACTIONS(397),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(397),
    [aux_sym__classic_array_date_token1] = ACTIONS(397),
    [aux_sym__classic_array_integer_token1] = ACTIONS(397),
    [aux_sym__classic_array_longint_token1] = ACTIONS(397),
    [aux_sym__classic_array_object_token1] = ACTIONS(397),
    [aux_sym__classic_array_picture_token1] = ACTIONS(397),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(397),
    [aux_sym__classic_array_real_token1] = ACTIONS(397),
    [aux_sym__classic_array_text_token1] = ACTIONS(397),
    [aux_sym__classic_array_time_token1] = ACTIONS(397),
    [anon_sym_SLASH_STAR] = ACTIONS(397),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [sym__if_e] = ACTIONS(397),
    [sym__if_f] = ACTIONS(399),
    [sym__else_e] = ACTIONS(397),
    [sym__else_f] = ACTIONS(397),
    [sym__end_if_e] = ACTIONS(397),
    [sym__end_if_f] = ACTIONS(397),
    [sym__begin_sql_e] = ACTIONS(397),
    [sym__begin_sql_f] = ACTIONS(397),
  },
  [11] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym__local] = ACTIONS(403),
    [sym__exposed] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(403),
    [anon_sym_TILDE_PIPE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_QMARK_QMARK] = ACTIONS(403),
    [anon_sym_QMARK_PLUS] = ACTIONS(403),
    [anon_sym_QMARK_DASH] = ACTIONS(403),
    [anon_sym_PLUS_EQ] = ACTIONS(403),
    [anon_sym_DASH_EQ] = ACTIONS(403),
    [anon_sym_STAR_EQ] = ACTIONS(403),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_LT_GT] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(405),
    [sym__class_constructor] = ACTIONS(403),
    [sym__class_extends] = ACTIONS(403),
    [anon_sym_COLON_EQ] = ACTIONS(403),
    [sym__var] = ACTIONS(403),
    [sym__property] = ACTIONS(403),
    [sym__alias] = ACTIONS(403),
    [sym__declare] = ACTIONS(403),
    [sym__function] = ACTIONS(403),
    [sym__return] = ACTIONS(403),
    [sym__break] = ACTIONS(403),
    [sym__continue] = ACTIONS(403),
    [sym__this] = ACTIONS(403),
    [sym__form] = ACTIONS(403),
    [sym__super] = ACTIONS(403),
    [sym__class_store_4d] = ACTIONS(403),
    [sym__class_store_ds] = ACTIONS(403),
    [sym__class_store_cs] = ACTIONS(403),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(403),
    [aux_sym__classic_array_blob_token1] = ACTIONS(403),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(403),
    [aux_sym__classic_array_date_token1] = ACTIONS(403),
    [aux_sym__classic_array_integer_token1] = ACTIONS(403),
    [aux_sym__classic_array_longint_token1] = ACTIONS(403),
    [aux_sym__classic_array_object_token1] = ACTIONS(403),
    [aux_sym__classic_array_picture_token1] = ACTIONS(403),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(403),
    [aux_sym__classic_array_real_token1] = ACTIONS(403),
    [aux_sym__classic_array_text_token1] = ACTIONS(403),
    [aux_sym__classic_array_time_token1] = ACTIONS(403),
    [anon_sym_SLASH_STAR] = ACTIONS(403),
    [anon_sym_SLASH_SLASH] = ACTIONS(403),
    [sym__if_e] = ACTIONS(403),
    [sym__if_f] = ACTIONS(405),
    [sym__else_e] = ACTIONS(403),
    [sym__else_f] = ACTIONS(403),
    [sym__end_if_e] = ACTIONS(403),
    [sym__end_if_f] = ACTIONS(403),
    [sym__begin_sql_e] = ACTIONS(403),
    [sym__begin_sql_f] = ACTIONS(403),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym__local] = ACTIONS(403),
    [sym__exposed] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(403),
    [anon_sym_TILDE_PIPE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_QMARK_QMARK] = ACTIONS(403),
    [anon_sym_QMARK_PLUS] = ACTIONS(403),
    [anon_sym_QMARK_DASH] = ACTIONS(403),
    [anon_sym_PLUS_EQ] = ACTIONS(403),
    [anon_sym_DASH_EQ] = ACTIONS(403),
    [anon_sym_STAR_EQ] = ACTIONS(403),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_LT_GT] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(405),
    [sym__class_constructor] = ACTIONS(403),
    [sym__class_extends] = ACTIONS(403),
    [anon_sym_COLON_EQ] = ACTIONS(403),
    [sym__var] = ACTIONS(403),
    [sym__property] = ACTIONS(403),
    [sym__alias] = ACTIONS(403),
    [sym__declare] = ACTIONS(403),
    [sym__function] = ACTIONS(403),
    [sym__return] = ACTIONS(403),
    [sym__break] = ACTIONS(403),
    [sym__continue] = ACTIONS(403),
    [sym__this] = ACTIONS(403),
    [sym__form] = ACTIONS(403),
    [sym__super] = ACTIONS(403),
    [sym__class_store_4d] = ACTIONS(403),
    [sym__class_store_ds] = ACTIONS(403),
    [sym__class_store_cs] = ACTIONS(403),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(403),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(403),
    [aux_sym__classic_array_blob_token1] = ACTIONS(403),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(403),
    [aux_sym__classic_array_date_token1] = ACTIONS(403),
    [aux_sym__classic_array_integer_token1] = ACTIONS(403),
    [aux_sym__classic_array_longint_token1] = ACTIONS(403),
    [aux_sym__classic_array_object_token1] = ACTIONS(403),
    [aux_sym__classic_array_picture_token1] = ACTIONS(403),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(403),
    [aux_sym__classic_array_real_token1] = ACTIONS(403),
    [aux_sym__classic_array_text_token1] = ACTIONS(403),
    [aux_sym__classic_array_time_token1] = ACTIONS(403),
    [anon_sym_SLASH_STAR] = ACTIONS(403),
    [anon_sym_SLASH_SLASH] = ACTIONS(403),
    [sym__if_e] = ACTIONS(403),
    [sym__if_f] = ACTIONS(405),
    [sym__else_e] = ACTIONS(403),
    [sym__else_f] = ACTIONS(403),
    [sym__end_if_e] = ACTIONS(403),
    [sym__end_if_f] = ACTIONS(403),
    [sym__begin_sql_e] = ACTIONS(403),
    [sym__begin_sql_f] = ACTIONS(403),
  },
  [13] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym__local] = ACTIONS(410),
    [sym__exposed] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_DASH] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(412),
    [anon_sym_PIPE] = ACTIONS(412),
    [anon_sym_CARET] = ACTIONS(410),
    [anon_sym_TILDE_PIPE] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_POUND] = ACTIONS(412),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_GT_GT] = ACTIONS(410),
    [anon_sym_QMARK_QMARK] = ACTIONS(410),
    [anon_sym_QMARK_PLUS] = ACTIONS(410),
    [anon_sym_QMARK_DASH] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(410),
    [anon_sym_DASH_EQ] = ACTIONS(410),
    [anon_sym_STAR_EQ] = ACTIONS(410),
    [anon_sym_SLASH_EQ] = ACTIONS(410),
    [anon_sym_DOLLAR] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_LT_GT] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(412),
    [sym__class_constructor] = ACTIONS(410),
    [sym__class_extends] = ACTIONS(410),
    [anon_sym_COLON_EQ] = ACTIONS(410),
    [sym__var] = ACTIONS(410),
    [sym__property] = ACTIONS(410),
    [sym__alias] = ACTIONS(410),
    [sym__declare] = ACTIONS(410),
    [sym__function] = ACTIONS(410),
    [sym__return] = ACTIONS(410),
    [sym__break] = ACTIONS(410),
    [sym__continue] = ACTIONS(410),
    [sym__this] = ACTIONS(410),
    [sym__form] = ACTIONS(410),
    [sym__super] = ACTIONS(410),
    [sym__class_store_4d] = ACTIONS(410),
    [sym__class_store_ds] = ACTIONS(410),
    [sym__class_store_cs] = ACTIONS(410),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(410),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(410),
    [aux_sym__classic_array_blob_token1] = ACTIONS(410),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(410),
    [aux_sym__classic_array_date_token1] = ACTIONS(410),
    [aux_sym__classic_array_integer_token1] = ACTIONS(410),
    [aux_sym__classic_array_longint_token1] = ACTIONS(410),
    [aux_sym__classic_array_object_token1] = ACTIONS(410),
    [aux_sym__classic_array_picture_token1] = ACTIONS(410),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(410),
    [aux_sym__classic_array_real_token1] = ACTIONS(410),
    [aux_sym__classic_array_text_token1] = ACTIONS(410),
    [aux_sym__classic_array_time_token1] = ACTIONS(410),
    [anon_sym_SLASH_STAR] = ACTIONS(410),
    [anon_sym_SLASH_SLASH] = ACTIONS(410),
    [sym__if_e] = ACTIONS(410),
    [sym__if_f] = ACTIONS(412),
    [sym__else_e] = ACTIONS(410),
    [sym__else_f] = ACTIONS(410),
    [sym__end_if_e] = ACTIONS(410),
    [sym__end_if_f] = ACTIONS(410),
    [sym__begin_sql_e] = ACTIONS(410),
    [sym__begin_sql_f] = ACTIONS(410),
  },
  [14] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym__local] = ACTIONS(418),
    [sym__exposed] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(420),
    [anon_sym_AMP_AMP] = ACTIONS(418),
    [anon_sym_PIPE_PIPE] = ACTIONS(418),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_CARET] = ACTIONS(418),
    [anon_sym_TILDE_PIPE] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_LT_LT] = ACTIONS(418),
    [anon_sym_GT_GT] = ACTIONS(418),
    [anon_sym_QMARK_QMARK] = ACTIONS(418),
    [anon_sym_QMARK_PLUS] = ACTIONS(418),
    [anon_sym_QMARK_DASH] = ACTIONS(418),
    [anon_sym_PLUS_EQ] = ACTIONS(418),
    [anon_sym_DASH_EQ] = ACTIONS(418),
    [anon_sym_STAR_EQ] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(418),
    [anon_sym_DOLLAR] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_LT_GT] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_RBRACK] = ACTIONS(418),
    [anon_sym_QMARK] = ACTIONS(420),
    [sym__class_constructor] = ACTIONS(418),
    [sym__class_extends] = ACTIONS(418),
    [sym__var] = ACTIONS(418),
    [sym__property] = ACTIONS(418),
    [sym__alias] = ACTIONS(418),
    [sym__declare] = ACTIONS(418),
    [sym__function] = ACTIONS(418),
    [sym__return] = ACTIONS(418),
    [sym__break] = ACTIONS(418),
    [sym__continue] = ACTIONS(418),
    [sym__this] = ACTIONS(418),
    [sym__form] = ACTIONS(418),
    [sym__super] = ACTIONS(418),
    [sym__class_store_4d] = ACTIONS(418),
    [sym__class_store_ds] = ACTIONS(418),
    [sym__class_store_cs] = ACTIONS(418),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(418),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(418),
    [aux_sym__classic_array_blob_token1] = ACTIONS(418),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(418),
    [aux_sym__classic_array_date_token1] = ACTIONS(418),
    [aux_sym__classic_array_integer_token1] = ACTIONS(418),
    [aux_sym__classic_array_longint_token1] = ACTIONS(418),
    [aux_sym__classic_array_object_token1] = ACTIONS(418),
    [aux_sym__classic_array_picture_token1] = ACTIONS(418),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(418),
    [aux_sym__classic_array_real_token1] = ACTIONS(418),
    [aux_sym__classic_array_text_token1] = ACTIONS(418),
    [aux_sym__classic_array_time_token1] = ACTIONS(418),
    [anon_sym_SLASH_STAR] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(418),
    [sym__if_e] = ACTIONS(418),
    [sym__if_f] = ACTIONS(420),
    [sym__else_e] = ACTIONS(418),
    [sym__else_f] = ACTIONS(418),
    [sym__end_if_e] = ACTIONS(418),
    [sym__end_if_f] = ACTIONS(418),
    [sym__begin_sql_e] = ACTIONS(418),
    [sym__begin_sql_f] = ACTIONS(418),
  },
  [15] = {
    [aux_sym__mutable_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(422),
    [sym__local] = ACTIONS(422),
    [sym__exposed] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(424),
    [anon_sym_AMP_AMP] = ACTIONS(422),
    [anon_sym_PIPE_PIPE] = ACTIONS(422),
    [anon_sym_AMP] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_CARET] = ACTIONS(422),
    [anon_sym_TILDE_PIPE] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_POUND] = ACTIONS(424),
    [anon_sym_LT_LT] = ACTIONS(422),
    [anon_sym_GT_GT] = ACTIONS(422),
    [anon_sym_QMARK_QMARK] = ACTIONS(422),
    [anon_sym_QMARK_PLUS] = ACTIONS(422),
    [anon_sym_QMARK_DASH] = ACTIONS(422),
    [anon_sym_PLUS_EQ] = ACTIONS(422),
    [anon_sym_DASH_EQ] = ACTIONS(422),
    [anon_sym_STAR_EQ] = ACTIONS(422),
    [anon_sym_SLASH_EQ] = ACTIONS(422),
    [anon_sym_DOLLAR] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_LT_GT] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(424),
    [sym__class_constructor] = ACTIONS(422),
    [sym__class_extends] = ACTIONS(422),
    [anon_sym_COLON_EQ] = ACTIONS(422),
    [sym__var] = ACTIONS(422),
    [sym__property] = ACTIONS(422),
    [sym__alias] = ACTIONS(422),
    [sym__declare] = ACTIONS(422),
    [sym__function] = ACTIONS(422),
    [sym__return] = ACTIONS(422),
    [sym__break] = ACTIONS(422),
    [sym__continue] = ACTIONS(422),
    [sym__this] = ACTIONS(422),
    [sym__form] = ACTIONS(422),
    [sym__super] = ACTIONS(422),
    [sym__class_store_4d] = ACTIONS(422),
    [sym__class_store_ds] = ACTIONS(422),
    [sym__class_store_cs] = ACTIONS(422),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(422),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(422),
    [aux_sym__classic_array_blob_token1] = ACTIONS(422),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(422),
    [aux_sym__classic_array_date_token1] = ACTIONS(422),
    [aux_sym__classic_array_integer_token1] = ACTIONS(422),
    [aux_sym__classic_array_longint_token1] = ACTIONS(422),
    [aux_sym__classic_array_object_token1] = ACTIONS(422),
    [aux_sym__classic_array_picture_token1] = ACTIONS(422),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(422),
    [aux_sym__classic_array_real_token1] = ACTIONS(422),
    [aux_sym__classic_array_text_token1] = ACTIONS(422),
    [aux_sym__classic_array_time_token1] = ACTIONS(422),
    [anon_sym_SLASH_STAR] = ACTIONS(422),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [sym__if_e] = ACTIONS(422),
    [sym__if_f] = ACTIONS(424),
    [sym__else_e] = ACTIONS(422),
    [sym__else_f] = ACTIONS(422),
    [sym__end_if_e] = ACTIONS(422),
    [sym__end_if_f] = ACTIONS(422),
    [sym__begin_sql_e] = ACTIONS(422),
    [sym__begin_sql_f] = ACTIONS(422),
  },
  [16] = {
    [aux_sym__mutable_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym__local] = ACTIONS(428),
    [sym__exposed] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(428),
    [anon_sym_PIPE_PIPE] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_CARET] = ACTIONS(428),
    [anon_sym_TILDE_PIPE] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_POUND] = ACTIONS(430),
    [anon_sym_LT_LT] = ACTIONS(428),
    [anon_sym_GT_GT] = ACTIONS(428),
    [anon_sym_QMARK_QMARK] = ACTIONS(428),
    [anon_sym_QMARK_PLUS] = ACTIONS(428),
    [anon_sym_QMARK_DASH] = ACTIONS(428),
    [anon_sym_PLUS_EQ] = ACTIONS(428),
    [anon_sym_DASH_EQ] = ACTIONS(428),
    [anon_sym_STAR_EQ] = ACTIONS(428),
    [anon_sym_SLASH_EQ] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_LT_GT] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(430),
    [sym__class_constructor] = ACTIONS(428),
    [sym__class_extends] = ACTIONS(428),
    [sym__var] = ACTIONS(428),
    [sym__property] = ACTIONS(428),
    [sym__alias] = ACTIONS(428),
    [sym__declare] = ACTIONS(428),
    [sym__function] = ACTIONS(428),
    [sym__return] = ACTIONS(428),
    [sym__break] = ACTIONS(428),
    [sym__continue] = ACTIONS(428),
    [sym__this] = ACTIONS(428),
    [sym__form] = ACTIONS(428),
    [sym__super] = ACTIONS(428),
    [sym__class_store_4d] = ACTIONS(428),
    [sym__class_store_ds] = ACTIONS(428),
    [sym__class_store_cs] = ACTIONS(428),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(428),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(428),
    [aux_sym__classic_array_blob_token1] = ACTIONS(428),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(428),
    [aux_sym__classic_array_date_token1] = ACTIONS(428),
    [aux_sym__classic_array_integer_token1] = ACTIONS(428),
    [aux_sym__classic_array_longint_token1] = ACTIONS(428),
    [aux_sym__classic_array_object_token1] = ACTIONS(428),
    [aux_sym__classic_array_picture_token1] = ACTIONS(428),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(428),
    [aux_sym__classic_array_real_token1] = ACTIONS(428),
    [aux_sym__classic_array_text_token1] = ACTIONS(428),
    [aux_sym__classic_array_time_token1] = ACTIONS(428),
    [anon_sym_SLASH_STAR] = ACTIONS(428),
    [anon_sym_SLASH_SLASH] = ACTIONS(428),
    [sym__if_e] = ACTIONS(428),
    [sym__if_f] = ACTIONS(430),
    [sym__else_e] = ACTIONS(428),
    [sym__else_f] = ACTIONS(428),
    [sym__end_if_e] = ACTIONS(428),
    [sym__end_if_f] = ACTIONS(428),
    [sym__begin_sql_e] = ACTIONS(428),
    [sym__begin_sql_f] = ACTIONS(428),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym__local] = ACTIONS(432),
    [sym__exposed] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [anon_sym_STAR] = ACTIONS(434),
    [anon_sym_SLASH] = ACTIONS(434),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(434),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_CARET] = ACTIONS(432),
    [anon_sym_TILDE_PIPE] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_LT_LT] = ACTIONS(432),
    [anon_sym_GT_GT] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_QMARK_PLUS] = ACTIONS(432),
    [anon_sym_QMARK_DASH] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_DOLLAR] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_LT_GT] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(434),
    [sym__class_constructor] = ACTIONS(432),
    [sym__class_extends] = ACTIONS(432),
    [anon_sym_COLON_EQ] = ACTIONS(432),
    [sym__var] = ACTIONS(432),
    [sym__property] = ACTIONS(432),
    [sym__alias] = ACTIONS(432),
    [sym__declare] = ACTIONS(432),
    [sym__function] = ACTIONS(432),
    [sym__return] = ACTIONS(432),
    [sym__break] = ACTIONS(432),
    [sym__continue] = ACTIONS(432),
    [sym__this] = ACTIONS(432),
    [sym__form] = ACTIONS(432),
    [sym__super] = ACTIONS(432),
    [sym__class_store_4d] = ACTIONS(432),
    [sym__class_store_ds] = ACTIONS(432),
    [sym__class_store_cs] = ACTIONS(432),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(432),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(432),
    [aux_sym__classic_array_blob_token1] = ACTIONS(432),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(432),
    [aux_sym__classic_array_date_token1] = ACTIONS(432),
    [aux_sym__classic_array_integer_token1] = ACTIONS(432),
    [aux_sym__classic_array_longint_token1] = ACTIONS(432),
    [aux_sym__classic_array_object_token1] = ACTIONS(432),
    [aux_sym__classic_array_picture_token1] = ACTIONS(432),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(432),
    [aux_sym__classic_array_real_token1] = ACTIONS(432),
    [aux_sym__classic_array_text_token1] = ACTIONS(432),
    [aux_sym__classic_array_time_token1] = ACTIONS(432),
    [anon_sym_SLASH_STAR] = ACTIONS(432),
    [anon_sym_SLASH_SLASH] = ACTIONS(432),
    [sym__if_e] = ACTIONS(432),
    [sym__if_f] = ACTIONS(434),
    [sym__else_e] = ACTIONS(432),
    [sym__else_f] = ACTIONS(432),
    [sym__end_if_e] = ACTIONS(432),
    [sym__end_if_f] = ACTIONS(432),
    [sym__begin_sql_e] = ACTIONS(432),
    [sym__begin_sql_f] = ACTIONS(432),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym__local] = ACTIONS(436),
    [sym__exposed] = ACTIONS(436),
    [anon_sym_LPAREN] = ACTIONS(436),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_AMP_AMP] = ACTIONS(436),
    [anon_sym_PIPE_PIPE] = ACTIONS(436),
    [anon_sym_AMP] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_CARET] = ACTIONS(436),
    [anon_sym_TILDE_PIPE] = ACTIONS(436),
    [anon_sym_LT] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_POUND] = ACTIONS(438),
    [anon_sym_LT_LT] = ACTIONS(436),
    [anon_sym_GT_GT] = ACTIONS(436),
    [anon_sym_QMARK_QMARK] = ACTIONS(436),
    [anon_sym_QMARK_PLUS] = ACTIONS(436),
    [anon_sym_QMARK_DASH] = ACTIONS(436),
    [anon_sym_PLUS_EQ] = ACTIONS(436),
    [anon_sym_DASH_EQ] = ACTIONS(436),
    [anon_sym_STAR_EQ] = ACTIONS(436),
    [anon_sym_SLASH_EQ] = ACTIONS(436),
    [anon_sym_DOLLAR] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_LT_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_QMARK] = ACTIONS(438),
    [sym__class_constructor] = ACTIONS(436),
    [sym__class_extends] = ACTIONS(436),
    [anon_sym_COLON_EQ] = ACTIONS(436),
    [sym__var] = ACTIONS(436),
    [sym__property] = ACTIONS(436),
    [sym__alias] = ACTIONS(436),
    [sym__declare] = ACTIONS(436),
    [sym__function] = ACTIONS(436),
    [sym__return] = ACTIONS(436),
    [sym__break] = ACTIONS(436),
    [sym__continue] = ACTIONS(436),
    [sym__this] = ACTIONS(436),
    [sym__form] = ACTIONS(436),
    [sym__super] = ACTIONS(436),
    [sym__class_store_4d] = ACTIONS(436),
    [sym__class_store_ds] = ACTIONS(436),
    [sym__class_store_cs] = ACTIONS(436),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(436),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(436),
    [aux_sym__classic_array_blob_token1] = ACTIONS(436),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(436),
    [aux_sym__classic_array_date_token1] = ACTIONS(436),
    [aux_sym__classic_array_integer_token1] = ACTIONS(436),
    [aux_sym__classic_array_longint_token1] = ACTIONS(436),
    [aux_sym__classic_array_object_token1] = ACTIONS(436),
    [aux_sym__classic_array_picture_token1] = ACTIONS(436),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(436),
    [aux_sym__classic_array_real_token1] = ACTIONS(436),
    [aux_sym__classic_array_text_token1] = ACTIONS(436),
    [aux_sym__classic_array_time_token1] = ACTIONS(436),
    [anon_sym_SLASH_STAR] = ACTIONS(436),
    [anon_sym_SLASH_SLASH] = ACTIONS(436),
    [sym__if_e] = ACTIONS(436),
    [sym__if_f] = ACTIONS(438),
    [sym__else_e] = ACTIONS(436),
    [sym__else_f] = ACTIONS(436),
    [sym__end_if_e] = ACTIONS(436),
    [sym__end_if_f] = ACTIONS(436),
    [sym__begin_sql_e] = ACTIONS(436),
    [sym__begin_sql_f] = ACTIONS(436),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [sym__local] = ACTIONS(442),
    [sym__exposed] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_LPAREN] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_AMP_AMP] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_TILDE_PIPE] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_POUND] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(442),
    [anon_sym_QMARK_QMARK] = ACTIONS(442),
    [anon_sym_QMARK_PLUS] = ACTIONS(442),
    [anon_sym_QMARK_DASH] = ACTIONS(442),
    [anon_sym_PLUS_EQ] = ACTIONS(442),
    [anon_sym_DASH_EQ] = ACTIONS(442),
    [anon_sym_STAR_EQ] = ACTIONS(442),
    [anon_sym_SLASH_EQ] = ACTIONS(442),
    [anon_sym_DOLLAR] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_LT_GT] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [anon_sym_QMARK] = ACTIONS(444),
    [sym__class_constructor] = ACTIONS(442),
    [sym__class_extends] = ACTIONS(442),
    [sym__var] = ACTIONS(442),
    [sym__property] = ACTIONS(442),
    [sym__alias] = ACTIONS(442),
    [sym__declare] = ACTIONS(442),
    [sym__function] = ACTIONS(442),
    [sym__return] = ACTIONS(442),
    [sym__break] = ACTIONS(442),
    [sym__continue] = ACTIONS(442),
    [sym__this] = ACTIONS(442),
    [sym__form] = ACTIONS(442),
    [sym__super] = ACTIONS(442),
    [sym__class_store_4d] = ACTIONS(442),
    [sym__class_store_ds] = ACTIONS(442),
    [sym__class_store_cs] = ACTIONS(442),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(442),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(442),
    [aux_sym__classic_array_blob_token1] = ACTIONS(442),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(442),
    [aux_sym__classic_array_date_token1] = ACTIONS(442),
    [aux_sym__classic_array_integer_token1] = ACTIONS(442),
    [aux_sym__classic_array_longint_token1] = ACTIONS(442),
    [aux_sym__classic_array_object_token1] = ACTIONS(442),
    [aux_sym__classic_array_picture_token1] = ACTIONS(442),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(442),
    [aux_sym__classic_array_real_token1] = ACTIONS(442),
    [aux_sym__classic_array_text_token1] = ACTIONS(442),
    [aux_sym__classic_array_time_token1] = ACTIONS(442),
    [anon_sym_SLASH_STAR] = ACTIONS(442),
    [anon_sym_SLASH_SLASH] = ACTIONS(442),
    [sym__if_e] = ACTIONS(442),
    [sym__if_f] = ACTIONS(444),
    [sym__else_e] = ACTIONS(442),
    [sym__else_f] = ACTIONS(442),
    [sym__end_if_e] = ACTIONS(442),
    [sym__end_if_f] = ACTIONS(442),
    [sym__begin_sql_e] = ACTIONS(442),
    [sym__begin_sql_f] = ACTIONS(442),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [sym__local] = ACTIONS(446),
    [sym__exposed] = ACTIONS(446),
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(446),
    [anon_sym_TILDE_PIPE] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(446),
    [anon_sym_POUND] = ACTIONS(448),
    [anon_sym_LT_LT] = ACTIONS(446),
    [anon_sym_GT_GT] = ACTIONS(446),
    [anon_sym_QMARK_QMARK] = ACTIONS(446),
    [anon_sym_QMARK_PLUS] = ACTIONS(446),
    [anon_sym_QMARK_DASH] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_DOLLAR] = ACTIONS(446),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_LT_GT] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [anon_sym_QMARK] = ACTIONS(448),
    [sym__class_constructor] = ACTIONS(446),
    [sym__class_extends] = ACTIONS(446),
    [anon_sym_COLON_EQ] = ACTIONS(446),
    [sym__var] = ACTIONS(446),
    [sym__property] = ACTIONS(446),
    [sym__alias] = ACTIONS(446),
    [sym__declare] = ACTIONS(446),
    [sym__function] = ACTIONS(446),
    [sym__return] = ACTIONS(446),
    [sym__break] = ACTIONS(446),
    [sym__continue] = ACTIONS(446),
    [sym__this] = ACTIONS(446),
    [sym__form] = ACTIONS(446),
    [sym__super] = ACTIONS(446),
    [sym__class_store_4d] = ACTIONS(446),
    [sym__class_store_ds] = ACTIONS(446),
    [sym__class_store_cs] = ACTIONS(446),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(446),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(446),
    [aux_sym__classic_array_blob_token1] = ACTIONS(446),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(446),
    [aux_sym__classic_array_date_token1] = ACTIONS(446),
    [aux_sym__classic_array_integer_token1] = ACTIONS(446),
    [aux_sym__classic_array_longint_token1] = ACTIONS(446),
    [aux_sym__classic_array_object_token1] = ACTIONS(446),
    [aux_sym__classic_array_picture_token1] = ACTIONS(446),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(446),
    [aux_sym__classic_array_real_token1] = ACTIONS(446),
    [aux_sym__classic_array_text_token1] = ACTIONS(446),
    [aux_sym__classic_array_time_token1] = ACTIONS(446),
    [anon_sym_SLASH_STAR] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(446),
    [sym__if_e] = ACTIONS(446),
    [sym__if_f] = ACTIONS(448),
    [sym__else_e] = ACTIONS(446),
    [sym__else_f] = ACTIONS(446),
    [sym__end_if_e] = ACTIONS(446),
    [sym__end_if_f] = ACTIONS(446),
    [sym__begin_sql_e] = ACTIONS(446),
    [sym__begin_sql_f] = ACTIONS(446),
  },
  [21] = {
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
    [anon_sym_SLASH_STAR] = ACTIONS(450),
    [anon_sym_SLASH_SLASH] = ACTIONS(450),
    [sym__if_e] = ACTIONS(450),
    [sym__if_f] = ACTIONS(452),
    [sym__else_e] = ACTIONS(450),
    [sym__else_f] = ACTIONS(450),
    [sym__end_if_e] = ACTIONS(450),
    [sym__end_if_f] = ACTIONS(450),
    [sym__begin_sql_e] = ACTIONS(450),
    [sym__begin_sql_f] = ACTIONS(450),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym__local] = ACTIONS(454),
    [sym__exposed] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(454),
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
    [anon_sym_LBRACE] = ACTIONS(458),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_LT_GT] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [anon_sym_QMARK] = ACTIONS(456),
    [sym__class_constructor] = ACTIONS(454),
    [sym__class_extends] = ACTIONS(454),
    [anon_sym_COLON_EQ] = ACTIONS(454),
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
    [anon_sym_SLASH_STAR] = ACTIONS(454),
    [anon_sym_SLASH_SLASH] = ACTIONS(454),
    [sym__if_e] = ACTIONS(454),
    [sym__if_f] = ACTIONS(456),
    [sym__else_e] = ACTIONS(454),
    [sym__else_f] = ACTIONS(454),
    [sym__end_if_e] = ACTIONS(454),
    [sym__end_if_f] = ACTIONS(454),
    [sym__begin_sql_e] = ACTIONS(454),
    [sym__begin_sql_f] = ACTIONS(454),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym__local] = ACTIONS(460),
    [sym__exposed] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_STAR] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(462),
    [anon_sym_AMP_AMP] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(460),
    [anon_sym_AMP] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_CARET] = ACTIONS(460),
    [anon_sym_TILDE_PIPE] = ACTIONS(460),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_POUND] = ACTIONS(462),
    [anon_sym_LT_LT] = ACTIONS(460),
    [anon_sym_GT_GT] = ACTIONS(460),
    [anon_sym_QMARK_QMARK] = ACTIONS(460),
    [anon_sym_QMARK_PLUS] = ACTIONS(460),
    [anon_sym_QMARK_DASH] = ACTIONS(460),
    [anon_sym_PLUS_EQ] = ACTIONS(460),
    [anon_sym_DASH_EQ] = ACTIONS(460),
    [anon_sym_STAR_EQ] = ACTIONS(460),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [anon_sym_DOLLAR] = ACTIONS(460),
    [anon_sym_RBRACE] = ACTIONS(460),
    [anon_sym_LT_GT] = ACTIONS(460),
    [anon_sym_DOT] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [anon_sym_QMARK] = ACTIONS(462),
    [sym__class_constructor] = ACTIONS(460),
    [sym__class_extends] = ACTIONS(460),
    [anon_sym_COLON_EQ] = ACTIONS(460),
    [sym__var] = ACTIONS(460),
    [sym__property] = ACTIONS(460),
    [sym__alias] = ACTIONS(460),
    [sym__declare] = ACTIONS(460),
    [sym__function] = ACTIONS(460),
    [sym__return] = ACTIONS(460),
    [sym__break] = ACTIONS(460),
    [sym__continue] = ACTIONS(460),
    [sym__this] = ACTIONS(460),
    [sym__form] = ACTIONS(460),
    [sym__super] = ACTIONS(460),
    [sym__class_store_4d] = ACTIONS(460),
    [sym__class_store_ds] = ACTIONS(460),
    [sym__class_store_cs] = ACTIONS(460),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(460),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(460),
    [aux_sym__classic_array_blob_token1] = ACTIONS(460),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(460),
    [aux_sym__classic_array_date_token1] = ACTIONS(460),
    [aux_sym__classic_array_integer_token1] = ACTIONS(460),
    [aux_sym__classic_array_longint_token1] = ACTIONS(460),
    [aux_sym__classic_array_object_token1] = ACTIONS(460),
    [aux_sym__classic_array_picture_token1] = ACTIONS(460),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(460),
    [aux_sym__classic_array_real_token1] = ACTIONS(460),
    [aux_sym__classic_array_text_token1] = ACTIONS(460),
    [aux_sym__classic_array_time_token1] = ACTIONS(460),
    [anon_sym_SLASH_STAR] = ACTIONS(460),
    [anon_sym_SLASH_SLASH] = ACTIONS(460),
    [sym__if_e] = ACTIONS(460),
    [sym__if_f] = ACTIONS(462),
    [sym__else_e] = ACTIONS(460),
    [sym__else_f] = ACTIONS(460),
    [sym__end_if_e] = ACTIONS(460),
    [sym__end_if_f] = ACTIONS(460),
    [sym__begin_sql_e] = ACTIONS(460),
    [sym__begin_sql_f] = ACTIONS(460),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym__local] = ACTIONS(464),
    [sym__exposed] = ACTIONS(464),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_PLUS] = ACTIONS(466),
    [anon_sym_DASH] = ACTIONS(466),
    [anon_sym_STAR] = ACTIONS(466),
    [anon_sym_SLASH] = ACTIONS(466),
    [anon_sym_AMP_AMP] = ACTIONS(464),
    [anon_sym_PIPE_PIPE] = ACTIONS(464),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_CARET] = ACTIONS(464),
    [anon_sym_TILDE_PIPE] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(466),
    [anon_sym_LT_LT] = ACTIONS(464),
    [anon_sym_GT_GT] = ACTIONS(464),
    [anon_sym_QMARK_QMARK] = ACTIONS(464),
    [anon_sym_QMARK_PLUS] = ACTIONS(464),
    [anon_sym_QMARK_DASH] = ACTIONS(464),
    [anon_sym_PLUS_EQ] = ACTIONS(464),
    [anon_sym_DASH_EQ] = ACTIONS(464),
    [anon_sym_STAR_EQ] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(464),
    [anon_sym_DOLLAR] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_LT_GT] = ACTIONS(464),
    [anon_sym_DOT] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_QMARK] = ACTIONS(466),
    [sym__class_constructor] = ACTIONS(464),
    [sym__class_extends] = ACTIONS(464),
    [anon_sym_COLON_EQ] = ACTIONS(464),
    [sym__var] = ACTIONS(464),
    [sym__property] = ACTIONS(464),
    [sym__alias] = ACTIONS(464),
    [sym__declare] = ACTIONS(464),
    [sym__function] = ACTIONS(464),
    [sym__return] = ACTIONS(464),
    [sym__break] = ACTIONS(464),
    [sym__continue] = ACTIONS(464),
    [sym__this] = ACTIONS(464),
    [sym__form] = ACTIONS(464),
    [sym__super] = ACTIONS(464),
    [sym__class_store_4d] = ACTIONS(464),
    [sym__class_store_ds] = ACTIONS(464),
    [sym__class_store_cs] = ACTIONS(464),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(464),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(464),
    [aux_sym__classic_array_blob_token1] = ACTIONS(464),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(464),
    [aux_sym__classic_array_date_token1] = ACTIONS(464),
    [aux_sym__classic_array_integer_token1] = ACTIONS(464),
    [aux_sym__classic_array_longint_token1] = ACTIONS(464),
    [aux_sym__classic_array_object_token1] = ACTIONS(464),
    [aux_sym__classic_array_picture_token1] = ACTIONS(464),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(464),
    [aux_sym__classic_array_real_token1] = ACTIONS(464),
    [aux_sym__classic_array_text_token1] = ACTIONS(464),
    [aux_sym__classic_array_time_token1] = ACTIONS(464),
    [anon_sym_SLASH_STAR] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(464),
    [sym__if_e] = ACTIONS(464),
    [sym__if_f] = ACTIONS(466),
    [sym__else_e] = ACTIONS(464),
    [sym__else_f] = ACTIONS(464),
    [sym__end_if_e] = ACTIONS(464),
    [sym__end_if_f] = ACTIONS(464),
    [sym__begin_sql_e] = ACTIONS(464),
    [sym__begin_sql_f] = ACTIONS(464),
  },
  [25] = {
    [sym__functional_expression] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym__local] = ACTIONS(470),
    [sym__exposed] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_AMP_AMP] = ACTIONS(470),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(470),
    [anon_sym_TILDE_PIPE] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_POUND] = ACTIONS(474),
    [anon_sym_LT_LT] = ACTIONS(470),
    [anon_sym_GT_GT] = ACTIONS(470),
    [anon_sym_QMARK_QMARK] = ACTIONS(470),
    [anon_sym_QMARK_PLUS] = ACTIONS(470),
    [anon_sym_QMARK_DASH] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_DOLLAR] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_LT_GT] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(474),
    [sym__class_constructor] = ACTIONS(470),
    [sym__class_extends] = ACTIONS(470),
    [sym__var] = ACTIONS(470),
    [sym__property] = ACTIONS(470),
    [sym__alias] = ACTIONS(470),
    [sym__declare] = ACTIONS(470),
    [sym__function] = ACTIONS(470),
    [sym__return] = ACTIONS(470),
    [sym__break] = ACTIONS(470),
    [sym__continue] = ACTIONS(470),
    [sym__this] = ACTIONS(470),
    [sym__form] = ACTIONS(470),
    [sym__super] = ACTIONS(470),
    [sym__class_store_4d] = ACTIONS(470),
    [sym__class_store_ds] = ACTIONS(470),
    [sym__class_store_cs] = ACTIONS(470),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(470),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(470),
    [aux_sym__classic_array_blob_token1] = ACTIONS(470),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(470),
    [aux_sym__classic_array_date_token1] = ACTIONS(470),
    [aux_sym__classic_array_integer_token1] = ACTIONS(470),
    [aux_sym__classic_array_longint_token1] = ACTIONS(470),
    [aux_sym__classic_array_object_token1] = ACTIONS(470),
    [aux_sym__classic_array_picture_token1] = ACTIONS(470),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(470),
    [aux_sym__classic_array_real_token1] = ACTIONS(470),
    [aux_sym__classic_array_text_token1] = ACTIONS(470),
    [aux_sym__classic_array_time_token1] = ACTIONS(470),
    [anon_sym_SLASH_STAR] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [sym__if_e] = ACTIONS(470),
    [sym__if_f] = ACTIONS(474),
    [sym__else_e] = ACTIONS(470),
    [sym__else_f] = ACTIONS(470),
    [sym__end_if_e] = ACTIONS(470),
    [sym__end_if_f] = ACTIONS(470),
    [sym__begin_sql_e] = ACTIONS(470),
    [sym__begin_sql_f] = ACTIONS(470),
  },
  [26] = {
    [sym__functional_expression] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym__local] = ACTIONS(476),
    [sym__exposed] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_AMP_AMP] = ACTIONS(476),
    [anon_sym_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(476),
    [anon_sym_TILDE_PIPE] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(478),
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
    [anon_sym_QMARK] = ACTIONS(478),
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
    [anon_sym_SLASH_STAR] = ACTIONS(476),
    [anon_sym_SLASH_SLASH] = ACTIONS(476),
    [sym__if_e] = ACTIONS(476),
    [sym__if_f] = ACTIONS(478),
    [sym__else_e] = ACTIONS(476),
    [sym__else_f] = ACTIONS(476),
    [sym__end_if_e] = ACTIONS(476),
    [sym__end_if_f] = ACTIONS(476),
    [sym__begin_sql_e] = ACTIONS(476),
    [sym__begin_sql_f] = ACTIONS(476),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [sym__local] = ACTIONS(480),
    [sym__exposed] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(480),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_AMP_AMP] = ACTIONS(480),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(482),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_TILDE_PIPE] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(480),
    [anon_sym_POUND] = ACTIONS(482),
    [anon_sym_LT_LT] = ACTIONS(480),
    [anon_sym_GT_GT] = ACTIONS(480),
    [anon_sym_QMARK_QMARK] = ACTIONS(480),
    [anon_sym_QMARK_PLUS] = ACTIONS(480),
    [anon_sym_QMARK_DASH] = ACTIONS(480),
    [anon_sym_PLUS_EQ] = ACTIONS(480),
    [anon_sym_DASH_EQ] = ACTIONS(480),
    [anon_sym_STAR_EQ] = ACTIONS(480),
    [anon_sym_SLASH_EQ] = ACTIONS(480),
    [anon_sym_DOLLAR] = ACTIONS(480),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_LT_GT] = ACTIONS(480),
    [anon_sym_RBRACK] = ACTIONS(480),
    [anon_sym_QMARK] = ACTIONS(482),
    [sym__class_constructor] = ACTIONS(480),
    [sym__class_extends] = ACTIONS(480),
    [anon_sym_COLON_EQ] = ACTIONS(480),
    [sym__var] = ACTIONS(480),
    [sym__property] = ACTIONS(480),
    [sym__alias] = ACTIONS(480),
    [sym__declare] = ACTIONS(480),
    [sym__function] = ACTIONS(480),
    [sym__return] = ACTIONS(480),
    [sym__break] = ACTIONS(480),
    [sym__continue] = ACTIONS(480),
    [sym__this] = ACTIONS(480),
    [sym__form] = ACTIONS(480),
    [sym__super] = ACTIONS(480),
    [sym__class_store_4d] = ACTIONS(480),
    [sym__class_store_ds] = ACTIONS(480),
    [sym__class_store_cs] = ACTIONS(480),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(480),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(480),
    [aux_sym__classic_array_blob_token1] = ACTIONS(480),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(480),
    [aux_sym__classic_array_date_token1] = ACTIONS(480),
    [aux_sym__classic_array_integer_token1] = ACTIONS(480),
    [aux_sym__classic_array_longint_token1] = ACTIONS(480),
    [aux_sym__classic_array_object_token1] = ACTIONS(480),
    [aux_sym__classic_array_picture_token1] = ACTIONS(480),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(480),
    [aux_sym__classic_array_real_token1] = ACTIONS(480),
    [aux_sym__classic_array_text_token1] = ACTIONS(480),
    [aux_sym__classic_array_time_token1] = ACTIONS(480),
    [anon_sym_SLASH_STAR] = ACTIONS(480),
    [anon_sym_SLASH_SLASH] = ACTIONS(480),
    [sym__if_e] = ACTIONS(480),
    [sym__if_f] = ACTIONS(482),
    [sym__else_e] = ACTIONS(480),
    [sym__else_f] = ACTIONS(480),
    [sym__end_if_e] = ACTIONS(480),
    [sym__end_if_f] = ACTIONS(480),
    [sym__begin_sql_e] = ACTIONS(480),
    [sym__begin_sql_f] = ACTIONS(480),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym__local] = ACTIONS(484),
    [sym__exposed] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_AMP_AMP] = ACTIONS(484),
    [anon_sym_PIPE_PIPE] = ACTIONS(484),
    [anon_sym_AMP] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_CARET] = ACTIONS(484),
    [anon_sym_TILDE_PIPE] = ACTIONS(484),
    [anon_sym_LT] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LT_LT] = ACTIONS(484),
    [anon_sym_GT_GT] = ACTIONS(484),
    [anon_sym_QMARK_QMARK] = ACTIONS(484),
    [anon_sym_QMARK_PLUS] = ACTIONS(484),
    [anon_sym_QMARK_DASH] = ACTIONS(484),
    [anon_sym_PLUS_EQ] = ACTIONS(484),
    [anon_sym_DASH_EQ] = ACTIONS(484),
    [anon_sym_STAR_EQ] = ACTIONS(484),
    [anon_sym_SLASH_EQ] = ACTIONS(484),
    [anon_sym_DOLLAR] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(484),
    [anon_sym_LT_GT] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(486),
    [sym__class_constructor] = ACTIONS(484),
    [sym__class_extends] = ACTIONS(484),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [sym__var] = ACTIONS(484),
    [sym__property] = ACTIONS(484),
    [sym__alias] = ACTIONS(484),
    [sym__declare] = ACTIONS(484),
    [sym__function] = ACTIONS(484),
    [sym__return] = ACTIONS(484),
    [sym__break] = ACTIONS(484),
    [sym__continue] = ACTIONS(484),
    [sym__this] = ACTIONS(484),
    [sym__form] = ACTIONS(484),
    [sym__super] = ACTIONS(484),
    [sym__class_store_4d] = ACTIONS(484),
    [sym__class_store_ds] = ACTIONS(484),
    [sym__class_store_cs] = ACTIONS(484),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(484),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(484),
    [aux_sym__classic_array_blob_token1] = ACTIONS(484),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(484),
    [aux_sym__classic_array_date_token1] = ACTIONS(484),
    [aux_sym__classic_array_integer_token1] = ACTIONS(484),
    [aux_sym__classic_array_longint_token1] = ACTIONS(484),
    [aux_sym__classic_array_object_token1] = ACTIONS(484),
    [aux_sym__classic_array_picture_token1] = ACTIONS(484),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(484),
    [aux_sym__classic_array_real_token1] = ACTIONS(484),
    [aux_sym__classic_array_text_token1] = ACTIONS(484),
    [aux_sym__classic_array_time_token1] = ACTIONS(484),
    [anon_sym_SLASH_STAR] = ACTIONS(484),
    [anon_sym_SLASH_SLASH] = ACTIONS(484),
    [sym__if_e] = ACTIONS(484),
    [sym__if_f] = ACTIONS(486),
    [sym__else_e] = ACTIONS(484),
    [sym__else_f] = ACTIONS(484),
    [sym__end_if_e] = ACTIONS(484),
    [sym__end_if_f] = ACTIONS(484),
    [sym__begin_sql_e] = ACTIONS(484),
    [sym__begin_sql_f] = ACTIONS(484),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym__local] = ACTIONS(488),
    [sym__exposed] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_AMP_AMP] = ACTIONS(488),
    [anon_sym_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(488),
    [anon_sym_TILDE_PIPE] = ACTIONS(488),
    [anon_sym_LT] = ACTIONS(490),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(490),
    [anon_sym_LT_LT] = ACTIONS(488),
    [anon_sym_GT_GT] = ACTIONS(488),
    [anon_sym_QMARK_QMARK] = ACTIONS(488),
    [anon_sym_QMARK_PLUS] = ACTIONS(488),
    [anon_sym_QMARK_DASH] = ACTIONS(488),
    [anon_sym_PLUS_EQ] = ACTIONS(488),
    [anon_sym_DASH_EQ] = ACTIONS(488),
    [anon_sym_STAR_EQ] = ACTIONS(488),
    [anon_sym_SLASH_EQ] = ACTIONS(488),
    [anon_sym_DOLLAR] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_LT_GT] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(490),
    [sym__class_constructor] = ACTIONS(488),
    [sym__class_extends] = ACTIONS(488),
    [sym__var] = ACTIONS(488),
    [sym__property] = ACTIONS(488),
    [sym__alias] = ACTIONS(488),
    [sym__declare] = ACTIONS(488),
    [sym__function] = ACTIONS(488),
    [sym__return] = ACTIONS(488),
    [sym__break] = ACTIONS(488),
    [sym__continue] = ACTIONS(488),
    [sym__this] = ACTIONS(488),
    [sym__form] = ACTIONS(488),
    [sym__super] = ACTIONS(488),
    [sym__class_store_4d] = ACTIONS(488),
    [sym__class_store_ds] = ACTIONS(488),
    [sym__class_store_cs] = ACTIONS(488),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(488),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(488),
    [aux_sym__classic_array_blob_token1] = ACTIONS(488),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(488),
    [aux_sym__classic_array_date_token1] = ACTIONS(488),
    [aux_sym__classic_array_integer_token1] = ACTIONS(488),
    [aux_sym__classic_array_longint_token1] = ACTIONS(488),
    [aux_sym__classic_array_object_token1] = ACTIONS(488),
    [aux_sym__classic_array_picture_token1] = ACTIONS(488),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(488),
    [aux_sym__classic_array_real_token1] = ACTIONS(488),
    [aux_sym__classic_array_text_token1] = ACTIONS(488),
    [aux_sym__classic_array_time_token1] = ACTIONS(488),
    [anon_sym_SLASH_STAR] = ACTIONS(488),
    [anon_sym_SLASH_SLASH] = ACTIONS(488),
    [sym__if_e] = ACTIONS(488),
    [sym__if_f] = ACTIONS(490),
    [sym__else_e] = ACTIONS(488),
    [sym__else_f] = ACTIONS(488),
    [sym__end_if_e] = ACTIONS(488),
    [sym__end_if_f] = ACTIONS(488),
    [sym__begin_sql_e] = ACTIONS(488),
    [sym__begin_sql_f] = ACTIONS(488),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [sym__local] = ACTIONS(492),
    [sym__exposed] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_AMP_AMP] = ACTIONS(492),
    [anon_sym_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_AMP] = ACTIONS(494),
    [anon_sym_PIPE] = ACTIONS(494),
    [anon_sym_CARET] = ACTIONS(492),
    [anon_sym_TILDE_PIPE] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(492),
    [anon_sym_POUND] = ACTIONS(494),
    [anon_sym_LT_LT] = ACTIONS(492),
    [anon_sym_GT_GT] = ACTIONS(492),
    [anon_sym_QMARK_QMARK] = ACTIONS(492),
    [anon_sym_QMARK_PLUS] = ACTIONS(492),
    [anon_sym_QMARK_DASH] = ACTIONS(492),
    [anon_sym_PLUS_EQ] = ACTIONS(492),
    [anon_sym_DASH_EQ] = ACTIONS(492),
    [anon_sym_STAR_EQ] = ACTIONS(492),
    [anon_sym_SLASH_EQ] = ACTIONS(492),
    [anon_sym_DOLLAR] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_LT_GT] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(494),
    [sym__class_constructor] = ACTIONS(492),
    [sym__class_extends] = ACTIONS(492),
    [sym__var] = ACTIONS(492),
    [sym__property] = ACTIONS(492),
    [sym__alias] = ACTIONS(492),
    [sym__declare] = ACTIONS(492),
    [sym__function] = ACTIONS(492),
    [sym__return] = ACTIONS(492),
    [sym__break] = ACTIONS(492),
    [sym__continue] = ACTIONS(492),
    [sym__this] = ACTIONS(492),
    [sym__form] = ACTIONS(492),
    [sym__super] = ACTIONS(492),
    [sym__class_store_4d] = ACTIONS(492),
    [sym__class_store_ds] = ACTIONS(492),
    [sym__class_store_cs] = ACTIONS(492),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(492),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(492),
    [aux_sym__classic_array_blob_token1] = ACTIONS(492),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(492),
    [aux_sym__classic_array_date_token1] = ACTIONS(492),
    [aux_sym__classic_array_integer_token1] = ACTIONS(492),
    [aux_sym__classic_array_longint_token1] = ACTIONS(492),
    [aux_sym__classic_array_object_token1] = ACTIONS(492),
    [aux_sym__classic_array_picture_token1] = ACTIONS(492),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(492),
    [aux_sym__classic_array_real_token1] = ACTIONS(492),
    [aux_sym__classic_array_text_token1] = ACTIONS(492),
    [aux_sym__classic_array_time_token1] = ACTIONS(492),
    [anon_sym_SLASH_STAR] = ACTIONS(492),
    [anon_sym_SLASH_SLASH] = ACTIONS(492),
    [sym__if_e] = ACTIONS(492),
    [sym__if_f] = ACTIONS(494),
    [sym__else_e] = ACTIONS(492),
    [sym__else_f] = ACTIONS(492),
    [sym__end_if_e] = ACTIONS(492),
    [sym__end_if_f] = ACTIONS(492),
    [sym__begin_sql_e] = ACTIONS(492),
    [sym__begin_sql_f] = ACTIONS(492),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [sym__local] = ACTIONS(496),
    [sym__exposed] = ACTIONS(496),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(496),
    [anon_sym_PIPE_PIPE] = ACTIONS(496),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_CARET] = ACTIONS(496),
    [anon_sym_TILDE_PIPE] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_LT_LT] = ACTIONS(496),
    [anon_sym_GT_GT] = ACTIONS(496),
    [anon_sym_QMARK_QMARK] = ACTIONS(496),
    [anon_sym_QMARK_PLUS] = ACTIONS(496),
    [anon_sym_QMARK_DASH] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(496),
    [anon_sym_DASH_EQ] = ACTIONS(496),
    [anon_sym_STAR_EQ] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(496),
    [anon_sym_DOLLAR] = ACTIONS(496),
    [anon_sym_RBRACE] = ACTIONS(496),
    [anon_sym_LT_GT] = ACTIONS(496),
    [anon_sym_RBRACK] = ACTIONS(496),
    [anon_sym_QMARK] = ACTIONS(498),
    [sym__class_constructor] = ACTIONS(496),
    [sym__class_extends] = ACTIONS(496),
    [sym__var] = ACTIONS(496),
    [sym__property] = ACTIONS(496),
    [sym__alias] = ACTIONS(496),
    [sym__declare] = ACTIONS(496),
    [sym__function] = ACTIONS(496),
    [sym__return] = ACTIONS(496),
    [sym__break] = ACTIONS(496),
    [sym__continue] = ACTIONS(496),
    [sym__this] = ACTIONS(496),
    [sym__form] = ACTIONS(496),
    [sym__super] = ACTIONS(496),
    [sym__class_store_4d] = ACTIONS(496),
    [sym__class_store_ds] = ACTIONS(496),
    [sym__class_store_cs] = ACTIONS(496),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(496),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(496),
    [aux_sym__classic_array_blob_token1] = ACTIONS(496),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(496),
    [aux_sym__classic_array_date_token1] = ACTIONS(496),
    [aux_sym__classic_array_integer_token1] = ACTIONS(496),
    [aux_sym__classic_array_longint_token1] = ACTIONS(496),
    [aux_sym__classic_array_object_token1] = ACTIONS(496),
    [aux_sym__classic_array_picture_token1] = ACTIONS(496),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(496),
    [aux_sym__classic_array_real_token1] = ACTIONS(496),
    [aux_sym__classic_array_text_token1] = ACTIONS(496),
    [aux_sym__classic_array_time_token1] = ACTIONS(496),
    [anon_sym_SLASH_STAR] = ACTIONS(496),
    [anon_sym_SLASH_SLASH] = ACTIONS(496),
    [sym__if_e] = ACTIONS(496),
    [sym__if_f] = ACTIONS(498),
    [sym__else_e] = ACTIONS(496),
    [sym__else_f] = ACTIONS(496),
    [sym__end_if_e] = ACTIONS(496),
    [sym__end_if_f] = ACTIONS(496),
    [sym__begin_sql_e] = ACTIONS(496),
    [sym__begin_sql_f] = ACTIONS(496),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym__local] = ACTIONS(500),
    [sym__exposed] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_AMP_AMP] = ACTIONS(500),
    [anon_sym_PIPE_PIPE] = ACTIONS(500),
    [anon_sym_AMP] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(502),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_TILDE_PIPE] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(502),
    [anon_sym_LT_LT] = ACTIONS(500),
    [anon_sym_GT_GT] = ACTIONS(500),
    [anon_sym_QMARK_QMARK] = ACTIONS(500),
    [anon_sym_QMARK_PLUS] = ACTIONS(500),
    [anon_sym_QMARK_DASH] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(500),
    [anon_sym_DASH_EQ] = ACTIONS(500),
    [anon_sym_STAR_EQ] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_LT_GT] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_QMARK] = ACTIONS(502),
    [sym__class_constructor] = ACTIONS(500),
    [sym__class_extends] = ACTIONS(500),
    [sym__var] = ACTIONS(500),
    [sym__property] = ACTIONS(500),
    [sym__alias] = ACTIONS(500),
    [sym__declare] = ACTIONS(500),
    [sym__function] = ACTIONS(500),
    [sym__return] = ACTIONS(500),
    [sym__break] = ACTIONS(500),
    [sym__continue] = ACTIONS(500),
    [sym__this] = ACTIONS(500),
    [sym__form] = ACTIONS(500),
    [sym__super] = ACTIONS(500),
    [sym__class_store_4d] = ACTIONS(500),
    [sym__class_store_ds] = ACTIONS(500),
    [sym__class_store_cs] = ACTIONS(500),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(500),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(500),
    [aux_sym__classic_array_blob_token1] = ACTIONS(500),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(500),
    [aux_sym__classic_array_date_token1] = ACTIONS(500),
    [aux_sym__classic_array_integer_token1] = ACTIONS(500),
    [aux_sym__classic_array_longint_token1] = ACTIONS(500),
    [aux_sym__classic_array_object_token1] = ACTIONS(500),
    [aux_sym__classic_array_picture_token1] = ACTIONS(500),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(500),
    [aux_sym__classic_array_real_token1] = ACTIONS(500),
    [aux_sym__classic_array_text_token1] = ACTIONS(500),
    [aux_sym__classic_array_time_token1] = ACTIONS(500),
    [anon_sym_SLASH_STAR] = ACTIONS(500),
    [anon_sym_SLASH_SLASH] = ACTIONS(500),
    [sym__if_e] = ACTIONS(500),
    [sym__if_f] = ACTIONS(502),
    [sym__else_e] = ACTIONS(500),
    [sym__else_f] = ACTIONS(500),
    [sym__end_if_e] = ACTIONS(500),
    [sym__end_if_f] = ACTIONS(500),
    [sym__begin_sql_e] = ACTIONS(500),
    [sym__begin_sql_f] = ACTIONS(500),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [sym__local] = ACTIONS(504),
    [sym__exposed] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_AMP_AMP] = ACTIONS(504),
    [anon_sym_PIPE_PIPE] = ACTIONS(504),
    [anon_sym_AMP] = ACTIONS(506),
    [anon_sym_PIPE] = ACTIONS(506),
    [anon_sym_CARET] = ACTIONS(504),
    [anon_sym_TILDE_PIPE] = ACTIONS(504),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_LT_LT] = ACTIONS(504),
    [anon_sym_GT_GT] = ACTIONS(504),
    [anon_sym_QMARK_QMARK] = ACTIONS(504),
    [anon_sym_QMARK_PLUS] = ACTIONS(504),
    [anon_sym_QMARK_DASH] = ACTIONS(504),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_DOLLAR] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_LT_GT] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(506),
    [sym__class_constructor] = ACTIONS(504),
    [sym__class_extends] = ACTIONS(504),
    [sym__var] = ACTIONS(504),
    [sym__property] = ACTIONS(504),
    [sym__alias] = ACTIONS(504),
    [sym__declare] = ACTIONS(504),
    [sym__function] = ACTIONS(504),
    [sym__return] = ACTIONS(504),
    [sym__break] = ACTIONS(504),
    [sym__continue] = ACTIONS(504),
    [sym__this] = ACTIONS(504),
    [sym__form] = ACTIONS(504),
    [sym__super] = ACTIONS(504),
    [sym__class_store_4d] = ACTIONS(504),
    [sym__class_store_ds] = ACTIONS(504),
    [sym__class_store_cs] = ACTIONS(504),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(504),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(504),
    [aux_sym__classic_array_blob_token1] = ACTIONS(504),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(504),
    [aux_sym__classic_array_date_token1] = ACTIONS(504),
    [aux_sym__classic_array_integer_token1] = ACTIONS(504),
    [aux_sym__classic_array_longint_token1] = ACTIONS(504),
    [aux_sym__classic_array_object_token1] = ACTIONS(504),
    [aux_sym__classic_array_picture_token1] = ACTIONS(504),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(504),
    [aux_sym__classic_array_real_token1] = ACTIONS(504),
    [aux_sym__classic_array_text_token1] = ACTIONS(504),
    [aux_sym__classic_array_time_token1] = ACTIONS(504),
    [anon_sym_SLASH_STAR] = ACTIONS(504),
    [anon_sym_SLASH_SLASH] = ACTIONS(504),
    [sym__if_e] = ACTIONS(504),
    [sym__if_f] = ACTIONS(506),
    [sym__else_e] = ACTIONS(504),
    [sym__else_f] = ACTIONS(504),
    [sym__end_if_e] = ACTIONS(504),
    [sym__end_if_f] = ACTIONS(504),
    [sym__begin_sql_e] = ACTIONS(504),
    [sym__begin_sql_f] = ACTIONS(504),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [sym__local] = ACTIONS(508),
    [sym__exposed] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_AMP_AMP] = ACTIONS(508),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_CARET] = ACTIONS(508),
    [anon_sym_TILDE_PIPE] = ACTIONS(508),
    [anon_sym_LT] = ACTIONS(510),
    [anon_sym_GT] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(510),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK_QMARK] = ACTIONS(508),
    [anon_sym_QMARK_PLUS] = ACTIONS(508),
    [anon_sym_QMARK_DASH] = ACTIONS(508),
    [anon_sym_PLUS_EQ] = ACTIONS(508),
    [anon_sym_DASH_EQ] = ACTIONS(508),
    [anon_sym_STAR_EQ] = ACTIONS(508),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [anon_sym_DOLLAR] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_LT_GT] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(510),
    [sym__class_constructor] = ACTIONS(508),
    [sym__class_extends] = ACTIONS(508),
    [sym__var] = ACTIONS(508),
    [sym__property] = ACTIONS(508),
    [sym__alias] = ACTIONS(508),
    [sym__declare] = ACTIONS(508),
    [sym__function] = ACTIONS(508),
    [sym__return] = ACTIONS(508),
    [sym__break] = ACTIONS(508),
    [sym__continue] = ACTIONS(508),
    [sym__this] = ACTIONS(508),
    [sym__form] = ACTIONS(508),
    [sym__super] = ACTIONS(508),
    [sym__class_store_4d] = ACTIONS(508),
    [sym__class_store_ds] = ACTIONS(508),
    [sym__class_store_cs] = ACTIONS(508),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(508),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(508),
    [aux_sym__classic_array_blob_token1] = ACTIONS(508),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(508),
    [aux_sym__classic_array_date_token1] = ACTIONS(508),
    [aux_sym__classic_array_integer_token1] = ACTIONS(508),
    [aux_sym__classic_array_longint_token1] = ACTIONS(508),
    [aux_sym__classic_array_object_token1] = ACTIONS(508),
    [aux_sym__classic_array_picture_token1] = ACTIONS(508),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(508),
    [aux_sym__classic_array_real_token1] = ACTIONS(508),
    [aux_sym__classic_array_text_token1] = ACTIONS(508),
    [aux_sym__classic_array_time_token1] = ACTIONS(508),
    [anon_sym_SLASH_STAR] = ACTIONS(508),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [sym__if_e] = ACTIONS(508),
    [sym__if_f] = ACTIONS(510),
    [sym__else_e] = ACTIONS(508),
    [sym__else_f] = ACTIONS(508),
    [sym__end_if_e] = ACTIONS(508),
    [sym__end_if_f] = ACTIONS(508),
    [sym__begin_sql_e] = ACTIONS(508),
    [sym__begin_sql_f] = ACTIONS(508),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [sym__local] = ACTIONS(512),
    [sym__exposed] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_AMP_AMP] = ACTIONS(512),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_AMP] = ACTIONS(514),
    [anon_sym_PIPE] = ACTIONS(514),
    [anon_sym_CARET] = ACTIONS(512),
    [anon_sym_TILDE_PIPE] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(514),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_LT_LT] = ACTIONS(512),
    [anon_sym_GT_GT] = ACTIONS(512),
    [anon_sym_QMARK_QMARK] = ACTIONS(512),
    [anon_sym_QMARK_PLUS] = ACTIONS(512),
    [anon_sym_QMARK_DASH] = ACTIONS(512),
    [anon_sym_PLUS_EQ] = ACTIONS(512),
    [anon_sym_DASH_EQ] = ACTIONS(512),
    [anon_sym_STAR_EQ] = ACTIONS(512),
    [anon_sym_SLASH_EQ] = ACTIONS(512),
    [anon_sym_DOLLAR] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_LT_GT] = ACTIONS(512),
    [anon_sym_RBRACK] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(514),
    [sym__class_constructor] = ACTIONS(512),
    [sym__class_extends] = ACTIONS(512),
    [sym__var] = ACTIONS(512),
    [sym__property] = ACTIONS(512),
    [sym__alias] = ACTIONS(512),
    [sym__declare] = ACTIONS(512),
    [sym__function] = ACTIONS(512),
    [sym__return] = ACTIONS(512),
    [sym__break] = ACTIONS(512),
    [sym__continue] = ACTIONS(512),
    [sym__this] = ACTIONS(512),
    [sym__form] = ACTIONS(512),
    [sym__super] = ACTIONS(512),
    [sym__class_store_4d] = ACTIONS(512),
    [sym__class_store_ds] = ACTIONS(512),
    [sym__class_store_cs] = ACTIONS(512),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(512),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(512),
    [aux_sym__classic_array_blob_token1] = ACTIONS(512),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(512),
    [aux_sym__classic_array_date_token1] = ACTIONS(512),
    [aux_sym__classic_array_integer_token1] = ACTIONS(512),
    [aux_sym__classic_array_longint_token1] = ACTIONS(512),
    [aux_sym__classic_array_object_token1] = ACTIONS(512),
    [aux_sym__classic_array_picture_token1] = ACTIONS(512),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(512),
    [aux_sym__classic_array_real_token1] = ACTIONS(512),
    [aux_sym__classic_array_text_token1] = ACTIONS(512),
    [aux_sym__classic_array_time_token1] = ACTIONS(512),
    [anon_sym_SLASH_STAR] = ACTIONS(512),
    [anon_sym_SLASH_SLASH] = ACTIONS(512),
    [sym__if_e] = ACTIONS(512),
    [sym__if_f] = ACTIONS(514),
    [sym__else_e] = ACTIONS(512),
    [sym__else_f] = ACTIONS(512),
    [sym__end_if_e] = ACTIONS(512),
    [sym__end_if_f] = ACTIONS(512),
    [sym__begin_sql_e] = ACTIONS(512),
    [sym__begin_sql_f] = ACTIONS(512),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym__local] = ACTIONS(516),
    [sym__exposed] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(516),
    [anon_sym_TILDE_PIPE] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(516),
    [anon_sym_POUND] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK_QMARK] = ACTIONS(516),
    [anon_sym_QMARK_PLUS] = ACTIONS(516),
    [anon_sym_QMARK_DASH] = ACTIONS(516),
    [anon_sym_PLUS_EQ] = ACTIONS(516),
    [anon_sym_DASH_EQ] = ACTIONS(516),
    [anon_sym_STAR_EQ] = ACTIONS(516),
    [anon_sym_SLASH_EQ] = ACTIONS(516),
    [anon_sym_DOLLAR] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_LT_GT] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(518),
    [sym__class_constructor] = ACTIONS(516),
    [sym__class_extends] = ACTIONS(516),
    [sym__var] = ACTIONS(516),
    [sym__property] = ACTIONS(516),
    [sym__alias] = ACTIONS(516),
    [sym__declare] = ACTIONS(516),
    [sym__function] = ACTIONS(516),
    [sym__return] = ACTIONS(516),
    [sym__break] = ACTIONS(516),
    [sym__continue] = ACTIONS(516),
    [sym__this] = ACTIONS(516),
    [sym__form] = ACTIONS(516),
    [sym__super] = ACTIONS(516),
    [sym__class_store_4d] = ACTIONS(516),
    [sym__class_store_ds] = ACTIONS(516),
    [sym__class_store_cs] = ACTIONS(516),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(516),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(516),
    [aux_sym__classic_array_blob_token1] = ACTIONS(516),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(516),
    [aux_sym__classic_array_date_token1] = ACTIONS(516),
    [aux_sym__classic_array_integer_token1] = ACTIONS(516),
    [aux_sym__classic_array_longint_token1] = ACTIONS(516),
    [aux_sym__classic_array_object_token1] = ACTIONS(516),
    [aux_sym__classic_array_picture_token1] = ACTIONS(516),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(516),
    [aux_sym__classic_array_real_token1] = ACTIONS(516),
    [aux_sym__classic_array_text_token1] = ACTIONS(516),
    [aux_sym__classic_array_time_token1] = ACTIONS(516),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_SLASH_SLASH] = ACTIONS(516),
    [sym__if_e] = ACTIONS(516),
    [sym__if_f] = ACTIONS(518),
    [sym__else_e] = ACTIONS(516),
    [sym__else_f] = ACTIONS(516),
    [sym__end_if_e] = ACTIONS(516),
    [sym__end_if_f] = ACTIONS(516),
    [sym__begin_sql_e] = ACTIONS(516),
    [sym__begin_sql_f] = ACTIONS(516),
  },
  [37] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(41),
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
    [anon_sym_SLASH_STAR] = ACTIONS(520),
    [anon_sym_SLASH_SLASH] = ACTIONS(520),
    [sym__if_e] = ACTIONS(520),
    [sym__if_f] = ACTIONS(526),
    [sym__else_e] = ACTIONS(520),
    [sym__else_f] = ACTIONS(520),
    [sym__end_if_e] = ACTIONS(520),
    [sym__end_if_f] = ACTIONS(520),
    [sym__begin_sql_e] = ACTIONS(520),
    [sym__begin_sql_f] = ACTIONS(520),
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
    [anon_sym_SLASH_STAR] = ACTIONS(528),
    [anon_sym_SLASH_SLASH] = ACTIONS(528),
    [sym__if_e] = ACTIONS(528),
    [sym__if_f] = ACTIONS(530),
    [sym__else_e] = ACTIONS(528),
    [sym__else_f] = ACTIONS(528),
    [sym__end_if_e] = ACTIONS(528),
    [sym__end_if_f] = ACTIONS(528),
    [sym__begin_sql_e] = ACTIONS(528),
    [sym__begin_sql_f] = ACTIONS(528),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [sym__local] = ACTIONS(532),
    [sym__exposed] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_AMP_AMP] = ACTIONS(532),
    [anon_sym_PIPE_PIPE] = ACTIONS(532),
    [anon_sym_AMP] = ACTIONS(534),
    [anon_sym_PIPE] = ACTIONS(534),
    [anon_sym_CARET] = ACTIONS(532),
    [anon_sym_TILDE_PIPE] = ACTIONS(532),
    [anon_sym_LT] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [anon_sym_EQ] = ACTIONS(532),
    [anon_sym_POUND] = ACTIONS(534),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_QMARK_QMARK] = ACTIONS(532),
    [anon_sym_QMARK_PLUS] = ACTIONS(532),
    [anon_sym_QMARK_DASH] = ACTIONS(532),
    [anon_sym_PLUS_EQ] = ACTIONS(532),
    [anon_sym_DASH_EQ] = ACTIONS(532),
    [anon_sym_STAR_EQ] = ACTIONS(532),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [anon_sym_DOLLAR] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_LT_GT] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
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
    [anon_sym_SLASH_STAR] = ACTIONS(532),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [sym__if_e] = ACTIONS(532),
    [sym__if_f] = ACTIONS(534),
    [sym__else_e] = ACTIONS(532),
    [sym__else_f] = ACTIONS(532),
    [sym__end_if_e] = ACTIONS(532),
    [sym__end_if_f] = ACTIONS(532),
    [sym__begin_sql_e] = ACTIONS(532),
    [sym__begin_sql_f] = ACTIONS(532),
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
    [anon_sym_SLASH_STAR] = ACTIONS(536),
    [anon_sym_SLASH_SLASH] = ACTIONS(536),
    [sym__if_e] = ACTIONS(536),
    [sym__if_f] = ACTIONS(538),
    [sym__else_e] = ACTIONS(536),
    [sym__else_f] = ACTIONS(536),
    [sym__end_if_e] = ACTIONS(536),
    [sym__end_if_f] = ACTIONS(536),
    [sym__begin_sql_e] = ACTIONS(536),
    [sym__begin_sql_f] = ACTIONS(536),
  },
  [41] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(540),
    [sym__local] = ACTIONS(540),
    [sym__exposed] = ACTIONS(540),
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
    [anon_sym_DOLLAR] = ACTIONS(540),
    [anon_sym_LT_GT] = ACTIONS(540),
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
    [anon_sym_SLASH_STAR] = ACTIONS(540),
    [anon_sym_SLASH_SLASH] = ACTIONS(540),
    [sym__if_e] = ACTIONS(540),
    [sym__if_f] = ACTIONS(542),
    [sym__else_e] = ACTIONS(540),
    [sym__else_f] = ACTIONS(540),
    [sym__end_if_e] = ACTIONS(540),
    [sym__end_if_f] = ACTIONS(540),
    [sym__begin_sql_e] = ACTIONS(540),
    [sym__begin_sql_f] = ACTIONS(540),
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
    [anon_sym_SLASH_STAR] = ACTIONS(544),
    [anon_sym_SLASH_SLASH] = ACTIONS(544),
    [sym__if_e] = ACTIONS(544),
    [sym__if_f] = ACTIONS(546),
    [sym__else_e] = ACTIONS(544),
    [sym__else_f] = ACTIONS(544),
    [sym__end_if_e] = ACTIONS(544),
    [sym__end_if_f] = ACTIONS(544),
    [sym__begin_sql_e] = ACTIONS(544),
    [sym__begin_sql_f] = ACTIONS(544),
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
    [anon_sym_SLASH_STAR] = ACTIONS(548),
    [anon_sym_SLASH_SLASH] = ACTIONS(548),
    [sym__if_e] = ACTIONS(548),
    [sym__if_f] = ACTIONS(550),
    [sym__else_e] = ACTIONS(548),
    [sym__else_f] = ACTIONS(548),
    [sym__end_if_e] = ACTIONS(548),
    [sym__end_if_f] = ACTIONS(548),
    [sym__begin_sql_e] = ACTIONS(548),
    [sym__begin_sql_f] = ACTIONS(548),
  },
  [44] = {
    [sym__binary_operator] = STATE(97),
    [aux_sym__condition_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(552),
    [sym__local] = ACTIONS(552),
    [sym__exposed] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(554),
    [anon_sym_DASH] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(554),
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_AMP_AMP] = ACTIONS(557),
    [anon_sym_PIPE_PIPE] = ACTIONS(557),
    [anon_sym_AMP] = ACTIONS(554),
    [anon_sym_PIPE] = ACTIONS(554),
    [anon_sym_CARET] = ACTIONS(557),
    [anon_sym_TILDE_PIPE] = ACTIONS(557),
    [anon_sym_LT] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(554),
    [anon_sym_LT_LT] = ACTIONS(557),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_QMARK_QMARK] = ACTIONS(557),
    [anon_sym_QMARK_PLUS] = ACTIONS(557),
    [anon_sym_QMARK_DASH] = ACTIONS(557),
    [anon_sym_PLUS_EQ] = ACTIONS(557),
    [anon_sym_DASH_EQ] = ACTIONS(557),
    [anon_sym_STAR_EQ] = ACTIONS(557),
    [anon_sym_SLASH_EQ] = ACTIONS(557),
    [anon_sym_DOLLAR] = ACTIONS(552),
    [anon_sym_LT_GT] = ACTIONS(552),
    [anon_sym_QMARK] = ACTIONS(560),
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
    [anon_sym_SLASH_STAR] = ACTIONS(552),
    [anon_sym_SLASH_SLASH] = ACTIONS(552),
    [sym__if_e] = ACTIONS(552),
    [sym__if_f] = ACTIONS(560),
    [sym__else_e] = ACTIONS(552),
    [sym__else_f] = ACTIONS(552),
    [sym__end_if_e] = ACTIONS(552),
    [sym__end_if_f] = ACTIONS(552),
    [sym__begin_sql_e] = ACTIONS(552),
    [sym__begin_sql_f] = ACTIONS(552),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [sym__local] = ACTIONS(552),
    [sym__exposed] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(560),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_STAR] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(560),
    [anon_sym_AMP_AMP] = ACTIONS(552),
    [anon_sym_PIPE_PIPE] = ACTIONS(552),
    [anon_sym_AMP] = ACTIONS(560),
    [anon_sym_PIPE] = ACTIONS(560),
    [anon_sym_CARET] = ACTIONS(552),
    [anon_sym_TILDE_PIPE] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(560),
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_POUND] = ACTIONS(560),
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
    [anon_sym_LT_GT] = ACTIONS(552),
    [anon_sym_QMARK] = ACTIONS(560),
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
    [anon_sym_SLASH_STAR] = ACTIONS(552),
    [anon_sym_SLASH_SLASH] = ACTIONS(552),
    [sym__if_e] = ACTIONS(552),
    [sym__if_f] = ACTIONS(560),
    [sym__else_e] = ACTIONS(552),
    [sym__else_f] = ACTIONS(552),
    [sym__end_if_e] = ACTIONS(552),
    [sym__end_if_f] = ACTIONS(552),
    [sym__begin_sql_e] = ACTIONS(552),
    [sym__begin_sql_f] = ACTIONS(552),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(562),
    [sym__local] = ACTIONS(562),
    [sym__exposed] = ACTIONS(562),
    [anon_sym_DOLLAR] = ACTIONS(562),
    [anon_sym_LT_GT] = ACTIONS(562),
    [aux_sym_numeric_parameter_token1] = ACTIONS(564),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_BANG] = ACTIONS(564),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(562),
    [sym__hex_literal] = ACTIONS(562),
    [aux_sym__num_literal_token1] = ACTIONS(564),
    [aux_sym__exp_literal_token1] = ACTIONS(562),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [sym__class_constructor] = ACTIONS(562),
    [sym__class_extends] = ACTIONS(562),
    [sym__var] = ACTIONS(562),
    [sym__property] = ACTIONS(562),
    [sym__alias] = ACTIONS(562),
    [sym__declare] = ACTIONS(562),
    [sym__function] = ACTIONS(562),
    [sym__return] = ACTIONS(562),
    [sym__break] = ACTIONS(562),
    [sym__continue] = ACTIONS(562),
    [sym__this] = ACTIONS(562),
    [sym__form] = ACTIONS(562),
    [sym__super] = ACTIONS(562),
    [sym__class_store_4d] = ACTIONS(562),
    [sym__class_store_ds] = ACTIONS(562),
    [sym__class_store_cs] = ACTIONS(562),
    [sym__system_variable_ok] = ACTIONS(562),
    [sym__system_variable_document] = ACTIONS(562),
    [sym__system_variable_flddelimit] = ACTIONS(562),
    [sym__system_variable_recdelimit] = ACTIONS(562),
    [sym__system_variable_error] = ACTIONS(564),
    [sym__system_variable_error_method] = ACTIONS(562),
    [sym__system_variable_error_line] = ACTIONS(562),
    [sym__system_variable_error_formula] = ACTIONS(562),
    [sym__system_variable_mousedown] = ACTIONS(562),
    [sym__system_variable_mousex] = ACTIONS(562),
    [sym__system_variable_mousey] = ACTIONS(562),
    [sym__system_variable_keycode] = ACTIONS(562),
    [sym__system_variable_modifiers] = ACTIONS(562),
    [sym__system_variable_mouseproc] = ACTIONS(562),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(562),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(562),
    [aux_sym__classic_array_blob_token1] = ACTIONS(562),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(562),
    [aux_sym__classic_array_date_token1] = ACTIONS(562),
    [aux_sym__classic_array_integer_token1] = ACTIONS(562),
    [aux_sym__classic_array_longint_token1] = ACTIONS(562),
    [aux_sym__classic_array_object_token1] = ACTIONS(562),
    [aux_sym__classic_array_picture_token1] = ACTIONS(562),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(562),
    [aux_sym__classic_array_real_token1] = ACTIONS(562),
    [aux_sym__classic_array_text_token1] = ACTIONS(562),
    [aux_sym__classic_array_time_token1] = ACTIONS(562),
    [anon_sym_SLASH_STAR] = ACTIONS(562),
    [anon_sym_SLASH_SLASH] = ACTIONS(562),
    [sym__if_e] = ACTIONS(562),
    [sym__if_f] = ACTIONS(564),
    [sym__else_e] = ACTIONS(562),
    [sym__else_f] = ACTIONS(562),
    [sym__end_if_e] = ACTIONS(562),
    [sym__end_if_f] = ACTIONS(562),
    [sym__begin_sql_e] = ACTIONS(562),
    [sym__begin_sql_f] = ACTIONS(562),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(189), 1,
      sym__function_parameter,
    STATE(193), 1,
      aux_sym__functional_expression_repeat1,
    STATE(218), 1,
      sym_super,
    ACTIONS(570), 2,
      anon_sym_STAR,
      anon_sym_GT,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(192), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [127] = 31,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(182), 1,
      aux_sym__functional_expression_repeat1,
    STATE(204), 1,
      sym__function_parameter,
    STATE(218), 1,
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
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(192), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [254] = 28,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(215), 1,
      sym__function_parameter,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(600), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(192), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [372] = 2,
    ACTIONS(604), 1,
      sym__if_f,
    ACTIONS(602), 58,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [436] = 2,
    ACTIONS(608), 1,
      sym__if_f,
    ACTIONS(606), 58,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [500] = 26,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(221), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [611] = 26,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(255), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [722] = 26,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(259), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [833] = 26,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(51), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(37), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [944] = 26,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(51), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [1055] = 27,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(68), 1,
      sym_ternary_block,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(69), 2,
      sym__condition,
      sym_object_literal_block,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(37), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [1168] = 26,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(250), 3,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(130), 7,
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
  [1279] = 4,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(612), 1,
      sym__if_f,
    STATE(11), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(610), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1344] = 2,
    ACTIONS(616), 1,
      sym__if_f,
    ACTIONS(614), 55,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1405] = 4,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(620), 1,
      sym__if_f,
    STATE(64), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(618), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1470] = 4,
    ACTIONS(624), 1,
      anon_sym_DASH_GT,
    ACTIONS(626), 1,
      sym__if_f,
    STATE(102), 1,
      sym_function_result,
    ACTIONS(622), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1535] = 4,
    ACTIONS(624), 1,
      anon_sym_DASH_GT,
    ACTIONS(630), 1,
      sym__if_f,
    STATE(81), 1,
      sym_function_result,
    ACTIONS(628), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1600] = 4,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      sym__if_f,
    STATE(11), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(632), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1665] = 2,
    ACTIONS(638), 1,
      sym__if_f,
    ACTIONS(636), 55,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1726] = 2,
    ACTIONS(642), 1,
      sym__if_f,
    ACTIONS(640), 55,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1787] = 4,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      sym__if_f,
    STATE(59), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(644), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1852] = 3,
    ACTIONS(520), 1,
      anon_sym_QMARK,
    ACTIONS(650), 1,
      sym__if_f,
    ACTIONS(648), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1914] = 3,
    ACTIONS(650), 1,
      sym__if_f,
    ACTIONS(652), 1,
      anon_sym_QMARK,
    ACTIONS(648), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1976] = 2,
    ACTIONS(656), 1,
      sym__if_f,
    ACTIONS(654), 54,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2036] = 2,
    ACTIONS(660), 1,
      sym__if_f,
    ACTIONS(658), 54,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2096] = 2,
    ACTIONS(664), 1,
      sym__if_f,
    ACTIONS(662), 54,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2156] = 2,
    ACTIONS(668), 1,
      sym__if_f,
    ACTIONS(666), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2215] = 2,
    ACTIONS(672), 1,
      sym__if_f,
    ACTIONS(670), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2274] = 2,
    ACTIONS(676), 1,
      sym__if_f,
    ACTIONS(674), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2333] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(289), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [2436] = 24,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(572), 1,
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
    STATE(120), 1,
      sym__class_store,
    STATE(128), 1,
      sym__class,
    STATE(133), 1,
      sym__mutable,
    STATE(135), 1,
      sym__variable,
    STATE(218), 1,
      sym_super,
    ACTIONS(578), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(586), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(324), 2,
      sym_this,
      sym_form,
    ACTIONS(590), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(149), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(141), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(139), 7,
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
  [2539] = 2,
    ACTIONS(680), 1,
      sym__if_f,
    ACTIONS(678), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2598] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(290), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [2701] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(335), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [2804] = 2,
    ACTIONS(684), 1,
      sym__if_f,
    ACTIONS(682), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2863] = 2,
    ACTIONS(688), 1,
      sym__if_f,
    ACTIONS(686), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2922] = 2,
    ACTIONS(692), 1,
      sym__if_f,
    ACTIONS(690), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2981] = 2,
    ACTIONS(696), 1,
      sym__if_f,
    ACTIONS(694), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3040] = 2,
    ACTIONS(700), 1,
      sym__if_f,
    ACTIONS(698), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3099] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(333), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [3202] = 4,
    ACTIONS(704), 1,
      sym__if_f,
    STATE(7), 1,
      sym_else,
    ACTIONS(706), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(702), 50,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3265] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(280), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [3368] = 2,
    ACTIONS(710), 1,
      sym__if_f,
    ACTIONS(708), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3427] = 2,
    ACTIONS(714), 1,
      sym__if_f,
    ACTIONS(712), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3486] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(332), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [3589] = 2,
    ACTIONS(718), 1,
      sym__if_f,
    ACTIONS(716), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3648] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(337), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [3751] = 2,
    ACTIONS(722), 1,
      sym__if_f,
    ACTIONS(720), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
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
    ACTIONS(387), 13,
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
  [3913] = 2,
    ACTIONS(726), 1,
      sym__if_f,
    ACTIONS(724), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3972] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(45), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [4075] = 2,
    ACTIONS(730), 1,
      sym__if_f,
    ACTIONS(728), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4134] = 2,
    ACTIONS(734), 1,
      sym__if_f,
    ACTIONS(732), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4193] = 2,
    ACTIONS(738), 1,
      sym__if_f,
    ACTIONS(736), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4252] = 2,
    ACTIONS(742), 1,
      sym__if_f,
    ACTIONS(740), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4311] = 2,
    ACTIONS(746), 1,
      sym__if_f,
    ACTIONS(744), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4370] = 2,
    ACTIONS(750), 1,
      sym__if_f,
    ACTIONS(748), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4429] = 2,
    ACTIONS(754), 1,
      sym__if_f,
    ACTIONS(752), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4488] = 2,
    ACTIONS(758), 1,
      sym__if_f,
    ACTIONS(756), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4547] = 2,
    ACTIONS(762), 1,
      sym__if_f,
    ACTIONS(760), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4606] = 2,
    ACTIONS(766), 1,
      sym__if_f,
    ACTIONS(764), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4665] = 2,
    ACTIONS(770), 1,
      sym__if_f,
    ACTIONS(768), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4724] = 2,
    ACTIONS(774), 1,
      sym__if_f,
    ACTIONS(772), 53,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__else_e,
      sym__else_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4783] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(295), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [4886] = 24,
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
    ACTIONS(377), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(381), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym__system_variable_error,
    STATE(16), 1,
      sym__class_store,
    STATE(24), 1,
      sym__variable,
    STATE(25), 1,
      sym__class,
    STATE(26), 1,
      sym__mutable,
    STATE(220), 1,
      sym_super,
    ACTIONS(375), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(383), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(340), 2,
      sym_this,
      sym_form,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(22), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(39), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(42), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(328), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(387), 13,
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
  [4989] = 1,
    ACTIONS(776), 51,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [5043] = 1,
    ACTIONS(778), 51,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [5097] = 1,
    ACTIONS(780), 49,
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
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      sym__if_e,
      sym__if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [5149] = 5,
    ACTIONS(782), 1,
      anon_sym_DOT,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(424), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(422), 20,
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
      anon_sym_RBRACE,
  [5192] = 4,
    ACTIONS(786), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(405), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(403), 21,
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
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [5233] = 5,
    ACTIONS(782), 1,
      anon_sym_DOT,
    ACTIONS(789), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(412), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(410), 20,
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
      anon_sym_RBRACE,
  [5276] = 2,
    ACTIONS(405), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(403), 22,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [5312] = 4,
    ACTIONS(782), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(420), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(418), 20,
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
      anon_sym_RBRACE,
  [5352] = 4,
    ACTIONS(782), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(430), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(428), 20,
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
      anon_sym_RBRACE,
  [5392] = 3,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(436), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5430] = 2,
    ACTIONS(434), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(432), 22,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5466] = 3,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(397), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5504] = 3,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
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
    ACTIONS(454), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5542] = 2,
    ACTIONS(448), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(446), 22,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5578] = 2,
    ACTIONS(395), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(393), 22,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5614] = 6,
    ACTIONS(542), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym__binary_operator,
    STATE(131), 1,
      aux_sym__condition_repeat1,
    ACTIONS(540), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
  [5657] = 4,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym__functional_expression,
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
    ACTIONS(470), 19,
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
      anon_sym_RBRACE,
  [5696] = 2,
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
    ACTIONS(450), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5731] = 6,
    ACTIONS(526), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym__binary_operator,
    STATE(127), 1,
      aux_sym__condition_repeat1,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
  [5774] = 6,
    ACTIONS(560), 1,
      anon_sym_QMARK,
    STATE(77), 1,
      sym__binary_operator,
    STATE(131), 1,
      aux_sym__condition_repeat1,
    ACTIONS(552), 4,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(803), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(806), 15,
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
  [5817] = 2,
    ACTIONS(462), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(460), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5852] = 4,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym__functional_expression,
    ACTIONS(478), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(476), 19,
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
      anon_sym_RBRACE,
  [5891] = 2,
    ACTIONS(444), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(442), 21,
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
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5926] = 3,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(466), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(464), 20,
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
      anon_sym_RBRACE,
  [5963] = 2,
    ACTIONS(482), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(480), 20,
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
      anon_sym_RBRACE,
  [5997] = 2,
    ACTIONS(486), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(484), 20,
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
      anon_sym_RBRACE,
  [6031] = 2,
    ACTIONS(498), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(496), 19,
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
      anon_sym_RBRACE,
  [6064] = 2,
    ACTIONS(560), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(552), 19,
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
      anon_sym_RBRACE,
  [6097] = 2,
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
    ACTIONS(548), 19,
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
      anon_sym_RBRACE,
  [6130] = 2,
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
    ACTIONS(544), 19,
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
      anon_sym_RBRACE,
  [6163] = 2,
    ACTIONS(502), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(500), 19,
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
      anon_sym_RBRACE,
  [6196] = 2,
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
    ACTIONS(516), 19,
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
      anon_sym_RBRACE,
  [6229] = 2,
    ACTIONS(510), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(508), 19,
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
      anon_sym_RBRACE,
  [6262] = 2,
    ACTIONS(514), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(512), 19,
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
      anon_sym_RBRACE,
  [6295] = 2,
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
    ACTIONS(536), 19,
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
      anon_sym_RBRACE,
  [6328] = 2,
    ACTIONS(494), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(492), 19,
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
      anon_sym_RBRACE,
  [6361] = 2,
    ACTIONS(490), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(488), 19,
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
      anon_sym_RBRACE,
  [6394] = 2,
    ACTIONS(534), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(532), 19,
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
      anon_sym_RBRACE,
  [6427] = 2,
    ACTIONS(506), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(504), 19,
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
      anon_sym_RBRACE,
  [6460] = 2,
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
    ACTIONS(528), 19,
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
      anon_sym_RBRACE,
  [6493] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(92), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6523] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(100), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6553] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(101), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6583] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(60), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6613] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(105), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6643] = 5,
    STATE(16), 1,
      sym__class_store,
    STATE(65), 1,
      sym_class,
    STATE(66), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(811), 12,
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
  [6673] = 3,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(815), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6688] = 3,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(819), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6703] = 3,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(823), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6718] = 3,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      aux_sym_string_repeat1,
    ACTIONS(828), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6733] = 3,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(815), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6748] = 4,
    ACTIONS(834), 1,
      aux_sym__name_token1,
    STATE(214), 1,
      sym__computed,
    STATE(298), 1,
      sym__name,
    ACTIONS(832), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [6764] = 4,
    ACTIONS(838), 1,
      aux_sym__name_token1,
    STATE(244), 1,
      sym__computed,
    STATE(283), 1,
      sym__name,
    ACTIONS(836), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [6780] = 5,
    ACTIONS(842), 1,
      aux_sym_sql_block_token1,
    STATE(82), 1,
      sym_sql_block,
    STATE(83), 1,
      sym_end_sql,
    STATE(167), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(840), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6797] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(844), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(256), 2,
      sym__name,
      sym_local_variable,
  [6809] = 4,
    ACTIONS(848), 1,
      aux_sym_sql_block_token1,
    STATE(96), 1,
      sym_end_sql,
    STATE(181), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(840), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6823] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(850), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(276), 2,
      sym__name,
      sym_local_variable,
  [6835] = 3,
    ACTIONS(854), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(852), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(123), 2,
      sym__name,
      sym__classic_name,
  [6847] = 3,
    ACTIONS(858), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(856), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(10), 2,
      sym__name,
      sym__classic_name,
  [6859] = 1,
    ACTIONS(860), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [6867] = 2,
    ACTIONS(856), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(10), 2,
      sym__name,
      sym__classic_name,
  [6876] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(862), 1,
      aux_sym__name_token1,
    STATE(253), 2,
      sym__name,
      sym_local_variable,
  [6887] = 2,
    ACTIONS(864), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(18), 2,
      sym__name,
      sym__classic_name,
  [6896] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(866), 1,
      aux_sym__name_token1,
    STATE(207), 2,
      sym__name,
      sym_local_variable,
  [6907] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(868), 1,
      aux_sym__name_token1,
    STATE(186), 2,
      sym__name,
      sym_local_variable,
  [6918] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(870), 1,
      aux_sym__name_token1,
    STATE(291), 2,
      sym__name,
      sym_local_variable,
  [6929] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(872), 1,
      aux_sym__name_token1,
    STATE(219), 2,
      sym__name,
      sym_local_variable,
  [6940] = 2,
    ACTIONS(874), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(121), 2,
      sym__name,
      sym__classic_name,
  [6949] = 4,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_local_variable,
    STATE(199), 1,
      sym__function_argument,
  [6962] = 3,
    ACTIONS(880), 1,
      aux_sym_sql_block_token1,
    STATE(181), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(878), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6973] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym__functional_expression_repeat1,
  [6983] = 3,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    ACTIONS(888), 1,
      anon_sym_COLON,
    STATE(183), 1,
      aux_sym_var_declaration_block_repeat1,
  [6993] = 2,
    STATE(67), 1,
      sym__name,
    ACTIONS(890), 2,
      aux_sym__name_token1,
      sym__class_store_4d,
  [7001] = 3,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(894), 1,
      anon_sym_COLON,
    STATE(183), 1,
      aux_sym_var_declaration_block_repeat1,
  [7011] = 3,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_classic_compiler_block_repeat1,
  [7021] = 3,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_classic_compiler_block_repeat1,
  [7031] = 3,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    ACTIONS(908), 1,
      anon_sym_COLON,
    STATE(188), 1,
      aux_sym__function_argument_repeat1,
  [7041] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym__functional_expression_repeat1,
  [7051] = 3,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(209), 1,
      aux_sym_property_declaration_block_repeat1,
  [7061] = 3,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    ACTIONS(918), 1,
      anon_sym_COLON,
    STATE(203), 1,
      aux_sym__function_argument_repeat1,
  [7071] = 2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(920), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7079] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym__functional_expression_repeat1,
  [7089] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym__function_argument,
    STATE(191), 1,
      sym_local_variable,
  [7099] = 3,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_function_arguments_repeat1,
  [7109] = 3,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_classic_compiler_block_repeat1,
  [7119] = 1,
    ACTIONS(931), 3,
      sym__end_sql_e,
      sym__end_sql_f,
      aux_sym_sql_block_token1,
  [7125] = 3,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    STATE(191), 1,
      sym_local_variable,
    STATE(238), 1,
      sym__function_argument,
  [7135] = 3,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_function_arguments_repeat1,
  [7145] = 3,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_function_arguments_repeat1,
  [7155] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym__functional_expression_repeat1,
  [7165] = 3,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      anon_sym_COLON_EQ,
    STATE(31), 1,
      sym__functional_expression,
  [7175] = 3,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    ACTIONS(943), 1,
      anon_sym_COLON,
    STATE(188), 1,
      aux_sym__function_argument_repeat1,
  [7185] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym__functional_expression_repeat1,
  [7195] = 3,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym__functional_expression_repeat1,
  [7205] = 3,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    ACTIONS(947), 1,
      anon_sym_COLON,
    STATE(190), 1,
      aux_sym_property_declaration_block_repeat1,
  [7215] = 3,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(949), 1,
      anon_sym_COLON,
    STATE(185), 1,
      aux_sym_var_declaration_block_repeat1,
  [7225] = 3,
    ACTIONS(951), 1,
      anon_sym_SEMI,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym__functional_expression_repeat1,
  [7235] = 3,
    ACTIONS(956), 1,
      anon_sym_SEMI,
    ACTIONS(959), 1,
      anon_sym_COLON,
    STATE(209), 1,
      aux_sym_property_declaration_block_repeat1,
  [7245] = 2,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_function_arguments,
  [7252] = 1,
    ACTIONS(908), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7257] = 2,
    ACTIONS(963), 1,
      aux_sym_time_token1,
    ACTIONS(965), 1,
      aux_sym_date_token1,
  [7264] = 2,
    ACTIONS(967), 1,
      aux_sym__name_token1,
    STATE(118), 1,
      sym__name,
  [7271] = 2,
    ACTIONS(969), 1,
      aux_sym__name_token1,
    STATE(283), 1,
      sym__name,
  [7278] = 1,
    ACTIONS(954), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7283] = 2,
    ACTIONS(971), 1,
      aux_sym__name_token1,
    STATE(15), 1,
      sym__name,
  [7290] = 2,
    ACTIONS(973), 1,
      aux_sym_command_suffix_token1,
    STATE(134), 1,
      sym_command_suffix,
  [7297] = 2,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym__functional_expression,
  [7304] = 1,
    ACTIONS(888), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7309] = 2,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym__functional_expression,
  [7316] = 2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(975), 1,
      anon_sym_COLON,
  [7323] = 2,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_function_arguments,
  [7330] = 1,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [7335] = 2,
    ACTIONS(977), 1,
      aux_sym__name_token1,
    STATE(299), 1,
      sym__name,
  [7342] = 2,
    ACTIONS(979), 1,
      aux_sym__name_token1,
    STATE(206), 1,
      sym__name,
  [7349] = 2,
    ACTIONS(981), 1,
      aux_sym__name_token1,
    STATE(61), 1,
      sym__name,
  [7356] = 2,
    ACTIONS(983), 1,
      aux_sym__name_token1,
    STATE(287), 1,
      sym__name,
  [7363] = 2,
    ACTIONS(25), 1,
      sym__function,
    STATE(164), 1,
      sym_function,
  [7370] = 2,
    ACTIONS(985), 1,
      sym__exposed,
    ACTIONS(987), 1,
      sym__function,
  [7377] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(301), 1,
      sym_command_suffix,
  [7384] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(302), 1,
      sym_command_suffix,
  [7391] = 2,
    ACTIONS(991), 1,
      aux_sym__name_token1,
    STATE(12), 1,
      sym__name,
  [7398] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(303), 1,
      sym_command_suffix,
  [7405] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(304), 1,
      sym_command_suffix,
  [7412] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(305), 1,
      sym_command_suffix,
  [7419] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(306), 1,
      sym_command_suffix,
  [7426] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(307), 1,
      sym_command_suffix,
  [7433] = 1,
    ACTIONS(927), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7438] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(308), 1,
      sym_command_suffix,
  [7445] = 2,
    ACTIONS(993), 1,
      aux_sym__name_token1,
    STATE(115), 1,
      sym__name,
  [7452] = 2,
    ACTIONS(846), 1,
      anon_sym_DOLLAR,
    STATE(211), 1,
      sym_local_variable,
  [7459] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(309), 1,
      sym_command_suffix,
  [7466] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(310), 1,
      sym_command_suffix,
  [7473] = 2,
    ACTIONS(995), 1,
      aux_sym__name_token1,
    STATE(288), 1,
      sym__name,
  [7480] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(311), 1,
      sym_command_suffix,
  [7487] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(312), 1,
      sym_command_suffix,
  [7494] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(313), 1,
      sym_command_suffix,
  [7501] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(314), 1,
      sym_command_suffix,
  [7508] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(315), 1,
      sym_command_suffix,
  [7515] = 2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(997), 1,
      anon_sym_COLON,
  [7522] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(271), 1,
      sym_command_suffix,
  [7529] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(316), 1,
      sym_command_suffix,
  [7536] = 1,
    ACTIONS(903), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7541] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(317), 1,
      sym_command_suffix,
  [7548] = 2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
  [7555] = 2,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [7562] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(318), 1,
      sym_command_suffix,
  [7569] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(319), 1,
      sym_command_suffix,
  [7576] = 2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
  [7583] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(320), 1,
      sym_command_suffix,
  [7590] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(321), 1,
      sym_command_suffix,
  [7597] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(322), 1,
      sym_command_suffix,
  [7604] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(19), 1,
      sym_command_suffix,
  [7611] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(323), 1,
      sym_command_suffix,
  [7618] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(325), 1,
      sym_command_suffix,
  [7625] = 2,
    ACTIONS(989), 1,
      aux_sym_command_suffix_token1,
    STATE(326), 1,
      sym_command_suffix,
  [7632] = 2,
    ACTIONS(1007), 1,
      aux_sym_time_token1,
    ACTIONS(1009), 1,
      aux_sym_date_token1,
  [7639] = 1,
    ACTIONS(1011), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [7644] = 2,
    ACTIONS(1013), 1,
      aux_sym__name_token1,
    STATE(223), 1,
      sym__name,
  [7651] = 2,
    ACTIONS(985), 1,
      sym__local,
    ACTIONS(987), 1,
      sym__function,
  [7658] = 1,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [7662] = 1,
    ACTIONS(1017), 1,
      anon_sym_DASH,
  [7666] = 1,
    ACTIONS(1019), 1,
      anon_sym_DASH,
  [7670] = 1,
    ACTIONS(1021), 1,
      anon_sym_QMARK,
  [7674] = 1,
    ACTIONS(1023), 1,
      anon_sym_BANG,
  [7678] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [7682] = 1,
    ACTIONS(1027), 1,
      aux_sym_time_token1,
  [7686] = 1,
    ACTIONS(1029), 1,
      aux_sym_date_token1,
  [7690] = 1,
    ACTIONS(1029), 1,
      aux_sym_time_token1,
  [7694] = 1,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
  [7698] = 1,
    ACTIONS(1033), 1,
      anon_sym_COLON,
  [7702] = 1,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
  [7706] = 1,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
  [7710] = 1,
    ACTIONS(1039), 1,
      aux_sym_time_token1,
  [7714] = 1,
    ACTIONS(1041), 1,
      aux_sym_time_token1,
  [7718] = 1,
    ACTIONS(1043), 1,
      aux_sym_time_token1,
  [7722] = 1,
    ACTIONS(1045), 1,
      anon_sym_COLON,
  [7726] = 1,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
  [7730] = 1,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
  [7734] = 1,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
  [7738] = 1,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
  [7742] = 1,
    ACTIONS(1055), 1,
      anon_sym_DASH,
  [7746] = 1,
    ACTIONS(1057), 1,
      anon_sym_DASH,
  [7750] = 1,
    ACTIONS(1059), 1,
      anon_sym_COLON,
  [7754] = 1,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
  [7758] = 1,
    ACTIONS(1063), 1,
      aux_sym__name_token1,
  [7762] = 1,
    ACTIONS(1065), 1,
      aux_sym_time_token1,
  [7766] = 1,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
  [7770] = 1,
    ACTIONS(1069), 1,
      aux_sym__name_token1,
  [7774] = 1,
    ACTIONS(1071), 1,
      anon_sym_SLASH,
  [7778] = 1,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
  [7782] = 1,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
  [7786] = 1,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
  [7790] = 1,
    ACTIONS(1079), 1,
      anon_sym_LPAREN,
  [7794] = 1,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
  [7798] = 1,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [7802] = 1,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
  [7806] = 1,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
  [7810] = 1,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
  [7814] = 1,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
  [7818] = 1,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
  [7822] = 1,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
  [7826] = 1,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
  [7830] = 1,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
  [7834] = 1,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
  [7838] = 1,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
  [7842] = 1,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
  [7846] = 1,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
  [7850] = 1,
    ACTIONS(1109), 1,
      anon_sym_LPAREN,
  [7854] = 1,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
  [7858] = 1,
    ACTIONS(1113), 1,
      anon_sym_LPAREN,
  [7862] = 1,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
  [7866] = 1,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
  [7870] = 1,
    ACTIONS(809), 1,
      anon_sym_DOT,
  [7874] = 1,
    ACTIONS(1119), 1,
      anon_sym_DOT,
  [7878] = 1,
    ACTIONS(1121), 1,
      anon_sym_DOT,
  [7882] = 1,
    ACTIONS(1123), 1,
      sym__function,
  [7886] = 1,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
  [7890] = 1,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
  [7894] = 1,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
  [7898] = 1,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
  [7902] = 1,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
  [7906] = 1,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
  [7910] = 1,
    ACTIONS(1137), 1,
      anon_sym_LPAREN,
  [7914] = 1,
    ACTIONS(1139), 1,
      anon_sym_RBRACK,
  [7918] = 1,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
  [7922] = 1,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
  [7926] = 1,
    ACTIONS(1145), 1,
      anon_sym_QMARK,
  [7930] = 1,
    ACTIONS(1147), 1,
      anon_sym_BANG,
  [7934] = 1,
    ACTIONS(468), 1,
      anon_sym_DOT,
  [7938] = 1,
    ACTIONS(1149), 1,
      ts_builtin_sym_end,
  [7942] = 1,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
  [7946] = 1,
    ACTIONS(1153), 1,
      aux_sym__comment_token1,
  [7950] = 1,
    ACTIONS(1155), 1,
      aux_sym_comment_block_token1,
  [7954] = 1,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
  [7958] = 1,
    ACTIONS(1159), 1,
      aux_sym_time_token1,
  [7962] = 1,
    ACTIONS(1161), 1,
      aux_sym_date_token1,
  [7966] = 1,
    ACTIONS(1161), 1,
      aux_sym_time_token1,
  [7970] = 1,
    ACTIONS(1163), 1,
      anon_sym_COLON,
  [7974] = 1,
    ACTIONS(1165), 1,
      anon_sym_DASH,
  [7978] = 1,
    ACTIONS(1167), 1,
      anon_sym_DASH,
  [7982] = 1,
    ACTIONS(1169), 1,
      aux_sym_time_token1,
  [7986] = 1,
    ACTIONS(1171), 1,
      aux_sym_time_token1,
  [7990] = 1,
    ACTIONS(1173), 1,
      aux_sym_time_token1,
  [7994] = 1,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [7998] = 1,
    ACTIONS(1177), 1,
      anon_sym_DASH,
  [8002] = 1,
    ACTIONS(1179), 1,
      anon_sym_DASH,
  [8006] = 1,
    ACTIONS(1181), 1,
      aux_sym_time_token1,
  [8010] = 1,
    ACTIONS(1183), 1,
      aux_sym__name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 127,
  [SMALL_STATE(49)] = 254,
  [SMALL_STATE(50)] = 372,
  [SMALL_STATE(51)] = 436,
  [SMALL_STATE(52)] = 500,
  [SMALL_STATE(53)] = 611,
  [SMALL_STATE(54)] = 722,
  [SMALL_STATE(55)] = 833,
  [SMALL_STATE(56)] = 944,
  [SMALL_STATE(57)] = 1055,
  [SMALL_STATE(58)] = 1168,
  [SMALL_STATE(59)] = 1279,
  [SMALL_STATE(60)] = 1344,
  [SMALL_STATE(61)] = 1405,
  [SMALL_STATE(62)] = 1470,
  [SMALL_STATE(63)] = 1535,
  [SMALL_STATE(64)] = 1600,
  [SMALL_STATE(65)] = 1665,
  [SMALL_STATE(66)] = 1726,
  [SMALL_STATE(67)] = 1787,
  [SMALL_STATE(68)] = 1852,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1976,
  [SMALL_STATE(71)] = 2036,
  [SMALL_STATE(72)] = 2096,
  [SMALL_STATE(73)] = 2156,
  [SMALL_STATE(74)] = 2215,
  [SMALL_STATE(75)] = 2274,
  [SMALL_STATE(76)] = 2333,
  [SMALL_STATE(77)] = 2436,
  [SMALL_STATE(78)] = 2539,
  [SMALL_STATE(79)] = 2598,
  [SMALL_STATE(80)] = 2701,
  [SMALL_STATE(81)] = 2804,
  [SMALL_STATE(82)] = 2863,
  [SMALL_STATE(83)] = 2922,
  [SMALL_STATE(84)] = 2981,
  [SMALL_STATE(85)] = 3040,
  [SMALL_STATE(86)] = 3099,
  [SMALL_STATE(87)] = 3202,
  [SMALL_STATE(88)] = 3265,
  [SMALL_STATE(89)] = 3368,
  [SMALL_STATE(90)] = 3427,
  [SMALL_STATE(91)] = 3486,
  [SMALL_STATE(92)] = 3589,
  [SMALL_STATE(93)] = 3648,
  [SMALL_STATE(94)] = 3751,
  [SMALL_STATE(95)] = 3810,
  [SMALL_STATE(96)] = 3913,
  [SMALL_STATE(97)] = 3972,
  [SMALL_STATE(98)] = 4075,
  [SMALL_STATE(99)] = 4134,
  [SMALL_STATE(100)] = 4193,
  [SMALL_STATE(101)] = 4252,
  [SMALL_STATE(102)] = 4311,
  [SMALL_STATE(103)] = 4370,
  [SMALL_STATE(104)] = 4429,
  [SMALL_STATE(105)] = 4488,
  [SMALL_STATE(106)] = 4547,
  [SMALL_STATE(107)] = 4606,
  [SMALL_STATE(108)] = 4665,
  [SMALL_STATE(109)] = 4724,
  [SMALL_STATE(110)] = 4783,
  [SMALL_STATE(111)] = 4886,
  [SMALL_STATE(112)] = 4989,
  [SMALL_STATE(113)] = 5043,
  [SMALL_STATE(114)] = 5097,
  [SMALL_STATE(115)] = 5149,
  [SMALL_STATE(116)] = 5192,
  [SMALL_STATE(117)] = 5233,
  [SMALL_STATE(118)] = 5276,
  [SMALL_STATE(119)] = 5312,
  [SMALL_STATE(120)] = 5352,
  [SMALL_STATE(121)] = 5392,
  [SMALL_STATE(122)] = 5430,
  [SMALL_STATE(123)] = 5466,
  [SMALL_STATE(124)] = 5504,
  [SMALL_STATE(125)] = 5542,
  [SMALL_STATE(126)] = 5578,
  [SMALL_STATE(127)] = 5614,
  [SMALL_STATE(128)] = 5657,
  [SMALL_STATE(129)] = 5696,
  [SMALL_STATE(130)] = 5731,
  [SMALL_STATE(131)] = 5774,
  [SMALL_STATE(132)] = 5817,
  [SMALL_STATE(133)] = 5852,
  [SMALL_STATE(134)] = 5891,
  [SMALL_STATE(135)] = 5926,
  [SMALL_STATE(136)] = 5963,
  [SMALL_STATE(137)] = 5997,
  [SMALL_STATE(138)] = 6031,
  [SMALL_STATE(139)] = 6064,
  [SMALL_STATE(140)] = 6097,
  [SMALL_STATE(141)] = 6130,
  [SMALL_STATE(142)] = 6163,
  [SMALL_STATE(143)] = 6196,
  [SMALL_STATE(144)] = 6229,
  [SMALL_STATE(145)] = 6262,
  [SMALL_STATE(146)] = 6295,
  [SMALL_STATE(147)] = 6328,
  [SMALL_STATE(148)] = 6361,
  [SMALL_STATE(149)] = 6394,
  [SMALL_STATE(150)] = 6427,
  [SMALL_STATE(151)] = 6460,
  [SMALL_STATE(152)] = 6493,
  [SMALL_STATE(153)] = 6523,
  [SMALL_STATE(154)] = 6553,
  [SMALL_STATE(155)] = 6583,
  [SMALL_STATE(156)] = 6613,
  [SMALL_STATE(157)] = 6643,
  [SMALL_STATE(158)] = 6673,
  [SMALL_STATE(159)] = 6688,
  [SMALL_STATE(160)] = 6703,
  [SMALL_STATE(161)] = 6718,
  [SMALL_STATE(162)] = 6733,
  [SMALL_STATE(163)] = 6748,
  [SMALL_STATE(164)] = 6764,
  [SMALL_STATE(165)] = 6780,
  [SMALL_STATE(166)] = 6797,
  [SMALL_STATE(167)] = 6809,
  [SMALL_STATE(168)] = 6823,
  [SMALL_STATE(169)] = 6835,
  [SMALL_STATE(170)] = 6847,
  [SMALL_STATE(171)] = 6859,
  [SMALL_STATE(172)] = 6867,
  [SMALL_STATE(173)] = 6876,
  [SMALL_STATE(174)] = 6887,
  [SMALL_STATE(175)] = 6896,
  [SMALL_STATE(176)] = 6907,
  [SMALL_STATE(177)] = 6918,
  [SMALL_STATE(178)] = 6929,
  [SMALL_STATE(179)] = 6940,
  [SMALL_STATE(180)] = 6949,
  [SMALL_STATE(181)] = 6962,
  [SMALL_STATE(182)] = 6973,
  [SMALL_STATE(183)] = 6983,
  [SMALL_STATE(184)] = 6993,
  [SMALL_STATE(185)] = 7001,
  [SMALL_STATE(186)] = 7011,
  [SMALL_STATE(187)] = 7021,
  [SMALL_STATE(188)] = 7031,
  [SMALL_STATE(189)] = 7041,
  [SMALL_STATE(190)] = 7051,
  [SMALL_STATE(191)] = 7061,
  [SMALL_STATE(192)] = 7071,
  [SMALL_STATE(193)] = 7079,
  [SMALL_STATE(194)] = 7089,
  [SMALL_STATE(195)] = 7099,
  [SMALL_STATE(196)] = 7109,
  [SMALL_STATE(197)] = 7119,
  [SMALL_STATE(198)] = 7125,
  [SMALL_STATE(199)] = 7135,
  [SMALL_STATE(200)] = 7145,
  [SMALL_STATE(201)] = 7155,
  [SMALL_STATE(202)] = 7165,
  [SMALL_STATE(203)] = 7175,
  [SMALL_STATE(204)] = 7185,
  [SMALL_STATE(205)] = 7195,
  [SMALL_STATE(206)] = 7205,
  [SMALL_STATE(207)] = 7215,
  [SMALL_STATE(208)] = 7225,
  [SMALL_STATE(209)] = 7235,
  [SMALL_STATE(210)] = 7245,
  [SMALL_STATE(211)] = 7252,
  [SMALL_STATE(212)] = 7257,
  [SMALL_STATE(213)] = 7264,
  [SMALL_STATE(214)] = 7271,
  [SMALL_STATE(215)] = 7278,
  [SMALL_STATE(216)] = 7283,
  [SMALL_STATE(217)] = 7290,
  [SMALL_STATE(218)] = 7297,
  [SMALL_STATE(219)] = 7304,
  [SMALL_STATE(220)] = 7309,
  [SMALL_STATE(221)] = 7316,
  [SMALL_STATE(222)] = 7323,
  [SMALL_STATE(223)] = 7330,
  [SMALL_STATE(224)] = 7335,
  [SMALL_STATE(225)] = 7342,
  [SMALL_STATE(226)] = 7349,
  [SMALL_STATE(227)] = 7356,
  [SMALL_STATE(228)] = 7363,
  [SMALL_STATE(229)] = 7370,
  [SMALL_STATE(230)] = 7377,
  [SMALL_STATE(231)] = 7384,
  [SMALL_STATE(232)] = 7391,
  [SMALL_STATE(233)] = 7398,
  [SMALL_STATE(234)] = 7405,
  [SMALL_STATE(235)] = 7412,
  [SMALL_STATE(236)] = 7419,
  [SMALL_STATE(237)] = 7426,
  [SMALL_STATE(238)] = 7433,
  [SMALL_STATE(239)] = 7438,
  [SMALL_STATE(240)] = 7445,
  [SMALL_STATE(241)] = 7452,
  [SMALL_STATE(242)] = 7459,
  [SMALL_STATE(243)] = 7466,
  [SMALL_STATE(244)] = 7473,
  [SMALL_STATE(245)] = 7480,
  [SMALL_STATE(246)] = 7487,
  [SMALL_STATE(247)] = 7494,
  [SMALL_STATE(248)] = 7501,
  [SMALL_STATE(249)] = 7508,
  [SMALL_STATE(250)] = 7515,
  [SMALL_STATE(251)] = 7522,
  [SMALL_STATE(252)] = 7529,
  [SMALL_STATE(253)] = 7536,
  [SMALL_STATE(254)] = 7541,
  [SMALL_STATE(255)] = 7548,
  [SMALL_STATE(256)] = 7555,
  [SMALL_STATE(257)] = 7562,
  [SMALL_STATE(258)] = 7569,
  [SMALL_STATE(259)] = 7576,
  [SMALL_STATE(260)] = 7583,
  [SMALL_STATE(261)] = 7590,
  [SMALL_STATE(262)] = 7597,
  [SMALL_STATE(263)] = 7604,
  [SMALL_STATE(264)] = 7611,
  [SMALL_STATE(265)] = 7618,
  [SMALL_STATE(266)] = 7625,
  [SMALL_STATE(267)] = 7632,
  [SMALL_STATE(268)] = 7639,
  [SMALL_STATE(269)] = 7644,
  [SMALL_STATE(270)] = 7651,
  [SMALL_STATE(271)] = 7658,
  [SMALL_STATE(272)] = 7662,
  [SMALL_STATE(273)] = 7666,
  [SMALL_STATE(274)] = 7670,
  [SMALL_STATE(275)] = 7674,
  [SMALL_STATE(276)] = 7678,
  [SMALL_STATE(277)] = 7682,
  [SMALL_STATE(278)] = 7686,
  [SMALL_STATE(279)] = 7690,
  [SMALL_STATE(280)] = 7694,
  [SMALL_STATE(281)] = 7698,
  [SMALL_STATE(282)] = 7702,
  [SMALL_STATE(283)] = 7706,
  [SMALL_STATE(284)] = 7710,
  [SMALL_STATE(285)] = 7714,
  [SMALL_STATE(286)] = 7718,
  [SMALL_STATE(287)] = 7722,
  [SMALL_STATE(288)] = 7726,
  [SMALL_STATE(289)] = 7730,
  [SMALL_STATE(290)] = 7734,
  [SMALL_STATE(291)] = 7738,
  [SMALL_STATE(292)] = 7742,
  [SMALL_STATE(293)] = 7746,
  [SMALL_STATE(294)] = 7750,
  [SMALL_STATE(295)] = 7754,
  [SMALL_STATE(296)] = 7758,
  [SMALL_STATE(297)] = 7762,
  [SMALL_STATE(298)] = 7766,
  [SMALL_STATE(299)] = 7770,
  [SMALL_STATE(300)] = 7774,
  [SMALL_STATE(301)] = 7778,
  [SMALL_STATE(302)] = 7782,
  [SMALL_STATE(303)] = 7786,
  [SMALL_STATE(304)] = 7790,
  [SMALL_STATE(305)] = 7794,
  [SMALL_STATE(306)] = 7798,
  [SMALL_STATE(307)] = 7802,
  [SMALL_STATE(308)] = 7806,
  [SMALL_STATE(309)] = 7810,
  [SMALL_STATE(310)] = 7814,
  [SMALL_STATE(311)] = 7818,
  [SMALL_STATE(312)] = 7822,
  [SMALL_STATE(313)] = 7826,
  [SMALL_STATE(314)] = 7830,
  [SMALL_STATE(315)] = 7834,
  [SMALL_STATE(316)] = 7838,
  [SMALL_STATE(317)] = 7842,
  [SMALL_STATE(318)] = 7846,
  [SMALL_STATE(319)] = 7850,
  [SMALL_STATE(320)] = 7854,
  [SMALL_STATE(321)] = 7858,
  [SMALL_STATE(322)] = 7862,
  [SMALL_STATE(323)] = 7866,
  [SMALL_STATE(324)] = 7870,
  [SMALL_STATE(325)] = 7874,
  [SMALL_STATE(326)] = 7878,
  [SMALL_STATE(327)] = 7882,
  [SMALL_STATE(328)] = 7886,
  [SMALL_STATE(329)] = 7890,
  [SMALL_STATE(330)] = 7894,
  [SMALL_STATE(331)] = 7898,
  [SMALL_STATE(332)] = 7902,
  [SMALL_STATE(333)] = 7906,
  [SMALL_STATE(334)] = 7910,
  [SMALL_STATE(335)] = 7914,
  [SMALL_STATE(336)] = 7918,
  [SMALL_STATE(337)] = 7922,
  [SMALL_STATE(338)] = 7926,
  [SMALL_STATE(339)] = 7930,
  [SMALL_STATE(340)] = 7934,
  [SMALL_STATE(341)] = 7938,
  [SMALL_STATE(342)] = 7942,
  [SMALL_STATE(343)] = 7946,
  [SMALL_STATE(344)] = 7950,
  [SMALL_STATE(345)] = 7954,
  [SMALL_STATE(346)] = 7958,
  [SMALL_STATE(347)] = 7962,
  [SMALL_STATE(348)] = 7966,
  [SMALL_STATE(349)] = 7970,
  [SMALL_STATE(350)] = 7974,
  [SMALL_STATE(351)] = 7978,
  [SMALL_STATE(352)] = 7982,
  [SMALL_STATE(353)] = 7986,
  [SMALL_STATE(354)] = 7990,
  [SMALL_STATE(355)] = 7994,
  [SMALL_STATE(356)] = 7998,
  [SMALL_STATE(357)] = 8002,
  [SMALL_STATE(358)] = 8006,
  [SMALL_STATE(359)] = 8010,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(229),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(270),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(170),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(174),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(74),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(184),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(268),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(296),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(359),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(345),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(171),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(46),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(106),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(266),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(265),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(264),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(263),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(262),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(261),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(260),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(258),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(257),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(254),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(252),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(251),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(249),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(248),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(247),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(246),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(245),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(243),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(242),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(239),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(237),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(236),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(235),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(234),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(233),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(231),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(230),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(344),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(343),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(342),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(197),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(229),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(270),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(170),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(174),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(74),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(184),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(268),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(296),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(359),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(345),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(46),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(106),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(75),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(266),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(265),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(264),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(263),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(262),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(261),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(260),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(258),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(257),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(254),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(252),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(251),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(249),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(248),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(246),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(245),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(243),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(242),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(239),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(237),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(236),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(235),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(234),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(233),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(231),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(230),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(344),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(343),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(342),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(197),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(232),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(97),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(97),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal_block, 5),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_literal_block, 5),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_injection_block, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_injection_block, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 6),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 8),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 8),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(213),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(77),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(77),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(160),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_block_repeat1, 2),
  [880] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sql_block_repeat1, 2), SHIFT_REPEAT(181),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(178),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(173),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(241),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(198),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_sql, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(49),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(269),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_pointer, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_time, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_text, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_real, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_pointer, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_picture, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_object, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_longint, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_integer, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_date, 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_boolean, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_blob, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_variant, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_time, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_text, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_real, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_picture, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_object, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_date, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_collection, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_boolean, 2),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_blob, 2),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array, 1),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
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
