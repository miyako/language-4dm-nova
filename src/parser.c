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
#define STATE_COUNT 390
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 292
#define ALIAS_COUNT 0
#define TOKEN_COUNT 169
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
  anon_sym_LBRACE_RBRACE = 47,
  anon_sym_LBRACK_RBRACK = 48,
  aux_sym_time_token1 = 49,
  anon_sym_BANG = 50,
  aux_sym_date_token1 = 51,
  anon_sym_BANG00_DASH00_DASH00_BANG = 52,
  sym__hex_literal = 53,
  aux_sym__num_literal_token1 = 54,
  aux_sym__exp_literal_token1 = 55,
  anon_sym_DQUOTE = 56,
  anon_sym_BSLASHr = 57,
  anon_sym_BSLASHn = 58,
  anon_sym_BSLASH_DQUOTE = 59,
  anon_sym_BSLASHt = 60,
  anon_sym_BSLASH_BSLASH = 61,
  aux_sym_string_token1 = 62,
  sym__class_constructor = 63,
  sym__class_extends = 64,
  anon_sym_COLON_EQ = 65,
  sym__var = 66,
  sym__property = 67,
  sym__alias = 68,
  sym__declare = 69,
  sym__function = 70,
  sym__return = 71,
  sym__break = 72,
  sym__continue = 73,
  sym__this = 74,
  sym__form = 75,
  sym__super = 76,
  sym__class_store_4d = 77,
  sym__class_store_ds = 78,
  sym__class_store_cs = 79,
  sym__basic_type_text = 80,
  sym__basic_type_date = 81,
  sym__basic_type_time = 82,
  sym__basic_type_boolean = 83,
  sym__basic_type_integer = 84,
  sym__basic_type_real = 85,
  sym__basic_type_pointer = 86,
  sym__basic_type_picture = 87,
  sym__basic_type_blob = 88,
  sym__basic_type_collection = 89,
  sym__basic_type_variant = 90,
  sym__basic_type_object = 91,
  sym__system_variable_ok = 92,
  sym__system_variable_document = 93,
  sym__system_variable_flddelimit = 94,
  sym__system_variable_recdelimit = 95,
  sym__system_variable_error = 96,
  sym__system_variable_error_method = 97,
  sym__system_variable_error_line = 98,
  sym__system_variable_error_formula = 99,
  sym__system_variable_mousedown = 100,
  sym__system_variable_mousex = 101,
  sym__system_variable_mousey = 102,
  sym__system_variable_keycode = 103,
  sym__system_variable_modifiers = 104,
  sym__system_variable_mouseproc = 105,
  aux_sym__classic_compiler_blob_token1 = 106,
  aux_sym__classic_compiler_boolean_token1 = 107,
  aux_sym__classic_compiler_collection_token1 = 108,
  aux_sym__classic_compiler_date_token1 = 109,
  aux_sym__classic_compiler_longint_token1 = 110,
  aux_sym__classic_compiler_object_token1 = 111,
  aux_sym__classic_compiler_picture_token1 = 112,
  aux_sym__classic_compiler_pointer_token1 = 113,
  aux_sym__classic_compiler_real_token1 = 114,
  aux_sym__classic_compiler_text_token1 = 115,
  aux_sym__classic_compiler_time_token1 = 116,
  aux_sym__classic_compiler_variant_token1 = 117,
  aux_sym__classic_array_blob_token1 = 118,
  aux_sym__classic_array_boolean_token1 = 119,
  aux_sym__classic_array_date_token1 = 120,
  aux_sym__classic_array_integer_token1 = 121,
  aux_sym__classic_array_longint_token1 = 122,
  aux_sym__classic_array_object_token1 = 123,
  aux_sym__classic_array_picture_token1 = 124,
  aux_sym__classic_array_pointer_token1 = 125,
  aux_sym__classic_array_real_token1 = 126,
  aux_sym__classic_array_text_token1 = 127,
  aux_sym__classic_array_time_token1 = 128,
  aux_sym_command_suffix_token1 = 129,
  anon_sym_SLASH_STAR = 130,
  aux_sym_comment_block_token1 = 131,
  anon_sym_SLASH_SLASH = 132,
  aux_sym__comment_token1 = 133,
  sym__if_e = 134,
  sym__if_f = 135,
  sym__else_e = 136,
  sym__else_f = 137,
  sym__end_if_e = 138,
  sym__end_if_f = 139,
  sym__for_each_e = 140,
  sym__for_each_f = 141,
  sym__end_for_each_e = 142,
  sym__end_for_each_f = 143,
  sym__while_e = 144,
  sym__while_f = 145,
  sym__end_while_e = 146,
  sym__end_while_f = 147,
  sym__repeat_e = 148,
  sym__repeat_f = 149,
  sym__until_e = 150,
  sym__until_f = 151,
  sym__for_e = 152,
  sym__for_f = 153,
  sym__end_for_e = 154,
  sym__end_for_f = 155,
  sym__use_e = 156,
  sym__use_f = 157,
  sym__end_use_e = 158,
  sym__end_use_f = 159,
  sym__case_of_e = 160,
  sym__case_of_f = 161,
  sym__end_case_e = 162,
  sym__end_case_f = 163,
  sym__begin_sql_e = 164,
  sym__begin_sql_f = 165,
  sym__end_sql_e = 166,
  sym__end_sql_f = 167,
  aux_sym_sql_block_token1 = 168,
  sym_source = 169,
  sym__statement = 170,
  sym__computed = 171,
  sym__scope = 172,
  sym__name = 173,
  sym__classic_name = 174,
  sym_function_name = 175,
  sym__function_argument = 176,
  sym_function_arguments = 177,
  sym_function_result = 178,
  sym_alias_name = 179,
  sym__binary_operator = 180,
  sym_class = 181,
  sym_local_variable = 182,
  sym_interprocess_variable = 183,
  sym_numeric_parameter = 184,
  sym__variable = 185,
  sym__mutable = 186,
  sym__immutable = 187,
  sym_class_function = 188,
  sym_generic_function = 189,
  sym__function_parameter = 190,
  sym__functional_expression = 191,
  sym__function_call = 192,
  sym__single_condition = 193,
  sym__condition = 194,
  sym_ternary_block = 195,
  sym_object_literal_block = 196,
  sym_collection_literal_block = 197,
  sym_time = 198,
  sym_date = 199,
  sym__dec_literal = 200,
  sym__num_literal = 201,
  sym__exp_literal = 202,
  sym_number = 203,
  sym_string = 204,
  sym_constant = 205,
  sym_function_block = 206,
  sym_declare_block = 207,
  sym_alias_block = 208,
  sym_class_extends = 209,
  sym_class_constructor = 210,
  sym_var_declaration_block = 211,
  sym_classic_compiler_block = 212,
  sym_classic_array_block = 213,
  sym_property_declaration_block = 214,
  sym_return_block = 215,
  sym_assignment_block = 216,
  sym_function_call = 217,
  sym_var = 218,
  sym_property = 219,
  sym_alias = 220,
  sym_declare = 221,
  sym_function = 222,
  sym_return = 223,
  sym_break = 224,
  sym_continue = 225,
  sym_this = 226,
  sym_form = 227,
  sym_super = 228,
  sym__class_store = 229,
  sym__class = 230,
  sym__basic_type = 231,
  sym_system_variable = 232,
  sym__classic_compiler_blob = 233,
  sym__classic_compiler_boolean = 234,
  sym__classic_compiler_collection = 235,
  sym__classic_compiler_date = 236,
  sym__classic_compiler_longint = 237,
  sym__classic_compiler_object = 238,
  sym__classic_compiler_picture = 239,
  sym__classic_compiler_pointer = 240,
  sym__classic_compiler_real = 241,
  sym__classic_compiler_text = 242,
  sym__classic_compiler_time = 243,
  sym__classic_compiler_variant = 244,
  sym_classic_compiler = 245,
  sym__classic_array_blob = 246,
  sym__classic_array_boolean = 247,
  sym__classic_array_date = 248,
  sym__classic_array_integer = 249,
  sym__classic_array_longint = 250,
  sym__classic_array_object = 251,
  sym__classic_array_picture = 252,
  sym__classic_array_pointer = 253,
  sym__classic_array_real = 254,
  sym__classic_array_text = 255,
  sym__classic_array_time = 256,
  sym_classic_array = 257,
  sym_command_suffix = 258,
  sym_comment_block = 259,
  sym__comment = 260,
  sym_comment = 261,
  sym_if = 262,
  sym_else = 263,
  sym_end_if = 264,
  sym__if = 265,
  sym_if_block = 266,
  sym_while = 267,
  sym_end_while = 268,
  sym__while = 269,
  sym_while_block = 270,
  sym_repeat = 271,
  sym_until = 272,
  sym__until = 273,
  sym_repeat_block = 274,
  sym_begin_sql = 275,
  sym_end_sql = 276,
  sym_sql_block = 277,
  sym_sql_injection_block = 278,
  aux_sym_source_repeat1 = 279,
  aux_sym__function_argument_repeat1 = 280,
  aux_sym_function_arguments_repeat1 = 281,
  aux_sym__mutable_repeat1 = 282,
  aux_sym__functional_expression_repeat1 = 283,
  aux_sym__condition_repeat1 = 284,
  aux_sym_collection_literal_block_repeat1 = 285,
  aux_sym_string_repeat1 = 286,
  aux_sym_var_declaration_block_repeat1 = 287,
  aux_sym_classic_compiler_block_repeat1 = 288,
  aux_sym_property_declaration_block_repeat1 = 289,
  aux_sym_if_block_repeat1 = 290,
  aux_sym_sql_block_repeat1 = 291,
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
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LBRACK_RBRACK] = "[]",
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
  [sym__end_while_e] = "_end_while_e",
  [sym__end_while_f] = "_end_while_f",
  [sym__repeat_e] = "_repeat_e",
  [sym__repeat_f] = "_repeat_f",
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
  [sym_collection_literal_block] = "collection_literal_block",
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
  [sym_while] = "while",
  [sym_end_while] = "end_while",
  [sym__while] = "_while",
  [sym_while_block] = "while_block",
  [sym_repeat] = "repeat",
  [sym_until] = "until",
  [sym__until] = "_until",
  [sym_repeat_block] = "repeat_block",
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
  [aux_sym_collection_literal_block_repeat1] = "collection_literal_block_repeat1",
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
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
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
  [sym__end_while_e] = sym__end_while_e,
  [sym__end_while_f] = sym__end_while_f,
  [sym__repeat_e] = sym__repeat_e,
  [sym__repeat_f] = sym__repeat_f,
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
  [sym_collection_literal_block] = sym_collection_literal_block,
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
  [sym_while] = sym_while,
  [sym_end_while] = sym_end_while,
  [sym__while] = sym__while,
  [sym_while_block] = sym_while_block,
  [sym_repeat] = sym_repeat,
  [sym_until] = sym_until,
  [sym__until] = sym__until,
  [sym_repeat_block] = sym_repeat_block,
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
  [aux_sym_collection_literal_block_repeat1] = aux_sym_collection_literal_block_repeat1,
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
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
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
  [sym__end_while_e] = {
    .visible = false,
    .named = true,
  },
  [sym__end_while_f] = {
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
  [sym_collection_literal_block] = {
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
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_end_while] = {
    .visible = true,
    .named = true,
  },
  [sym__while] = {
    .visible = false,
    .named = true,
  },
  [sym_while_block] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_until] = {
    .visible = true,
    .named = true,
  },
  [sym__until] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat_block] = {
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
  [aux_sym_collection_literal_block_repeat1] = {
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
      if (eof) ADVANCE(512);
      if (lookahead == '!') ADVANCE(618);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(589);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '&') ADVANCE(579);
      if (lookahead == '(') ADVANCE(567);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '-') ADVANCE(572);
      if (lookahead == '.') ADVANCE(608);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '0') ADVANCE(604);
      if (lookahead == '4') ADVANCE(606);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == ';') ADVANCE(564);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '=') ADVANCE(587);
      if (lookahead == '>') ADVANCE(586);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(529);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(543);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(530);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(537);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(544);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(527);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(535);
      if (lookahead == '[') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(611);
      if (lookahead == '^') ADVANCE(581);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '|') ADVANCE(580);
      if (lookahead == '}') ADVANCE(602);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(605);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(523);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(747);
      if (lookahead != 0) ADVANCE(757);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(563);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(430);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(424);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(376);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(431);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(622);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '\\') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(588);
      if (lookahead == '&') ADVANCE(579);
      if (lookahead == '(') ADVANCE(567);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '.') ADVANCE(608);
      if (lookahead == '/') ADVANCE(576);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == ';') ADVANCE(564);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '=') ADVANCE(587);
      if (lookahead == '>') ADVANCE(586);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      if (lookahead == '[') ADVANCE(609);
      if (lookahead == ']') ADVANCE(611);
      if (lookahead == '^') ADVANCE(581);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead == '|') ADVANCE(580);
      if (lookahead == '}') ADVANCE(602);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(703);
      if (lookahead == '/') ADVANCE(705);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(704);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
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
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(637);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(569);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(506);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(582);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(660);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(678);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(690);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(286);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(339);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(673);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(674);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(712);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(734);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(558);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(716);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 256:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(193);
      END_STATE();
    case 257:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(196);
      END_STATE();
    case 258:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(197);
      END_STATE();
    case 259:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(664);
      END_STATE();
    case 260:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(644);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(367);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(367);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 292:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 293:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 294:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 365:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 366:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      END_STATE();
    case 367:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 368:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 369:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 370:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 371:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(481);
      END_STATE();
    case 372:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(268);
      END_STATE();
    case 373:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      END_STATE();
    case 374:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(270);
      END_STATE();
    case 375:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(271);
      END_STATE();
    case 376:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(483);
      END_STATE();
    case 377:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(484);
      END_STATE();
    case 378:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(485);
      END_STATE();
    case 379:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(486);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 381:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 382:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 383:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 385:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 387:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 388:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 389:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 391:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 392:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 393:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 395:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 396:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 397:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 398:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 400:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 411:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 412:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      END_STATE();
    case 416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      END_STATE();
    case 419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(5);
      END_STATE();
    case 423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      END_STATE();
    case 425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 434:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 435:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      END_STATE();
    case 436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(687);
      END_STATE();
    case 438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      END_STATE();
    case 441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      END_STATE();
    case 445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      END_STATE();
    case 446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      END_STATE();
    case 447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      END_STATE();
    case 448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      END_STATE();
    case 449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      END_STATE();
    case 450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      END_STATE();
    case 453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 475:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 476:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 478:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 479:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 480:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 481:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 482:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 483:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 484:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 485:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 486:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 487:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 488:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 489:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 490:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 491:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 492:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(308);
      END_STATE();
    case 493:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(436);
      END_STATE();
    case 494:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 495:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(444);
      END_STATE();
    case 496:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(460);
      END_STATE();
    case 497:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 498:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(521);
      END_STATE();
    case 499:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(639);
      END_STATE();
    case 500:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 501:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 502:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(502)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(545);
      END_STATE();
    case 503:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 504:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 505:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 506:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 507:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 508:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(623);
      END_STATE();
    case 509:
      if (eof) ADVANCE(512);
      if (lookahead == '!') ADVANCE(618);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '*') ADVANCE(573);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(608);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(604);
      if (lookahead == '4') ADVANCE(606);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == ';') ADVANCE(564);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '>') ADVANCE(585);
      if (lookahead == '?') ADVANCE(612);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(238);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(476);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '[') ADVANCE(610);
      if (lookahead == ']') ADVANCE(611);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '}') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 510:
      if (eof) ADVANCE(512);
      if (lookahead == '!') ADVANCE(617);
      if (lookahead == '#') ADVANCE(589);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '&') ADVANCE(579);
      if (lookahead == '(') ADVANCE(567);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '.') ADVANCE(608);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '4') ADVANCE(110);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == ';') ADVANCE(564);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '=') ADVANCE(587);
      if (lookahead == '>') ADVANCE(586);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(476);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == ']') ADVANCE(611);
      if (lookahead == '^') ADVANCE(581);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead == '|') ADVANCE(580);
      if (lookahead == '}') ADVANCE(602);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      END_STATE();
    case 511:
      if (eof) ADVANCE(512);
      if (lookahead == '#') ADVANCE(589);
      if (lookahead == '$') ADVANCE(599);
      if (lookahead == '&') ADVANCE(579);
      if (lookahead == '(') ADVANCE(567);
      if (lookahead == ')') ADVANCE(568);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(570);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '.') ADVANCE(608);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '4') ADVANCE(111);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(564);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '=') ADVANCE(587);
      if (lookahead == '>') ADVANCE(586);
      if (lookahead == '?') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(476);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '[') ADVANCE(609);
      if (lookahead == ']') ADVANCE(611);
      if (lookahead == '^') ADVANCE(581);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead == '|') ADVANCE(580);
      if (lookahead == '}') ADVANCE(602);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(367);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(637);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(595);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(596);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(569);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(703);
      if (lookahead == '/') ADVANCE(705);
      if (lookahead == '=') ADVANCE(598);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(598);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(577);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(578);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(590);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(590);
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(591);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(614);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(503);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(615);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(593);
      if (lookahead == '-') ADVANCE(594);
      if (lookahead == '?') ADVANCE(592);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(30);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__classic_compiler_blob_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__classic_compiler_boolean_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__classic_compiler_collection_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__classic_compiler_date_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__classic_compiler_object_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__classic_compiler_picture_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__classic_compiler_pointer_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__classic_compiler_real_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__classic_compiler_text_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__classic_compiler_time_token1);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__classic_compiler_variant_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__classic_array_blob_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__classic_array_boolean_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__classic_array_date_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__classic_array_integer_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__classic_array_longint_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__classic_array_object_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__classic_array_picture_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__classic_array_pointer_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__classic_array_real_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__classic_array_text_token1);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__classic_array_time_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_comment_block_token1);
      if (lookahead == '*') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(26);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__for_each_e);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__for_each_f);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__end_for_each_e);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__while_e);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__end_while_e);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__end_while_f);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__for_e);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__for_f);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__end_for_e);
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__use_e);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__use_f);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__end_use_e);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__end_use_f);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__end_sql_e);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__end_sql_f);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == ' ') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == ' ') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_sql_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 509},
  [2] = {.lex_state = 509},
  [3] = {.lex_state = 509},
  [4] = {.lex_state = 509},
  [5] = {.lex_state = 509},
  [6] = {.lex_state = 509},
  [7] = {.lex_state = 509},
  [8] = {.lex_state = 509},
  [9] = {.lex_state = 509},
  [10] = {.lex_state = 509},
  [11] = {.lex_state = 509},
  [12] = {.lex_state = 509},
  [13] = {.lex_state = 510},
  [14] = {.lex_state = 511},
  [15] = {.lex_state = 510},
  [16] = {.lex_state = 511},
  [17] = {.lex_state = 511},
  [18] = {.lex_state = 511},
  [19] = {.lex_state = 510},
  [20] = {.lex_state = 510},
  [21] = {.lex_state = 510},
  [22] = {.lex_state = 511},
  [23] = {.lex_state = 511},
  [24] = {.lex_state = 511},
  [25] = {.lex_state = 510},
  [26] = {.lex_state = 511},
  [27] = {.lex_state = 511},
  [28] = {.lex_state = 511},
  [29] = {.lex_state = 511},
  [30] = {.lex_state = 510},
  [31] = {.lex_state = 511},
  [32] = {.lex_state = 510},
  [33] = {.lex_state = 510},
  [34] = {.lex_state = 510},
  [35] = {.lex_state = 510},
  [36] = {.lex_state = 510},
  [37] = {.lex_state = 510},
  [38] = {.lex_state = 510},
  [39] = {.lex_state = 510},
  [40] = {.lex_state = 510},
  [41] = {.lex_state = 510},
  [42] = {.lex_state = 510},
  [43] = {.lex_state = 510},
  [44] = {.lex_state = 510},
  [45] = {.lex_state = 510},
  [46] = {.lex_state = 510},
  [47] = {.lex_state = 510},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 510},
  [50] = {.lex_state = 509},
  [51] = {.lex_state = 509},
  [52] = {.lex_state = 509},
  [53] = {.lex_state = 509},
  [54] = {.lex_state = 509},
  [55] = {.lex_state = 509},
  [56] = {.lex_state = 509},
  [57] = {.lex_state = 509},
  [58] = {.lex_state = 509},
  [59] = {.lex_state = 509},
  [60] = {.lex_state = 509},
  [61] = {.lex_state = 509},
  [62] = {.lex_state = 509},
  [63] = {.lex_state = 509},
  [64] = {.lex_state = 509},
  [65] = {.lex_state = 509},
  [66] = {.lex_state = 509},
  [67] = {.lex_state = 509},
  [68] = {.lex_state = 509},
  [69] = {.lex_state = 509},
  [70] = {.lex_state = 509},
  [71] = {.lex_state = 509},
  [72] = {.lex_state = 509},
  [73] = {.lex_state = 509},
  [74] = {.lex_state = 509},
  [75] = {.lex_state = 509},
  [76] = {.lex_state = 509},
  [77] = {.lex_state = 509},
  [78] = {.lex_state = 509},
  [79] = {.lex_state = 509},
  [80] = {.lex_state = 509},
  [81] = {.lex_state = 509},
  [82] = {.lex_state = 509},
  [83] = {.lex_state = 509},
  [84] = {.lex_state = 509},
  [85] = {.lex_state = 509},
  [86] = {.lex_state = 509},
  [87] = {.lex_state = 509},
  [88] = {.lex_state = 509},
  [89] = {.lex_state = 509},
  [90] = {.lex_state = 509},
  [91] = {.lex_state = 509},
  [92] = {.lex_state = 509},
  [93] = {.lex_state = 509},
  [94] = {.lex_state = 509},
  [95] = {.lex_state = 509},
  [96] = {.lex_state = 509},
  [97] = {.lex_state = 509},
  [98] = {.lex_state = 509},
  [99] = {.lex_state = 509},
  [100] = {.lex_state = 509},
  [101] = {.lex_state = 509},
  [102] = {.lex_state = 509},
  [103] = {.lex_state = 509},
  [104] = {.lex_state = 509},
  [105] = {.lex_state = 509},
  [106] = {.lex_state = 509},
  [107] = {.lex_state = 509},
  [108] = {.lex_state = 509},
  [109] = {.lex_state = 509},
  [110] = {.lex_state = 509},
  [111] = {.lex_state = 509},
  [112] = {.lex_state = 509},
  [113] = {.lex_state = 509},
  [114] = {.lex_state = 509},
  [115] = {.lex_state = 509},
  [116] = {.lex_state = 509},
  [117] = {.lex_state = 509},
  [118] = {.lex_state = 509},
  [119] = {.lex_state = 509},
  [120] = {.lex_state = 509},
  [121] = {.lex_state = 509},
  [122] = {.lex_state = 509},
  [123] = {.lex_state = 509},
  [124] = {.lex_state = 509},
  [125] = {.lex_state = 509},
  [126] = {.lex_state = 509},
  [127] = {.lex_state = 509},
  [128] = {.lex_state = 509},
  [129] = {.lex_state = 509},
  [130] = {.lex_state = 509},
  [131] = {.lex_state = 509},
  [132] = {.lex_state = 509},
  [133] = {.lex_state = 509},
  [134] = {.lex_state = 509},
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
  [158] = {.lex_state = 22},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 22},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 22},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 22},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 22},
  [172] = {.lex_state = 22},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 207},
  [184] = {.lex_state = 207},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 502},
  [187] = {.lex_state = 207},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 502},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 23},
  [192] = {.lex_state = 502},
  [193] = {.lex_state = 23},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 23},
  [196] = {.lex_state = 509},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 502},
  [199] = {.lex_state = 23},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 502},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 35},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 509},
  [213] = {.lex_state = 511},
  [214] = {.lex_state = 509},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 509},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 509},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 509},
  [222] = {.lex_state = 509},
  [223] = {.lex_state = 509},
  [224] = {.lex_state = 509},
  [225] = {.lex_state = 509},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 509},
  [229] = {.lex_state = 509},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 509},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 509},
  [237] = {.lex_state = 509},
  [238] = {.lex_state = 510},
  [239] = {.lex_state = 509},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 701},
  [244] = {.lex_state = 509},
  [245] = {.lex_state = 509},
  [246] = {.lex_state = 509},
  [247] = {.lex_state = 701},
  [248] = {.lex_state = 701},
  [249] = {.lex_state = 510},
  [250] = {.lex_state = 701},
  [251] = {.lex_state = 701},
  [252] = {.lex_state = 701},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 23},
  [255] = {.lex_state = 701},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 509},
  [259] = {.lex_state = 701},
  [260] = {.lex_state = 701},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 509},
  [264] = {.lex_state = 509},
  [265] = {.lex_state = 701},
  [266] = {.lex_state = 701},
  [267] = {.lex_state = 23},
  [268] = {.lex_state = 701},
  [269] = {.lex_state = 701},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 701},
  [272] = {.lex_state = 701},
  [273] = {.lex_state = 701},
  [274] = {.lex_state = 701},
  [275] = {.lex_state = 701},
  [276] = {.lex_state = 701},
  [277] = {.lex_state = 509},
  [278] = {.lex_state = 701},
  [279] = {.lex_state = 701},
  [280] = {.lex_state = 701},
  [281] = {.lex_state = 701},
  [282] = {.lex_state = 701},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 701},
  [285] = {.lex_state = 701},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 701},
  [288] = {.lex_state = 701},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 509},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 509},
  [305] = {.lex_state = 510},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 509},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 511},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 510},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 706},
  [332] = {.lex_state = 25},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 510},
  [339] = {.lex_state = 510},
  [340] = {.lex_state = 509},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 510},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 22},
  [349] = {.lex_state = 23},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 510},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 509},
  [360] = {.lex_state = 510},
  [361] = {.lex_state = 510},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 510},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 510},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 509},
  [369] = {.lex_state = 510},
  [370] = {.lex_state = 510},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 23},
  [373] = {.lex_state = 23},
  [374] = {.lex_state = 509},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 510},
  [377] = {.lex_state = 511},
  [378] = {.lex_state = 510},
  [379] = {.lex_state = 509},
  [380] = {.lex_state = 510},
  [381] = {.lex_state = 510},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 510},
  [384] = {.lex_state = 510},
  [385] = {.lex_state = 509},
  [386] = {.lex_state = 510},
  [387] = {.lex_state = 510},
  [388] = {.lex_state = 510},
  [389] = {.lex_state = 0},
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
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
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
    [sym__end_while_e] = ACTIONS(1),
    [sym__end_while_f] = ACTIONS(1),
    [sym__repeat_e] = ACTIONS(1),
    [sym__repeat_f] = ACTIONS(1),
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
    [sym_source] = STATE(328),
    [sym__statement] = STATE(10),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(10),
    [sym_declare_block] = STATE(10),
    [sym_alias_block] = STATE(10),
    [sym_class_extends] = STATE(10),
    [sym_class_constructor] = STATE(10),
    [sym_var_declaration_block] = STATE(10),
    [sym_classic_compiler_block] = STATE(10),
    [sym_classic_array_block] = STATE(10),
    [sym_property_declaration_block] = STATE(10),
    [sym_return_block] = STATE(10),
    [sym_assignment_block] = STATE(10),
    [sym_function_call] = STATE(10),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(10),
    [sym_continue] = STATE(10),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(10),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(10),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(10),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(10),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
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
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
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
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(2),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(2),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(2),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym__local] = ACTIONS(101),
    [sym__exposed] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(110),
    [sym__class_constructor] = ACTIONS(113),
    [sym__class_extends] = ACTIONS(116),
    [sym__var] = ACTIONS(119),
    [sym__property] = ACTIONS(122),
    [sym__alias] = ACTIONS(125),
    [sym__declare] = ACTIONS(128),
    [sym__function] = ACTIONS(131),
    [sym__return] = ACTIONS(134),
    [sym__break] = ACTIONS(137),
    [sym__continue] = ACTIONS(140),
    [sym__this] = ACTIONS(143),
    [sym__form] = ACTIONS(146),
    [sym__super] = ACTIONS(149),
    [sym__class_store_4d] = ACTIONS(152),
    [sym__class_store_ds] = ACTIONS(152),
    [sym__class_store_cs] = ACTIONS(152),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(155),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(158),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(161),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(164),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(167),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(170),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(173),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(176),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(179),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(182),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(185),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(188),
    [aux_sym__classic_array_blob_token1] = ACTIONS(191),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(194),
    [aux_sym__classic_array_date_token1] = ACTIONS(197),
    [aux_sym__classic_array_integer_token1] = ACTIONS(200),
    [aux_sym__classic_array_longint_token1] = ACTIONS(203),
    [aux_sym__classic_array_object_token1] = ACTIONS(206),
    [aux_sym__classic_array_picture_token1] = ACTIONS(209),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(212),
    [aux_sym__classic_array_real_token1] = ACTIONS(215),
    [aux_sym__classic_array_text_token1] = ACTIONS(218),
    [aux_sym__classic_array_time_token1] = ACTIONS(221),
    [anon_sym_SLASH_STAR] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [sym__if_e] = ACTIONS(230),
    [sym__if_f] = ACTIONS(230),
    [sym__while_e] = ACTIONS(233),
    [sym__while_f] = ACTIONS(233),
    [sym__end_while_e] = ACTIONS(99),
    [sym__end_while_f] = ACTIONS(99),
    [sym__repeat_e] = ACTIONS(236),
    [sym__repeat_f] = ACTIONS(236),
    [sym__until_e] = ACTIONS(99),
    [sym__until_f] = ACTIONS(99),
    [sym__begin_sql_e] = ACTIONS(239),
    [sym__begin_sql_f] = ACTIONS(239),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(4),
    [sym_declare_block] = STATE(4),
    [sym_alias_block] = STATE(4),
    [sym_class_extends] = STATE(4),
    [sym_class_constructor] = STATE(4),
    [sym_var_declaration_block] = STATE(4),
    [sym_classic_compiler_block] = STATE(4),
    [sym_classic_array_block] = STATE(4),
    [sym_property_declaration_block] = STATE(4),
    [sym_return_block] = STATE(4),
    [sym_assignment_block] = STATE(4),
    [sym_function_call] = STATE(4),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(4),
    [sym_continue] = STATE(4),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(4),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(4),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(4),
    [sym_repeat] = STATE(3),
    [sym_until] = STATE(355),
    [sym__until] = STATE(91),
    [sym_repeat_block] = STATE(4),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
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
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__until_e] = ACTIONS(242),
    [sym__until_f] = ACTIONS(242),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
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
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(2),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(2),
    [sym_repeat] = STATE(3),
    [sym_until] = STATE(355),
    [sym__until] = STATE(100),
    [sym_repeat_block] = STATE(2),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(2),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__until_e] = ACTIONS(242),
    [sym__until_f] = ACTIONS(242),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [5] = {
    [sym__statement] = STATE(117),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(117),
    [sym_declare_block] = STATE(117),
    [sym_alias_block] = STATE(117),
    [sym_class_extends] = STATE(117),
    [sym_class_constructor] = STATE(117),
    [sym_var_declaration_block] = STATE(117),
    [sym_classic_compiler_block] = STATE(117),
    [sym_classic_array_block] = STATE(117),
    [sym_property_declaration_block] = STATE(117),
    [sym_return_block] = STATE(117),
    [sym_assignment_block] = STATE(117),
    [sym_function_call] = STATE(117),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(117),
    [sym_continue] = STATE(117),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(117),
    [sym_if] = STATE(313),
    [sym_end_if] = STATE(99),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(117),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(117),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(117),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(117),
    [aux_sym_if_block_repeat1] = STATE(6),
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
    [sym__end_if_e] = ACTIONS(244),
    [sym__end_if_f] = ACTIONS(244),
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [6] = {
    [sym__statement] = STATE(117),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(117),
    [sym_declare_block] = STATE(117),
    [sym_alias_block] = STATE(117),
    [sym_class_extends] = STATE(117),
    [sym_class_constructor] = STATE(117),
    [sym_var_declaration_block] = STATE(117),
    [sym_classic_compiler_block] = STATE(117),
    [sym_classic_array_block] = STATE(117),
    [sym_property_declaration_block] = STATE(117),
    [sym_return_block] = STATE(117),
    [sym_assignment_block] = STATE(117),
    [sym_function_call] = STATE(117),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(117),
    [sym_continue] = STATE(117),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(117),
    [sym_if] = STATE(313),
    [sym_end_if] = STATE(78),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(117),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(117),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(117),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(117),
    [aux_sym_if_block_repeat1] = STATE(9),
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
    [sym__end_if_e] = ACTIONS(244),
    [sym__end_if_f] = ACTIONS(244),
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [7] = {
    [sym__statement] = STATE(8),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
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
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(8),
    [sym_continue] = STATE(8),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(8),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(8),
    [sym_while] = STATE(312),
    [sym_end_while] = STATE(92),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(8),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(8),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
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
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__end_while_e] = ACTIONS(246),
    [sym__end_while_f] = ACTIONS(246),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
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
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(2),
    [sym_while] = STATE(312),
    [sym_end_while] = STATE(76),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(2),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(2),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(2),
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
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [sym__if_e] = ACTIONS(91),
    [sym__if_f] = ACTIONS(91),
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__end_while_e] = ACTIONS(246),
    [sym__end_while_f] = ACTIONS(246),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [9] = {
    [sym__statement] = STATE(117),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(117),
    [sym_declare_block] = STATE(117),
    [sym_alias_block] = STATE(117),
    [sym_class_extends] = STATE(117),
    [sym_class_constructor] = STATE(117),
    [sym_var_declaration_block] = STATE(117),
    [sym_classic_compiler_block] = STATE(117),
    [sym_classic_array_block] = STATE(117),
    [sym_property_declaration_block] = STATE(117),
    [sym_return_block] = STATE(117),
    [sym_assignment_block] = STATE(117),
    [sym_function_call] = STATE(117),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(117),
    [sym_continue] = STATE(117),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(117),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(117),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(117),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(117),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(117),
    [aux_sym_if_block_repeat1] = STATE(9),
    [sym__local] = ACTIONS(248),
    [sym__exposed] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(254),
    [anon_sym_LT_GT] = ACTIONS(257),
    [sym__class_constructor] = ACTIONS(260),
    [sym__class_extends] = ACTIONS(263),
    [sym__var] = ACTIONS(266),
    [sym__property] = ACTIONS(269),
    [sym__alias] = ACTIONS(272),
    [sym__declare] = ACTIONS(275),
    [sym__function] = ACTIONS(278),
    [sym__return] = ACTIONS(281),
    [sym__break] = ACTIONS(284),
    [sym__continue] = ACTIONS(287),
    [sym__this] = ACTIONS(290),
    [sym__form] = ACTIONS(293),
    [sym__super] = ACTIONS(296),
    [sym__class_store_4d] = ACTIONS(299),
    [sym__class_store_ds] = ACTIONS(299),
    [sym__class_store_cs] = ACTIONS(299),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(302),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(305),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(308),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(311),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(314),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(320),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(323),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(326),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(329),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(332),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(335),
    [aux_sym__classic_array_blob_token1] = ACTIONS(338),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(341),
    [aux_sym__classic_array_date_token1] = ACTIONS(344),
    [aux_sym__classic_array_integer_token1] = ACTIONS(347),
    [aux_sym__classic_array_longint_token1] = ACTIONS(350),
    [aux_sym__classic_array_object_token1] = ACTIONS(353),
    [aux_sym__classic_array_picture_token1] = ACTIONS(356),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(359),
    [aux_sym__classic_array_real_token1] = ACTIONS(362),
    [aux_sym__classic_array_text_token1] = ACTIONS(365),
    [aux_sym__classic_array_time_token1] = ACTIONS(368),
    [anon_sym_SLASH_STAR] = ACTIONS(371),
    [anon_sym_SLASH_SLASH] = ACTIONS(374),
    [sym__if_e] = ACTIONS(377),
    [sym__if_f] = ACTIONS(377),
    [sym__end_if_e] = ACTIONS(380),
    [sym__end_if_f] = ACTIONS(380),
    [sym__while_e] = ACTIONS(382),
    [sym__while_f] = ACTIONS(382),
    [sym__repeat_e] = ACTIONS(385),
    [sym__repeat_f] = ACTIONS(385),
    [sym__begin_sql_e] = ACTIONS(388),
    [sym__begin_sql_f] = ACTIONS(388),
  },
  [10] = {
    [sym__statement] = STATE(2),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
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
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(2),
    [sym_continue] = STATE(2),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(2),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(2),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(2),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(2),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(391),
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
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [11] = {
    [sym__statement] = STATE(121),
    [sym__scope] = STATE(290),
    [sym_function_name] = STATE(291),
    [sym_alias_name] = STATE(292),
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(213),
    [sym_class_function] = STATE(82),
    [sym_generic_function] = STATE(82),
    [sym__function_call] = STATE(82),
    [sym_function_block] = STATE(121),
    [sym_declare_block] = STATE(121),
    [sym_alias_block] = STATE(121),
    [sym_class_extends] = STATE(121),
    [sym_class_constructor] = STATE(121),
    [sym_var_declaration_block] = STATE(121),
    [sym_classic_compiler_block] = STATE(121),
    [sym_classic_array_block] = STATE(121),
    [sym_property_declaration_block] = STATE(121),
    [sym_return_block] = STATE(121),
    [sym_assignment_block] = STATE(121),
    [sym_function_call] = STATE(121),
    [sym_var] = STATE(197),
    [sym_property] = STATE(293),
    [sym_alias] = STATE(294),
    [sym_declare] = STATE(295),
    [sym_function] = STATE(184),
    [sym_return] = STATE(12),
    [sym_break] = STATE(121),
    [sym_continue] = STATE(121),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(296),
    [sym__classic_compiler_blob] = STATE(317),
    [sym__classic_compiler_boolean] = STATE(317),
    [sym__classic_compiler_collection] = STATE(317),
    [sym__classic_compiler_date] = STATE(317),
    [sym__classic_compiler_longint] = STATE(317),
    [sym__classic_compiler_object] = STATE(317),
    [sym__classic_compiler_picture] = STATE(317),
    [sym__classic_compiler_pointer] = STATE(317),
    [sym__classic_compiler_real] = STATE(317),
    [sym__classic_compiler_text] = STATE(317),
    [sym__classic_compiler_time] = STATE(317),
    [sym__classic_compiler_variant] = STATE(317),
    [sym_classic_compiler] = STATE(316),
    [sym__classic_array_blob] = STATE(315),
    [sym__classic_array_boolean] = STATE(315),
    [sym__classic_array_date] = STATE(315),
    [sym__classic_array_integer] = STATE(315),
    [sym__classic_array_longint] = STATE(315),
    [sym__classic_array_object] = STATE(315),
    [sym__classic_array_picture] = STATE(315),
    [sym__classic_array_pointer] = STATE(315),
    [sym__classic_array_real] = STATE(315),
    [sym__classic_array_text] = STATE(315),
    [sym__classic_array_time] = STATE(315),
    [sym_classic_array] = STATE(314),
    [sym_comment_block] = STATE(74),
    [sym__comment] = STATE(74),
    [sym_comment] = STATE(121),
    [sym_if] = STATE(313),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(121),
    [sym_while] = STATE(312),
    [sym__while] = STATE(7),
    [sym_while_block] = STATE(121),
    [sym_repeat] = STATE(3),
    [sym_repeat_block] = STATE(121),
    [sym_begin_sql] = STATE(185),
    [sym_sql_injection_block] = STATE(121),
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
    [sym__while_e] = ACTIONS(93),
    [sym__while_f] = ACTIONS(93),
    [sym__repeat_e] = ACTIONS(95),
    [sym__repeat_f] = ACTIONS(95),
    [sym__begin_sql_e] = ACTIONS(97),
    [sym__begin_sql_f] = ACTIONS(97),
  },
  [12] = {
    [sym_local_variable] = STATE(22),
    [sym_interprocess_variable] = STATE(22),
    [sym_numeric_parameter] = STATE(22),
    [sym__variable] = STATE(27),
    [sym__mutable] = STATE(32),
    [sym__immutable] = STATE(94),
    [sym_class_function] = STATE(94),
    [sym_generic_function] = STATE(94),
    [sym__function_call] = STATE(94),
    [sym__single_condition] = STATE(94),
    [sym_time] = STATE(47),
    [sym_date] = STATE(47),
    [sym__dec_literal] = STATE(38),
    [sym__num_literal] = STATE(38),
    [sym__exp_literal] = STATE(38),
    [sym_number] = STATE(47),
    [sym_string] = STATE(47),
    [sym_constant] = STATE(94),
    [sym_this] = STATE(320),
    [sym_form] = STATE(320),
    [sym_super] = STATE(296),
    [sym__class_store] = STATE(20),
    [sym__class] = STATE(30),
    [sym_system_variable] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym__local] = ACTIONS(393),
    [sym__exposed] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_LT_GT] = ACTIONS(393),
    [aux_sym_numeric_parameter_token1] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(399),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(401),
    [sym__hex_literal] = ACTIONS(403),
    [aux_sym__num_literal_token1] = ACTIONS(395),
    [aux_sym__exp_literal_token1] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym__class_constructor] = ACTIONS(393),
    [sym__class_extends] = ACTIONS(393),
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
    [sym__system_variable_ok] = ACTIONS(407),
    [sym__system_variable_document] = ACTIONS(407),
    [sym__system_variable_flddelimit] = ACTIONS(407),
    [sym__system_variable_recdelimit] = ACTIONS(407),
    [sym__system_variable_error] = ACTIONS(409),
    [sym__system_variable_error_method] = ACTIONS(407),
    [sym__system_variable_error_line] = ACTIONS(407),
    [sym__system_variable_error_formula] = ACTIONS(407),
    [sym__system_variable_mousedown] = ACTIONS(407),
    [sym__system_variable_mousex] = ACTIONS(407),
    [sym__system_variable_mousey] = ACTIONS(407),
    [sym__system_variable_keycode] = ACTIONS(407),
    [sym__system_variable_modifiers] = ACTIONS(407),
    [sym__system_variable_mouseproc] = ACTIONS(407),
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
    [sym__if_f] = ACTIONS(411),
    [sym__else_e] = ACTIONS(393),
    [sym__else_f] = ACTIONS(393),
    [sym__end_if_e] = ACTIONS(393),
    [sym__end_if_f] = ACTIONS(393),
    [sym__while_e] = ACTIONS(393),
    [sym__while_f] = ACTIONS(393),
    [sym__end_while_e] = ACTIONS(393),
    [sym__end_while_f] = ACTIONS(393),
    [sym__repeat_e] = ACTIONS(393),
    [sym__repeat_f] = ACTIONS(393),
    [sym__until_e] = ACTIONS(393),
    [sym__until_f] = ACTIONS(393),
    [sym__begin_sql_e] = ACTIONS(393),
    [sym__begin_sql_f] = ACTIONS(393),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym__local] = ACTIONS(413),
    [sym__exposed] = ACTIONS(413),
    [anon_sym_SEMI] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_STAR] = ACTIONS(415),
    [anon_sym_SLASH] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(413),
    [anon_sym_PIPE_PIPE] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_CARET] = ACTIONS(413),
    [anon_sym_TILDE_PIPE] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(415),
    [anon_sym_LT_LT] = ACTIONS(413),
    [anon_sym_GT_GT] = ACTIONS(413),
    [anon_sym_QMARK_QMARK] = ACTIONS(413),
    [anon_sym_QMARK_PLUS] = ACTIONS(413),
    [anon_sym_QMARK_DASH] = ACTIONS(413),
    [anon_sym_PLUS_EQ] = ACTIONS(413),
    [anon_sym_DASH_EQ] = ACTIONS(413),
    [anon_sym_STAR_EQ] = ACTIONS(413),
    [anon_sym_SLASH_EQ] = ACTIONS(413),
    [anon_sym_DOLLAR] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_LT_GT] = ACTIONS(413),
    [anon_sym_DOT] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_QMARK] = ACTIONS(415),
    [sym__class_constructor] = ACTIONS(413),
    [sym__class_extends] = ACTIONS(413),
    [anon_sym_COLON_EQ] = ACTIONS(413),
    [sym__var] = ACTIONS(413),
    [sym__property] = ACTIONS(413),
    [sym__alias] = ACTIONS(413),
    [sym__declare] = ACTIONS(413),
    [sym__function] = ACTIONS(413),
    [sym__return] = ACTIONS(413),
    [sym__break] = ACTIONS(413),
    [sym__continue] = ACTIONS(413),
    [sym__this] = ACTIONS(413),
    [sym__form] = ACTIONS(413),
    [sym__super] = ACTIONS(413),
    [sym__class_store_4d] = ACTIONS(413),
    [sym__class_store_ds] = ACTIONS(413),
    [sym__class_store_cs] = ACTIONS(413),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(413),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(413),
    [aux_sym__classic_array_blob_token1] = ACTIONS(413),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(413),
    [aux_sym__classic_array_date_token1] = ACTIONS(413),
    [aux_sym__classic_array_integer_token1] = ACTIONS(413),
    [aux_sym__classic_array_longint_token1] = ACTIONS(413),
    [aux_sym__classic_array_object_token1] = ACTIONS(413),
    [aux_sym__classic_array_picture_token1] = ACTIONS(413),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(413),
    [aux_sym__classic_array_real_token1] = ACTIONS(413),
    [aux_sym__classic_array_text_token1] = ACTIONS(413),
    [aux_sym__classic_array_time_token1] = ACTIONS(413),
    [anon_sym_SLASH_STAR] = ACTIONS(413),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [sym__if_e] = ACTIONS(413),
    [sym__if_f] = ACTIONS(415),
    [sym__else_e] = ACTIONS(413),
    [sym__else_f] = ACTIONS(413),
    [sym__end_if_e] = ACTIONS(413),
    [sym__end_if_f] = ACTIONS(413),
    [sym__while_e] = ACTIONS(413),
    [sym__while_f] = ACTIONS(413),
    [sym__end_while_e] = ACTIONS(413),
    [sym__end_while_f] = ACTIONS(413),
    [sym__repeat_e] = ACTIONS(413),
    [sym__repeat_f] = ACTIONS(413),
    [sym__until_e] = ACTIONS(413),
    [sym__until_f] = ACTIONS(413),
    [sym__begin_sql_e] = ACTIONS(413),
    [sym__begin_sql_f] = ACTIONS(413),
  },
  [14] = {
    [aux_sym__mutable_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym__local] = ACTIONS(419),
    [sym__exposed] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym_TILDE_PIPE] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_QMARK_QMARK] = ACTIONS(419),
    [anon_sym_QMARK_PLUS] = ACTIONS(419),
    [anon_sym_QMARK_DASH] = ACTIONS(419),
    [anon_sym_PLUS_EQ] = ACTIONS(419),
    [anon_sym_DASH_EQ] = ACTIONS(419),
    [anon_sym_STAR_EQ] = ACTIONS(419),
    [anon_sym_SLASH_EQ] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_LT_GT] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(421),
    [sym__class_constructor] = ACTIONS(419),
    [sym__class_extends] = ACTIONS(419),
    [anon_sym_COLON_EQ] = ACTIONS(419),
    [sym__var] = ACTIONS(419),
    [sym__property] = ACTIONS(419),
    [sym__alias] = ACTIONS(419),
    [sym__declare] = ACTIONS(419),
    [sym__function] = ACTIONS(419),
    [sym__return] = ACTIONS(419),
    [sym__break] = ACTIONS(419),
    [sym__continue] = ACTIONS(419),
    [sym__this] = ACTIONS(419),
    [sym__form] = ACTIONS(419),
    [sym__super] = ACTIONS(419),
    [sym__class_store_4d] = ACTIONS(419),
    [sym__class_store_ds] = ACTIONS(419),
    [sym__class_store_cs] = ACTIONS(419),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(419),
    [aux_sym__classic_array_blob_token1] = ACTIONS(419),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(419),
    [aux_sym__classic_array_date_token1] = ACTIONS(419),
    [aux_sym__classic_array_integer_token1] = ACTIONS(419),
    [aux_sym__classic_array_longint_token1] = ACTIONS(419),
    [aux_sym__classic_array_object_token1] = ACTIONS(419),
    [aux_sym__classic_array_picture_token1] = ACTIONS(419),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(419),
    [aux_sym__classic_array_real_token1] = ACTIONS(419),
    [aux_sym__classic_array_text_token1] = ACTIONS(419),
    [aux_sym__classic_array_time_token1] = ACTIONS(419),
    [anon_sym_SLASH_STAR] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [sym__if_e] = ACTIONS(419),
    [sym__if_f] = ACTIONS(421),
    [sym__else_e] = ACTIONS(419),
    [sym__else_f] = ACTIONS(419),
    [sym__end_if_e] = ACTIONS(419),
    [sym__end_if_f] = ACTIONS(419),
    [sym__while_e] = ACTIONS(419),
    [sym__while_f] = ACTIONS(419),
    [sym__end_while_e] = ACTIONS(419),
    [sym__end_while_f] = ACTIONS(419),
    [sym__repeat_e] = ACTIONS(419),
    [sym__repeat_f] = ACTIONS(419),
    [sym__until_e] = ACTIONS(419),
    [sym__until_f] = ACTIONS(419),
    [sym__begin_sql_e] = ACTIONS(419),
    [sym__begin_sql_f] = ACTIONS(419),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym__local] = ACTIONS(426),
    [sym__exposed] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_AMP_AMP] = ACTIONS(426),
    [anon_sym_PIPE_PIPE] = ACTIONS(426),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_TILDE_PIPE] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(426),
    [anon_sym_POUND] = ACTIONS(428),
    [anon_sym_LT_LT] = ACTIONS(426),
    [anon_sym_GT_GT] = ACTIONS(426),
    [anon_sym_QMARK_QMARK] = ACTIONS(426),
    [anon_sym_QMARK_PLUS] = ACTIONS(426),
    [anon_sym_QMARK_DASH] = ACTIONS(426),
    [anon_sym_PLUS_EQ] = ACTIONS(426),
    [anon_sym_DASH_EQ] = ACTIONS(426),
    [anon_sym_STAR_EQ] = ACTIONS(426),
    [anon_sym_SLASH_EQ] = ACTIONS(426),
    [anon_sym_DOLLAR] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_LT_GT] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(426),
    [anon_sym_QMARK] = ACTIONS(428),
    [sym__class_constructor] = ACTIONS(426),
    [sym__class_extends] = ACTIONS(426),
    [anon_sym_COLON_EQ] = ACTIONS(426),
    [sym__var] = ACTIONS(426),
    [sym__property] = ACTIONS(426),
    [sym__alias] = ACTIONS(426),
    [sym__declare] = ACTIONS(426),
    [sym__function] = ACTIONS(426),
    [sym__return] = ACTIONS(426),
    [sym__break] = ACTIONS(426),
    [sym__continue] = ACTIONS(426),
    [sym__this] = ACTIONS(426),
    [sym__form] = ACTIONS(426),
    [sym__super] = ACTIONS(426),
    [sym__class_store_4d] = ACTIONS(426),
    [sym__class_store_ds] = ACTIONS(426),
    [sym__class_store_cs] = ACTIONS(426),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(426),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(426),
    [aux_sym__classic_array_blob_token1] = ACTIONS(426),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(426),
    [aux_sym__classic_array_date_token1] = ACTIONS(426),
    [aux_sym__classic_array_integer_token1] = ACTIONS(426),
    [aux_sym__classic_array_longint_token1] = ACTIONS(426),
    [aux_sym__classic_array_object_token1] = ACTIONS(426),
    [aux_sym__classic_array_picture_token1] = ACTIONS(426),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(426),
    [aux_sym__classic_array_real_token1] = ACTIONS(426),
    [aux_sym__classic_array_text_token1] = ACTIONS(426),
    [aux_sym__classic_array_time_token1] = ACTIONS(426),
    [anon_sym_SLASH_STAR] = ACTIONS(426),
    [anon_sym_SLASH_SLASH] = ACTIONS(426),
    [sym__if_e] = ACTIONS(426),
    [sym__if_f] = ACTIONS(428),
    [sym__else_e] = ACTIONS(426),
    [sym__else_f] = ACTIONS(426),
    [sym__end_if_e] = ACTIONS(426),
    [sym__end_if_f] = ACTIONS(426),
    [sym__while_e] = ACTIONS(426),
    [sym__while_f] = ACTIONS(426),
    [sym__end_while_e] = ACTIONS(426),
    [sym__end_while_f] = ACTIONS(426),
    [sym__repeat_e] = ACTIONS(426),
    [sym__repeat_f] = ACTIONS(426),
    [sym__until_e] = ACTIONS(426),
    [sym__until_f] = ACTIONS(426),
    [sym__begin_sql_e] = ACTIONS(426),
    [sym__begin_sql_f] = ACTIONS(426),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym__local] = ACTIONS(419),
    [sym__exposed] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym_TILDE_PIPE] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_QMARK_QMARK] = ACTIONS(419),
    [anon_sym_QMARK_PLUS] = ACTIONS(419),
    [anon_sym_QMARK_DASH] = ACTIONS(419),
    [anon_sym_PLUS_EQ] = ACTIONS(419),
    [anon_sym_DASH_EQ] = ACTIONS(419),
    [anon_sym_STAR_EQ] = ACTIONS(419),
    [anon_sym_SLASH_EQ] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_LT_GT] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(421),
    [sym__class_constructor] = ACTIONS(419),
    [sym__class_extends] = ACTIONS(419),
    [anon_sym_COLON_EQ] = ACTIONS(419),
    [sym__var] = ACTIONS(419),
    [sym__property] = ACTIONS(419),
    [sym__alias] = ACTIONS(419),
    [sym__declare] = ACTIONS(419),
    [sym__function] = ACTIONS(419),
    [sym__return] = ACTIONS(419),
    [sym__break] = ACTIONS(419),
    [sym__continue] = ACTIONS(419),
    [sym__this] = ACTIONS(419),
    [sym__form] = ACTIONS(419),
    [sym__super] = ACTIONS(419),
    [sym__class_store_4d] = ACTIONS(419),
    [sym__class_store_ds] = ACTIONS(419),
    [sym__class_store_cs] = ACTIONS(419),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(419),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(419),
    [aux_sym__classic_array_blob_token1] = ACTIONS(419),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(419),
    [aux_sym__classic_array_date_token1] = ACTIONS(419),
    [aux_sym__classic_array_integer_token1] = ACTIONS(419),
    [aux_sym__classic_array_longint_token1] = ACTIONS(419),
    [aux_sym__classic_array_object_token1] = ACTIONS(419),
    [aux_sym__classic_array_picture_token1] = ACTIONS(419),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(419),
    [aux_sym__classic_array_real_token1] = ACTIONS(419),
    [aux_sym__classic_array_text_token1] = ACTIONS(419),
    [aux_sym__classic_array_time_token1] = ACTIONS(419),
    [anon_sym_SLASH_STAR] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [sym__if_e] = ACTIONS(419),
    [sym__if_f] = ACTIONS(421),
    [sym__else_e] = ACTIONS(419),
    [sym__else_f] = ACTIONS(419),
    [sym__end_if_e] = ACTIONS(419),
    [sym__end_if_f] = ACTIONS(419),
    [sym__while_e] = ACTIONS(419),
    [sym__while_f] = ACTIONS(419),
    [sym__end_while_e] = ACTIONS(419),
    [sym__end_while_f] = ACTIONS(419),
    [sym__repeat_e] = ACTIONS(419),
    [sym__repeat_f] = ACTIONS(419),
    [sym__until_e] = ACTIONS(419),
    [sym__until_f] = ACTIONS(419),
    [sym__begin_sql_e] = ACTIONS(419),
    [sym__begin_sql_f] = ACTIONS(419),
  },
  [17] = {
    [aux_sym__mutable_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(430),
    [sym__local] = ACTIONS(430),
    [sym__exposed] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(430),
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
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(432),
    [sym__class_constructor] = ACTIONS(430),
    [sym__class_extends] = ACTIONS(430),
    [anon_sym_COLON_EQ] = ACTIONS(430),
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
    [anon_sym_SLASH_STAR] = ACTIONS(430),
    [anon_sym_SLASH_SLASH] = ACTIONS(430),
    [sym__if_e] = ACTIONS(430),
    [sym__if_f] = ACTIONS(432),
    [sym__else_e] = ACTIONS(430),
    [sym__else_f] = ACTIONS(430),
    [sym__end_if_e] = ACTIONS(430),
    [sym__end_if_f] = ACTIONS(430),
    [sym__while_e] = ACTIONS(430),
    [sym__while_f] = ACTIONS(430),
    [sym__end_while_e] = ACTIONS(430),
    [sym__end_while_f] = ACTIONS(430),
    [sym__repeat_e] = ACTIONS(430),
    [sym__repeat_f] = ACTIONS(430),
    [sym__until_e] = ACTIONS(430),
    [sym__until_f] = ACTIONS(430),
    [sym__begin_sql_e] = ACTIONS(430),
    [sym__begin_sql_f] = ACTIONS(430),
  },
  [18] = {
    [aux_sym__mutable_repeat1] = STATE(14),
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
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_LT_GT] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(442),
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
    [anon_sym_SLASH_STAR] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(438),
    [sym__if_e] = ACTIONS(438),
    [sym__if_f] = ACTIONS(440),
    [sym__else_e] = ACTIONS(438),
    [sym__else_f] = ACTIONS(438),
    [sym__end_if_e] = ACTIONS(438),
    [sym__end_if_f] = ACTIONS(438),
    [sym__while_e] = ACTIONS(438),
    [sym__while_f] = ACTIONS(438),
    [sym__end_while_e] = ACTIONS(438),
    [sym__end_while_f] = ACTIONS(438),
    [sym__repeat_e] = ACTIONS(438),
    [sym__repeat_f] = ACTIONS(438),
    [sym__until_e] = ACTIONS(438),
    [sym__until_f] = ACTIONS(438),
    [sym__begin_sql_e] = ACTIONS(438),
    [sym__begin_sql_f] = ACTIONS(438),
  },
  [19] = {
    [aux_sym__mutable_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym__local] = ACTIONS(444),
    [sym__exposed] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
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
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LT_GT] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(446),
    [sym__class_constructor] = ACTIONS(444),
    [sym__class_extends] = ACTIONS(444),
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
    [anon_sym_SLASH_STAR] = ACTIONS(444),
    [anon_sym_SLASH_SLASH] = ACTIONS(444),
    [sym__if_e] = ACTIONS(444),
    [sym__if_f] = ACTIONS(446),
    [sym__else_e] = ACTIONS(444),
    [sym__else_f] = ACTIONS(444),
    [sym__end_if_e] = ACTIONS(444),
    [sym__end_if_f] = ACTIONS(444),
    [sym__while_e] = ACTIONS(444),
    [sym__while_f] = ACTIONS(444),
    [sym__end_while_e] = ACTIONS(444),
    [sym__end_while_f] = ACTIONS(444),
    [sym__repeat_e] = ACTIONS(444),
    [sym__repeat_f] = ACTIONS(444),
    [sym__until_e] = ACTIONS(444),
    [sym__until_f] = ACTIONS(444),
    [sym__begin_sql_e] = ACTIONS(444),
    [sym__begin_sql_f] = ACTIONS(444),
  },
  [20] = {
    [aux_sym__mutable_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(448),
    [sym__local] = ACTIONS(448),
    [sym__exposed] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [anon_sym_AMP_AMP] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_TILDE_PIPE] = ACTIONS(448),
    [anon_sym_LT] = ACTIONS(450),
    [anon_sym_GT] = ACTIONS(450),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_POUND] = ACTIONS(450),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_QMARK_QMARK] = ACTIONS(448),
    [anon_sym_QMARK_PLUS] = ACTIONS(448),
    [anon_sym_QMARK_DASH] = ACTIONS(448),
    [anon_sym_PLUS_EQ] = ACTIONS(448),
    [anon_sym_DASH_EQ] = ACTIONS(448),
    [anon_sym_STAR_EQ] = ACTIONS(448),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [anon_sym_DOLLAR] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_LT_GT] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_QMARK] = ACTIONS(450),
    [sym__class_constructor] = ACTIONS(448),
    [sym__class_extends] = ACTIONS(448),
    [sym__var] = ACTIONS(448),
    [sym__property] = ACTIONS(448),
    [sym__alias] = ACTIONS(448),
    [sym__declare] = ACTIONS(448),
    [sym__function] = ACTIONS(448),
    [sym__return] = ACTIONS(448),
    [sym__break] = ACTIONS(448),
    [sym__continue] = ACTIONS(448),
    [sym__this] = ACTIONS(448),
    [sym__form] = ACTIONS(448),
    [sym__super] = ACTIONS(448),
    [sym__class_store_4d] = ACTIONS(448),
    [sym__class_store_ds] = ACTIONS(448),
    [sym__class_store_cs] = ACTIONS(448),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(448),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(448),
    [aux_sym__classic_array_blob_token1] = ACTIONS(448),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(448),
    [aux_sym__classic_array_date_token1] = ACTIONS(448),
    [aux_sym__classic_array_integer_token1] = ACTIONS(448),
    [aux_sym__classic_array_longint_token1] = ACTIONS(448),
    [aux_sym__classic_array_object_token1] = ACTIONS(448),
    [aux_sym__classic_array_picture_token1] = ACTIONS(448),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(448),
    [aux_sym__classic_array_real_token1] = ACTIONS(448),
    [aux_sym__classic_array_text_token1] = ACTIONS(448),
    [aux_sym__classic_array_time_token1] = ACTIONS(448),
    [anon_sym_SLASH_STAR] = ACTIONS(448),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [sym__if_e] = ACTIONS(448),
    [sym__if_f] = ACTIONS(450),
    [sym__else_e] = ACTIONS(448),
    [sym__else_f] = ACTIONS(448),
    [sym__end_if_e] = ACTIONS(448),
    [sym__end_if_f] = ACTIONS(448),
    [sym__while_e] = ACTIONS(448),
    [sym__while_f] = ACTIONS(448),
    [sym__end_while_e] = ACTIONS(448),
    [sym__end_while_f] = ACTIONS(448),
    [sym__repeat_e] = ACTIONS(448),
    [sym__repeat_f] = ACTIONS(448),
    [sym__until_e] = ACTIONS(448),
    [sym__until_f] = ACTIONS(448),
    [sym__begin_sql_e] = ACTIONS(448),
    [sym__begin_sql_f] = ACTIONS(448),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [sym__local] = ACTIONS(452),
    [sym__exposed] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [anon_sym_STAR] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [anon_sym_AMP_AMP] = ACTIONS(452),
    [anon_sym_PIPE_PIPE] = ACTIONS(452),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_CARET] = ACTIONS(452),
    [anon_sym_TILDE_PIPE] = ACTIONS(452),
    [anon_sym_LT] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_POUND] = ACTIONS(454),
    [anon_sym_LT_LT] = ACTIONS(452),
    [anon_sym_GT_GT] = ACTIONS(452),
    [anon_sym_QMARK_QMARK] = ACTIONS(452),
    [anon_sym_QMARK_PLUS] = ACTIONS(452),
    [anon_sym_QMARK_DASH] = ACTIONS(452),
    [anon_sym_PLUS_EQ] = ACTIONS(452),
    [anon_sym_DASH_EQ] = ACTIONS(452),
    [anon_sym_STAR_EQ] = ACTIONS(452),
    [anon_sym_SLASH_EQ] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_LT_GT] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_QMARK] = ACTIONS(454),
    [sym__class_constructor] = ACTIONS(452),
    [sym__class_extends] = ACTIONS(452),
    [sym__var] = ACTIONS(452),
    [sym__property] = ACTIONS(452),
    [sym__alias] = ACTIONS(452),
    [sym__declare] = ACTIONS(452),
    [sym__function] = ACTIONS(452),
    [sym__return] = ACTIONS(452),
    [sym__break] = ACTIONS(452),
    [sym__continue] = ACTIONS(452),
    [sym__this] = ACTIONS(452),
    [sym__form] = ACTIONS(452),
    [sym__super] = ACTIONS(452),
    [sym__class_store_4d] = ACTIONS(452),
    [sym__class_store_ds] = ACTIONS(452),
    [sym__class_store_cs] = ACTIONS(452),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(452),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(452),
    [aux_sym__classic_array_blob_token1] = ACTIONS(452),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(452),
    [aux_sym__classic_array_date_token1] = ACTIONS(452),
    [aux_sym__classic_array_integer_token1] = ACTIONS(452),
    [aux_sym__classic_array_longint_token1] = ACTIONS(452),
    [aux_sym__classic_array_object_token1] = ACTIONS(452),
    [aux_sym__classic_array_picture_token1] = ACTIONS(452),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(452),
    [aux_sym__classic_array_real_token1] = ACTIONS(452),
    [aux_sym__classic_array_text_token1] = ACTIONS(452),
    [aux_sym__classic_array_time_token1] = ACTIONS(452),
    [anon_sym_SLASH_STAR] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(452),
    [sym__if_e] = ACTIONS(452),
    [sym__if_f] = ACTIONS(454),
    [sym__else_e] = ACTIONS(452),
    [sym__else_f] = ACTIONS(452),
    [sym__end_if_e] = ACTIONS(452),
    [sym__end_if_f] = ACTIONS(452),
    [sym__while_e] = ACTIONS(452),
    [sym__while_f] = ACTIONS(452),
    [sym__end_while_e] = ACTIONS(452),
    [sym__end_while_f] = ACTIONS(452),
    [sym__repeat_e] = ACTIONS(452),
    [sym__repeat_f] = ACTIONS(452),
    [sym__until_e] = ACTIONS(452),
    [sym__until_f] = ACTIONS(452),
    [sym__begin_sql_e] = ACTIONS(452),
    [sym__begin_sql_f] = ACTIONS(452),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym__local] = ACTIONS(456),
    [sym__exposed] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_DASH] = ACTIONS(458),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(456),
    [anon_sym_PIPE_PIPE] = ACTIONS(456),
    [anon_sym_AMP] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_CARET] = ACTIONS(456),
    [anon_sym_TILDE_PIPE] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_POUND] = ACTIONS(458),
    [anon_sym_LT_LT] = ACTIONS(456),
    [anon_sym_GT_GT] = ACTIONS(456),
    [anon_sym_QMARK_QMARK] = ACTIONS(456),
    [anon_sym_QMARK_PLUS] = ACTIONS(456),
    [anon_sym_QMARK_DASH] = ACTIONS(456),
    [anon_sym_PLUS_EQ] = ACTIONS(456),
    [anon_sym_DASH_EQ] = ACTIONS(456),
    [anon_sym_STAR_EQ] = ACTIONS(456),
    [anon_sym_SLASH_EQ] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_LT_GT] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [anon_sym_QMARK] = ACTIONS(458),
    [sym__class_constructor] = ACTIONS(456),
    [sym__class_extends] = ACTIONS(456),
    [anon_sym_COLON_EQ] = ACTIONS(456),
    [sym__var] = ACTIONS(456),
    [sym__property] = ACTIONS(456),
    [sym__alias] = ACTIONS(456),
    [sym__declare] = ACTIONS(456),
    [sym__function] = ACTIONS(456),
    [sym__return] = ACTIONS(456),
    [sym__break] = ACTIONS(456),
    [sym__continue] = ACTIONS(456),
    [sym__this] = ACTIONS(456),
    [sym__form] = ACTIONS(456),
    [sym__super] = ACTIONS(456),
    [sym__class_store_4d] = ACTIONS(456),
    [sym__class_store_ds] = ACTIONS(456),
    [sym__class_store_cs] = ACTIONS(456),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(456),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(456),
    [aux_sym__classic_array_blob_token1] = ACTIONS(456),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(456),
    [aux_sym__classic_array_date_token1] = ACTIONS(456),
    [aux_sym__classic_array_integer_token1] = ACTIONS(456),
    [aux_sym__classic_array_longint_token1] = ACTIONS(456),
    [aux_sym__classic_array_object_token1] = ACTIONS(456),
    [aux_sym__classic_array_picture_token1] = ACTIONS(456),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(456),
    [aux_sym__classic_array_real_token1] = ACTIONS(456),
    [aux_sym__classic_array_text_token1] = ACTIONS(456),
    [aux_sym__classic_array_time_token1] = ACTIONS(456),
    [anon_sym_SLASH_STAR] = ACTIONS(456),
    [anon_sym_SLASH_SLASH] = ACTIONS(456),
    [sym__if_e] = ACTIONS(456),
    [sym__if_f] = ACTIONS(458),
    [sym__else_e] = ACTIONS(456),
    [sym__else_f] = ACTIONS(456),
    [sym__end_if_e] = ACTIONS(456),
    [sym__end_if_f] = ACTIONS(456),
    [sym__while_e] = ACTIONS(456),
    [sym__while_f] = ACTIONS(456),
    [sym__end_while_e] = ACTIONS(456),
    [sym__end_while_f] = ACTIONS(456),
    [sym__repeat_e] = ACTIONS(456),
    [sym__repeat_f] = ACTIONS(456),
    [sym__until_e] = ACTIONS(456),
    [sym__until_f] = ACTIONS(456),
    [sym__begin_sql_e] = ACTIONS(456),
    [sym__begin_sql_f] = ACTIONS(456),
  },
  [23] = {
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
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_LT_GT] = ACTIONS(462),
    [anon_sym_DOT] = ACTIONS(462),
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
    [anon_sym_SLASH_STAR] = ACTIONS(462),
    [anon_sym_SLASH_SLASH] = ACTIONS(462),
    [sym__if_e] = ACTIONS(462),
    [sym__if_f] = ACTIONS(464),
    [sym__else_e] = ACTIONS(462),
    [sym__else_f] = ACTIONS(462),
    [sym__end_if_e] = ACTIONS(462),
    [sym__end_if_f] = ACTIONS(462),
    [sym__while_e] = ACTIONS(462),
    [sym__while_f] = ACTIONS(462),
    [sym__end_while_e] = ACTIONS(462),
    [sym__end_while_f] = ACTIONS(462),
    [sym__repeat_e] = ACTIONS(462),
    [sym__repeat_f] = ACTIONS(462),
    [sym__until_e] = ACTIONS(462),
    [sym__until_f] = ACTIONS(462),
    [sym__begin_sql_e] = ACTIONS(462),
    [sym__begin_sql_f] = ACTIONS(462),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym__local] = ACTIONS(466),
    [sym__exposed] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(466),
    [anon_sym_PIPE_PIPE] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(466),
    [anon_sym_TILDE_PIPE] = ACTIONS(466),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_POUND] = ACTIONS(468),
    [anon_sym_LT_LT] = ACTIONS(466),
    [anon_sym_GT_GT] = ACTIONS(466),
    [anon_sym_QMARK_QMARK] = ACTIONS(466),
    [anon_sym_QMARK_PLUS] = ACTIONS(466),
    [anon_sym_QMARK_DASH] = ACTIONS(466),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [anon_sym_DOLLAR] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_LT_GT] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [sym__class_constructor] = ACTIONS(466),
    [sym__class_extends] = ACTIONS(466),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [sym__var] = ACTIONS(466),
    [sym__property] = ACTIONS(466),
    [sym__alias] = ACTIONS(466),
    [sym__declare] = ACTIONS(466),
    [sym__function] = ACTIONS(466),
    [sym__return] = ACTIONS(466),
    [sym__break] = ACTIONS(466),
    [sym__continue] = ACTIONS(466),
    [sym__this] = ACTIONS(466),
    [sym__form] = ACTIONS(466),
    [sym__super] = ACTIONS(466),
    [sym__class_store_4d] = ACTIONS(466),
    [sym__class_store_ds] = ACTIONS(466),
    [sym__class_store_cs] = ACTIONS(466),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(466),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(466),
    [aux_sym__classic_array_blob_token1] = ACTIONS(466),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(466),
    [aux_sym__classic_array_date_token1] = ACTIONS(466),
    [aux_sym__classic_array_integer_token1] = ACTIONS(466),
    [aux_sym__classic_array_longint_token1] = ACTIONS(466),
    [aux_sym__classic_array_object_token1] = ACTIONS(466),
    [aux_sym__classic_array_picture_token1] = ACTIONS(466),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(466),
    [aux_sym__classic_array_real_token1] = ACTIONS(466),
    [aux_sym__classic_array_text_token1] = ACTIONS(466),
    [aux_sym__classic_array_time_token1] = ACTIONS(466),
    [anon_sym_SLASH_STAR] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(466),
    [sym__if_e] = ACTIONS(466),
    [sym__if_f] = ACTIONS(468),
    [sym__else_e] = ACTIONS(466),
    [sym__else_f] = ACTIONS(466),
    [sym__end_if_e] = ACTIONS(466),
    [sym__end_if_f] = ACTIONS(466),
    [sym__while_e] = ACTIONS(466),
    [sym__while_f] = ACTIONS(466),
    [sym__end_while_e] = ACTIONS(466),
    [sym__end_while_f] = ACTIONS(466),
    [sym__repeat_e] = ACTIONS(466),
    [sym__repeat_f] = ACTIONS(466),
    [sym__until_e] = ACTIONS(466),
    [sym__until_f] = ACTIONS(466),
    [sym__begin_sql_e] = ACTIONS(466),
    [sym__begin_sql_f] = ACTIONS(466),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym__local] = ACTIONS(470),
    [sym__exposed] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(472),
    [anon_sym_AMP_AMP] = ACTIONS(470),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(472),
    [anon_sym_CARET] = ACTIONS(470),
    [anon_sym_TILDE_PIPE] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_POUND] = ACTIONS(472),
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
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(472),
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
    [sym__if_f] = ACTIONS(472),
    [sym__else_e] = ACTIONS(470),
    [sym__else_f] = ACTIONS(470),
    [sym__end_if_e] = ACTIONS(470),
    [sym__end_if_f] = ACTIONS(470),
    [sym__while_e] = ACTIONS(470),
    [sym__while_f] = ACTIONS(470),
    [sym__end_while_e] = ACTIONS(470),
    [sym__end_while_f] = ACTIONS(470),
    [sym__repeat_e] = ACTIONS(470),
    [sym__repeat_f] = ACTIONS(470),
    [sym__until_e] = ACTIONS(470),
    [sym__until_f] = ACTIONS(470),
    [sym__begin_sql_e] = ACTIONS(470),
    [sym__begin_sql_f] = ACTIONS(470),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [sym__local] = ACTIONS(474),
    [sym__exposed] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(476),
    [anon_sym_SLASH] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(474),
    [anon_sym_PIPE_PIPE] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_CARET] = ACTIONS(474),
    [anon_sym_TILDE_PIPE] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_GT] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_LT_LT] = ACTIONS(474),
    [anon_sym_GT_GT] = ACTIONS(474),
    [anon_sym_QMARK_QMARK] = ACTIONS(474),
    [anon_sym_QMARK_PLUS] = ACTIONS(474),
    [anon_sym_QMARK_DASH] = ACTIONS(474),
    [anon_sym_PLUS_EQ] = ACTIONS(474),
    [anon_sym_DASH_EQ] = ACTIONS(474),
    [anon_sym_STAR_EQ] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [anon_sym_DOLLAR] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_LT_GT] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_QMARK] = ACTIONS(476),
    [sym__class_constructor] = ACTIONS(474),
    [sym__class_extends] = ACTIONS(474),
    [anon_sym_COLON_EQ] = ACTIONS(474),
    [sym__var] = ACTIONS(474),
    [sym__property] = ACTIONS(474),
    [sym__alias] = ACTIONS(474),
    [sym__declare] = ACTIONS(474),
    [sym__function] = ACTIONS(474),
    [sym__return] = ACTIONS(474),
    [sym__break] = ACTIONS(474),
    [sym__continue] = ACTIONS(474),
    [sym__this] = ACTIONS(474),
    [sym__form] = ACTIONS(474),
    [sym__super] = ACTIONS(474),
    [sym__class_store_4d] = ACTIONS(474),
    [sym__class_store_ds] = ACTIONS(474),
    [sym__class_store_cs] = ACTIONS(474),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(474),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(474),
    [aux_sym__classic_array_blob_token1] = ACTIONS(474),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(474),
    [aux_sym__classic_array_date_token1] = ACTIONS(474),
    [aux_sym__classic_array_integer_token1] = ACTIONS(474),
    [aux_sym__classic_array_longint_token1] = ACTIONS(474),
    [aux_sym__classic_array_object_token1] = ACTIONS(474),
    [aux_sym__classic_array_picture_token1] = ACTIONS(474),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(474),
    [aux_sym__classic_array_real_token1] = ACTIONS(474),
    [aux_sym__classic_array_text_token1] = ACTIONS(474),
    [aux_sym__classic_array_time_token1] = ACTIONS(474),
    [anon_sym_SLASH_STAR] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [sym__if_e] = ACTIONS(474),
    [sym__if_f] = ACTIONS(476),
    [sym__else_e] = ACTIONS(474),
    [sym__else_f] = ACTIONS(474),
    [sym__end_if_e] = ACTIONS(474),
    [sym__end_if_f] = ACTIONS(474),
    [sym__while_e] = ACTIONS(474),
    [sym__while_f] = ACTIONS(474),
    [sym__end_while_e] = ACTIONS(474),
    [sym__end_while_f] = ACTIONS(474),
    [sym__repeat_e] = ACTIONS(474),
    [sym__repeat_f] = ACTIONS(474),
    [sym__until_e] = ACTIONS(474),
    [sym__until_f] = ACTIONS(474),
    [sym__begin_sql_e] = ACTIONS(474),
    [sym__begin_sql_f] = ACTIONS(474),
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
    [anon_sym_DOT] = ACTIONS(484),
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
    [sym__while_e] = ACTIONS(480),
    [sym__while_f] = ACTIONS(480),
    [sym__end_while_e] = ACTIONS(480),
    [sym__end_while_f] = ACTIONS(480),
    [sym__repeat_e] = ACTIONS(480),
    [sym__repeat_f] = ACTIONS(480),
    [sym__until_e] = ACTIONS(480),
    [sym__until_f] = ACTIONS(480),
    [sym__begin_sql_e] = ACTIONS(480),
    [sym__begin_sql_f] = ACTIONS(480),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym__local] = ACTIONS(486),
    [sym__exposed] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(486),
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
    [anon_sym_DOT] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [anon_sym_QMARK] = ACTIONS(488),
    [sym__class_constructor] = ACTIONS(486),
    [sym__class_extends] = ACTIONS(486),
    [anon_sym_COLON_EQ] = ACTIONS(486),
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
    [anon_sym_SLASH_STAR] = ACTIONS(486),
    [anon_sym_SLASH_SLASH] = ACTIONS(486),
    [sym__if_e] = ACTIONS(486),
    [sym__if_f] = ACTIONS(488),
    [sym__else_e] = ACTIONS(486),
    [sym__else_f] = ACTIONS(486),
    [sym__end_if_e] = ACTIONS(486),
    [sym__end_if_f] = ACTIONS(486),
    [sym__while_e] = ACTIONS(486),
    [sym__while_f] = ACTIONS(486),
    [sym__end_while_e] = ACTIONS(486),
    [sym__end_while_f] = ACTIONS(486),
    [sym__repeat_e] = ACTIONS(486),
    [sym__repeat_f] = ACTIONS(486),
    [sym__until_e] = ACTIONS(486),
    [sym__until_f] = ACTIONS(486),
    [sym__begin_sql_e] = ACTIONS(486),
    [sym__begin_sql_f] = ACTIONS(486),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym__local] = ACTIONS(490),
    [sym__exposed] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(490),
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
    [anon_sym_COLON_EQ] = ACTIONS(490),
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
    [anon_sym_SLASH_STAR] = ACTIONS(490),
    [anon_sym_SLASH_SLASH] = ACTIONS(490),
    [sym__if_e] = ACTIONS(490),
    [sym__if_f] = ACTIONS(492),
    [sym__else_e] = ACTIONS(490),
    [sym__else_f] = ACTIONS(490),
    [sym__end_if_e] = ACTIONS(490),
    [sym__end_if_f] = ACTIONS(490),
    [sym__while_e] = ACTIONS(490),
    [sym__while_f] = ACTIONS(490),
    [sym__end_while_e] = ACTIONS(490),
    [sym__end_while_f] = ACTIONS(490),
    [sym__repeat_e] = ACTIONS(490),
    [sym__repeat_f] = ACTIONS(490),
    [sym__until_e] = ACTIONS(490),
    [sym__until_f] = ACTIONS(490),
    [sym__begin_sql_e] = ACTIONS(490),
    [sym__begin_sql_f] = ACTIONS(490),
  },
  [30] = {
    [sym__functional_expression] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym__local] = ACTIONS(494),
    [sym__exposed] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(496),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_CARET] = ACTIONS(494),
    [anon_sym_TILDE_PIPE] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(494),
    [anon_sym_POUND] = ACTIONS(498),
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
    [anon_sym_QMARK] = ACTIONS(498),
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
    [anon_sym_SLASH_STAR] = ACTIONS(494),
    [anon_sym_SLASH_SLASH] = ACTIONS(494),
    [sym__if_e] = ACTIONS(494),
    [sym__if_f] = ACTIONS(498),
    [sym__else_e] = ACTIONS(494),
    [sym__else_f] = ACTIONS(494),
    [sym__end_if_e] = ACTIONS(494),
    [sym__end_if_f] = ACTIONS(494),
    [sym__while_e] = ACTIONS(494),
    [sym__while_f] = ACTIONS(494),
    [sym__end_while_e] = ACTIONS(494),
    [sym__end_while_f] = ACTIONS(494),
    [sym__repeat_e] = ACTIONS(494),
    [sym__repeat_f] = ACTIONS(494),
    [sym__until_e] = ACTIONS(494),
    [sym__until_f] = ACTIONS(494),
    [sym__begin_sql_e] = ACTIONS(494),
    [sym__begin_sql_f] = ACTIONS(494),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym__local] = ACTIONS(500),
    [sym__exposed] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
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
    [anon_sym_COLON_EQ] = ACTIONS(500),
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
    [sym__while_e] = ACTIONS(500),
    [sym__while_f] = ACTIONS(500),
    [sym__end_while_e] = ACTIONS(500),
    [sym__end_while_f] = ACTIONS(500),
    [sym__repeat_e] = ACTIONS(500),
    [sym__repeat_f] = ACTIONS(500),
    [sym__until_e] = ACTIONS(500),
    [sym__until_f] = ACTIONS(500),
    [sym__begin_sql_e] = ACTIONS(500),
    [sym__begin_sql_f] = ACTIONS(500),
  },
  [32] = {
    [sym__functional_expression] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(504),
    [sym__local] = ACTIONS(504),
    [sym__exposed] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(496),
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
    [sym__while_e] = ACTIONS(504),
    [sym__while_f] = ACTIONS(504),
    [sym__end_while_e] = ACTIONS(504),
    [sym__end_while_f] = ACTIONS(504),
    [sym__repeat_e] = ACTIONS(504),
    [sym__repeat_f] = ACTIONS(504),
    [sym__until_e] = ACTIONS(504),
    [sym__until_f] = ACTIONS(504),
    [sym__begin_sql_e] = ACTIONS(504),
    [sym__begin_sql_f] = ACTIONS(504),
  },
  [33] = {
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
    [sym__while_e] = ACTIONS(508),
    [sym__while_f] = ACTIONS(508),
    [sym__end_while_e] = ACTIONS(508),
    [sym__end_while_f] = ACTIONS(508),
    [sym__repeat_e] = ACTIONS(508),
    [sym__repeat_f] = ACTIONS(508),
    [sym__until_e] = ACTIONS(508),
    [sym__until_f] = ACTIONS(508),
    [sym__begin_sql_e] = ACTIONS(508),
    [sym__begin_sql_f] = ACTIONS(508),
  },
  [34] = {
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
    [sym__while_e] = ACTIONS(512),
    [sym__while_f] = ACTIONS(512),
    [sym__end_while_e] = ACTIONS(512),
    [sym__end_while_f] = ACTIONS(512),
    [sym__repeat_e] = ACTIONS(512),
    [sym__repeat_f] = ACTIONS(512),
    [sym__until_e] = ACTIONS(512),
    [sym__until_f] = ACTIONS(512),
    [sym__begin_sql_e] = ACTIONS(512),
    [sym__begin_sql_f] = ACTIONS(512),
  },
  [35] = {
    [sym__binary_operator] = STATE(129),
    [aux_sym__condition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym__local] = ACTIONS(516),
    [sym__exposed] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(520),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_TILDE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(520),
    [anon_sym_GT_GT] = ACTIONS(520),
    [anon_sym_QMARK_QMARK] = ACTIONS(520),
    [anon_sym_QMARK_PLUS] = ACTIONS(520),
    [anon_sym_QMARK_DASH] = ACTIONS(520),
    [anon_sym_PLUS_EQ] = ACTIONS(520),
    [anon_sym_DASH_EQ] = ACTIONS(520),
    [anon_sym_STAR_EQ] = ACTIONS(520),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [anon_sym_DOLLAR] = ACTIONS(516),
    [anon_sym_LT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
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
    [sym__if_f] = ACTIONS(522),
    [sym__else_e] = ACTIONS(516),
    [sym__else_f] = ACTIONS(516),
    [sym__end_if_e] = ACTIONS(516),
    [sym__end_if_f] = ACTIONS(516),
    [sym__while_e] = ACTIONS(516),
    [sym__while_f] = ACTIONS(516),
    [sym__end_while_e] = ACTIONS(516),
    [sym__end_while_f] = ACTIONS(516),
    [sym__repeat_e] = ACTIONS(516),
    [sym__repeat_f] = ACTIONS(516),
    [sym__until_e] = ACTIONS(516),
    [sym__until_f] = ACTIONS(516),
    [sym__begin_sql_e] = ACTIONS(516),
    [sym__begin_sql_f] = ACTIONS(516),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [sym__local] = ACTIONS(524),
    [sym__exposed] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_AMP_AMP] = ACTIONS(524),
    [anon_sym_PIPE_PIPE] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(526),
    [anon_sym_CARET] = ACTIONS(524),
    [anon_sym_TILDE_PIPE] = ACTIONS(524),
    [anon_sym_LT] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(526),
    [anon_sym_LT_LT] = ACTIONS(524),
    [anon_sym_GT_GT] = ACTIONS(524),
    [anon_sym_QMARK_QMARK] = ACTIONS(524),
    [anon_sym_QMARK_PLUS] = ACTIONS(524),
    [anon_sym_QMARK_DASH] = ACTIONS(524),
    [anon_sym_PLUS_EQ] = ACTIONS(524),
    [anon_sym_DASH_EQ] = ACTIONS(524),
    [anon_sym_STAR_EQ] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_LT_GT] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(526),
    [sym__class_constructor] = ACTIONS(524),
    [sym__class_extends] = ACTIONS(524),
    [sym__var] = ACTIONS(524),
    [sym__property] = ACTIONS(524),
    [sym__alias] = ACTIONS(524),
    [sym__declare] = ACTIONS(524),
    [sym__function] = ACTIONS(524),
    [sym__return] = ACTIONS(524),
    [sym__break] = ACTIONS(524),
    [sym__continue] = ACTIONS(524),
    [sym__this] = ACTIONS(524),
    [sym__form] = ACTIONS(524),
    [sym__super] = ACTIONS(524),
    [sym__class_store_4d] = ACTIONS(524),
    [sym__class_store_ds] = ACTIONS(524),
    [sym__class_store_cs] = ACTIONS(524),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(524),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(524),
    [aux_sym__classic_array_blob_token1] = ACTIONS(524),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(524),
    [aux_sym__classic_array_date_token1] = ACTIONS(524),
    [aux_sym__classic_array_integer_token1] = ACTIONS(524),
    [aux_sym__classic_array_longint_token1] = ACTIONS(524),
    [aux_sym__classic_array_object_token1] = ACTIONS(524),
    [aux_sym__classic_array_picture_token1] = ACTIONS(524),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(524),
    [aux_sym__classic_array_real_token1] = ACTIONS(524),
    [aux_sym__classic_array_text_token1] = ACTIONS(524),
    [aux_sym__classic_array_time_token1] = ACTIONS(524),
    [anon_sym_SLASH_STAR] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(524),
    [sym__if_e] = ACTIONS(524),
    [sym__if_f] = ACTIONS(526),
    [sym__else_e] = ACTIONS(524),
    [sym__else_f] = ACTIONS(524),
    [sym__end_if_e] = ACTIONS(524),
    [sym__end_if_f] = ACTIONS(524),
    [sym__while_e] = ACTIONS(524),
    [sym__while_f] = ACTIONS(524),
    [sym__end_while_e] = ACTIONS(524),
    [sym__end_while_f] = ACTIONS(524),
    [sym__repeat_e] = ACTIONS(524),
    [sym__repeat_f] = ACTIONS(524),
    [sym__until_e] = ACTIONS(524),
    [sym__until_f] = ACTIONS(524),
    [sym__begin_sql_e] = ACTIONS(524),
    [sym__begin_sql_f] = ACTIONS(524),
  },
  [37] = {
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
    [sym__while_e] = ACTIONS(528),
    [sym__while_f] = ACTIONS(528),
    [sym__end_while_e] = ACTIONS(528),
    [sym__end_while_f] = ACTIONS(528),
    [sym__repeat_e] = ACTIONS(528),
    [sym__repeat_f] = ACTIONS(528),
    [sym__until_e] = ACTIONS(528),
    [sym__until_f] = ACTIONS(528),
    [sym__begin_sql_e] = ACTIONS(528),
    [sym__begin_sql_f] = ACTIONS(528),
  },
  [38] = {
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
    [sym__while_e] = ACTIONS(532),
    [sym__while_f] = ACTIONS(532),
    [sym__end_while_e] = ACTIONS(532),
    [sym__end_while_f] = ACTIONS(532),
    [sym__repeat_e] = ACTIONS(532),
    [sym__repeat_f] = ACTIONS(532),
    [sym__until_e] = ACTIONS(532),
    [sym__until_f] = ACTIONS(532),
    [sym__begin_sql_e] = ACTIONS(532),
    [sym__begin_sql_f] = ACTIONS(532),
  },
  [39] = {
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
    [sym__while_e] = ACTIONS(536),
    [sym__while_f] = ACTIONS(536),
    [sym__end_while_e] = ACTIONS(536),
    [sym__end_while_f] = ACTIONS(536),
    [sym__repeat_e] = ACTIONS(536),
    [sym__repeat_f] = ACTIONS(536),
    [sym__until_e] = ACTIONS(536),
    [sym__until_f] = ACTIONS(536),
    [sym__begin_sql_e] = ACTIONS(536),
    [sym__begin_sql_f] = ACTIONS(536),
  },
  [40] = {
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
    [anon_sym_SLASH_STAR] = ACTIONS(540),
    [anon_sym_SLASH_SLASH] = ACTIONS(540),
    [sym__if_e] = ACTIONS(540),
    [sym__if_f] = ACTIONS(542),
    [sym__else_e] = ACTIONS(540),
    [sym__else_f] = ACTIONS(540),
    [sym__end_if_e] = ACTIONS(540),
    [sym__end_if_f] = ACTIONS(540),
    [sym__while_e] = ACTIONS(540),
    [sym__while_f] = ACTIONS(540),
    [sym__end_while_e] = ACTIONS(540),
    [sym__end_while_f] = ACTIONS(540),
    [sym__repeat_e] = ACTIONS(540),
    [sym__repeat_f] = ACTIONS(540),
    [sym__until_e] = ACTIONS(540),
    [sym__until_f] = ACTIONS(540),
    [sym__begin_sql_e] = ACTIONS(540),
    [sym__begin_sql_f] = ACTIONS(540),
  },
  [41] = {
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
    [sym__while_e] = ACTIONS(544),
    [sym__while_f] = ACTIONS(544),
    [sym__end_while_e] = ACTIONS(544),
    [sym__end_while_f] = ACTIONS(544),
    [sym__repeat_e] = ACTIONS(544),
    [sym__repeat_f] = ACTIONS(544),
    [sym__until_e] = ACTIONS(544),
    [sym__until_f] = ACTIONS(544),
    [sym__begin_sql_e] = ACTIONS(544),
    [sym__begin_sql_f] = ACTIONS(544),
  },
  [42] = {
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
    [sym__while_e] = ACTIONS(548),
    [sym__while_f] = ACTIONS(548),
    [sym__end_while_e] = ACTIONS(548),
    [sym__end_while_f] = ACTIONS(548),
    [sym__repeat_e] = ACTIONS(548),
    [sym__repeat_f] = ACTIONS(548),
    [sym__until_e] = ACTIONS(548),
    [sym__until_f] = ACTIONS(548),
    [sym__begin_sql_e] = ACTIONS(548),
    [sym__begin_sql_f] = ACTIONS(548),
  },
  [43] = {
    [sym__binary_operator] = STATE(129),
    [aux_sym__condition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(552),
    [sym__local] = ACTIONS(552),
    [sym__exposed] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(520),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_TILDE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(520),
    [anon_sym_GT_GT] = ACTIONS(520),
    [anon_sym_QMARK_QMARK] = ACTIONS(520),
    [anon_sym_QMARK_PLUS] = ACTIONS(520),
    [anon_sym_QMARK_DASH] = ACTIONS(520),
    [anon_sym_PLUS_EQ] = ACTIONS(520),
    [anon_sym_DASH_EQ] = ACTIONS(520),
    [anon_sym_STAR_EQ] = ACTIONS(520),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [anon_sym_DOLLAR] = ACTIONS(552),
    [anon_sym_LT_GT] = ACTIONS(552),
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
    [anon_sym_SLASH_STAR] = ACTIONS(552),
    [anon_sym_SLASH_SLASH] = ACTIONS(552),
    [sym__if_e] = ACTIONS(552),
    [sym__if_f] = ACTIONS(554),
    [sym__else_e] = ACTIONS(552),
    [sym__else_f] = ACTIONS(552),
    [sym__end_if_e] = ACTIONS(552),
    [sym__end_if_f] = ACTIONS(552),
    [sym__while_e] = ACTIONS(552),
    [sym__while_f] = ACTIONS(552),
    [sym__end_while_e] = ACTIONS(552),
    [sym__end_while_f] = ACTIONS(552),
    [sym__repeat_e] = ACTIONS(552),
    [sym__repeat_f] = ACTIONS(552),
    [sym__until_e] = ACTIONS(552),
    [sym__until_f] = ACTIONS(552),
    [sym__begin_sql_e] = ACTIONS(552),
    [sym__begin_sql_f] = ACTIONS(552),
  },
  [44] = {
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
    [anon_sym_SLASH_STAR] = ACTIONS(556),
    [anon_sym_SLASH_SLASH] = ACTIONS(556),
    [sym__if_e] = ACTIONS(556),
    [sym__if_f] = ACTIONS(558),
    [sym__else_e] = ACTIONS(556),
    [sym__else_f] = ACTIONS(556),
    [sym__end_if_e] = ACTIONS(556),
    [sym__end_if_f] = ACTIONS(556),
    [sym__while_e] = ACTIONS(556),
    [sym__while_f] = ACTIONS(556),
    [sym__end_while_e] = ACTIONS(556),
    [sym__end_while_f] = ACTIONS(556),
    [sym__repeat_e] = ACTIONS(556),
    [sym__repeat_f] = ACTIONS(556),
    [sym__until_e] = ACTIONS(556),
    [sym__until_f] = ACTIONS(556),
    [sym__begin_sql_e] = ACTIONS(556),
    [sym__begin_sql_f] = ACTIONS(556),
  },
  [45] = {
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
    [anon_sym_SLASH_STAR] = ACTIONS(560),
    [anon_sym_SLASH_SLASH] = ACTIONS(560),
    [sym__if_e] = ACTIONS(560),
    [sym__if_f] = ACTIONS(562),
    [sym__else_e] = ACTIONS(560),
    [sym__else_f] = ACTIONS(560),
    [sym__end_if_e] = ACTIONS(560),
    [sym__end_if_f] = ACTIONS(560),
    [sym__while_e] = ACTIONS(560),
    [sym__while_f] = ACTIONS(560),
    [sym__end_while_e] = ACTIONS(560),
    [sym__end_while_f] = ACTIONS(560),
    [sym__repeat_e] = ACTIONS(560),
    [sym__repeat_f] = ACTIONS(560),
    [sym__until_e] = ACTIONS(560),
    [sym__until_f] = ACTIONS(560),
    [sym__begin_sql_e] = ACTIONS(560),
    [sym__begin_sql_f] = ACTIONS(560),
  },
  [46] = {
    [sym__binary_operator] = STATE(129),
    [aux_sym__condition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym__local] = ACTIONS(564),
    [sym__exposed] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_AMP_AMP] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(566),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_TILDE_PIPE] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_EQ] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_LT_LT] = ACTIONS(569),
    [anon_sym_GT_GT] = ACTIONS(569),
    [anon_sym_QMARK_QMARK] = ACTIONS(569),
    [anon_sym_QMARK_PLUS] = ACTIONS(569),
    [anon_sym_QMARK_DASH] = ACTIONS(569),
    [anon_sym_PLUS_EQ] = ACTIONS(569),
    [anon_sym_DASH_EQ] = ACTIONS(569),
    [anon_sym_STAR_EQ] = ACTIONS(569),
    [anon_sym_SLASH_EQ] = ACTIONS(569),
    [anon_sym_DOLLAR] = ACTIONS(564),
    [anon_sym_LT_GT] = ACTIONS(564),
    [anon_sym_QMARK] = ACTIONS(572),
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
    [anon_sym_SLASH_STAR] = ACTIONS(564),
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [sym__if_e] = ACTIONS(564),
    [sym__if_f] = ACTIONS(572),
    [sym__else_e] = ACTIONS(564),
    [sym__else_f] = ACTIONS(564),
    [sym__end_if_e] = ACTIONS(564),
    [sym__end_if_f] = ACTIONS(564),
    [sym__while_e] = ACTIONS(564),
    [sym__while_f] = ACTIONS(564),
    [sym__end_while_e] = ACTIONS(564),
    [sym__end_while_f] = ACTIONS(564),
    [sym__repeat_e] = ACTIONS(564),
    [sym__repeat_f] = ACTIONS(564),
    [sym__until_e] = ACTIONS(564),
    [sym__until_f] = ACTIONS(564),
    [sym__begin_sql_e] = ACTIONS(564),
    [sym__begin_sql_f] = ACTIONS(564),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym__local] = ACTIONS(574),
    [sym__exposed] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(576),
    [anon_sym_AMP_AMP] = ACTIONS(574),
    [anon_sym_PIPE_PIPE] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(576),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(574),
    [anon_sym_TILDE_PIPE] = ACTIONS(574),
    [anon_sym_LT] = ACTIONS(576),
    [anon_sym_GT] = ACTIONS(576),
    [anon_sym_EQ] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(574),
    [anon_sym_GT_GT] = ACTIONS(574),
    [anon_sym_QMARK_QMARK] = ACTIONS(574),
    [anon_sym_QMARK_PLUS] = ACTIONS(574),
    [anon_sym_QMARK_DASH] = ACTIONS(574),
    [anon_sym_PLUS_EQ] = ACTIONS(574),
    [anon_sym_DASH_EQ] = ACTIONS(574),
    [anon_sym_STAR_EQ] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_LT_GT] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [anon_sym_QMARK] = ACTIONS(576),
    [sym__class_constructor] = ACTIONS(574),
    [sym__class_extends] = ACTIONS(574),
    [sym__var] = ACTIONS(574),
    [sym__property] = ACTIONS(574),
    [sym__alias] = ACTIONS(574),
    [sym__declare] = ACTIONS(574),
    [sym__function] = ACTIONS(574),
    [sym__return] = ACTIONS(574),
    [sym__break] = ACTIONS(574),
    [sym__continue] = ACTIONS(574),
    [sym__this] = ACTIONS(574),
    [sym__form] = ACTIONS(574),
    [sym__super] = ACTIONS(574),
    [sym__class_store_4d] = ACTIONS(574),
    [sym__class_store_ds] = ACTIONS(574),
    [sym__class_store_cs] = ACTIONS(574),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(574),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(574),
    [aux_sym__classic_array_blob_token1] = ACTIONS(574),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(574),
    [aux_sym__classic_array_date_token1] = ACTIONS(574),
    [aux_sym__classic_array_integer_token1] = ACTIONS(574),
    [aux_sym__classic_array_longint_token1] = ACTIONS(574),
    [aux_sym__classic_array_object_token1] = ACTIONS(574),
    [aux_sym__classic_array_picture_token1] = ACTIONS(574),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(574),
    [aux_sym__classic_array_real_token1] = ACTIONS(574),
    [aux_sym__classic_array_text_token1] = ACTIONS(574),
    [aux_sym__classic_array_time_token1] = ACTIONS(574),
    [anon_sym_SLASH_STAR] = ACTIONS(574),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [sym__if_e] = ACTIONS(574),
    [sym__if_f] = ACTIONS(576),
    [sym__else_e] = ACTIONS(574),
    [sym__else_f] = ACTIONS(574),
    [sym__end_if_e] = ACTIONS(574),
    [sym__end_if_f] = ACTIONS(574),
    [sym__while_e] = ACTIONS(574),
    [sym__while_f] = ACTIONS(574),
    [sym__end_while_e] = ACTIONS(574),
    [sym__end_while_f] = ACTIONS(574),
    [sym__repeat_e] = ACTIONS(574),
    [sym__repeat_f] = ACTIONS(574),
    [sym__until_e] = ACTIONS(574),
    [sym__until_f] = ACTIONS(574),
    [sym__begin_sql_e] = ACTIONS(574),
    [sym__begin_sql_f] = ACTIONS(574),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [sym__local] = ACTIONS(578),
    [sym__exposed] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(580),
    [anon_sym_SLASH] = ACTIONS(580),
    [anon_sym_AMP_AMP] = ACTIONS(578),
    [anon_sym_PIPE_PIPE] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(580),
    [anon_sym_CARET] = ACTIONS(578),
    [anon_sym_TILDE_PIPE] = ACTIONS(578),
    [anon_sym_LT] = ACTIONS(580),
    [anon_sym_GT] = ACTIONS(580),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_POUND] = ACTIONS(580),
    [anon_sym_LT_LT] = ACTIONS(578),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_QMARK_QMARK] = ACTIONS(578),
    [anon_sym_QMARK_PLUS] = ACTIONS(578),
    [anon_sym_QMARK_DASH] = ACTIONS(578),
    [anon_sym_PLUS_EQ] = ACTIONS(578),
    [anon_sym_DASH_EQ] = ACTIONS(578),
    [anon_sym_STAR_EQ] = ACTIONS(578),
    [anon_sym_SLASH_EQ] = ACTIONS(578),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_RBRACE] = ACTIONS(578),
    [anon_sym_LT_GT] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [anon_sym_QMARK] = ACTIONS(580),
    [sym__class_constructor] = ACTIONS(578),
    [sym__class_extends] = ACTIONS(578),
    [sym__var] = ACTIONS(578),
    [sym__property] = ACTIONS(578),
    [sym__alias] = ACTIONS(578),
    [sym__declare] = ACTIONS(578),
    [sym__function] = ACTIONS(578),
    [sym__return] = ACTIONS(578),
    [sym__break] = ACTIONS(578),
    [sym__continue] = ACTIONS(578),
    [sym__this] = ACTIONS(578),
    [sym__form] = ACTIONS(578),
    [sym__super] = ACTIONS(578),
    [sym__class_store_4d] = ACTIONS(578),
    [sym__class_store_ds] = ACTIONS(578),
    [sym__class_store_cs] = ACTIONS(578),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(578),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(578),
    [aux_sym__classic_array_blob_token1] = ACTIONS(578),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(578),
    [aux_sym__classic_array_date_token1] = ACTIONS(578),
    [aux_sym__classic_array_integer_token1] = ACTIONS(578),
    [aux_sym__classic_array_longint_token1] = ACTIONS(578),
    [aux_sym__classic_array_object_token1] = ACTIONS(578),
    [aux_sym__classic_array_picture_token1] = ACTIONS(578),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(578),
    [aux_sym__classic_array_real_token1] = ACTIONS(578),
    [aux_sym__classic_array_text_token1] = ACTIONS(578),
    [aux_sym__classic_array_time_token1] = ACTIONS(578),
    [anon_sym_SLASH_STAR] = ACTIONS(578),
    [anon_sym_SLASH_SLASH] = ACTIONS(578),
    [sym__if_e] = ACTIONS(578),
    [sym__if_f] = ACTIONS(580),
    [sym__else_e] = ACTIONS(578),
    [sym__else_f] = ACTIONS(578),
    [sym__end_if_e] = ACTIONS(578),
    [sym__end_if_f] = ACTIONS(578),
    [sym__while_e] = ACTIONS(578),
    [sym__while_f] = ACTIONS(578),
    [sym__end_while_e] = ACTIONS(578),
    [sym__end_while_f] = ACTIONS(578),
    [sym__repeat_e] = ACTIONS(578),
    [sym__repeat_f] = ACTIONS(578),
    [sym__until_e] = ACTIONS(578),
    [sym__until_f] = ACTIONS(578),
    [sym__begin_sql_e] = ACTIONS(578),
    [sym__begin_sql_f] = ACTIONS(578),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym__local] = ACTIONS(564),
    [sym__exposed] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_AMP_AMP] = ACTIONS(564),
    [anon_sym_PIPE_PIPE] = ACTIONS(564),
    [anon_sym_AMP] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_CARET] = ACTIONS(564),
    [anon_sym_TILDE_PIPE] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(564),
    [anon_sym_GT_GT] = ACTIONS(564),
    [anon_sym_QMARK_QMARK] = ACTIONS(564),
    [anon_sym_QMARK_PLUS] = ACTIONS(564),
    [anon_sym_QMARK_DASH] = ACTIONS(564),
    [anon_sym_PLUS_EQ] = ACTIONS(564),
    [anon_sym_DASH_EQ] = ACTIONS(564),
    [anon_sym_STAR_EQ] = ACTIONS(564),
    [anon_sym_SLASH_EQ] = ACTIONS(564),
    [anon_sym_DOLLAR] = ACTIONS(564),
    [anon_sym_LT_GT] = ACTIONS(564),
    [anon_sym_QMARK] = ACTIONS(572),
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
    [anon_sym_SLASH_STAR] = ACTIONS(564),
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [sym__if_e] = ACTIONS(564),
    [sym__if_f] = ACTIONS(572),
    [sym__else_e] = ACTIONS(564),
    [sym__else_f] = ACTIONS(564),
    [sym__end_if_e] = ACTIONS(564),
    [sym__end_if_f] = ACTIONS(564),
    [sym__while_e] = ACTIONS(564),
    [sym__while_f] = ACTIONS(564),
    [sym__end_while_e] = ACTIONS(564),
    [sym__end_while_f] = ACTIONS(564),
    [sym__repeat_e] = ACTIONS(564),
    [sym__repeat_f] = ACTIONS(564),
    [sym__until_e] = ACTIONS(564),
    [sym__until_f] = ACTIONS(564),
    [sym__begin_sql_e] = ACTIONS(564),
    [sym__begin_sql_f] = ACTIONS(564),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym__local] = ACTIONS(582),
    [sym__exposed] = ACTIONS(582),
    [anon_sym_DOLLAR] = ACTIONS(582),
    [anon_sym_LT_GT] = ACTIONS(582),
    [aux_sym_numeric_parameter_token1] = ACTIONS(584),
    [anon_sym_QMARK] = ACTIONS(582),
    [anon_sym_BANG] = ACTIONS(584),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(582),
    [sym__hex_literal] = ACTIONS(582),
    [aux_sym__num_literal_token1] = ACTIONS(584),
    [aux_sym__exp_literal_token1] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [sym__class_constructor] = ACTIONS(582),
    [sym__class_extends] = ACTIONS(582),
    [sym__var] = ACTIONS(582),
    [sym__property] = ACTIONS(582),
    [sym__alias] = ACTIONS(582),
    [sym__declare] = ACTIONS(582),
    [sym__function] = ACTIONS(582),
    [sym__return] = ACTIONS(582),
    [sym__break] = ACTIONS(582),
    [sym__continue] = ACTIONS(582),
    [sym__this] = ACTIONS(582),
    [sym__form] = ACTIONS(582),
    [sym__super] = ACTIONS(582),
    [sym__class_store_4d] = ACTIONS(582),
    [sym__class_store_ds] = ACTIONS(582),
    [sym__class_store_cs] = ACTIONS(582),
    [sym__system_variable_ok] = ACTIONS(582),
    [sym__system_variable_document] = ACTIONS(582),
    [sym__system_variable_flddelimit] = ACTIONS(582),
    [sym__system_variable_recdelimit] = ACTIONS(582),
    [sym__system_variable_error] = ACTIONS(584),
    [sym__system_variable_error_method] = ACTIONS(582),
    [sym__system_variable_error_line] = ACTIONS(582),
    [sym__system_variable_error_formula] = ACTIONS(582),
    [sym__system_variable_mousedown] = ACTIONS(582),
    [sym__system_variable_mousex] = ACTIONS(582),
    [sym__system_variable_mousey] = ACTIONS(582),
    [sym__system_variable_keycode] = ACTIONS(582),
    [sym__system_variable_modifiers] = ACTIONS(582),
    [sym__system_variable_mouseproc] = ACTIONS(582),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(582),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(582),
    [aux_sym__classic_array_blob_token1] = ACTIONS(582),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(582),
    [aux_sym__classic_array_date_token1] = ACTIONS(582),
    [aux_sym__classic_array_integer_token1] = ACTIONS(582),
    [aux_sym__classic_array_longint_token1] = ACTIONS(582),
    [aux_sym__classic_array_object_token1] = ACTIONS(582),
    [aux_sym__classic_array_picture_token1] = ACTIONS(582),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(582),
    [aux_sym__classic_array_real_token1] = ACTIONS(582),
    [aux_sym__classic_array_text_token1] = ACTIONS(582),
    [aux_sym__classic_array_time_token1] = ACTIONS(582),
    [anon_sym_SLASH_STAR] = ACTIONS(582),
    [anon_sym_SLASH_SLASH] = ACTIONS(582),
    [sym__if_e] = ACTIONS(582),
    [sym__if_f] = ACTIONS(584),
    [sym__else_e] = ACTIONS(582),
    [sym__else_f] = ACTIONS(582),
    [sym__end_if_e] = ACTIONS(582),
    [sym__end_if_f] = ACTIONS(582),
    [sym__while_e] = ACTIONS(582),
    [sym__while_f] = ACTIONS(582),
    [sym__end_while_e] = ACTIONS(582),
    [sym__end_while_f] = ACTIONS(582),
    [sym__repeat_e] = ACTIONS(582),
    [sym__repeat_f] = ACTIONS(582),
    [sym__until_e] = ACTIONS(582),
    [sym__until_f] = ACTIONS(582),
    [sym__begin_sql_e] = ACTIONS(582),
    [sym__begin_sql_f] = ACTIONS(582),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [sym__local] = ACTIONS(586),
    [sym__exposed] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_COLON] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [anon_sym_DOLLAR] = ACTIONS(586),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_LT_GT] = ACTIONS(586),
    [anon_sym_RBRACK] = ACTIONS(586),
    [anon_sym_QMARK] = ACTIONS(586),
    [sym__class_constructor] = ACTIONS(586),
    [sym__class_extends] = ACTIONS(586),
    [sym__var] = ACTIONS(586),
    [sym__property] = ACTIONS(586),
    [sym__alias] = ACTIONS(586),
    [sym__declare] = ACTIONS(586),
    [sym__function] = ACTIONS(586),
    [sym__return] = ACTIONS(586),
    [sym__break] = ACTIONS(586),
    [sym__continue] = ACTIONS(586),
    [sym__this] = ACTIONS(586),
    [sym__form] = ACTIONS(586),
    [sym__super] = ACTIONS(586),
    [sym__class_store_4d] = ACTIONS(586),
    [sym__class_store_ds] = ACTIONS(586),
    [sym__class_store_cs] = ACTIONS(586),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(586),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(586),
    [aux_sym__classic_array_blob_token1] = ACTIONS(586),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(586),
    [aux_sym__classic_array_date_token1] = ACTIONS(586),
    [aux_sym__classic_array_integer_token1] = ACTIONS(586),
    [aux_sym__classic_array_longint_token1] = ACTIONS(586),
    [aux_sym__classic_array_object_token1] = ACTIONS(586),
    [aux_sym__classic_array_picture_token1] = ACTIONS(586),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(586),
    [aux_sym__classic_array_real_token1] = ACTIONS(586),
    [aux_sym__classic_array_text_token1] = ACTIONS(586),
    [aux_sym__classic_array_time_token1] = ACTIONS(586),
    [anon_sym_SLASH_STAR] = ACTIONS(586),
    [anon_sym_SLASH_SLASH] = ACTIONS(586),
    [sym__if_e] = ACTIONS(586),
    [sym__if_f] = ACTIONS(588),
    [sym__else_e] = ACTIONS(586),
    [sym__else_f] = ACTIONS(586),
    [sym__end_if_e] = ACTIONS(586),
    [sym__end_if_f] = ACTIONS(586),
    [sym__while_e] = ACTIONS(586),
    [sym__while_f] = ACTIONS(586),
    [sym__end_while_e] = ACTIONS(586),
    [sym__end_while_f] = ACTIONS(586),
    [sym__repeat_e] = ACTIONS(586),
    [sym__repeat_f] = ACTIONS(586),
    [sym__until_e] = ACTIONS(586),
    [sym__until_f] = ACTIONS(586),
    [sym__begin_sql_e] = ACTIONS(586),
    [sym__begin_sql_f] = ACTIONS(586),
  },
  [52] = {
    [sym_local_variable] = STATE(143),
    [sym_interprocess_variable] = STATE(143),
    [sym_numeric_parameter] = STATE(143),
    [sym__variable] = STATE(155),
    [sym__mutable] = STATE(153),
    [sym__immutable] = STATE(150),
    [sym_class_function] = STATE(150),
    [sym_generic_function] = STATE(150),
    [sym__function_parameter] = STATE(205),
    [sym__function_call] = STATE(150),
    [sym__single_condition] = STATE(150),
    [sym__condition] = STATE(229),
    [sym_ternary_block] = STATE(229),
    [sym_object_literal_block] = STATE(229),
    [sym_collection_literal_block] = STATE(229),
    [sym_time] = STATE(159),
    [sym_date] = STATE(159),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(159),
    [sym_string] = STATE(159),
    [sym_constant] = STATE(150),
    [sym_this] = STATE(354),
    [sym_form] = STATE(354),
    [sym_super] = STATE(256),
    [sym__class_store] = STATE(145),
    [sym__class] = STATE(151),
    [sym_system_variable] = STATE(150),
    [aux_sym__functional_expression_repeat1] = STATE(208),
    [anon_sym_SEMI] = ACTIONS(590),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_STAR] = ACTIONS(594),
    [anon_sym_GT] = ACTIONS(594),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_LT_GT] = ACTIONS(600),
    [aux_sym_numeric_parameter_token1] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(608),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(610),
    [anon_sym_BANG] = ACTIONS(612),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(614),
    [sym__hex_literal] = ACTIONS(616),
    [aux_sym__num_literal_token1] = ACTIONS(602),
    [aux_sym__exp_literal_token1] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(620),
    [sym__class_store_ds] = ACTIONS(620),
    [sym__class_store_cs] = ACTIONS(620),
    [sym__system_variable_ok] = ACTIONS(622),
    [sym__system_variable_document] = ACTIONS(622),
    [sym__system_variable_flddelimit] = ACTIONS(622),
    [sym__system_variable_recdelimit] = ACTIONS(622),
    [sym__system_variable_error] = ACTIONS(624),
    [sym__system_variable_error_method] = ACTIONS(622),
    [sym__system_variable_error_line] = ACTIONS(622),
    [sym__system_variable_error_formula] = ACTIONS(622),
    [sym__system_variable_mousedown] = ACTIONS(622),
    [sym__system_variable_mousex] = ACTIONS(622),
    [sym__system_variable_mousey] = ACTIONS(622),
    [sym__system_variable_keycode] = ACTIONS(622),
    [sym__system_variable_modifiers] = ACTIONS(622),
    [sym__system_variable_mouseproc] = ACTIONS(622),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [sym__local] = ACTIONS(626),
    [sym__exposed] = ACTIONS(626),
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_DOLLAR] = ACTIONS(626),
    [anon_sym_RBRACE] = ACTIONS(626),
    [anon_sym_LT_GT] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [anon_sym_QMARK] = ACTIONS(626),
    [sym__class_constructor] = ACTIONS(626),
    [sym__class_extends] = ACTIONS(626),
    [sym__var] = ACTIONS(626),
    [sym__property] = ACTIONS(626),
    [sym__alias] = ACTIONS(626),
    [sym__declare] = ACTIONS(626),
    [sym__function] = ACTIONS(626),
    [sym__return] = ACTIONS(626),
    [sym__break] = ACTIONS(626),
    [sym__continue] = ACTIONS(626),
    [sym__this] = ACTIONS(626),
    [sym__form] = ACTIONS(626),
    [sym__super] = ACTIONS(626),
    [sym__class_store_4d] = ACTIONS(626),
    [sym__class_store_ds] = ACTIONS(626),
    [sym__class_store_cs] = ACTIONS(626),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(626),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(626),
    [aux_sym__classic_array_blob_token1] = ACTIONS(626),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(626),
    [aux_sym__classic_array_date_token1] = ACTIONS(626),
    [aux_sym__classic_array_integer_token1] = ACTIONS(626),
    [aux_sym__classic_array_longint_token1] = ACTIONS(626),
    [aux_sym__classic_array_object_token1] = ACTIONS(626),
    [aux_sym__classic_array_picture_token1] = ACTIONS(626),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(626),
    [aux_sym__classic_array_real_token1] = ACTIONS(626),
    [aux_sym__classic_array_text_token1] = ACTIONS(626),
    [aux_sym__classic_array_time_token1] = ACTIONS(626),
    [anon_sym_SLASH_STAR] = ACTIONS(626),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [sym__if_e] = ACTIONS(626),
    [sym__if_f] = ACTIONS(628),
    [sym__else_e] = ACTIONS(626),
    [sym__else_f] = ACTIONS(626),
    [sym__end_if_e] = ACTIONS(626),
    [sym__end_if_f] = ACTIONS(626),
    [sym__while_e] = ACTIONS(626),
    [sym__while_f] = ACTIONS(626),
    [sym__end_while_e] = ACTIONS(626),
    [sym__end_while_f] = ACTIONS(626),
    [sym__repeat_e] = ACTIONS(626),
    [sym__repeat_f] = ACTIONS(626),
    [sym__until_e] = ACTIONS(626),
    [sym__until_f] = ACTIONS(626),
    [sym__begin_sql_e] = ACTIONS(626),
    [sym__begin_sql_f] = ACTIONS(626),
  },
  [54] = {
    [sym_local_variable] = STATE(143),
    [sym_interprocess_variable] = STATE(143),
    [sym_numeric_parameter] = STATE(143),
    [sym__variable] = STATE(155),
    [sym__mutable] = STATE(153),
    [sym__immutable] = STATE(150),
    [sym_class_function] = STATE(150),
    [sym_generic_function] = STATE(150),
    [sym__function_parameter] = STATE(231),
    [sym__function_call] = STATE(150),
    [sym__single_condition] = STATE(150),
    [sym__condition] = STATE(229),
    [sym_ternary_block] = STATE(229),
    [sym_object_literal_block] = STATE(229),
    [sym_collection_literal_block] = STATE(229),
    [sym_time] = STATE(159),
    [sym_date] = STATE(159),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(159),
    [sym_string] = STATE(159),
    [sym_constant] = STATE(150),
    [sym_this] = STATE(354),
    [sym_form] = STATE(354),
    [sym_super] = STATE(256),
    [sym__class_store] = STATE(145),
    [sym__class] = STATE(151),
    [sym_system_variable] = STATE(150),
    [aux_sym__functional_expression_repeat1] = STATE(227),
    [anon_sym_SEMI] = ACTIONS(590),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(632),
    [anon_sym_GT] = ACTIONS(632),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_LT_GT] = ACTIONS(600),
    [aux_sym_numeric_parameter_token1] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(608),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(610),
    [anon_sym_BANG] = ACTIONS(612),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(614),
    [sym__hex_literal] = ACTIONS(616),
    [aux_sym__num_literal_token1] = ACTIONS(602),
    [aux_sym__exp_literal_token1] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(620),
    [sym__class_store_ds] = ACTIONS(620),
    [sym__class_store_cs] = ACTIONS(620),
    [sym__system_variable_ok] = ACTIONS(622),
    [sym__system_variable_document] = ACTIONS(622),
    [sym__system_variable_flddelimit] = ACTIONS(622),
    [sym__system_variable_recdelimit] = ACTIONS(622),
    [sym__system_variable_error] = ACTIONS(624),
    [sym__system_variable_error_method] = ACTIONS(622),
    [sym__system_variable_error_line] = ACTIONS(622),
    [sym__system_variable_error_formula] = ACTIONS(622),
    [sym__system_variable_mousedown] = ACTIONS(622),
    [sym__system_variable_mousex] = ACTIONS(622),
    [sym__system_variable_mousey] = ACTIONS(622),
    [sym__system_variable_keycode] = ACTIONS(622),
    [sym__system_variable_modifiers] = ACTIONS(622),
    [sym__system_variable_mouseproc] = ACTIONS(622),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [sym__local] = ACTIONS(634),
    [sym__exposed] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_DOLLAR] = ACTIONS(634),
    [anon_sym_RBRACE] = ACTIONS(634),
    [anon_sym_LT_GT] = ACTIONS(634),
    [anon_sym_RBRACK] = ACTIONS(634),
    [anon_sym_QMARK] = ACTIONS(634),
    [sym__class_constructor] = ACTIONS(634),
    [sym__class_extends] = ACTIONS(634),
    [sym__var] = ACTIONS(634),
    [sym__property] = ACTIONS(634),
    [sym__alias] = ACTIONS(634),
    [sym__declare] = ACTIONS(634),
    [sym__function] = ACTIONS(634),
    [sym__return] = ACTIONS(634),
    [sym__break] = ACTIONS(634),
    [sym__continue] = ACTIONS(634),
    [sym__this] = ACTIONS(634),
    [sym__form] = ACTIONS(634),
    [sym__super] = ACTIONS(634),
    [sym__class_store_4d] = ACTIONS(634),
    [sym__class_store_ds] = ACTIONS(634),
    [sym__class_store_cs] = ACTIONS(634),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(634),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(634),
    [aux_sym__classic_array_blob_token1] = ACTIONS(634),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(634),
    [aux_sym__classic_array_date_token1] = ACTIONS(634),
    [aux_sym__classic_array_integer_token1] = ACTIONS(634),
    [aux_sym__classic_array_longint_token1] = ACTIONS(634),
    [aux_sym__classic_array_object_token1] = ACTIONS(634),
    [aux_sym__classic_array_picture_token1] = ACTIONS(634),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(634),
    [aux_sym__classic_array_real_token1] = ACTIONS(634),
    [aux_sym__classic_array_text_token1] = ACTIONS(634),
    [aux_sym__classic_array_time_token1] = ACTIONS(634),
    [anon_sym_SLASH_STAR] = ACTIONS(634),
    [anon_sym_SLASH_SLASH] = ACTIONS(634),
    [sym__if_e] = ACTIONS(634),
    [sym__if_f] = ACTIONS(636),
    [sym__else_e] = ACTIONS(634),
    [sym__else_f] = ACTIONS(634),
    [sym__end_if_e] = ACTIONS(634),
    [sym__end_if_f] = ACTIONS(634),
    [sym__while_e] = ACTIONS(634),
    [sym__while_f] = ACTIONS(634),
    [sym__end_while_e] = ACTIONS(634),
    [sym__end_while_f] = ACTIONS(634),
    [sym__repeat_e] = ACTIONS(634),
    [sym__repeat_f] = ACTIONS(634),
    [sym__until_e] = ACTIONS(634),
    [sym__until_f] = ACTIONS(634),
    [sym__begin_sql_e] = ACTIONS(634),
    [sym__begin_sql_f] = ACTIONS(634),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [sym__local] = ACTIONS(638),
    [sym__exposed] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_LT_GT] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [anon_sym_QMARK] = ACTIONS(638),
    [sym__class_constructor] = ACTIONS(638),
    [sym__class_extends] = ACTIONS(638),
    [sym__var] = ACTIONS(638),
    [sym__property] = ACTIONS(638),
    [sym__alias] = ACTIONS(638),
    [sym__declare] = ACTIONS(638),
    [sym__function] = ACTIONS(638),
    [sym__return] = ACTIONS(638),
    [sym__break] = ACTIONS(638),
    [sym__continue] = ACTIONS(638),
    [sym__this] = ACTIONS(638),
    [sym__form] = ACTIONS(638),
    [sym__super] = ACTIONS(638),
    [sym__class_store_4d] = ACTIONS(638),
    [sym__class_store_ds] = ACTIONS(638),
    [sym__class_store_cs] = ACTIONS(638),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(638),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(638),
    [aux_sym__classic_array_blob_token1] = ACTIONS(638),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(638),
    [aux_sym__classic_array_date_token1] = ACTIONS(638),
    [aux_sym__classic_array_integer_token1] = ACTIONS(638),
    [aux_sym__classic_array_longint_token1] = ACTIONS(638),
    [aux_sym__classic_array_object_token1] = ACTIONS(638),
    [aux_sym__classic_array_picture_token1] = ACTIONS(638),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(638),
    [aux_sym__classic_array_real_token1] = ACTIONS(638),
    [aux_sym__classic_array_text_token1] = ACTIONS(638),
    [aux_sym__classic_array_time_token1] = ACTIONS(638),
    [anon_sym_SLASH_STAR] = ACTIONS(638),
    [anon_sym_SLASH_SLASH] = ACTIONS(638),
    [sym__if_e] = ACTIONS(638),
    [sym__if_f] = ACTIONS(640),
    [sym__else_e] = ACTIONS(638),
    [sym__else_f] = ACTIONS(638),
    [sym__end_if_e] = ACTIONS(638),
    [sym__end_if_f] = ACTIONS(638),
    [sym__while_e] = ACTIONS(638),
    [sym__while_f] = ACTIONS(638),
    [sym__end_while_e] = ACTIONS(638),
    [sym__end_while_f] = ACTIONS(638),
    [sym__repeat_e] = ACTIONS(638),
    [sym__repeat_f] = ACTIONS(638),
    [sym__until_e] = ACTIONS(638),
    [sym__until_f] = ACTIONS(638),
    [sym__begin_sql_e] = ACTIONS(638),
    [sym__begin_sql_f] = ACTIONS(638),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [sym__local] = ACTIONS(642),
    [sym__exposed] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_DOLLAR] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_LT_GT] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [anon_sym_QMARK] = ACTIONS(642),
    [sym__class_constructor] = ACTIONS(642),
    [sym__class_extends] = ACTIONS(642),
    [sym__var] = ACTIONS(642),
    [sym__property] = ACTIONS(642),
    [sym__alias] = ACTIONS(642),
    [sym__declare] = ACTIONS(642),
    [sym__function] = ACTIONS(642),
    [sym__return] = ACTIONS(642),
    [sym__break] = ACTIONS(642),
    [sym__continue] = ACTIONS(642),
    [sym__this] = ACTIONS(642),
    [sym__form] = ACTIONS(642),
    [sym__super] = ACTIONS(642),
    [sym__class_store_4d] = ACTIONS(642),
    [sym__class_store_ds] = ACTIONS(642),
    [sym__class_store_cs] = ACTIONS(642),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(642),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(642),
    [aux_sym__classic_array_blob_token1] = ACTIONS(642),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(642),
    [aux_sym__classic_array_date_token1] = ACTIONS(642),
    [aux_sym__classic_array_integer_token1] = ACTIONS(642),
    [aux_sym__classic_array_longint_token1] = ACTIONS(642),
    [aux_sym__classic_array_object_token1] = ACTIONS(642),
    [aux_sym__classic_array_picture_token1] = ACTIONS(642),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(642),
    [aux_sym__classic_array_real_token1] = ACTIONS(642),
    [aux_sym__classic_array_text_token1] = ACTIONS(642),
    [aux_sym__classic_array_time_token1] = ACTIONS(642),
    [anon_sym_SLASH_STAR] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(642),
    [sym__if_e] = ACTIONS(642),
    [sym__if_f] = ACTIONS(644),
    [sym__else_e] = ACTIONS(642),
    [sym__else_f] = ACTIONS(642),
    [sym__end_if_e] = ACTIONS(642),
    [sym__end_if_f] = ACTIONS(642),
    [sym__while_e] = ACTIONS(642),
    [sym__while_f] = ACTIONS(642),
    [sym__end_while_e] = ACTIONS(642),
    [sym__end_while_f] = ACTIONS(642),
    [sym__repeat_e] = ACTIONS(642),
    [sym__repeat_f] = ACTIONS(642),
    [sym__until_e] = ACTIONS(642),
    [sym__until_f] = ACTIONS(642),
    [sym__begin_sql_e] = ACTIONS(642),
    [sym__begin_sql_f] = ACTIONS(642),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [sym__local] = ACTIONS(646),
    [sym__exposed] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_COLON] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_DOLLAR] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_LT_GT] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [anon_sym_QMARK] = ACTIONS(646),
    [sym__class_constructor] = ACTIONS(646),
    [sym__class_extends] = ACTIONS(646),
    [sym__var] = ACTIONS(646),
    [sym__property] = ACTIONS(646),
    [sym__alias] = ACTIONS(646),
    [sym__declare] = ACTIONS(646),
    [sym__function] = ACTIONS(646),
    [sym__return] = ACTIONS(646),
    [sym__break] = ACTIONS(646),
    [sym__continue] = ACTIONS(646),
    [sym__this] = ACTIONS(646),
    [sym__form] = ACTIONS(646),
    [sym__super] = ACTIONS(646),
    [sym__class_store_4d] = ACTIONS(646),
    [sym__class_store_ds] = ACTIONS(646),
    [sym__class_store_cs] = ACTIONS(646),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(646),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(646),
    [aux_sym__classic_array_blob_token1] = ACTIONS(646),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(646),
    [aux_sym__classic_array_date_token1] = ACTIONS(646),
    [aux_sym__classic_array_integer_token1] = ACTIONS(646),
    [aux_sym__classic_array_longint_token1] = ACTIONS(646),
    [aux_sym__classic_array_object_token1] = ACTIONS(646),
    [aux_sym__classic_array_picture_token1] = ACTIONS(646),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(646),
    [aux_sym__classic_array_real_token1] = ACTIONS(646),
    [aux_sym__classic_array_text_token1] = ACTIONS(646),
    [aux_sym__classic_array_time_token1] = ACTIONS(646),
    [anon_sym_SLASH_STAR] = ACTIONS(646),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [sym__if_e] = ACTIONS(646),
    [sym__if_f] = ACTIONS(648),
    [sym__else_e] = ACTIONS(646),
    [sym__else_f] = ACTIONS(646),
    [sym__end_if_e] = ACTIONS(646),
    [sym__end_if_f] = ACTIONS(646),
    [sym__while_e] = ACTIONS(646),
    [sym__while_f] = ACTIONS(646),
    [sym__end_while_e] = ACTIONS(646),
    [sym__end_while_f] = ACTIONS(646),
    [sym__repeat_e] = ACTIONS(646),
    [sym__repeat_f] = ACTIONS(646),
    [sym__until_e] = ACTIONS(646),
    [sym__until_f] = ACTIONS(646),
    [sym__begin_sql_e] = ACTIONS(646),
    [sym__begin_sql_f] = ACTIONS(646),
  },
  [59] = {
    [sym_local_variable] = STATE(143),
    [sym_interprocess_variable] = STATE(143),
    [sym_numeric_parameter] = STATE(143),
    [sym__variable] = STATE(155),
    [sym__mutable] = STATE(153),
    [sym__immutable] = STATE(150),
    [sym_class_function] = STATE(150),
    [sym_generic_function] = STATE(150),
    [sym__function_parameter] = STATE(242),
    [sym__function_call] = STATE(150),
    [sym__single_condition] = STATE(150),
    [sym__condition] = STATE(229),
    [sym_ternary_block] = STATE(229),
    [sym_object_literal_block] = STATE(229),
    [sym_collection_literal_block] = STATE(229),
    [sym_time] = STATE(159),
    [sym_date] = STATE(159),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(159),
    [sym_string] = STATE(159),
    [sym_constant] = STATE(150),
    [sym_this] = STATE(354),
    [sym_form] = STATE(354),
    [sym_super] = STATE(256),
    [sym__class_store] = STATE(145),
    [sym__class] = STATE(151),
    [sym_system_variable] = STATE(150),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(598),
    [anon_sym_LT_GT] = ACTIONS(600),
    [aux_sym_numeric_parameter_token1] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(608),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(610),
    [anon_sym_BANG] = ACTIONS(612),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(614),
    [sym__hex_literal] = ACTIONS(616),
    [aux_sym__num_literal_token1] = ACTIONS(602),
    [aux_sym__exp_literal_token1] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym__this] = ACTIONS(33),
    [sym__form] = ACTIONS(35),
    [sym__super] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(620),
    [sym__class_store_ds] = ACTIONS(620),
    [sym__class_store_cs] = ACTIONS(620),
    [sym__system_variable_ok] = ACTIONS(622),
    [sym__system_variable_document] = ACTIONS(622),
    [sym__system_variable_flddelimit] = ACTIONS(622),
    [sym__system_variable_recdelimit] = ACTIONS(622),
    [sym__system_variable_error] = ACTIONS(624),
    [sym__system_variable_error_method] = ACTIONS(622),
    [sym__system_variable_error_line] = ACTIONS(622),
    [sym__system_variable_error_formula] = ACTIONS(622),
    [sym__system_variable_mousedown] = ACTIONS(622),
    [sym__system_variable_mousex] = ACTIONS(622),
    [sym__system_variable_mousey] = ACTIONS(622),
    [sym__system_variable_keycode] = ACTIONS(622),
    [sym__system_variable_modifiers] = ACTIONS(622),
    [sym__system_variable_mouseproc] = ACTIONS(622),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      sym__if_f,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(652), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [73] = 4,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(658), 1,
      sym__if_f,
    STATE(14), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(656), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [146] = 4,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(662), 1,
      sym__if_f,
    STATE(60), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(660), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [219] = 4,
    ACTIONS(666), 1,
      anon_sym_DASH_GT,
    ACTIONS(668), 1,
      sym__if_f,
    STATE(86), 1,
      sym_function_result,
    ACTIONS(664), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [292] = 2,
    ACTIONS(672), 1,
      sym__if_f,
    ACTIONS(670), 63,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [361] = 2,
    ACTIONS(676), 1,
      sym__if_f,
    ACTIONS(674), 63,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [430] = 4,
    ACTIONS(666), 1,
      anon_sym_DASH_GT,
    ACTIONS(680), 1,
      sym__if_f,
    STATE(80), 1,
      sym_function_result,
    ACTIONS(678), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [503] = 4,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(684), 1,
      sym__if_f,
    STATE(61), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(682), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [576] = 2,
    ACTIONS(688), 1,
      sym__if_f,
    ACTIONS(686), 63,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [645] = 2,
    ACTIONS(692), 1,
      sym__if_f,
    ACTIONS(690), 62,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [713] = 3,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(696), 1,
      sym__if_f,
    ACTIONS(694), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [783] = 3,
    ACTIONS(696), 1,
      sym__if_f,
    ACTIONS(698), 1,
      anon_sym_QMARK,
    ACTIONS(694), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [853] = 2,
    ACTIONS(702), 1,
      sym__if_f,
    ACTIONS(700), 62,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [921] = 2,
    ACTIONS(706), 1,
      sym__if_f,
    ACTIONS(704), 62,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [989] = 2,
    ACTIONS(710), 1,
      sym__if_f,
    ACTIONS(708), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1056] = 2,
    ACTIONS(714), 1,
      sym__if_f,
    ACTIONS(712), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1123] = 2,
    ACTIONS(718), 1,
      sym__if_f,
    ACTIONS(716), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1190] = 2,
    ACTIONS(722), 1,
      sym__if_f,
    ACTIONS(720), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1257] = 2,
    ACTIONS(726), 1,
      sym__if_f,
    ACTIONS(724), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1324] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(277), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [1445] = 2,
    ACTIONS(730), 1,
      sym__if_f,
    ACTIONS(728), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1512] = 2,
    ACTIONS(734), 1,
      sym__if_f,
    ACTIONS(732), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1579] = 2,
    ACTIONS(738), 1,
      sym__if_f,
    ACTIONS(736), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1646] = 2,
    ACTIONS(742), 1,
      sym__if_f,
    ACTIONS(740), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1713] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(196), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [1834] = 2,
    ACTIONS(746), 1,
      sym__if_f,
    ACTIONS(744), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1901] = 2,
    ACTIONS(750), 1,
      sym__if_f,
    ACTIONS(748), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [1968] = 2,
    ACTIONS(754), 1,
      sym__if_f,
    ACTIONS(752), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2035] = 2,
    ACTIONS(758), 1,
      sym__if_f,
    ACTIONS(756), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2102] = 2,
    ACTIONS(762), 1,
      sym__if_f,
    ACTIONS(760), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2169] = 2,
    ACTIONS(766), 1,
      sym__if_f,
    ACTIONS(764), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2236] = 2,
    ACTIONS(770), 1,
      sym__if_f,
    ACTIONS(768), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2303] = 2,
    ACTIONS(774), 1,
      sym__if_f,
    ACTIONS(772), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2370] = 2,
    ACTIONS(778), 1,
      sym__if_f,
    ACTIONS(776), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2437] = 2,
    ACTIONS(782), 1,
      sym__if_f,
    ACTIONS(780), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2504] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(258), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [2625] = 2,
    ACTIONS(786), 1,
      sym__if_f,
    ACTIONS(784), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [2692] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(237), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [2813] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(51), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [2934] = 2,
    ACTIONS(790), 1,
      sym__if_f,
    ACTIONS(788), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3001] = 2,
    ACTIONS(794), 1,
      sym__if_f,
    ACTIONS(792), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3068] = 2,
    ACTIONS(798), 1,
      sym__if_f,
    ACTIONS(796), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3135] = 2,
    ACTIONS(802), 1,
      sym__if_f,
    ACTIONS(800), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3202] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(236), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [3323] = 2,
    ACTIONS(806), 1,
      sym__if_f,
    ACTIONS(804), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3390] = 2,
    ACTIONS(810), 1,
      sym__if_f,
    ACTIONS(808), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3457] = 2,
    ACTIONS(814), 1,
      sym__if_f,
    ACTIONS(812), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3524] = 30,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(70), 1,
      sym_ternary_block,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(71), 3,
      sym__condition,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(43), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [3647] = 2,
    ACTIONS(818), 1,
      sym__if_f,
    ACTIONS(816), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [3714] = 29,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(51), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(43), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [3835] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(225), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [3956] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(234), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [4077] = 2,
    ACTIONS(822), 1,
      sym__if_f,
    ACTIONS(820), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4144] = 2,
    ACTIONS(826), 1,
      sym__if_f,
    ACTIONS(824), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4211] = 2,
    ACTIONS(830), 1,
      sym__if_f,
    ACTIONS(828), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4278] = 2,
    ACTIONS(834), 1,
      sym__if_f,
    ACTIONS(832), 61,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4345] = 29,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(608), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(610), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(246), 4,
      sym__condition,
      sym_ternary_block,
      sym_object_literal_block,
      sym_collection_literal_block,
    STATE(150), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [4466] = 4,
    ACTIONS(838), 1,
      sym__if_f,
    STATE(11), 1,
      sym_else,
    ACTIONS(840), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(836), 54,
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
      sym__while_e,
      sym__while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4533] = 1,
    ACTIONS(842), 55,
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
      sym__while_e,
      sym__while_f,
      sym__end_while_e,
      sym__end_while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4591] = 1,
    ACTIONS(844), 55,
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
      sym__while_e,
      sym__while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__until_e,
      sym__until_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4649] = 1,
    ACTIONS(846), 55,
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
      sym__while_e,
      sym__while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4707] = 1,
    ACTIONS(848), 55,
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
      sym__while_e,
      sym__while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [4765] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(363), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [4868] = 24,
    ACTIONS(33), 1,
      sym__this,
    ACTIONS(35), 1,
      sym__form,
    ACTIONS(37), 1,
      sym__super,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(600), 1,
      anon_sym_LT_GT,
    ACTIONS(606), 1,
      anon_sym_QMARK,
    ACTIONS(612), 1,
      anon_sym_BANG,
    ACTIONS(614), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__system_variable_error,
    STATE(145), 1,
      sym__class_store,
    STATE(151), 1,
      sym__class,
    STATE(153), 1,
      sym__mutable,
    STATE(155), 1,
      sym__variable,
    STATE(256), 1,
      sym_super,
    ACTIONS(602), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(616), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(354), 2,
      sym_this,
      sym_form,
    ACTIONS(620), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(143), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(159), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(160), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(622), 13,
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
  [4971] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(365), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5074] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(350), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5177] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(357), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5280] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
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
    ACTIONS(407), 13,
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
  [5383] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(367), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5486] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(49), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5589] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(362), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5692] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(358), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5795] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(318), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [5898] = 24,
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
    ACTIONS(397), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(401), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym__system_variable_error,
    STATE(20), 1,
      sym__class_store,
    STATE(27), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(32), 1,
      sym__mutable,
    STATE(296), 1,
      sym_super,
    ACTIONS(395), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(403), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(320), 2,
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
    STATE(38), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(47), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(389), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(407), 13,
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
  [6001] = 1,
    ACTIONS(850), 53,
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
      sym__while_e,
      sym__while_f,
      sym__repeat_e,
      sym__repeat_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [6057] = 4,
    ACTIONS(852), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(421), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(419), 22,
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
      anon_sym_RBRACK,
  [6099] = 5,
    ACTIONS(855), 1,
      anon_sym_DOT,
    ACTIONS(857), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      aux_sym__mutable_repeat1,
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
    ACTIONS(438), 21,
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
      anon_sym_RBRACK,
  [6143] = 5,
    ACTIONS(855), 1,
      anon_sym_DOT,
    ACTIONS(859), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
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
    ACTIONS(430), 21,
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
      anon_sym_RBRACK,
  [6187] = 2,
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
    ACTIONS(462), 23,
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
      anon_sym_RBRACK,
  [6224] = 3,
    ACTIONS(861), 1,
      anon_sym_LBRACE,
    ACTIONS(415), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(413), 22,
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
      anon_sym_RBRACK,
  [6263] = 2,
    ACTIONS(428), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(426), 23,
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
      anon_sym_RBRACK,
  [6300] = 4,
    ACTIONS(855), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym__mutable_repeat1,
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
    ACTIONS(444), 21,
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
      anon_sym_RBRACK,
  [6341] = 3,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(474), 22,
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
      anon_sym_RBRACK,
  [6380] = 3,
    ACTIONS(865), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(456), 22,
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
      anon_sym_RBRACK,
  [6419] = 2,
    ACTIONS(421), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(419), 23,
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
      anon_sym_RBRACK,
  [6456] = 4,
    ACTIONS(855), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(450), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(448), 21,
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
      anon_sym_RBRACK,
  [6497] = 2,
    ACTIONS(468), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(466), 23,
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
      anon_sym_RBRACK,
  [6534] = 6,
    ACTIONS(572), 1,
      anon_sym_QMARK,
    STATE(123), 1,
      sym__binary_operator,
    STATE(147), 1,
      aux_sym__condition_repeat1,
    ACTIONS(564), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(867), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(870), 15,
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
  [6578] = 2,
    ACTIONS(454), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(452), 22,
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
      anon_sym_RBRACK,
  [6614] = 2,
    ACTIONS(472), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(470), 22,
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
      anon_sym_RBRACK,
  [6650] = 6,
    ACTIONS(554), 1,
      anon_sym_QMARK,
    STATE(123), 1,
      sym__binary_operator,
    STATE(154), 1,
      aux_sym__condition_repeat1,
    ACTIONS(552), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(873), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(875), 15,
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
  [6694] = 4,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym__functional_expression,
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
    ACTIONS(494), 20,
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
      anon_sym_RBRACK,
  [6734] = 2,
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
    ACTIONS(486), 22,
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
      anon_sym_RBRACK,
  [6770] = 4,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym__functional_expression,
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
    ACTIONS(504), 20,
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
      anon_sym_RBRACK,
  [6810] = 6,
    ACTIONS(522), 1,
      anon_sym_QMARK,
    STATE(123), 1,
      sym__binary_operator,
    STATE(147), 1,
      aux_sym__condition_repeat1,
    ACTIONS(516), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(873), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(875), 15,
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
  [6854] = 3,
    ACTIONS(879), 1,
      anon_sym_DOT,
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
    ACTIONS(480), 21,
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
      anon_sym_RBRACK,
  [6892] = 2,
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
    ACTIONS(490), 21,
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
      anon_sym_RBRACK,
  [6927] = 2,
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
    ACTIONS(500), 21,
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
      anon_sym_RBRACK,
  [6962] = 2,
    ACTIONS(580), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(578), 20,
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
      anon_sym_RBRACK,
  [6996] = 2,
    ACTIONS(576), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(574), 20,
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
      anon_sym_RBRACK,
  [7030] = 2,
    ACTIONS(572), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(564), 20,
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
      anon_sym_RBRACK,
  [7064] = 2,
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
    ACTIONS(544), 20,
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
      anon_sym_RBRACK,
  [7098] = 2,
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
    ACTIONS(548), 20,
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
      anon_sym_RBRACK,
  [7132] = 2,
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
    ACTIONS(556), 20,
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
      anon_sym_RBRACK,
  [7166] = 2,
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
    ACTIONS(528), 20,
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
      anon_sym_RBRACK,
  [7200] = 2,
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
    ACTIONS(540), 20,
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
      anon_sym_RBRACK,
  [7234] = 2,
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
    ACTIONS(512), 20,
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
      anon_sym_RBRACK,
  [7268] = 2,
    ACTIONS(526), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(524), 20,
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
      anon_sym_RBRACK,
  [7302] = 2,
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
    ACTIONS(508), 20,
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
      anon_sym_RBRACK,
  [7336] = 2,
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
    ACTIONS(532), 20,
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
      anon_sym_RBRACK,
  [7370] = 2,
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
    ACTIONS(560), 20,
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
      anon_sym_RBRACK,
  [7404] = 2,
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
    ACTIONS(536), 20,
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
      anon_sym_RBRACK,
  [7438] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(105), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7468] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(65), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7498] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(106), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7528] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(115), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7558] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(108), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7588] = 5,
    STATE(20), 1,
      sym__class_store,
    STATE(64), 1,
      sym_class,
    STATE(68), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(881), 12,
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
  [7618] = 3,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [7633] = 3,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [7648] = 3,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      aux_sym_string_repeat1,
    ACTIONS(893), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [7663] = 3,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [7678] = 3,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym_string_repeat1,
    ACTIONS(899), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [7693] = 4,
    ACTIONS(904), 1,
      aux_sym__name_token1,
    STATE(257), 1,
      sym__computed,
    STATE(356), 1,
      sym__name,
    ACTIONS(902), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [7709] = 4,
    ACTIONS(908), 1,
      aux_sym__name_token1,
    STATE(267), 1,
      sym__computed,
    STATE(351), 1,
      sym__name,
    ACTIONS(906), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [7725] = 5,
    ACTIONS(912), 1,
      aux_sym_sql_block_token1,
    STATE(88), 1,
      sym_sql_block,
    STATE(89), 1,
      sym_end_sql,
    STATE(188), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(910), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [7742] = 3,
    ACTIONS(916), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(914), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(139), 2,
      sym__name,
      sym__classic_name,
  [7754] = 1,
    ACTIONS(918), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [7762] = 4,
    ACTIONS(920), 1,
      aux_sym_sql_block_token1,
    STATE(101), 1,
      sym_end_sql,
    STATE(194), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(910), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [7776] = 3,
    ACTIONS(924), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(922), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(13), 2,
      sym__name,
      sym__classic_name,
  [7788] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(926), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(286), 2,
      sym__name,
      sym_local_variable,
  [7800] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(930), 2,
      aux_sym__name_token1,
      aux_sym_numeric_parameter_token1,
    STATE(306), 2,
      sym__name,
      sym_local_variable,
  [7812] = 2,
    ACTIONS(922), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(13), 2,
      sym__name,
      sym__classic_name,
  [7821] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(932), 1,
      aux_sym__name_token1,
    STATE(346), 2,
      sym__name,
      sym_local_variable,
  [7832] = 3,
    ACTIONS(936), 1,
      aux_sym_sql_block_token1,
    STATE(194), 1,
      aux_sym_sql_block_repeat1,
    ACTIONS(934), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [7843] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(939), 1,
      aux_sym__name_token1,
    STATE(283), 2,
      sym__name,
      sym_local_variable,
  [7854] = 4,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    STATE(233), 1,
      aux_sym_collection_literal_block_repeat1,
  [7867] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(947), 1,
      aux_sym__name_token1,
    STATE(224), 2,
      sym__name,
      sym_local_variable,
  [7878] = 2,
    ACTIONS(949), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(142), 2,
      sym__name,
      sym__classic_name,
  [7887] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(951), 1,
      aux_sym__name_token1,
    STATE(218), 2,
      sym__name,
      sym_local_variable,
  [7898] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(953), 1,
      aux_sym__name_token1,
    STATE(244), 2,
      sym__name,
      sym_local_variable,
  [7909] = 2,
    ACTIONS(955), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(26), 2,
      sym__name,
      sym__classic_name,
  [7918] = 4,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym__function_argument,
    STATE(212), 1,
      sym_local_variable,
  [7931] = 3,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__functional_expression_repeat1,
  [7941] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    STATE(212), 1,
      sym_local_variable,
    STATE(261), 1,
      sym__function_argument,
  [7951] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym__functional_expression_repeat1,
  [7961] = 2,
    STATE(67), 1,
      sym__name,
    ACTIONS(966), 2,
      aux_sym__name_token1,
      sym__class_store_4d,
  [7969] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__functional_expression_repeat1,
  [7979] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__functional_expression_repeat1,
  [7989] = 3,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_function_arguments_repeat1,
  [7999] = 3,
    ACTIONS(974), 1,
      anon_sym_SEMI,
    ACTIONS(977), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      aux_sym_collection_literal_block_repeat1,
  [8009] = 1,
    ACTIONS(979), 3,
      sym__end_sql_e,
      sym__end_sql_f,
      aux_sym_sql_block_token1,
  [8015] = 3,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    ACTIONS(983), 1,
      anon_sym_COLON,
    STATE(223), 1,
      aux_sym__function_argument_repeat1,
  [8025] = 3,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(985), 1,
      anon_sym_COLON_EQ,
    STATE(45), 1,
      sym__functional_expression,
  [8035] = 3,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    ACTIONS(989), 1,
      anon_sym_COLON,
    STATE(228), 1,
      aux_sym_property_declaration_block_repeat1,
  [8045] = 3,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    STATE(113), 1,
      sym__function_argument,
    STATE(212), 1,
      sym_local_variable,
  [8055] = 3,
    ACTIONS(991), 1,
      anon_sym_SEMI,
    ACTIONS(993), 1,
      anon_sym_COLON,
    STATE(221), 1,
      aux_sym_var_declaration_block_repeat1,
  [8065] = 3,
    ACTIONS(995), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_function_arguments_repeat1,
  [8075] = 3,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_classic_compiler_block_repeat1,
  [8085] = 3,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym__function_argument_repeat1,
  [8095] = 3,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_function_arguments_repeat1,
  [8105] = 3,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1014), 1,
      anon_sym_COLON,
    STATE(221), 1,
      aux_sym_var_declaration_block_repeat1,
  [8115] = 3,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    ACTIONS(1016), 1,
      anon_sym_COLON,
    STATE(214), 1,
      aux_sym_property_declaration_block_repeat1,
  [8125] = 3,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym__function_argument_repeat1,
  [8135] = 3,
    ACTIONS(991), 1,
      anon_sym_SEMI,
    ACTIONS(1020), 1,
      anon_sym_COLON,
    STATE(216), 1,
      aux_sym_var_declaration_block_repeat1,
  [8145] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(977), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8153] = 3,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_classic_compiler_block_repeat1,
  [8163] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__functional_expression_repeat1,
  [8173] = 3,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    ACTIONS(1032), 1,
      anon_sym_COLON,
    STATE(228), 1,
      aux_sym_property_declaration_block_repeat1,
  [8183] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1034), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [8191] = 3,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_classic_compiler_block_repeat1,
  [8201] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym__functional_expression_repeat1,
  [8211] = 3,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__functional_expression_repeat1,
  [8221] = 3,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      aux_sym_collection_literal_block_repeat1,
  [8231] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
  [8238] = 2,
    ACTIONS(1044), 1,
      aux_sym__name_token1,
    STATE(137), 1,
      sym__name,
  [8245] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
  [8252] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
  [8259] = 2,
    ACTIONS(1050), 1,
      aux_sym_time_token1,
    ACTIONS(1052), 1,
      aux_sym_date_token1,
  [8266] = 2,
    ACTIONS(1054), 1,
      sym__local,
    ACTIONS(1056), 1,
      sym__function,
  [8273] = 1,
    ACTIONS(1058), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [8278] = 2,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    STATE(264), 1,
      sym_local_variable,
  [8285] = 1,
    ACTIONS(962), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [8290] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(310), 1,
      sym_command_suffix,
  [8297] = 1,
    ACTIONS(1014), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8302] = 1,
    ACTIONS(1032), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8307] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1062), 1,
      anon_sym_COLON,
  [8314] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(309), 1,
      sym_command_suffix,
  [8321] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(308), 1,
      sym_command_suffix,
  [8328] = 2,
    ACTIONS(1064), 1,
      aux_sym_time_token1,
    ACTIONS(1066), 1,
      aux_sym_date_token1,
  [8335] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(25), 1,
      sym_command_suffix,
  [8342] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(307), 1,
      sym_command_suffix,
  [8349] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(303), 1,
      sym_command_suffix,
  [8356] = 2,
    ACTIONS(1068), 1,
      aux_sym__name_token1,
    STATE(245), 1,
      sym__name,
  [8363] = 2,
    ACTIONS(1070), 1,
      aux_sym__name_token1,
    STATE(374), 1,
      sym__name,
  [8370] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(302), 1,
      sym_command_suffix,
  [8377] = 2,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym__functional_expression,
  [8384] = 2,
    ACTIONS(1072), 1,
      aux_sym__name_token1,
    STATE(375), 1,
      sym__name,
  [8391] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [8398] = 2,
    ACTIONS(1076), 1,
      aux_sym_command_suffix_token1,
    STATE(149), 1,
      sym_command_suffix,
  [8405] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(301), 1,
      sym_command_suffix,
  [8412] = 1,
    ACTIONS(998), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [8417] = 2,
    ACTIONS(1078), 1,
      aux_sym__name_token1,
    STATE(16), 1,
      sym__name,
  [8424] = 2,
    ACTIONS(1054), 1,
      sym__exposed,
    ACTIONS(1056), 1,
      sym__function,
  [8431] = 1,
    ACTIONS(1007), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [8436] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(300), 1,
      sym_command_suffix,
  [8443] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(299), 1,
      sym_command_suffix,
  [8450] = 2,
    ACTIONS(1080), 1,
      aux_sym__name_token1,
    STATE(356), 1,
      sym__name,
  [8457] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(322), 1,
      sym_command_suffix,
  [8464] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(323), 1,
      sym_command_suffix,
  [8471] = 2,
    ACTIONS(1082), 1,
      aux_sym__name_token1,
    STATE(17), 1,
      sym__name,
  [8478] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(324), 1,
      sym_command_suffix,
  [8485] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(325), 1,
      sym_command_suffix,
  [8492] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(326), 1,
      sym_command_suffix,
  [8499] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(333), 1,
      sym_command_suffix,
  [8506] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(334), 1,
      sym_command_suffix,
  [8513] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(335), 1,
      sym_command_suffix,
  [8520] = 2,
    ACTIONS(945), 1,
      anon_sym_QMARK,
    ACTIONS(1084), 1,
      anon_sym_COLON,
  [8527] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(336), 1,
      sym_command_suffix,
  [8534] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(337), 1,
      sym_command_suffix,
  [8541] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(341), 1,
      sym_command_suffix,
  [8548] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(342), 1,
      sym_command_suffix,
  [8555] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(343), 1,
      sym_command_suffix,
  [8562] = 1,
    ACTIONS(1025), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [8567] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(298), 1,
      sym_command_suffix,
  [8574] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(345), 1,
      sym_command_suffix,
  [8581] = 2,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
  [8588] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(297), 1,
      sym_command_suffix,
  [8595] = 2,
    ACTIONS(1060), 1,
      aux_sym_command_suffix_token1,
    STATE(347), 1,
      sym_command_suffix,
  [8602] = 2,
    ACTIONS(1090), 1,
      aux_sym__name_token1,
    STATE(144), 1,
      sym__name,
  [8609] = 2,
    ACTIONS(25), 1,
      sym__function,
    STATE(183), 1,
      sym_function,
  [8616] = 2,
    ACTIONS(1092), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_function_arguments,
  [8623] = 2,
    ACTIONS(1094), 1,
      aux_sym__name_token1,
    STATE(62), 1,
      sym__name,
  [8630] = 2,
    ACTIONS(1096), 1,
      aux_sym__name_token1,
    STATE(222), 1,
      sym__name,
  [8637] = 2,
    ACTIONS(1098), 1,
      aux_sym__name_token1,
    STATE(349), 1,
      sym__name,
  [8644] = 2,
    ACTIONS(1092), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_function_arguments,
  [8651] = 2,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym__functional_expression,
  [8658] = 1,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
  [8662] = 1,
    ACTIONS(1102), 1,
      anon_sym_LPAREN,
  [8666] = 1,
    ACTIONS(1104), 1,
      anon_sym_LPAREN,
  [8670] = 1,
    ACTIONS(1106), 1,
      anon_sym_LPAREN,
  [8674] = 1,
    ACTIONS(1108), 1,
      anon_sym_LPAREN,
  [8678] = 1,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
  [8682] = 1,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
  [8686] = 1,
    ACTIONS(1114), 1,
      anon_sym_QMARK,
  [8690] = 1,
    ACTIONS(1116), 1,
      anon_sym_BANG,
  [8694] = 1,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
  [8698] = 1,
    ACTIONS(1120), 1,
      anon_sym_LPAREN,
  [8702] = 1,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
  [8706] = 1,
    ACTIONS(1124), 1,
      anon_sym_DOT,
  [8710] = 1,
    ACTIONS(1126), 1,
      anon_sym_DOT,
  [8714] = 1,
    ACTIONS(1128), 1,
      sym__function,
  [8718] = 1,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
  [8722] = 1,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
  [8726] = 1,
    ACTIONS(1134), 1,
      anon_sym_LPAREN,
  [8730] = 1,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
  [8734] = 1,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
  [8738] = 1,
    ACTIONS(1140), 1,
      anon_sym_LPAREN,
  [8742] = 1,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
  [8746] = 1,
    ACTIONS(1144), 1,
      aux_sym_date_token1,
  [8750] = 1,
    ACTIONS(484), 1,
      anon_sym_DOT,
  [8754] = 1,
    ACTIONS(1146), 1,
      aux_sym_time_token1,
  [8758] = 1,
    ACTIONS(1148), 1,
      anon_sym_LPAREN,
  [8762] = 1,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
  [8766] = 1,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
  [8770] = 1,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
  [8774] = 1,
    ACTIONS(1156), 1,
      anon_sym_LPAREN,
  [8778] = 1,
    ACTIONS(1158), 1,
      anon_sym_RBRACK,
  [8782] = 1,
    ACTIONS(1160), 1,
      ts_builtin_sym_end,
  [8786] = 1,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
  [8790] = 1,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
  [8794] = 1,
    ACTIONS(1166), 1,
      aux_sym__comment_token1,
  [8798] = 1,
    ACTIONS(1168), 1,
      aux_sym_comment_block_token1,
  [8802] = 1,
    ACTIONS(1170), 1,
      anon_sym_LPAREN,
  [8806] = 1,
    ACTIONS(1172), 1,
      anon_sym_LPAREN,
  [8810] = 1,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
  [8814] = 1,
    ACTIONS(1176), 1,
      anon_sym_LPAREN,
  [8818] = 1,
    ACTIONS(1178), 1,
      anon_sym_LPAREN,
  [8822] = 1,
    ACTIONS(1180), 1,
      anon_sym_DASH,
  [8826] = 1,
    ACTIONS(1182), 1,
      anon_sym_DASH,
  [8830] = 1,
    ACTIONS(1184), 1,
      anon_sym_COLON,
  [8834] = 1,
    ACTIONS(1186), 1,
      anon_sym_LPAREN,
  [8838] = 1,
    ACTIONS(1188), 1,
      anon_sym_LPAREN,
  [8842] = 1,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
  [8846] = 1,
    ACTIONS(1144), 1,
      aux_sym_time_token1,
  [8850] = 1,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
  [8854] = 1,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
  [8858] = 1,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
  [8862] = 1,
    ACTIONS(1198), 1,
      anon_sym_SLASH,
  [8866] = 1,
    ACTIONS(1200), 1,
      aux_sym__name_token1,
  [8870] = 1,
    ACTIONS(1202), 1,
      anon_sym_RBRACK,
  [8874] = 1,
    ACTIONS(1204), 1,
      anon_sym_LPAREN,
  [8878] = 1,
    ACTIONS(1206), 1,
      aux_sym_time_token1,
  [8882] = 1,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
  [8886] = 1,
    ACTIONS(879), 1,
      anon_sym_DOT,
  [8890] = 1,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
  [8894] = 1,
    ACTIONS(1212), 1,
      anon_sym_LPAREN,
  [8898] = 1,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
  [8902] = 1,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
  [8906] = 1,
    ACTIONS(1218), 1,
      anon_sym_COLON,
  [8910] = 1,
    ACTIONS(1220), 1,
      anon_sym_DASH,
  [8914] = 1,
    ACTIONS(1222), 1,
      anon_sym_DASH,
  [8918] = 1,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
  [8922] = 1,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
  [8926] = 1,
    ACTIONS(1228), 1,
      aux_sym_time_token1,
  [8930] = 1,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
  [8934] = 1,
    ACTIONS(1232), 1,
      aux_sym_time_token1,
  [8938] = 1,
    ACTIONS(1234), 1,
      anon_sym_RBRACK,
  [8942] = 1,
    ACTIONS(1236), 1,
      anon_sym_QMARK,
  [8946] = 1,
    ACTIONS(1238), 1,
      anon_sym_BANG,
  [8950] = 1,
    ACTIONS(1240), 1,
      aux_sym_time_token1,
  [8954] = 1,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
  [8958] = 1,
    ACTIONS(1244), 1,
      aux_sym__name_token1,
  [8962] = 1,
    ACTIONS(1246), 1,
      aux_sym__name_token1,
  [8966] = 1,
    ACTIONS(1248), 1,
      anon_sym_COLON,
  [8970] = 1,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
  [8974] = 1,
    ACTIONS(1252), 1,
      aux_sym_time_token1,
  [8978] = 1,
    ACTIONS(1254), 1,
      aux_sym_date_token1,
  [8982] = 1,
    ACTIONS(1254), 1,
      aux_sym_time_token1,
  [8986] = 1,
    ACTIONS(1256), 1,
      anon_sym_COLON,
  [8990] = 1,
    ACTIONS(1258), 1,
      anon_sym_DASH,
  [8994] = 1,
    ACTIONS(1260), 1,
      anon_sym_DASH,
  [8998] = 1,
    ACTIONS(1262), 1,
      aux_sym_time_token1,
  [9002] = 1,
    ACTIONS(1264), 1,
      aux_sym_time_token1,
  [9006] = 1,
    ACTIONS(1266), 1,
      aux_sym_time_token1,
  [9010] = 1,
    ACTIONS(1268), 1,
      anon_sym_COLON,
  [9014] = 1,
    ACTIONS(1270), 1,
      anon_sym_DASH,
  [9018] = 1,
    ACTIONS(1272), 1,
      anon_sym_DASH,
  [9022] = 1,
    ACTIONS(1274), 1,
      aux_sym_time_token1,
  [9026] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 73,
  [SMALL_STATE(62)] = 146,
  [SMALL_STATE(63)] = 219,
  [SMALL_STATE(64)] = 292,
  [SMALL_STATE(65)] = 361,
  [SMALL_STATE(66)] = 430,
  [SMALL_STATE(67)] = 503,
  [SMALL_STATE(68)] = 576,
  [SMALL_STATE(69)] = 645,
  [SMALL_STATE(70)] = 713,
  [SMALL_STATE(71)] = 783,
  [SMALL_STATE(72)] = 853,
  [SMALL_STATE(73)] = 921,
  [SMALL_STATE(74)] = 989,
  [SMALL_STATE(75)] = 1056,
  [SMALL_STATE(76)] = 1123,
  [SMALL_STATE(77)] = 1190,
  [SMALL_STATE(78)] = 1257,
  [SMALL_STATE(79)] = 1324,
  [SMALL_STATE(80)] = 1445,
  [SMALL_STATE(81)] = 1512,
  [SMALL_STATE(82)] = 1579,
  [SMALL_STATE(83)] = 1646,
  [SMALL_STATE(84)] = 1713,
  [SMALL_STATE(85)] = 1834,
  [SMALL_STATE(86)] = 1901,
  [SMALL_STATE(87)] = 1968,
  [SMALL_STATE(88)] = 2035,
  [SMALL_STATE(89)] = 2102,
  [SMALL_STATE(90)] = 2169,
  [SMALL_STATE(91)] = 2236,
  [SMALL_STATE(92)] = 2303,
  [SMALL_STATE(93)] = 2370,
  [SMALL_STATE(94)] = 2437,
  [SMALL_STATE(95)] = 2504,
  [SMALL_STATE(96)] = 2625,
  [SMALL_STATE(97)] = 2692,
  [SMALL_STATE(98)] = 2813,
  [SMALL_STATE(99)] = 2934,
  [SMALL_STATE(100)] = 3001,
  [SMALL_STATE(101)] = 3068,
  [SMALL_STATE(102)] = 3135,
  [SMALL_STATE(103)] = 3202,
  [SMALL_STATE(104)] = 3323,
  [SMALL_STATE(105)] = 3390,
  [SMALL_STATE(106)] = 3457,
  [SMALL_STATE(107)] = 3524,
  [SMALL_STATE(108)] = 3647,
  [SMALL_STATE(109)] = 3714,
  [SMALL_STATE(110)] = 3835,
  [SMALL_STATE(111)] = 3956,
  [SMALL_STATE(112)] = 4077,
  [SMALL_STATE(113)] = 4144,
  [SMALL_STATE(114)] = 4211,
  [SMALL_STATE(115)] = 4278,
  [SMALL_STATE(116)] = 4345,
  [SMALL_STATE(117)] = 4466,
  [SMALL_STATE(118)] = 4533,
  [SMALL_STATE(119)] = 4591,
  [SMALL_STATE(120)] = 4649,
  [SMALL_STATE(121)] = 4707,
  [SMALL_STATE(122)] = 4765,
  [SMALL_STATE(123)] = 4868,
  [SMALL_STATE(124)] = 4971,
  [SMALL_STATE(125)] = 5074,
  [SMALL_STATE(126)] = 5177,
  [SMALL_STATE(127)] = 5280,
  [SMALL_STATE(128)] = 5383,
  [SMALL_STATE(129)] = 5486,
  [SMALL_STATE(130)] = 5589,
  [SMALL_STATE(131)] = 5692,
  [SMALL_STATE(132)] = 5795,
  [SMALL_STATE(133)] = 5898,
  [SMALL_STATE(134)] = 6001,
  [SMALL_STATE(135)] = 6057,
  [SMALL_STATE(136)] = 6099,
  [SMALL_STATE(137)] = 6143,
  [SMALL_STATE(138)] = 6187,
  [SMALL_STATE(139)] = 6224,
  [SMALL_STATE(140)] = 6263,
  [SMALL_STATE(141)] = 6300,
  [SMALL_STATE(142)] = 6341,
  [SMALL_STATE(143)] = 6380,
  [SMALL_STATE(144)] = 6419,
  [SMALL_STATE(145)] = 6456,
  [SMALL_STATE(146)] = 6497,
  [SMALL_STATE(147)] = 6534,
  [SMALL_STATE(148)] = 6578,
  [SMALL_STATE(149)] = 6614,
  [SMALL_STATE(150)] = 6650,
  [SMALL_STATE(151)] = 6694,
  [SMALL_STATE(152)] = 6734,
  [SMALL_STATE(153)] = 6770,
  [SMALL_STATE(154)] = 6810,
  [SMALL_STATE(155)] = 6854,
  [SMALL_STATE(156)] = 6892,
  [SMALL_STATE(157)] = 6927,
  [SMALL_STATE(158)] = 6962,
  [SMALL_STATE(159)] = 6996,
  [SMALL_STATE(160)] = 7030,
  [SMALL_STATE(161)] = 7064,
  [SMALL_STATE(162)] = 7098,
  [SMALL_STATE(163)] = 7132,
  [SMALL_STATE(164)] = 7166,
  [SMALL_STATE(165)] = 7200,
  [SMALL_STATE(166)] = 7234,
  [SMALL_STATE(167)] = 7268,
  [SMALL_STATE(168)] = 7302,
  [SMALL_STATE(169)] = 7336,
  [SMALL_STATE(170)] = 7370,
  [SMALL_STATE(171)] = 7404,
  [SMALL_STATE(172)] = 7438,
  [SMALL_STATE(173)] = 7468,
  [SMALL_STATE(174)] = 7498,
  [SMALL_STATE(175)] = 7528,
  [SMALL_STATE(176)] = 7558,
  [SMALL_STATE(177)] = 7588,
  [SMALL_STATE(178)] = 7618,
  [SMALL_STATE(179)] = 7633,
  [SMALL_STATE(180)] = 7648,
  [SMALL_STATE(181)] = 7663,
  [SMALL_STATE(182)] = 7678,
  [SMALL_STATE(183)] = 7693,
  [SMALL_STATE(184)] = 7709,
  [SMALL_STATE(185)] = 7725,
  [SMALL_STATE(186)] = 7742,
  [SMALL_STATE(187)] = 7754,
  [SMALL_STATE(188)] = 7762,
  [SMALL_STATE(189)] = 7776,
  [SMALL_STATE(190)] = 7788,
  [SMALL_STATE(191)] = 7800,
  [SMALL_STATE(192)] = 7812,
  [SMALL_STATE(193)] = 7821,
  [SMALL_STATE(194)] = 7832,
  [SMALL_STATE(195)] = 7843,
  [SMALL_STATE(196)] = 7854,
  [SMALL_STATE(197)] = 7867,
  [SMALL_STATE(198)] = 7878,
  [SMALL_STATE(199)] = 7887,
  [SMALL_STATE(200)] = 7898,
  [SMALL_STATE(201)] = 7909,
  [SMALL_STATE(202)] = 7918,
  [SMALL_STATE(203)] = 7931,
  [SMALL_STATE(204)] = 7941,
  [SMALL_STATE(205)] = 7951,
  [SMALL_STATE(206)] = 7961,
  [SMALL_STATE(207)] = 7969,
  [SMALL_STATE(208)] = 7979,
  [SMALL_STATE(209)] = 7989,
  [SMALL_STATE(210)] = 7999,
  [SMALL_STATE(211)] = 8009,
  [SMALL_STATE(212)] = 8015,
  [SMALL_STATE(213)] = 8025,
  [SMALL_STATE(214)] = 8035,
  [SMALL_STATE(215)] = 8045,
  [SMALL_STATE(216)] = 8055,
  [SMALL_STATE(217)] = 8065,
  [SMALL_STATE(218)] = 8075,
  [SMALL_STATE(219)] = 8085,
  [SMALL_STATE(220)] = 8095,
  [SMALL_STATE(221)] = 8105,
  [SMALL_STATE(222)] = 8115,
  [SMALL_STATE(223)] = 8125,
  [SMALL_STATE(224)] = 8135,
  [SMALL_STATE(225)] = 8145,
  [SMALL_STATE(226)] = 8153,
  [SMALL_STATE(227)] = 8163,
  [SMALL_STATE(228)] = 8173,
  [SMALL_STATE(229)] = 8183,
  [SMALL_STATE(230)] = 8191,
  [SMALL_STATE(231)] = 8201,
  [SMALL_STATE(232)] = 8211,
  [SMALL_STATE(233)] = 8221,
  [SMALL_STATE(234)] = 8231,
  [SMALL_STATE(235)] = 8238,
  [SMALL_STATE(236)] = 8245,
  [SMALL_STATE(237)] = 8252,
  [SMALL_STATE(238)] = 8259,
  [SMALL_STATE(239)] = 8266,
  [SMALL_STATE(240)] = 8273,
  [SMALL_STATE(241)] = 8278,
  [SMALL_STATE(242)] = 8285,
  [SMALL_STATE(243)] = 8290,
  [SMALL_STATE(244)] = 8297,
  [SMALL_STATE(245)] = 8302,
  [SMALL_STATE(246)] = 8307,
  [SMALL_STATE(247)] = 8314,
  [SMALL_STATE(248)] = 8321,
  [SMALL_STATE(249)] = 8328,
  [SMALL_STATE(250)] = 8335,
  [SMALL_STATE(251)] = 8342,
  [SMALL_STATE(252)] = 8349,
  [SMALL_STATE(253)] = 8356,
  [SMALL_STATE(254)] = 8363,
  [SMALL_STATE(255)] = 8370,
  [SMALL_STATE(256)] = 8377,
  [SMALL_STATE(257)] = 8384,
  [SMALL_STATE(258)] = 8391,
  [SMALL_STATE(259)] = 8398,
  [SMALL_STATE(260)] = 8405,
  [SMALL_STATE(261)] = 8412,
  [SMALL_STATE(262)] = 8417,
  [SMALL_STATE(263)] = 8424,
  [SMALL_STATE(264)] = 8431,
  [SMALL_STATE(265)] = 8436,
  [SMALL_STATE(266)] = 8443,
  [SMALL_STATE(267)] = 8450,
  [SMALL_STATE(268)] = 8457,
  [SMALL_STATE(269)] = 8464,
  [SMALL_STATE(270)] = 8471,
  [SMALL_STATE(271)] = 8478,
  [SMALL_STATE(272)] = 8485,
  [SMALL_STATE(273)] = 8492,
  [SMALL_STATE(274)] = 8499,
  [SMALL_STATE(275)] = 8506,
  [SMALL_STATE(276)] = 8513,
  [SMALL_STATE(277)] = 8520,
  [SMALL_STATE(278)] = 8527,
  [SMALL_STATE(279)] = 8534,
  [SMALL_STATE(280)] = 8541,
  [SMALL_STATE(281)] = 8548,
  [SMALL_STATE(282)] = 8555,
  [SMALL_STATE(283)] = 8562,
  [SMALL_STATE(284)] = 8567,
  [SMALL_STATE(285)] = 8574,
  [SMALL_STATE(286)] = 8581,
  [SMALL_STATE(287)] = 8588,
  [SMALL_STATE(288)] = 8595,
  [SMALL_STATE(289)] = 8602,
  [SMALL_STATE(290)] = 8609,
  [SMALL_STATE(291)] = 8616,
  [SMALL_STATE(292)] = 8623,
  [SMALL_STATE(293)] = 8630,
  [SMALL_STATE(294)] = 8637,
  [SMALL_STATE(295)] = 8644,
  [SMALL_STATE(296)] = 8651,
  [SMALL_STATE(297)] = 8658,
  [SMALL_STATE(298)] = 8662,
  [SMALL_STATE(299)] = 8666,
  [SMALL_STATE(300)] = 8670,
  [SMALL_STATE(301)] = 8674,
  [SMALL_STATE(302)] = 8678,
  [SMALL_STATE(303)] = 8682,
  [SMALL_STATE(304)] = 8686,
  [SMALL_STATE(305)] = 8690,
  [SMALL_STATE(306)] = 8694,
  [SMALL_STATE(307)] = 8698,
  [SMALL_STATE(308)] = 8702,
  [SMALL_STATE(309)] = 8706,
  [SMALL_STATE(310)] = 8710,
  [SMALL_STATE(311)] = 8714,
  [SMALL_STATE(312)] = 8718,
  [SMALL_STATE(313)] = 8722,
  [SMALL_STATE(314)] = 8726,
  [SMALL_STATE(315)] = 8730,
  [SMALL_STATE(316)] = 8734,
  [SMALL_STATE(317)] = 8738,
  [SMALL_STATE(318)] = 8742,
  [SMALL_STATE(319)] = 8746,
  [SMALL_STATE(320)] = 8750,
  [SMALL_STATE(321)] = 8754,
  [SMALL_STATE(322)] = 8758,
  [SMALL_STATE(323)] = 8762,
  [SMALL_STATE(324)] = 8766,
  [SMALL_STATE(325)] = 8770,
  [SMALL_STATE(326)] = 8774,
  [SMALL_STATE(327)] = 8778,
  [SMALL_STATE(328)] = 8782,
  [SMALL_STATE(329)] = 8786,
  [SMALL_STATE(330)] = 8790,
  [SMALL_STATE(331)] = 8794,
  [SMALL_STATE(332)] = 8798,
  [SMALL_STATE(333)] = 8802,
  [SMALL_STATE(334)] = 8806,
  [SMALL_STATE(335)] = 8810,
  [SMALL_STATE(336)] = 8814,
  [SMALL_STATE(337)] = 8818,
  [SMALL_STATE(338)] = 8822,
  [SMALL_STATE(339)] = 8826,
  [SMALL_STATE(340)] = 8830,
  [SMALL_STATE(341)] = 8834,
  [SMALL_STATE(342)] = 8838,
  [SMALL_STATE(343)] = 8842,
  [SMALL_STATE(344)] = 8846,
  [SMALL_STATE(345)] = 8850,
  [SMALL_STATE(346)] = 8854,
  [SMALL_STATE(347)] = 8858,
  [SMALL_STATE(348)] = 8862,
  [SMALL_STATE(349)] = 8866,
  [SMALL_STATE(350)] = 8870,
  [SMALL_STATE(351)] = 8874,
  [SMALL_STATE(352)] = 8878,
  [SMALL_STATE(353)] = 8882,
  [SMALL_STATE(354)] = 8886,
  [SMALL_STATE(355)] = 8890,
  [SMALL_STATE(356)] = 8894,
  [SMALL_STATE(357)] = 8898,
  [SMALL_STATE(358)] = 8902,
  [SMALL_STATE(359)] = 8906,
  [SMALL_STATE(360)] = 8910,
  [SMALL_STATE(361)] = 8914,
  [SMALL_STATE(362)] = 8918,
  [SMALL_STATE(363)] = 8922,
  [SMALL_STATE(364)] = 8926,
  [SMALL_STATE(365)] = 8930,
  [SMALL_STATE(366)] = 8934,
  [SMALL_STATE(367)] = 8938,
  [SMALL_STATE(368)] = 8942,
  [SMALL_STATE(369)] = 8946,
  [SMALL_STATE(370)] = 8950,
  [SMALL_STATE(371)] = 8954,
  [SMALL_STATE(372)] = 8958,
  [SMALL_STATE(373)] = 8962,
  [SMALL_STATE(374)] = 8966,
  [SMALL_STATE(375)] = 8970,
  [SMALL_STATE(376)] = 8974,
  [SMALL_STATE(377)] = 8978,
  [SMALL_STATE(378)] = 8982,
  [SMALL_STATE(379)] = 8986,
  [SMALL_STATE(380)] = 8990,
  [SMALL_STATE(381)] = 8994,
  [SMALL_STATE(382)] = 8998,
  [SMALL_STATE(383)] = 9002,
  [SMALL_STATE(384)] = 9006,
  [SMALL_STATE(385)] = 9010,
  [SMALL_STATE(386)] = 9014,
  [SMALL_STATE(387)] = 9018,
  [SMALL_STATE(388)] = 9022,
  [SMALL_STATE(389)] = 9026,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(263),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(239),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(189),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(201),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(77),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(206),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(240),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(373),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(372),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(371),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(187),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(83),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(85),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(243),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(248),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(250),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(251),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(252),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(255),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(260),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(265),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(266),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(268),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(269),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(271),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(272),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(273),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(274),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(275),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(276),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(278),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(279),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(280),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(281),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(282),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(284),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(285),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(287),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(288),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(332),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(331),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(330),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(329),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(119),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(211),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(263),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(239),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(189),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(201),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(77),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(206),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(240),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(373),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(372),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(371),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(187),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(50),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(83),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(85),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(243),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(247),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(248),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(250),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(251),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(252),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(255),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(260),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(265),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(266),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(268),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(269),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(271),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(272),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(273),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(274),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(275),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(276),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(278),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(279),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(280),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(281),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(282),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(284),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(285),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(287),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(288),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(332),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(331),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(330),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(329),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(119),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(211),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(262),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(129),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(129),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_literal_block, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_literal_block, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal_block, 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_literal_block, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_literal_block, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_literal_block, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal_block, 5),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_literal_block, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_literal_block, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_literal_block, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 8),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 8),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_block, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_block, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_injection_block, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_injection_block, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block, 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_block, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_block, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_while, 1),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_while, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 6),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 6),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_block, 3),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_block, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until, 4),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__until, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__while, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(289),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(123),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(123),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(182),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_block_repeat1, 2),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sql_block_repeat1, 2), SHIFT_REPEAT(194),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(59),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_collection_literal_block_repeat1, 2), SHIFT_REPEAT(110),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_collection_literal_block_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_sql, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(204),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(241),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(200),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(195),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(253),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_text, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_pointer, 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_object, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_date, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_collection, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_boolean, 2),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_blob, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_picture, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_pointer, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_real, 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_text, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_time, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_variant, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_blob, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_boolean, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_date, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_integer, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_longint, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_object, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_picture, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_real, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_time, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until, 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
