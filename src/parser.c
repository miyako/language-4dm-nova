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
#define STATE_COUNT 369
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 228
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym__classic_compiler_longint_token1 = 104,
  aux_sym_command_suffix_token1 = 105,
  anon_sym_SLASH_SLASH = 106,
  aux_sym_comment_token1 = 107,
  anon_sym_SLASH_STAR = 108,
  aux_sym_comment_token2 = 109,
  sym__if_e = 110,
  sym__if_f = 111,
  sym__else_e = 112,
  sym__else_f = 113,
  sym__end_if_e = 114,
  sym__end_if_f = 115,
  sym__for_each_e = 116,
  sym__for_each_f = 117,
  sym__end_for_each_e = 118,
  sym__end_for_each_f = 119,
  sym__while_e = 120,
  sym__while_f = 121,
  sym__until_e = 122,
  sym__until_f = 123,
  sym__for_e = 124,
  sym__for_f = 125,
  sym__end_for_e = 126,
  sym__end_for_f = 127,
  sym__use_e = 128,
  sym__use_f = 129,
  sym__end_use_e = 130,
  sym__end_use_f = 131,
  sym__repeat_e = 132,
  sym__repeat_f = 133,
  sym__end_while_e = 134,
  sym__end_while_f = 135,
  sym__case_of_e = 136,
  sym__case_of_f = 137,
  sym__end_case_e = 138,
  sym__end_case_f = 139,
  sym__begin_sql_e = 140,
  sym__begin_sql_f = 141,
  sym__end_sql_e = 142,
  sym__end_sql_f = 143,
  sym_source = 144,
  sym__statement = 145,
  sym__computed = 146,
  sym__scope = 147,
  sym__name = 148,
  sym__classic_name = 149,
  sym_function_name = 150,
  sym__function_argument = 151,
  sym_function_arguments = 152,
  sym_function_result = 153,
  sym_alias_name = 154,
  sym__binary_operator = 155,
  sym_class = 156,
  sym_local_variable = 157,
  sym_interprocess_variable = 158,
  sym_numeric_parameter = 159,
  sym__variable = 160,
  sym__mutable = 161,
  sym__immutable = 162,
  sym_class_function = 163,
  sym_generic_function = 164,
  sym__function_parameter = 165,
  sym__functional_expression = 166,
  sym__function_call = 167,
  sym__single_condition = 168,
  sym__condition = 169,
  sym_ternary_block = 170,
  sym_time = 171,
  sym_date = 172,
  sym__dec_literal = 173,
  sym__num_literal = 174,
  sym__exp_literal = 175,
  sym_number = 176,
  sym_string = 177,
  sym_constant = 178,
  sym_function_block = 179,
  sym_declare_block = 180,
  sym_alias_block = 181,
  sym_class_extends = 182,
  sym_class_constructor = 183,
  sym_var_declaration_block = 184,
  sym_classic_compiler_block = 185,
  sym_property_declaration_block = 186,
  sym_return_block = 187,
  sym_assignment_block = 188,
  sym_function_call = 189,
  sym_var = 190,
  sym_property = 191,
  sym_alias = 192,
  sym_declare = 193,
  sym_function = 194,
  sym_return = 195,
  sym_break = 196,
  sym_continue = 197,
  sym_this = 198,
  sym_form = 199,
  sym_super = 200,
  sym__class_store = 201,
  sym__class = 202,
  sym__basic_type = 203,
  sym_system_variable = 204,
  sym__classic_compiler_longint = 205,
  sym_classic_compiler = 206,
  sym_command_suffix = 207,
  sym_comment = 208,
  sym_if = 209,
  sym_else = 210,
  sym_end_if = 211,
  sym__if = 212,
  sym_if_block = 213,
  sym_begin_sql = 214,
  sym_end_sql = 215,
  sym_sql_block = 216,
  aux_sym_source_repeat1 = 217,
  aux_sym__function_argument_repeat1 = 218,
  aux_sym_function_arguments_repeat1 = 219,
  aux_sym__mutable_repeat1 = 220,
  aux_sym__functional_expression_repeat1 = 221,
  aux_sym__condition_repeat1 = 222,
  aux_sym_string_repeat1 = 223,
  aux_sym_var_declaration_block_repeat1 = 224,
  aux_sym_classic_compiler_block_repeat1 = 225,
  aux_sym_property_declaration_block_repeat1 = 226,
  aux_sym_if_block_repeat1 = 227,
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
  [aux_sym__classic_compiler_longint_token1] = "_classic_compiler_longint_token1",
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
  [sym__classic_compiler_longint] = "_classic_compiler_longint",
  [sym_classic_compiler] = "classic_compiler",
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
  [aux_sym__classic_compiler_longint_token1] = aux_sym__classic_compiler_longint_token1,
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
  [sym__classic_compiler_longint] = sym__classic_compiler_longint,
  [sym_classic_compiler] = sym_classic_compiler,
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
  [aux_sym__classic_compiler_longint_token1] = {
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
  [sym__classic_compiler_longint] = {
    .visible = false,
    .named = true,
  },
  [sym_classic_compiler] = {
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
      if (eof) ADVANCE(398);
      if (lookahead == '!') ADVANCE(500);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '$') ADVANCE(485);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '/') ADVANCE(461);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(473);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(418);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(429);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(416);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(427);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(423);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(430);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(412);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(421);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(409);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(449);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(504);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(499);
      if (lookahead == '#') ADVANCE(474);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(473);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(205);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(474);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == ':') ADVANCE(451);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(473);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(444);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(474);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(473);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(431);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(485);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '/') ADVANCE(563);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(17);
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
      if (lookahead == '=') ADVANCE(519);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(455);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(488);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(393);
      END_STATE();
    case 39:
      if (lookahead == '|') ADVANCE(468);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(371);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(335);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(555);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(556);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(568);
      END_STATE();
    case 159:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(572);
      END_STATE();
    case 160:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(594);
      END_STATE();
    case 161:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 162:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(574);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(576);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(271);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(155);
      END_STATE();
    case 202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(546);
      END_STATE();
    case 203:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(526);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(373);
      END_STATE();
    case 232:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 283:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 284:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 286:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(374);
      END_STATE();
    case 287:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(210);
      END_STATE();
    case 288:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(211);
      END_STATE();
    case 289:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(212);
      END_STATE();
    case 290:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(213);
      END_STATE();
    case 291:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(376);
      END_STATE();
    case 292:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(377);
      END_STATE();
    case 293:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(378);
      END_STATE();
    case 294:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(379);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(597);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 371:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 372:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 373:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 374:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 375:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 376:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 377:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 380:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 382:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 383:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 384:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(344);
      END_STATE();
    case 385:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 386:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 387:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 388:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(521);
      END_STATE();
    case 389:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 392:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 393:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 394:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 395:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 396:
      if (eof) ADVANCE(398);
      if (lookahead == '!') ADVANCE(500);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '$') ADVANCE(485);
      if (lookahead == '&') ADVANCE(465);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(456);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '/') ADVANCE(461);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(473);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 397:
      if (eof) ADVANCE(398);
      if (lookahead == '!') ADVANCE(500);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(485);
      if (lookahead == '(') ADVANCE(453);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == ':') ADVANCE(451);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(546);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(568);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(519);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(481);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(482);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(482);
      if (lookahead == '>') ADVANCE(455);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(483);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '/') ADVANCE(563);
      if (lookahead == '=') ADVANCE(484);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(484);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(463);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(464);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(476);
      if (lookahead == '>') ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(477);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(479);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead == '?') ADVANCE(478);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(30);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(514);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(26);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__for_each_e);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__for_each_f);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__end_for_each_e);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__while_e);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__for_e);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__for_f);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__end_for_e);
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__use_e);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__use_f);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__end_use_e);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__end_use_f);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__end_while_e);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__end_while_f);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 397},
  [2] = {.lex_state = 397},
  [3] = {.lex_state = 397},
  [4] = {.lex_state = 397},
  [5] = {.lex_state = 397},
  [6] = {.lex_state = 397},
  [7] = {.lex_state = 397},
  [8] = {.lex_state = 397},
  [9] = {.lex_state = 397},
  [10] = {.lex_state = 396},
  [11] = {.lex_state = 396},
  [12] = {.lex_state = 396},
  [13] = {.lex_state = 396},
  [14] = {.lex_state = 396},
  [15] = {.lex_state = 396},
  [16] = {.lex_state = 396},
  [17] = {.lex_state = 396},
  [18] = {.lex_state = 396},
  [19] = {.lex_state = 396},
  [20] = {.lex_state = 396},
  [21] = {.lex_state = 396},
  [22] = {.lex_state = 396},
  [23] = {.lex_state = 396},
  [24] = {.lex_state = 396},
  [25] = {.lex_state = 396},
  [26] = {.lex_state = 396},
  [27] = {.lex_state = 396},
  [28] = {.lex_state = 396},
  [29] = {.lex_state = 396},
  [30] = {.lex_state = 396},
  [31] = {.lex_state = 396},
  [32] = {.lex_state = 396},
  [33] = {.lex_state = 396},
  [34] = {.lex_state = 396},
  [35] = {.lex_state = 396},
  [36] = {.lex_state = 396},
  [37] = {.lex_state = 396},
  [38] = {.lex_state = 396},
  [39] = {.lex_state = 396},
  [40] = {.lex_state = 396},
  [41] = {.lex_state = 396},
  [42] = {.lex_state = 396},
  [43] = {.lex_state = 396},
  [44] = {.lex_state = 396},
  [45] = {.lex_state = 396},
  [46] = {.lex_state = 396},
  [47] = {.lex_state = 396},
  [48] = {.lex_state = 396},
  [49] = {.lex_state = 397},
  [50] = {.lex_state = 397},
  [51] = {.lex_state = 397},
  [52] = {.lex_state = 397},
  [53] = {.lex_state = 397},
  [54] = {.lex_state = 397},
  [55] = {.lex_state = 397},
  [56] = {.lex_state = 397},
  [57] = {.lex_state = 397},
  [58] = {.lex_state = 397},
  [59] = {.lex_state = 397},
  [60] = {.lex_state = 397},
  [61] = {.lex_state = 397},
  [62] = {.lex_state = 397},
  [63] = {.lex_state = 397},
  [64] = {.lex_state = 397},
  [65] = {.lex_state = 397},
  [66] = {.lex_state = 397},
  [67] = {.lex_state = 397},
  [68] = {.lex_state = 397},
  [69] = {.lex_state = 397},
  [70] = {.lex_state = 397},
  [71] = {.lex_state = 397},
  [72] = {.lex_state = 397},
  [73] = {.lex_state = 397},
  [74] = {.lex_state = 397},
  [75] = {.lex_state = 397},
  [76] = {.lex_state = 397},
  [77] = {.lex_state = 397},
  [78] = {.lex_state = 397},
  [79] = {.lex_state = 397},
  [80] = {.lex_state = 397},
  [81] = {.lex_state = 397},
  [82] = {.lex_state = 397},
  [83] = {.lex_state = 397},
  [84] = {.lex_state = 397},
  [85] = {.lex_state = 397},
  [86] = {.lex_state = 397},
  [87] = {.lex_state = 397},
  [88] = {.lex_state = 397},
  [89] = {.lex_state = 397},
  [90] = {.lex_state = 397},
  [91] = {.lex_state = 397},
  [92] = {.lex_state = 397},
  [93] = {.lex_state = 397},
  [94] = {.lex_state = 397},
  [95] = {.lex_state = 397},
  [96] = {.lex_state = 397},
  [97] = {.lex_state = 397},
  [98] = {.lex_state = 397},
  [99] = {.lex_state = 397},
  [100] = {.lex_state = 397},
  [101] = {.lex_state = 397},
  [102] = {.lex_state = 397},
  [103] = {.lex_state = 397},
  [104] = {.lex_state = 397},
  [105] = {.lex_state = 397},
  [106] = {.lex_state = 397},
  [107] = {.lex_state = 397},
  [108] = {.lex_state = 397},
  [109] = {.lex_state = 397},
  [110] = {.lex_state = 397},
  [111] = {.lex_state = 397},
  [112] = {.lex_state = 397},
  [113] = {.lex_state = 397},
  [114] = {.lex_state = 397},
  [115] = {.lex_state = 397},
  [116] = {.lex_state = 397},
  [117] = {.lex_state = 397},
  [118] = {.lex_state = 397},
  [119] = {.lex_state = 397},
  [120] = {.lex_state = 397},
  [121] = {.lex_state = 397},
  [122] = {.lex_state = 397},
  [123] = {.lex_state = 397},
  [124] = {.lex_state = 397},
  [125] = {.lex_state = 397},
  [126] = {.lex_state = 397},
  [127] = {.lex_state = 397},
  [128] = {.lex_state = 397},
  [129] = {.lex_state = 397},
  [130] = {.lex_state = 397},
  [131] = {.lex_state = 397},
  [132] = {.lex_state = 397},
  [133] = {.lex_state = 397},
  [134] = {.lex_state = 397},
  [135] = {.lex_state = 397},
  [136] = {.lex_state = 397},
  [137] = {.lex_state = 397},
  [138] = {.lex_state = 397},
  [139] = {.lex_state = 397},
  [140] = {.lex_state = 397},
  [141] = {.lex_state = 397},
  [142] = {.lex_state = 397},
  [143] = {.lex_state = 397},
  [144] = {.lex_state = 397},
  [145] = {.lex_state = 397},
  [146] = {.lex_state = 397},
  [147] = {.lex_state = 397},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 18},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 22},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 22},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 22},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 397},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 397},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 397},
  [230] = {.lex_state = 397},
  [231] = {.lex_state = 397},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 397},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 397},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 397},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 397},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 397},
  [244] = {.lex_state = 397},
  [245] = {.lex_state = 397},
  [246] = {.lex_state = 23},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 397},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 397},
  [255] = {.lex_state = 397},
  [256] = {.lex_state = 23},
  [257] = {.lex_state = 397},
  [258] = {.lex_state = 397},
  [259] = {.lex_state = 561},
  [260] = {.lex_state = 561},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 561},
  [264] = {.lex_state = 561},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 23},
  [268] = {.lex_state = 561},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 561},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 23},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 23},
  [276] = {.lex_state = 397},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 561},
  [279] = {.lex_state = 397},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 397},
  [283] = {.lex_state = 397},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 25},
  [287] = {.lex_state = 397},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 396},
  [292] = {.lex_state = 396},
  [293] = {.lex_state = 397},
  [294] = {.lex_state = 397},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 397},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 397},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 564},
  [313] = {.lex_state = 18},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 397},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 18},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 21},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 397},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 21},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 18},
  [348] = {.lex_state = 396},
  [349] = {.lex_state = 397},
  [350] = {.lex_state = 396},
  [351] = {.lex_state = 396},
  [352] = {.lex_state = 397},
  [353] = {.lex_state = 396},
  [354] = {.lex_state = 396},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 397},
  [362] = {.lex_state = 396},
  [363] = {.lex_state = 396},
  [364] = {.lex_state = 397},
  [365] = {.lex_state = 396},
  [366] = {.lex_state = 396},
  [367] = {.lex_state = 18},
  [368] = {.lex_state = 396},
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
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(1),
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
    [sym_source] = STATE(302),
    [sym__statement] = STATE(8),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(8),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(8),
    [sym_declare_block] = STATE(8),
    [sym_alias_block] = STATE(8),
    [sym_class_extends] = STATE(8),
    [sym_class_constructor] = STATE(8),
    [sym_var_declaration_block] = STATE(8),
    [sym_classic_compiler_block] = STATE(8),
    [sym_property_declaration_block] = STATE(8),
    [sym_return_block] = STATE(8),
    [sym_assignment_block] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(8),
    [sym_break] = STATE(8),
    [sym_continue] = STATE(8),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(8),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(8),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [2] = {
    [sym__statement] = STATE(137),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(137),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(137),
    [sym_declare_block] = STATE(137),
    [sym_alias_block] = STATE(137),
    [sym_class_extends] = STATE(137),
    [sym_class_constructor] = STATE(137),
    [sym_var_declaration_block] = STATE(137),
    [sym_classic_compiler_block] = STATE(137),
    [sym_property_declaration_block] = STATE(137),
    [sym_return_block] = STATE(137),
    [sym_assignment_block] = STATE(137),
    [sym_function_call] = STATE(137),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(137),
    [sym_break] = STATE(137),
    [sym_continue] = STATE(137),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(137),
    [sym_if] = STATE(295),
    [sym_end_if] = STATE(90),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(137),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(137),
    [aux_sym_if_block_repeat1] = STATE(7),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__end_if_e] = ACTIONS(67),
    [sym__end_if_f] = ACTIONS(67),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [3] = {
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(6),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(6),
    [sym_declare_block] = STATE(6),
    [sym_alias_block] = STATE(6),
    [sym_class_extends] = STATE(6),
    [sym_class_constructor] = STATE(6),
    [sym_var_declaration_block] = STATE(6),
    [sym_classic_compiler_block] = STATE(6),
    [sym_property_declaration_block] = STATE(6),
    [sym_return_block] = STATE(6),
    [sym_assignment_block] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(6),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(6),
    [sym_begin_sql] = STATE(5),
    [sym_end_sql] = STATE(92),
    [sym_sql_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
    [sym__end_sql_e] = ACTIONS(69),
    [sym__end_sql_f] = ACTIONS(69),
  },
  [4] = {
    [sym__statement] = STATE(137),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(137),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(137),
    [sym_declare_block] = STATE(137),
    [sym_alias_block] = STATE(137),
    [sym_class_extends] = STATE(137),
    [sym_class_constructor] = STATE(137),
    [sym_var_declaration_block] = STATE(137),
    [sym_classic_compiler_block] = STATE(137),
    [sym_property_declaration_block] = STATE(137),
    [sym_return_block] = STATE(137),
    [sym_assignment_block] = STATE(137),
    [sym_function_call] = STATE(137),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(137),
    [sym_break] = STATE(137),
    [sym_continue] = STATE(137),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(137),
    [sym_if] = STATE(295),
    [sym_end_if] = STATE(86),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(137),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(137),
    [aux_sym_if_block_repeat1] = STATE(2),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__end_if_e] = ACTIONS(67),
    [sym__end_if_f] = ACTIONS(67),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(3),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(3),
    [sym_declare_block] = STATE(3),
    [sym_alias_block] = STATE(3),
    [sym_class_extends] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym_var_declaration_block] = STATE(3),
    [sym_classic_compiler_block] = STATE(3),
    [sym_property_declaration_block] = STATE(3),
    [sym_return_block] = STATE(3),
    [sym_assignment_block] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(3),
    [sym_break] = STATE(3),
    [sym_continue] = STATE(3),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(3),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(3),
    [sym_begin_sql] = STATE(5),
    [sym_end_sql] = STATE(106),
    [sym_sql_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
    [sym__end_sql_e] = ACTIONS(69),
    [sym__end_sql_f] = ACTIONS(69),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(6),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(6),
    [sym_declare_block] = STATE(6),
    [sym_alias_block] = STATE(6),
    [sym_class_extends] = STATE(6),
    [sym_class_constructor] = STATE(6),
    [sym_var_declaration_block] = STATE(6),
    [sym_classic_compiler_block] = STATE(6),
    [sym_property_declaration_block] = STATE(6),
    [sym_return_block] = STATE(6),
    [sym_assignment_block] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(6),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(6),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym__local] = ACTIONS(73),
    [sym__exposed] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(82),
    [aux_sym_numeric_parameter_token1] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(94),
    [sym__hex_literal] = ACTIONS(97),
    [aux_sym__num_literal_token1] = ACTIONS(85),
    [aux_sym__exp_literal_token1] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym__class_constructor] = ACTIONS(103),
    [sym__class_extends] = ACTIONS(106),
    [sym__var] = ACTIONS(109),
    [sym__property] = ACTIONS(112),
    [sym__alias] = ACTIONS(115),
    [sym__declare] = ACTIONS(118),
    [sym__function] = ACTIONS(121),
    [sym__return] = ACTIONS(124),
    [sym__break] = ACTIONS(127),
    [sym__continue] = ACTIONS(130),
    [sym__this] = ACTIONS(133),
    [sym__form] = ACTIONS(136),
    [sym__super] = ACTIONS(139),
    [sym__class_store_4d] = ACTIONS(142),
    [sym__class_store_ds] = ACTIONS(142),
    [sym__class_store_cs] = ACTIONS(142),
    [sym__system_variable_ok] = ACTIONS(145),
    [sym__system_variable_document] = ACTIONS(145),
    [sym__system_variable_flddelimit] = ACTIONS(145),
    [sym__system_variable_recdelimit] = ACTIONS(145),
    [sym__system_variable_error] = ACTIONS(148),
    [sym__system_variable_error_method] = ACTIONS(145),
    [sym__system_variable_error_line] = ACTIONS(145),
    [sym__system_variable_error_formula] = ACTIONS(145),
    [sym__system_variable_mousedown] = ACTIONS(145),
    [sym__system_variable_mousex] = ACTIONS(145),
    [sym__system_variable_mousey] = ACTIONS(145),
    [sym__system_variable_keycode] = ACTIONS(145),
    [sym__system_variable_modifiers] = ACTIONS(145),
    [sym__system_variable_mouseproc] = ACTIONS(145),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(154),
    [anon_sym_SLASH_STAR] = ACTIONS(157),
    [sym__if_e] = ACTIONS(160),
    [sym__if_f] = ACTIONS(160),
    [sym__begin_sql_e] = ACTIONS(163),
    [sym__begin_sql_f] = ACTIONS(163),
    [sym__end_sql_e] = ACTIONS(71),
    [sym__end_sql_f] = ACTIONS(71),
  },
  [7] = {
    [sym__statement] = STATE(137),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(137),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(137),
    [sym_declare_block] = STATE(137),
    [sym_alias_block] = STATE(137),
    [sym_class_extends] = STATE(137),
    [sym_class_constructor] = STATE(137),
    [sym_var_declaration_block] = STATE(137),
    [sym_classic_compiler_block] = STATE(137),
    [sym_property_declaration_block] = STATE(137),
    [sym_return_block] = STATE(137),
    [sym_assignment_block] = STATE(137),
    [sym_function_call] = STATE(137),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(137),
    [sym_break] = STATE(137),
    [sym_continue] = STATE(137),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(137),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(137),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(137),
    [aux_sym_if_block_repeat1] = STATE(7),
    [sym__local] = ACTIONS(166),
    [sym__exposed] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_LT_GT] = ACTIONS(175),
    [aux_sym_numeric_parameter_token1] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(187),
    [sym__hex_literal] = ACTIONS(190),
    [aux_sym__num_literal_token1] = ACTIONS(178),
    [aux_sym__exp_literal_token1] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym__class_constructor] = ACTIONS(196),
    [sym__class_extends] = ACTIONS(199),
    [sym__var] = ACTIONS(202),
    [sym__property] = ACTIONS(205),
    [sym__alias] = ACTIONS(208),
    [sym__declare] = ACTIONS(211),
    [sym__function] = ACTIONS(214),
    [sym__return] = ACTIONS(217),
    [sym__break] = ACTIONS(220),
    [sym__continue] = ACTIONS(223),
    [sym__this] = ACTIONS(226),
    [sym__form] = ACTIONS(229),
    [sym__super] = ACTIONS(232),
    [sym__class_store_4d] = ACTIONS(235),
    [sym__class_store_ds] = ACTIONS(235),
    [sym__class_store_cs] = ACTIONS(235),
    [sym__system_variable_ok] = ACTIONS(238),
    [sym__system_variable_document] = ACTIONS(238),
    [sym__system_variable_flddelimit] = ACTIONS(238),
    [sym__system_variable_recdelimit] = ACTIONS(238),
    [sym__system_variable_error] = ACTIONS(241),
    [sym__system_variable_error_method] = ACTIONS(238),
    [sym__system_variable_error_line] = ACTIONS(238),
    [sym__system_variable_error_formula] = ACTIONS(238),
    [sym__system_variable_mousedown] = ACTIONS(238),
    [sym__system_variable_mousex] = ACTIONS(238),
    [sym__system_variable_mousey] = ACTIONS(238),
    [sym__system_variable_keycode] = ACTIONS(238),
    [sym__system_variable_modifiers] = ACTIONS(238),
    [sym__system_variable_mouseproc] = ACTIONS(238),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(247),
    [anon_sym_SLASH_STAR] = ACTIONS(250),
    [sym__if_e] = ACTIONS(253),
    [sym__if_f] = ACTIONS(253),
    [sym__end_if_e] = ACTIONS(256),
    [sym__end_if_f] = ACTIONS(256),
    [sym__begin_sql_e] = ACTIONS(258),
    [sym__begin_sql_f] = ACTIONS(258),
  },
  [8] = {
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(6),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(6),
    [sym_declare_block] = STATE(6),
    [sym_alias_block] = STATE(6),
    [sym_class_extends] = STATE(6),
    [sym_class_constructor] = STATE(6),
    [sym_var_declaration_block] = STATE(6),
    [sym_classic_compiler_block] = STATE(6),
    [sym_property_declaration_block] = STATE(6),
    [sym_return_block] = STATE(6),
    [sym_assignment_block] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(6),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(6),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [9] = {
    [sym__statement] = STATE(146),
    [sym__scope] = STATE(282),
    [sym_function_name] = STATE(281),
    [sym_alias_name] = STATE(277),
    [sym_local_variable] = STATE(157),
    [sym_interprocess_variable] = STATE(157),
    [sym_numeric_parameter] = STATE(157),
    [sym__variable] = STATE(161),
    [sym__mutable] = STATE(180),
    [sym__immutable] = STATE(173),
    [sym_class_function] = STATE(40),
    [sym_generic_function] = STATE(40),
    [sym__function_call] = STATE(40),
    [sym__single_condition] = STATE(173),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(146),
    [sym_time] = STATE(174),
    [sym_date] = STATE(174),
    [sym__dec_literal] = STATE(167),
    [sym__num_literal] = STATE(167),
    [sym__exp_literal] = STATE(167),
    [sym_number] = STATE(174),
    [sym_string] = STATE(174),
    [sym_constant] = STATE(173),
    [sym_function_block] = STATE(146),
    [sym_declare_block] = STATE(146),
    [sym_alias_block] = STATE(146),
    [sym_class_extends] = STATE(146),
    [sym_class_constructor] = STATE(146),
    [sym_var_declaration_block] = STATE(146),
    [sym_classic_compiler_block] = STATE(146),
    [sym_property_declaration_block] = STATE(146),
    [sym_return_block] = STATE(146),
    [sym_assignment_block] = STATE(146),
    [sym_function_call] = STATE(146),
    [sym_var] = STATE(212),
    [sym_property] = STATE(273),
    [sym_alias] = STATE(246),
    [sym_declare] = STATE(247),
    [sym_function] = STATE(201),
    [sym_return] = STATE(146),
    [sym_break] = STATE(146),
    [sym_continue] = STATE(146),
    [sym_this] = STATE(298),
    [sym_form] = STATE(298),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(159),
    [sym__class] = STATE(179),
    [sym_system_variable] = STATE(173),
    [sym__classic_compiler_longint] = STATE(297),
    [sym_classic_compiler] = STATE(296),
    [sym_comment] = STATE(146),
    [sym_if] = STATE(295),
    [sym__if] = STATE(4),
    [sym_if_block] = STATE(146),
    [sym_begin_sql] = STATE(5),
    [sym_sql_block] = STATE(146),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [aux_sym_numeric_parameter_token1] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(19),
    [sym__hex_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym__class_constructor] = ACTIONS(25),
    [sym__class_extends] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__return] = ACTIONS(39),
    [sym__break] = ACTIONS(41),
    [sym__continue] = ACTIONS(43),
    [sym__this] = ACTIONS(45),
    [sym__form] = ACTIONS(47),
    [sym__super] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(51),
    [sym__class_store_ds] = ACTIONS(51),
    [sym__class_store_cs] = ACTIONS(51),
    [sym__system_variable_ok] = ACTIONS(53),
    [sym__system_variable_document] = ACTIONS(53),
    [sym__system_variable_flddelimit] = ACTIONS(53),
    [sym__system_variable_recdelimit] = ACTIONS(53),
    [sym__system_variable_error] = ACTIONS(55),
    [sym__system_variable_error_method] = ACTIONS(53),
    [sym__system_variable_error_line] = ACTIONS(53),
    [sym__system_variable_error_formula] = ACTIONS(53),
    [sym__system_variable_mousedown] = ACTIONS(53),
    [sym__system_variable_mousex] = ACTIONS(53),
    [sym__system_variable_mousey] = ACTIONS(53),
    [sym__system_variable_keycode] = ACTIONS(53),
    [sym__system_variable_modifiers] = ACTIONS(53),
    [sym__system_variable_mouseproc] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(57),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__if_e] = ACTIONS(63),
    [sym__if_f] = ACTIONS(63),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [10] = {
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__local] = ACTIONS(263),
    [sym__exposed] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(263),
    [anon_sym_TILDE_PIPE] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_QMARK_QMARK] = ACTIONS(263),
    [anon_sym_QMARK_PLUS] = ACTIONS(263),
    [anon_sym_QMARK_DASH] = ACTIONS(263),
    [anon_sym_PLUS_EQ] = ACTIONS(263),
    [anon_sym_DASH_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_SLASH_EQ] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(263),
    [anon_sym_LT_GT] = ACTIONS(263),
    [aux_sym_numeric_parameter_token1] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(265),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(263),
    [sym__hex_literal] = ACTIONS(263),
    [aux_sym__num_literal_token1] = ACTIONS(265),
    [aux_sym__exp_literal_token1] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym__class_constructor] = ACTIONS(263),
    [sym__class_extends] = ACTIONS(263),
    [sym__var] = ACTIONS(263),
    [sym__property] = ACTIONS(263),
    [sym__alias] = ACTIONS(263),
    [sym__declare] = ACTIONS(263),
    [sym__function] = ACTIONS(263),
    [sym__return] = ACTIONS(263),
    [sym__break] = ACTIONS(263),
    [sym__continue] = ACTIONS(263),
    [sym__this] = ACTIONS(263),
    [sym__form] = ACTIONS(263),
    [sym__super] = ACTIONS(263),
    [sym__class_store_4d] = ACTIONS(263),
    [sym__class_store_ds] = ACTIONS(263),
    [sym__class_store_cs] = ACTIONS(263),
    [sym__system_variable_ok] = ACTIONS(263),
    [sym__system_variable_document] = ACTIONS(263),
    [sym__system_variable_flddelimit] = ACTIONS(263),
    [sym__system_variable_recdelimit] = ACTIONS(263),
    [sym__system_variable_error] = ACTIONS(265),
    [sym__system_variable_error_method] = ACTIONS(263),
    [sym__system_variable_error_line] = ACTIONS(263),
    [sym__system_variable_error_formula] = ACTIONS(263),
    [sym__system_variable_mousedown] = ACTIONS(263),
    [sym__system_variable_mousex] = ACTIONS(263),
    [sym__system_variable_mousey] = ACTIONS(263),
    [sym__system_variable_keycode] = ACTIONS(263),
    [sym__system_variable_modifiers] = ACTIONS(263),
    [sym__system_variable_mouseproc] = ACTIONS(263),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(263),
    [anon_sym_SLASH_SLASH] = ACTIONS(263),
    [anon_sym_SLASH_STAR] = ACTIONS(263),
    [sym__if_e] = ACTIONS(263),
    [sym__if_f] = ACTIONS(265),
    [sym__else_e] = ACTIONS(263),
    [sym__else_f] = ACTIONS(263),
    [sym__end_if_e] = ACTIONS(263),
    [sym__end_if_f] = ACTIONS(263),
    [sym__begin_sql_e] = ACTIONS(263),
    [sym__begin_sql_f] = ACTIONS(263),
    [sym__end_sql_e] = ACTIONS(263),
    [sym__end_sql_f] = ACTIONS(263),
  },
  [11] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym__local] = ACTIONS(271),
    [sym__exposed] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(271),
    [anon_sym_TILDE_PIPE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(271),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_PLUS] = ACTIONS(271),
    [anon_sym_QMARK_DASH] = ACTIONS(271),
    [anon_sym_PLUS_EQ] = ACTIONS(271),
    [anon_sym_DASH_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_SLASH_EQ] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [anon_sym_LT_GT] = ACTIONS(271),
    [aux_sym_numeric_parameter_token1] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(271),
    [sym__hex_literal] = ACTIONS(271),
    [aux_sym__num_literal_token1] = ACTIONS(273),
    [aux_sym__exp_literal_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym__class_constructor] = ACTIONS(271),
    [sym__class_extends] = ACTIONS(271),
    [sym__var] = ACTIONS(271),
    [sym__property] = ACTIONS(271),
    [sym__alias] = ACTIONS(271),
    [sym__declare] = ACTIONS(271),
    [sym__function] = ACTIONS(271),
    [sym__return] = ACTIONS(271),
    [sym__break] = ACTIONS(271),
    [sym__continue] = ACTIONS(271),
    [sym__this] = ACTIONS(271),
    [sym__form] = ACTIONS(271),
    [sym__super] = ACTIONS(271),
    [sym__class_store_4d] = ACTIONS(271),
    [sym__class_store_ds] = ACTIONS(271),
    [sym__class_store_cs] = ACTIONS(271),
    [sym__system_variable_ok] = ACTIONS(271),
    [sym__system_variable_document] = ACTIONS(271),
    [sym__system_variable_flddelimit] = ACTIONS(271),
    [sym__system_variable_recdelimit] = ACTIONS(271),
    [sym__system_variable_error] = ACTIONS(273),
    [sym__system_variable_error_method] = ACTIONS(271),
    [sym__system_variable_error_line] = ACTIONS(271),
    [sym__system_variable_error_formula] = ACTIONS(271),
    [sym__system_variable_mousedown] = ACTIONS(271),
    [sym__system_variable_mousex] = ACTIONS(271),
    [sym__system_variable_mousey] = ACTIONS(271),
    [sym__system_variable_keycode] = ACTIONS(271),
    [sym__system_variable_modifiers] = ACTIONS(271),
    [sym__system_variable_mouseproc] = ACTIONS(271),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(271),
    [anon_sym_SLASH_SLASH] = ACTIONS(271),
    [anon_sym_SLASH_STAR] = ACTIONS(271),
    [sym__if_e] = ACTIONS(271),
    [sym__if_f] = ACTIONS(273),
    [sym__else_e] = ACTIONS(271),
    [sym__else_f] = ACTIONS(271),
    [sym__end_if_e] = ACTIONS(271),
    [sym__end_if_f] = ACTIONS(271),
    [sym__begin_sql_e] = ACTIONS(271),
    [sym__begin_sql_f] = ACTIONS(271),
    [sym__end_sql_e] = ACTIONS(271),
    [sym__end_sql_f] = ACTIONS(271),
  },
  [12] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym__local] = ACTIONS(278),
    [sym__exposed] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(280),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_PIPE_PIPE] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_TILDE_PIPE] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_POUND] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_GT_GT] = ACTIONS(278),
    [anon_sym_QMARK_QMARK] = ACTIONS(278),
    [anon_sym_QMARK_PLUS] = ACTIONS(278),
    [anon_sym_QMARK_DASH] = ACTIONS(278),
    [anon_sym_PLUS_EQ] = ACTIONS(278),
    [anon_sym_DASH_EQ] = ACTIONS(278),
    [anon_sym_STAR_EQ] = ACTIONS(278),
    [anon_sym_SLASH_EQ] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [anon_sym_LT_GT] = ACTIONS(278),
    [aux_sym_numeric_parameter_token1] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_QMARK] = ACTIONS(280),
    [anon_sym_BANG] = ACTIONS(280),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(278),
    [sym__hex_literal] = ACTIONS(278),
    [aux_sym__num_literal_token1] = ACTIONS(280),
    [aux_sym__exp_literal_token1] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [sym__class_constructor] = ACTIONS(278),
    [sym__class_extends] = ACTIONS(278),
    [sym__var] = ACTIONS(278),
    [sym__property] = ACTIONS(278),
    [sym__alias] = ACTIONS(278),
    [sym__declare] = ACTIONS(278),
    [sym__function] = ACTIONS(278),
    [sym__return] = ACTIONS(278),
    [sym__break] = ACTIONS(278),
    [sym__continue] = ACTIONS(278),
    [sym__this] = ACTIONS(278),
    [sym__form] = ACTIONS(278),
    [sym__super] = ACTIONS(278),
    [sym__class_store_4d] = ACTIONS(278),
    [sym__class_store_ds] = ACTIONS(278),
    [sym__class_store_cs] = ACTIONS(278),
    [sym__system_variable_ok] = ACTIONS(278),
    [sym__system_variable_document] = ACTIONS(278),
    [sym__system_variable_flddelimit] = ACTIONS(278),
    [sym__system_variable_recdelimit] = ACTIONS(278),
    [sym__system_variable_error] = ACTIONS(280),
    [sym__system_variable_error_method] = ACTIONS(278),
    [sym__system_variable_error_line] = ACTIONS(278),
    [sym__system_variable_error_formula] = ACTIONS(278),
    [sym__system_variable_mousedown] = ACTIONS(278),
    [sym__system_variable_mousex] = ACTIONS(278),
    [sym__system_variable_mousey] = ACTIONS(278),
    [sym__system_variable_keycode] = ACTIONS(278),
    [sym__system_variable_modifiers] = ACTIONS(278),
    [sym__system_variable_mouseproc] = ACTIONS(278),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [anon_sym_SLASH_STAR] = ACTIONS(278),
    [sym__if_e] = ACTIONS(278),
    [sym__if_f] = ACTIONS(280),
    [sym__else_e] = ACTIONS(278),
    [sym__else_f] = ACTIONS(278),
    [sym__end_if_e] = ACTIONS(278),
    [sym__end_if_f] = ACTIONS(278),
    [sym__begin_sql_e] = ACTIONS(278),
    [sym__begin_sql_f] = ACTIONS(278),
    [sym__end_sql_e] = ACTIONS(278),
    [sym__end_sql_f] = ACTIONS(278),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym__local] = ACTIONS(284),
    [sym__exposed] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_TILDE_PIPE] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_POUND] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_QMARK_QMARK] = ACTIONS(284),
    [anon_sym_QMARK_PLUS] = ACTIONS(284),
    [anon_sym_QMARK_DASH] = ACTIONS(284),
    [anon_sym_PLUS_EQ] = ACTIONS(284),
    [anon_sym_DASH_EQ] = ACTIONS(284),
    [anon_sym_STAR_EQ] = ACTIONS(284),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [anon_sym_DOLLAR] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_LT_GT] = ACTIONS(284),
    [aux_sym_numeric_parameter_token1] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(286),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(284),
    [sym__hex_literal] = ACTIONS(284),
    [aux_sym__num_literal_token1] = ACTIONS(286),
    [aux_sym__exp_literal_token1] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__class_constructor] = ACTIONS(284),
    [sym__class_extends] = ACTIONS(284),
    [sym__var] = ACTIONS(284),
    [sym__property] = ACTIONS(284),
    [sym__alias] = ACTIONS(284),
    [sym__declare] = ACTIONS(284),
    [sym__function] = ACTIONS(284),
    [sym__return] = ACTIONS(284),
    [sym__break] = ACTIONS(284),
    [sym__continue] = ACTIONS(284),
    [sym__this] = ACTIONS(284),
    [sym__form] = ACTIONS(284),
    [sym__super] = ACTIONS(284),
    [sym__class_store_4d] = ACTIONS(284),
    [sym__class_store_ds] = ACTIONS(284),
    [sym__class_store_cs] = ACTIONS(284),
    [sym__system_variable_ok] = ACTIONS(284),
    [sym__system_variable_document] = ACTIONS(284),
    [sym__system_variable_flddelimit] = ACTIONS(284),
    [sym__system_variable_recdelimit] = ACTIONS(284),
    [sym__system_variable_error] = ACTIONS(286),
    [sym__system_variable_error_method] = ACTIONS(284),
    [sym__system_variable_error_line] = ACTIONS(284),
    [sym__system_variable_error_formula] = ACTIONS(284),
    [sym__system_variable_mousedown] = ACTIONS(284),
    [sym__system_variable_mousex] = ACTIONS(284),
    [sym__system_variable_mousey] = ACTIONS(284),
    [sym__system_variable_keycode] = ACTIONS(284),
    [sym__system_variable_modifiers] = ACTIONS(284),
    [sym__system_variable_mouseproc] = ACTIONS(284),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(284),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_SLASH_STAR] = ACTIONS(284),
    [sym__if_e] = ACTIONS(284),
    [sym__if_f] = ACTIONS(286),
    [sym__else_e] = ACTIONS(284),
    [sym__else_f] = ACTIONS(284),
    [sym__end_if_e] = ACTIONS(284),
    [sym__end_if_f] = ACTIONS(284),
    [sym__begin_sql_e] = ACTIONS(284),
    [sym__begin_sql_f] = ACTIONS(284),
    [sym__end_sql_e] = ACTIONS(284),
    [sym__end_sql_f] = ACTIONS(284),
  },
  [14] = {
    [aux_sym__mutable_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym__local] = ACTIONS(288),
    [sym__exposed] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_TILDE_PIPE] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_QMARK_QMARK] = ACTIONS(288),
    [anon_sym_QMARK_PLUS] = ACTIONS(288),
    [anon_sym_QMARK_DASH] = ACTIONS(288),
    [anon_sym_PLUS_EQ] = ACTIONS(288),
    [anon_sym_DASH_EQ] = ACTIONS(288),
    [anon_sym_STAR_EQ] = ACTIONS(288),
    [anon_sym_SLASH_EQ] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [anon_sym_LT_GT] = ACTIONS(288),
    [aux_sym_numeric_parameter_token1] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(288),
    [sym__hex_literal] = ACTIONS(288),
    [aux_sym__num_literal_token1] = ACTIONS(290),
    [aux_sym__exp_literal_token1] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__class_constructor] = ACTIONS(288),
    [sym__class_extends] = ACTIONS(288),
    [sym__var] = ACTIONS(288),
    [sym__property] = ACTIONS(288),
    [sym__alias] = ACTIONS(288),
    [sym__declare] = ACTIONS(288),
    [sym__function] = ACTIONS(288),
    [sym__return] = ACTIONS(288),
    [sym__break] = ACTIONS(288),
    [sym__continue] = ACTIONS(288),
    [sym__this] = ACTIONS(288),
    [sym__form] = ACTIONS(288),
    [sym__super] = ACTIONS(288),
    [sym__class_store_4d] = ACTIONS(288),
    [sym__class_store_ds] = ACTIONS(288),
    [sym__class_store_cs] = ACTIONS(288),
    [sym__system_variable_ok] = ACTIONS(288),
    [sym__system_variable_document] = ACTIONS(288),
    [sym__system_variable_flddelimit] = ACTIONS(288),
    [sym__system_variable_recdelimit] = ACTIONS(288),
    [sym__system_variable_error] = ACTIONS(290),
    [sym__system_variable_error_method] = ACTIONS(288),
    [sym__system_variable_error_line] = ACTIONS(288),
    [sym__system_variable_error_formula] = ACTIONS(288),
    [sym__system_variable_mousedown] = ACTIONS(288),
    [sym__system_variable_mousex] = ACTIONS(288),
    [sym__system_variable_mousey] = ACTIONS(288),
    [sym__system_variable_keycode] = ACTIONS(288),
    [sym__system_variable_modifiers] = ACTIONS(288),
    [sym__system_variable_mouseproc] = ACTIONS(288),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_SLASH_STAR] = ACTIONS(288),
    [sym__if_e] = ACTIONS(288),
    [sym__if_f] = ACTIONS(290),
    [sym__else_e] = ACTIONS(288),
    [sym__else_f] = ACTIONS(288),
    [sym__end_if_e] = ACTIONS(288),
    [sym__end_if_f] = ACTIONS(288),
    [sym__begin_sql_e] = ACTIONS(288),
    [sym__begin_sql_f] = ACTIONS(288),
    [sym__end_sql_e] = ACTIONS(288),
    [sym__end_sql_f] = ACTIONS(288),
  },
  [15] = {
    [aux_sym__mutable_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym__local] = ACTIONS(292),
    [sym__exposed] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_TILDE_PIPE] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_QMARK_QMARK] = ACTIONS(292),
    [anon_sym_QMARK_PLUS] = ACTIONS(292),
    [anon_sym_QMARK_DASH] = ACTIONS(292),
    [anon_sym_PLUS_EQ] = ACTIONS(292),
    [anon_sym_DASH_EQ] = ACTIONS(292),
    [anon_sym_STAR_EQ] = ACTIONS(292),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_LT_GT] = ACTIONS(292),
    [aux_sym_numeric_parameter_token1] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(292),
    [sym__hex_literal] = ACTIONS(292),
    [aux_sym__num_literal_token1] = ACTIONS(294),
    [aux_sym__exp_literal_token1] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [sym__class_constructor] = ACTIONS(292),
    [sym__class_extends] = ACTIONS(292),
    [sym__var] = ACTIONS(292),
    [sym__property] = ACTIONS(292),
    [sym__alias] = ACTIONS(292),
    [sym__declare] = ACTIONS(292),
    [sym__function] = ACTIONS(292),
    [sym__return] = ACTIONS(292),
    [sym__break] = ACTIONS(292),
    [sym__continue] = ACTIONS(292),
    [sym__this] = ACTIONS(292),
    [sym__form] = ACTIONS(292),
    [sym__super] = ACTIONS(292),
    [sym__class_store_4d] = ACTIONS(292),
    [sym__class_store_ds] = ACTIONS(292),
    [sym__class_store_cs] = ACTIONS(292),
    [sym__system_variable_ok] = ACTIONS(292),
    [sym__system_variable_document] = ACTIONS(292),
    [sym__system_variable_flddelimit] = ACTIONS(292),
    [sym__system_variable_recdelimit] = ACTIONS(292),
    [sym__system_variable_error] = ACTIONS(294),
    [sym__system_variable_error_method] = ACTIONS(292),
    [sym__system_variable_error_line] = ACTIONS(292),
    [sym__system_variable_error_formula] = ACTIONS(292),
    [sym__system_variable_mousedown] = ACTIONS(292),
    [sym__system_variable_mousex] = ACTIONS(292),
    [sym__system_variable_mousey] = ACTIONS(292),
    [sym__system_variable_keycode] = ACTIONS(292),
    [sym__system_variable_modifiers] = ACTIONS(292),
    [sym__system_variable_mouseproc] = ACTIONS(292),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(292),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_SLASH_STAR] = ACTIONS(292),
    [sym__if_e] = ACTIONS(292),
    [sym__if_f] = ACTIONS(294),
    [sym__else_e] = ACTIONS(292),
    [sym__else_f] = ACTIONS(292),
    [sym__end_if_e] = ACTIONS(292),
    [sym__end_if_f] = ACTIONS(292),
    [sym__begin_sql_e] = ACTIONS(292),
    [sym__begin_sql_f] = ACTIONS(292),
    [sym__end_sql_e] = ACTIONS(292),
    [sym__end_sql_f] = ACTIONS(292),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym__local] = ACTIONS(296),
    [sym__exposed] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_AMP_AMP] = ACTIONS(296),
    [anon_sym_PIPE_PIPE] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_TILDE_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_POUND] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_QMARK_QMARK] = ACTIONS(296),
    [anon_sym_QMARK_PLUS] = ACTIONS(296),
    [anon_sym_QMARK_DASH] = ACTIONS(296),
    [anon_sym_PLUS_EQ] = ACTIONS(296),
    [anon_sym_DASH_EQ] = ACTIONS(296),
    [anon_sym_STAR_EQ] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_LT_GT] = ACTIONS(296),
    [aux_sym_numeric_parameter_token1] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(296),
    [sym__hex_literal] = ACTIONS(296),
    [aux_sym__num_literal_token1] = ACTIONS(298),
    [aux_sym__exp_literal_token1] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__class_constructor] = ACTIONS(296),
    [sym__class_extends] = ACTIONS(296),
    [sym__var] = ACTIONS(296),
    [sym__property] = ACTIONS(296),
    [sym__alias] = ACTIONS(296),
    [sym__declare] = ACTIONS(296),
    [sym__function] = ACTIONS(296),
    [sym__return] = ACTIONS(296),
    [sym__break] = ACTIONS(296),
    [sym__continue] = ACTIONS(296),
    [sym__this] = ACTIONS(296),
    [sym__form] = ACTIONS(296),
    [sym__super] = ACTIONS(296),
    [sym__class_store_4d] = ACTIONS(296),
    [sym__class_store_ds] = ACTIONS(296),
    [sym__class_store_cs] = ACTIONS(296),
    [sym__system_variable_ok] = ACTIONS(296),
    [sym__system_variable_document] = ACTIONS(296),
    [sym__system_variable_flddelimit] = ACTIONS(296),
    [sym__system_variable_recdelimit] = ACTIONS(296),
    [sym__system_variable_error] = ACTIONS(298),
    [sym__system_variable_error_method] = ACTIONS(296),
    [sym__system_variable_error_line] = ACTIONS(296),
    [sym__system_variable_error_formula] = ACTIONS(296),
    [sym__system_variable_mousedown] = ACTIONS(296),
    [sym__system_variable_mousex] = ACTIONS(296),
    [sym__system_variable_mousey] = ACTIONS(296),
    [sym__system_variable_keycode] = ACTIONS(296),
    [sym__system_variable_modifiers] = ACTIONS(296),
    [sym__system_variable_mouseproc] = ACTIONS(296),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_STAR] = ACTIONS(296),
    [sym__if_e] = ACTIONS(296),
    [sym__if_f] = ACTIONS(298),
    [sym__else_e] = ACTIONS(296),
    [sym__else_f] = ACTIONS(296),
    [sym__end_if_e] = ACTIONS(296),
    [sym__end_if_f] = ACTIONS(296),
    [sym__begin_sql_e] = ACTIONS(296),
    [sym__begin_sql_f] = ACTIONS(296),
    [sym__end_sql_e] = ACTIONS(296),
    [sym__end_sql_f] = ACTIONS(296),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym__local] = ACTIONS(271),
    [sym__exposed] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(271),
    [anon_sym_TILDE_PIPE] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(271),
    [anon_sym_QMARK_QMARK] = ACTIONS(271),
    [anon_sym_QMARK_PLUS] = ACTIONS(271),
    [anon_sym_QMARK_DASH] = ACTIONS(271),
    [anon_sym_PLUS_EQ] = ACTIONS(271),
    [anon_sym_DASH_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_SLASH_EQ] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [anon_sym_LT_GT] = ACTIONS(271),
    [aux_sym_numeric_parameter_token1] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(271),
    [sym__hex_literal] = ACTIONS(271),
    [aux_sym__num_literal_token1] = ACTIONS(273),
    [aux_sym__exp_literal_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym__class_constructor] = ACTIONS(271),
    [sym__class_extends] = ACTIONS(271),
    [sym__var] = ACTIONS(271),
    [sym__property] = ACTIONS(271),
    [sym__alias] = ACTIONS(271),
    [sym__declare] = ACTIONS(271),
    [sym__function] = ACTIONS(271),
    [sym__return] = ACTIONS(271),
    [sym__break] = ACTIONS(271),
    [sym__continue] = ACTIONS(271),
    [sym__this] = ACTIONS(271),
    [sym__form] = ACTIONS(271),
    [sym__super] = ACTIONS(271),
    [sym__class_store_4d] = ACTIONS(271),
    [sym__class_store_ds] = ACTIONS(271),
    [sym__class_store_cs] = ACTIONS(271),
    [sym__system_variable_ok] = ACTIONS(271),
    [sym__system_variable_document] = ACTIONS(271),
    [sym__system_variable_flddelimit] = ACTIONS(271),
    [sym__system_variable_recdelimit] = ACTIONS(271),
    [sym__system_variable_error] = ACTIONS(273),
    [sym__system_variable_error_method] = ACTIONS(271),
    [sym__system_variable_error_line] = ACTIONS(271),
    [sym__system_variable_error_formula] = ACTIONS(271),
    [sym__system_variable_mousedown] = ACTIONS(271),
    [sym__system_variable_mousex] = ACTIONS(271),
    [sym__system_variable_mousey] = ACTIONS(271),
    [sym__system_variable_keycode] = ACTIONS(271),
    [sym__system_variable_modifiers] = ACTIONS(271),
    [sym__system_variable_mouseproc] = ACTIONS(271),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(271),
    [anon_sym_SLASH_SLASH] = ACTIONS(271),
    [anon_sym_SLASH_STAR] = ACTIONS(271),
    [sym__if_e] = ACTIONS(271),
    [sym__if_f] = ACTIONS(273),
    [sym__else_e] = ACTIONS(271),
    [sym__else_f] = ACTIONS(271),
    [sym__end_if_e] = ACTIONS(271),
    [sym__end_if_f] = ACTIONS(271),
    [sym__begin_sql_e] = ACTIONS(271),
    [sym__begin_sql_f] = ACTIONS(271),
    [sym__end_sql_e] = ACTIONS(271),
    [sym__end_sql_f] = ACTIONS(271),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym__local] = ACTIONS(300),
    [sym__exposed] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_TILDE_PIPE] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_POUND] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_QMARK_QMARK] = ACTIONS(300),
    [anon_sym_QMARK_PLUS] = ACTIONS(300),
    [anon_sym_QMARK_DASH] = ACTIONS(300),
    [anon_sym_PLUS_EQ] = ACTIONS(300),
    [anon_sym_DASH_EQ] = ACTIONS(300),
    [anon_sym_STAR_EQ] = ACTIONS(300),
    [anon_sym_SLASH_EQ] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LT_GT] = ACTIONS(300),
    [aux_sym_numeric_parameter_token1] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(302),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(300),
    [sym__hex_literal] = ACTIONS(300),
    [aux_sym__num_literal_token1] = ACTIONS(302),
    [aux_sym__exp_literal_token1] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__class_constructor] = ACTIONS(300),
    [sym__class_extends] = ACTIONS(300),
    [sym__var] = ACTIONS(300),
    [sym__property] = ACTIONS(300),
    [sym__alias] = ACTIONS(300),
    [sym__declare] = ACTIONS(300),
    [sym__function] = ACTIONS(300),
    [sym__return] = ACTIONS(300),
    [sym__break] = ACTIONS(300),
    [sym__continue] = ACTIONS(300),
    [sym__this] = ACTIONS(300),
    [sym__form] = ACTIONS(300),
    [sym__super] = ACTIONS(300),
    [sym__class_store_4d] = ACTIONS(300),
    [sym__class_store_ds] = ACTIONS(300),
    [sym__class_store_cs] = ACTIONS(300),
    [sym__system_variable_ok] = ACTIONS(300),
    [sym__system_variable_document] = ACTIONS(300),
    [sym__system_variable_flddelimit] = ACTIONS(300),
    [sym__system_variable_recdelimit] = ACTIONS(300),
    [sym__system_variable_error] = ACTIONS(302),
    [sym__system_variable_error_method] = ACTIONS(300),
    [sym__system_variable_error_line] = ACTIONS(300),
    [sym__system_variable_error_formula] = ACTIONS(300),
    [sym__system_variable_mousedown] = ACTIONS(300),
    [sym__system_variable_mousex] = ACTIONS(300),
    [sym__system_variable_mousey] = ACTIONS(300),
    [sym__system_variable_keycode] = ACTIONS(300),
    [sym__system_variable_modifiers] = ACTIONS(300),
    [sym__system_variable_mouseproc] = ACTIONS(300),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(300),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_SLASH_STAR] = ACTIONS(300),
    [sym__if_e] = ACTIONS(300),
    [sym__if_f] = ACTIONS(302),
    [sym__else_e] = ACTIONS(300),
    [sym__else_f] = ACTIONS(300),
    [sym__end_if_e] = ACTIONS(300),
    [sym__end_if_f] = ACTIONS(300),
    [sym__begin_sql_e] = ACTIONS(300),
    [sym__begin_sql_f] = ACTIONS(300),
    [sym__end_sql_e] = ACTIONS(300),
    [sym__end_sql_f] = ACTIONS(300),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym__local] = ACTIONS(304),
    [sym__exposed] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_TILDE_PIPE] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(304),
    [anon_sym_QMARK_QMARK] = ACTIONS(304),
    [anon_sym_QMARK_PLUS] = ACTIONS(304),
    [anon_sym_QMARK_DASH] = ACTIONS(304),
    [anon_sym_PLUS_EQ] = ACTIONS(304),
    [anon_sym_DASH_EQ] = ACTIONS(304),
    [anon_sym_STAR_EQ] = ACTIONS(304),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_LT_GT] = ACTIONS(304),
    [aux_sym_numeric_parameter_token1] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(304),
    [sym__hex_literal] = ACTIONS(304),
    [aux_sym__num_literal_token1] = ACTIONS(306),
    [aux_sym__exp_literal_token1] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [sym__class_constructor] = ACTIONS(304),
    [sym__class_extends] = ACTIONS(304),
    [sym__var] = ACTIONS(304),
    [sym__property] = ACTIONS(304),
    [sym__alias] = ACTIONS(304),
    [sym__declare] = ACTIONS(304),
    [sym__function] = ACTIONS(304),
    [sym__return] = ACTIONS(304),
    [sym__break] = ACTIONS(304),
    [sym__continue] = ACTIONS(304),
    [sym__this] = ACTIONS(304),
    [sym__form] = ACTIONS(304),
    [sym__super] = ACTIONS(304),
    [sym__class_store_4d] = ACTIONS(304),
    [sym__class_store_ds] = ACTIONS(304),
    [sym__class_store_cs] = ACTIONS(304),
    [sym__system_variable_ok] = ACTIONS(304),
    [sym__system_variable_document] = ACTIONS(304),
    [sym__system_variable_flddelimit] = ACTIONS(304),
    [sym__system_variable_recdelimit] = ACTIONS(304),
    [sym__system_variable_error] = ACTIONS(306),
    [sym__system_variable_error_method] = ACTIONS(304),
    [sym__system_variable_error_line] = ACTIONS(304),
    [sym__system_variable_error_formula] = ACTIONS(304),
    [sym__system_variable_mousedown] = ACTIONS(304),
    [sym__system_variable_mousex] = ACTIONS(304),
    [sym__system_variable_mousey] = ACTIONS(304),
    [sym__system_variable_keycode] = ACTIONS(304),
    [sym__system_variable_modifiers] = ACTIONS(304),
    [sym__system_variable_mouseproc] = ACTIONS(304),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_SLASH_STAR] = ACTIONS(304),
    [sym__if_e] = ACTIONS(304),
    [sym__if_f] = ACTIONS(306),
    [sym__else_e] = ACTIONS(304),
    [sym__else_f] = ACTIONS(304),
    [sym__end_if_e] = ACTIONS(304),
    [sym__end_if_f] = ACTIONS(304),
    [sym__begin_sql_e] = ACTIONS(304),
    [sym__begin_sql_f] = ACTIONS(304),
    [sym__end_sql_e] = ACTIONS(304),
    [sym__end_sql_f] = ACTIONS(304),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym__local] = ACTIONS(310),
    [sym__exposed] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(310),
    [anon_sym_PIPE_PIPE] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_TILDE_PIPE] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(312),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_GT_GT] = ACTIONS(310),
    [anon_sym_QMARK_QMARK] = ACTIONS(310),
    [anon_sym_QMARK_PLUS] = ACTIONS(310),
    [anon_sym_QMARK_DASH] = ACTIONS(310),
    [anon_sym_PLUS_EQ] = ACTIONS(310),
    [anon_sym_DASH_EQ] = ACTIONS(310),
    [anon_sym_STAR_EQ] = ACTIONS(310),
    [anon_sym_SLASH_EQ] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_LT_GT] = ACTIONS(310),
    [aux_sym_numeric_parameter_token1] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(310),
    [sym__hex_literal] = ACTIONS(310),
    [aux_sym__num_literal_token1] = ACTIONS(312),
    [aux_sym__exp_literal_token1] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [sym__class_constructor] = ACTIONS(310),
    [sym__class_extends] = ACTIONS(310),
    [sym__var] = ACTIONS(310),
    [sym__property] = ACTIONS(310),
    [sym__alias] = ACTIONS(310),
    [sym__declare] = ACTIONS(310),
    [sym__function] = ACTIONS(310),
    [sym__return] = ACTIONS(310),
    [sym__break] = ACTIONS(310),
    [sym__continue] = ACTIONS(310),
    [sym__this] = ACTIONS(310),
    [sym__form] = ACTIONS(310),
    [sym__super] = ACTIONS(310),
    [sym__class_store_4d] = ACTIONS(310),
    [sym__class_store_ds] = ACTIONS(310),
    [sym__class_store_cs] = ACTIONS(310),
    [sym__system_variable_ok] = ACTIONS(310),
    [sym__system_variable_document] = ACTIONS(310),
    [sym__system_variable_flddelimit] = ACTIONS(310),
    [sym__system_variable_recdelimit] = ACTIONS(310),
    [sym__system_variable_error] = ACTIONS(312),
    [sym__system_variable_error_method] = ACTIONS(310),
    [sym__system_variable_error_line] = ACTIONS(310),
    [sym__system_variable_error_formula] = ACTIONS(310),
    [sym__system_variable_mousedown] = ACTIONS(310),
    [sym__system_variable_mousex] = ACTIONS(310),
    [sym__system_variable_mousey] = ACTIONS(310),
    [sym__system_variable_keycode] = ACTIONS(310),
    [sym__system_variable_modifiers] = ACTIONS(310),
    [sym__system_variable_mouseproc] = ACTIONS(310),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(310),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_STAR] = ACTIONS(310),
    [sym__if_e] = ACTIONS(310),
    [sym__if_f] = ACTIONS(312),
    [sym__else_e] = ACTIONS(310),
    [sym__else_f] = ACTIONS(310),
    [sym__end_if_e] = ACTIONS(310),
    [sym__end_if_f] = ACTIONS(310),
    [sym__begin_sql_e] = ACTIONS(310),
    [sym__begin_sql_f] = ACTIONS(310),
    [sym__end_sql_e] = ACTIONS(310),
    [sym__end_sql_f] = ACTIONS(310),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [sym__local] = ACTIONS(316),
    [sym__exposed] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_AMP_AMP] = ACTIONS(316),
    [anon_sym_PIPE_PIPE] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_TILDE_PIPE] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_POUND] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(316),
    [anon_sym_GT_GT] = ACTIONS(316),
    [anon_sym_QMARK_QMARK] = ACTIONS(316),
    [anon_sym_QMARK_PLUS] = ACTIONS(316),
    [anon_sym_QMARK_DASH] = ACTIONS(316),
    [anon_sym_PLUS_EQ] = ACTIONS(316),
    [anon_sym_DASH_EQ] = ACTIONS(316),
    [anon_sym_STAR_EQ] = ACTIONS(316),
    [anon_sym_SLASH_EQ] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_LT_GT] = ACTIONS(316),
    [aux_sym_numeric_parameter_token1] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(316),
    [sym__hex_literal] = ACTIONS(316),
    [aux_sym__num_literal_token1] = ACTIONS(318),
    [aux_sym__exp_literal_token1] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [sym__class_constructor] = ACTIONS(316),
    [sym__class_extends] = ACTIONS(316),
    [sym__var] = ACTIONS(316),
    [sym__property] = ACTIONS(316),
    [sym__alias] = ACTIONS(316),
    [sym__declare] = ACTIONS(316),
    [sym__function] = ACTIONS(316),
    [sym__return] = ACTIONS(316),
    [sym__break] = ACTIONS(316),
    [sym__continue] = ACTIONS(316),
    [sym__this] = ACTIONS(316),
    [sym__form] = ACTIONS(316),
    [sym__super] = ACTIONS(316),
    [sym__class_store_4d] = ACTIONS(316),
    [sym__class_store_ds] = ACTIONS(316),
    [sym__class_store_cs] = ACTIONS(316),
    [sym__system_variable_ok] = ACTIONS(316),
    [sym__system_variable_document] = ACTIONS(316),
    [sym__system_variable_flddelimit] = ACTIONS(316),
    [sym__system_variable_recdelimit] = ACTIONS(316),
    [sym__system_variable_error] = ACTIONS(318),
    [sym__system_variable_error_method] = ACTIONS(316),
    [sym__system_variable_error_line] = ACTIONS(316),
    [sym__system_variable_error_formula] = ACTIONS(316),
    [sym__system_variable_mousedown] = ACTIONS(316),
    [sym__system_variable_mousex] = ACTIONS(316),
    [sym__system_variable_mousey] = ACTIONS(316),
    [sym__system_variable_keycode] = ACTIONS(316),
    [sym__system_variable_modifiers] = ACTIONS(316),
    [sym__system_variable_mouseproc] = ACTIONS(316),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_STAR] = ACTIONS(316),
    [sym__if_e] = ACTIONS(316),
    [sym__if_f] = ACTIONS(318),
    [sym__else_e] = ACTIONS(316),
    [sym__else_f] = ACTIONS(316),
    [sym__end_if_e] = ACTIONS(316),
    [sym__end_if_f] = ACTIONS(316),
    [sym__begin_sql_e] = ACTIONS(316),
    [sym__begin_sql_f] = ACTIONS(316),
    [sym__end_sql_e] = ACTIONS(316),
    [sym__end_sql_f] = ACTIONS(316),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym__local] = ACTIONS(322),
    [sym__exposed] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(322),
    [anon_sym_PIPE_PIPE] = ACTIONS(322),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_TILDE_PIPE] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(322),
    [anon_sym_GT_GT] = ACTIONS(322),
    [anon_sym_QMARK_QMARK] = ACTIONS(322),
    [anon_sym_QMARK_PLUS] = ACTIONS(322),
    [anon_sym_QMARK_DASH] = ACTIONS(322),
    [anon_sym_PLUS_EQ] = ACTIONS(322),
    [anon_sym_DASH_EQ] = ACTIONS(322),
    [anon_sym_STAR_EQ] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_LT_GT] = ACTIONS(322),
    [aux_sym_numeric_parameter_token1] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_BANG] = ACTIONS(324),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(322),
    [sym__hex_literal] = ACTIONS(322),
    [aux_sym__num_literal_token1] = ACTIONS(324),
    [aux_sym__exp_literal_token1] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [sym__class_constructor] = ACTIONS(322),
    [sym__class_extends] = ACTIONS(322),
    [sym__var] = ACTIONS(322),
    [sym__property] = ACTIONS(322),
    [sym__alias] = ACTIONS(322),
    [sym__declare] = ACTIONS(322),
    [sym__function] = ACTIONS(322),
    [sym__return] = ACTIONS(322),
    [sym__break] = ACTIONS(322),
    [sym__continue] = ACTIONS(322),
    [sym__this] = ACTIONS(322),
    [sym__form] = ACTIONS(322),
    [sym__super] = ACTIONS(322),
    [sym__class_store_4d] = ACTIONS(322),
    [sym__class_store_ds] = ACTIONS(322),
    [sym__class_store_cs] = ACTIONS(322),
    [sym__system_variable_ok] = ACTIONS(322),
    [sym__system_variable_document] = ACTIONS(322),
    [sym__system_variable_flddelimit] = ACTIONS(322),
    [sym__system_variable_recdelimit] = ACTIONS(322),
    [sym__system_variable_error] = ACTIONS(324),
    [sym__system_variable_error_method] = ACTIONS(322),
    [sym__system_variable_error_line] = ACTIONS(322),
    [sym__system_variable_error_formula] = ACTIONS(322),
    [sym__system_variable_mousedown] = ACTIONS(322),
    [sym__system_variable_mousex] = ACTIONS(322),
    [sym__system_variable_mousey] = ACTIONS(322),
    [sym__system_variable_keycode] = ACTIONS(322),
    [sym__system_variable_modifiers] = ACTIONS(322),
    [sym__system_variable_mouseproc] = ACTIONS(322),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_STAR] = ACTIONS(322),
    [sym__if_e] = ACTIONS(322),
    [sym__if_f] = ACTIONS(324),
    [sym__else_e] = ACTIONS(322),
    [sym__else_f] = ACTIONS(322),
    [sym__end_if_e] = ACTIONS(322),
    [sym__end_if_f] = ACTIONS(322),
    [sym__begin_sql_e] = ACTIONS(322),
    [sym__begin_sql_f] = ACTIONS(322),
    [sym__end_sql_e] = ACTIONS(322),
    [sym__end_sql_f] = ACTIONS(322),
  },
  [23] = {
    [sym__binary_operator] = STATE(140),
    [aux_sym__condition_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym__local] = ACTIONS(326),
    [sym__exposed] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_TILDE_PIPE] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_GT_GT] = ACTIONS(330),
    [anon_sym_QMARK_QMARK] = ACTIONS(330),
    [anon_sym_QMARK_PLUS] = ACTIONS(330),
    [anon_sym_QMARK_DASH] = ACTIONS(330),
    [anon_sym_PLUS_EQ] = ACTIONS(330),
    [anon_sym_DASH_EQ] = ACTIONS(330),
    [anon_sym_STAR_EQ] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [anon_sym_LT_GT] = ACTIONS(326),
    [aux_sym_numeric_parameter_token1] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_BANG] = ACTIONS(332),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(326),
    [sym__hex_literal] = ACTIONS(326),
    [aux_sym__num_literal_token1] = ACTIONS(332),
    [aux_sym__exp_literal_token1] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [sym__class_constructor] = ACTIONS(326),
    [sym__class_extends] = ACTIONS(326),
    [sym__var] = ACTIONS(326),
    [sym__property] = ACTIONS(326),
    [sym__alias] = ACTIONS(326),
    [sym__declare] = ACTIONS(326),
    [sym__function] = ACTIONS(326),
    [sym__return] = ACTIONS(326),
    [sym__break] = ACTIONS(326),
    [sym__continue] = ACTIONS(326),
    [sym__this] = ACTIONS(326),
    [sym__form] = ACTIONS(326),
    [sym__super] = ACTIONS(326),
    [sym__class_store_4d] = ACTIONS(326),
    [sym__class_store_ds] = ACTIONS(326),
    [sym__class_store_cs] = ACTIONS(326),
    [sym__system_variable_ok] = ACTIONS(326),
    [sym__system_variable_document] = ACTIONS(326),
    [sym__system_variable_flddelimit] = ACTIONS(326),
    [sym__system_variable_recdelimit] = ACTIONS(326),
    [sym__system_variable_error] = ACTIONS(332),
    [sym__system_variable_error_method] = ACTIONS(326),
    [sym__system_variable_error_line] = ACTIONS(326),
    [sym__system_variable_error_formula] = ACTIONS(326),
    [sym__system_variable_mousedown] = ACTIONS(326),
    [sym__system_variable_mousex] = ACTIONS(326),
    [sym__system_variable_mousey] = ACTIONS(326),
    [sym__system_variable_keycode] = ACTIONS(326),
    [sym__system_variable_modifiers] = ACTIONS(326),
    [sym__system_variable_mouseproc] = ACTIONS(326),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(326),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_SLASH_STAR] = ACTIONS(326),
    [sym__if_e] = ACTIONS(326),
    [sym__if_f] = ACTIONS(332),
    [sym__else_e] = ACTIONS(326),
    [sym__else_f] = ACTIONS(326),
    [sym__end_if_e] = ACTIONS(326),
    [sym__end_if_f] = ACTIONS(326),
    [sym__begin_sql_e] = ACTIONS(326),
    [sym__begin_sql_f] = ACTIONS(326),
    [sym__end_sql_e] = ACTIONS(326),
    [sym__end_sql_f] = ACTIONS(326),
  },
  [24] = {
    [sym__binary_operator] = STATE(140),
    [aux_sym__condition_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym__local] = ACTIONS(334),
    [sym__exposed] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_TILDE_PIPE] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_GT_GT] = ACTIONS(330),
    [anon_sym_QMARK_QMARK] = ACTIONS(330),
    [anon_sym_QMARK_PLUS] = ACTIONS(330),
    [anon_sym_QMARK_DASH] = ACTIONS(330),
    [anon_sym_PLUS_EQ] = ACTIONS(330),
    [anon_sym_DASH_EQ] = ACTIONS(330),
    [anon_sym_STAR_EQ] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [anon_sym_LT_GT] = ACTIONS(334),
    [aux_sym_numeric_parameter_token1] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(336),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(334),
    [sym__hex_literal] = ACTIONS(334),
    [aux_sym__num_literal_token1] = ACTIONS(336),
    [aux_sym__exp_literal_token1] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym__class_constructor] = ACTIONS(334),
    [sym__class_extends] = ACTIONS(334),
    [sym__var] = ACTIONS(334),
    [sym__property] = ACTIONS(334),
    [sym__alias] = ACTIONS(334),
    [sym__declare] = ACTIONS(334),
    [sym__function] = ACTIONS(334),
    [sym__return] = ACTIONS(334),
    [sym__break] = ACTIONS(334),
    [sym__continue] = ACTIONS(334),
    [sym__this] = ACTIONS(334),
    [sym__form] = ACTIONS(334),
    [sym__super] = ACTIONS(334),
    [sym__class_store_4d] = ACTIONS(334),
    [sym__class_store_ds] = ACTIONS(334),
    [sym__class_store_cs] = ACTIONS(334),
    [sym__system_variable_ok] = ACTIONS(334),
    [sym__system_variable_document] = ACTIONS(334),
    [sym__system_variable_flddelimit] = ACTIONS(334),
    [sym__system_variable_recdelimit] = ACTIONS(334),
    [sym__system_variable_error] = ACTIONS(336),
    [sym__system_variable_error_method] = ACTIONS(334),
    [sym__system_variable_error_line] = ACTIONS(334),
    [sym__system_variable_error_formula] = ACTIONS(334),
    [sym__system_variable_mousedown] = ACTIONS(334),
    [sym__system_variable_mousex] = ACTIONS(334),
    [sym__system_variable_mousey] = ACTIONS(334),
    [sym__system_variable_keycode] = ACTIONS(334),
    [sym__system_variable_modifiers] = ACTIONS(334),
    [sym__system_variable_mouseproc] = ACTIONS(334),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(334),
    [anon_sym_SLASH_SLASH] = ACTIONS(334),
    [anon_sym_SLASH_STAR] = ACTIONS(334),
    [sym__if_e] = ACTIONS(334),
    [sym__if_f] = ACTIONS(336),
    [sym__else_e] = ACTIONS(334),
    [sym__else_f] = ACTIONS(334),
    [sym__end_if_e] = ACTIONS(334),
    [sym__end_if_f] = ACTIONS(334),
    [sym__begin_sql_e] = ACTIONS(334),
    [sym__begin_sql_f] = ACTIONS(334),
    [sym__end_sql_e] = ACTIONS(334),
    [sym__end_sql_f] = ACTIONS(334),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym__local] = ACTIONS(338),
    [sym__exposed] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym_TILDE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(340),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_GT_GT] = ACTIONS(338),
    [anon_sym_QMARK_QMARK] = ACTIONS(338),
    [anon_sym_QMARK_PLUS] = ACTIONS(338),
    [anon_sym_QMARK_DASH] = ACTIONS(338),
    [anon_sym_PLUS_EQ] = ACTIONS(338),
    [anon_sym_DASH_EQ] = ACTIONS(338),
    [anon_sym_STAR_EQ] = ACTIONS(338),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_LT_GT] = ACTIONS(338),
    [aux_sym_numeric_parameter_token1] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(338),
    [sym__hex_literal] = ACTIONS(338),
    [aux_sym__num_literal_token1] = ACTIONS(340),
    [aux_sym__exp_literal_token1] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [sym__class_constructor] = ACTIONS(338),
    [sym__class_extends] = ACTIONS(338),
    [sym__var] = ACTIONS(338),
    [sym__property] = ACTIONS(338),
    [sym__alias] = ACTIONS(338),
    [sym__declare] = ACTIONS(338),
    [sym__function] = ACTIONS(338),
    [sym__return] = ACTIONS(338),
    [sym__break] = ACTIONS(338),
    [sym__continue] = ACTIONS(338),
    [sym__this] = ACTIONS(338),
    [sym__form] = ACTIONS(338),
    [sym__super] = ACTIONS(338),
    [sym__class_store_4d] = ACTIONS(338),
    [sym__class_store_ds] = ACTIONS(338),
    [sym__class_store_cs] = ACTIONS(338),
    [sym__system_variable_ok] = ACTIONS(338),
    [sym__system_variable_document] = ACTIONS(338),
    [sym__system_variable_flddelimit] = ACTIONS(338),
    [sym__system_variable_recdelimit] = ACTIONS(338),
    [sym__system_variable_error] = ACTIONS(340),
    [sym__system_variable_error_method] = ACTIONS(338),
    [sym__system_variable_error_line] = ACTIONS(338),
    [sym__system_variable_error_formula] = ACTIONS(338),
    [sym__system_variable_mousedown] = ACTIONS(338),
    [sym__system_variable_mousex] = ACTIONS(338),
    [sym__system_variable_mousey] = ACTIONS(338),
    [sym__system_variable_keycode] = ACTIONS(338),
    [sym__system_variable_modifiers] = ACTIONS(338),
    [sym__system_variable_mouseproc] = ACTIONS(338),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_SLASH_STAR] = ACTIONS(338),
    [sym__if_e] = ACTIONS(338),
    [sym__if_f] = ACTIONS(340),
    [sym__else_e] = ACTIONS(338),
    [sym__else_f] = ACTIONS(338),
    [sym__end_if_e] = ACTIONS(338),
    [sym__end_if_f] = ACTIONS(338),
    [sym__begin_sql_e] = ACTIONS(338),
    [sym__begin_sql_f] = ACTIONS(338),
    [sym__end_sql_e] = ACTIONS(338),
    [sym__end_sql_f] = ACTIONS(338),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym__local] = ACTIONS(342),
    [sym__exposed] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(344),
    [anon_sym_PIPE] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_TILDE_PIPE] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(344),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_POUND] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_GT_GT] = ACTIONS(342),
    [anon_sym_QMARK_QMARK] = ACTIONS(342),
    [anon_sym_QMARK_PLUS] = ACTIONS(342),
    [anon_sym_QMARK_DASH] = ACTIONS(342),
    [anon_sym_PLUS_EQ] = ACTIONS(342),
    [anon_sym_DASH_EQ] = ACTIONS(342),
    [anon_sym_STAR_EQ] = ACTIONS(342),
    [anon_sym_SLASH_EQ] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_LT_GT] = ACTIONS(342),
    [aux_sym_numeric_parameter_token1] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(344),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(342),
    [sym__hex_literal] = ACTIONS(342),
    [aux_sym__num_literal_token1] = ACTIONS(344),
    [aux_sym__exp_literal_token1] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [sym__class_constructor] = ACTIONS(342),
    [sym__class_extends] = ACTIONS(342),
    [sym__var] = ACTIONS(342),
    [sym__property] = ACTIONS(342),
    [sym__alias] = ACTIONS(342),
    [sym__declare] = ACTIONS(342),
    [sym__function] = ACTIONS(342),
    [sym__return] = ACTIONS(342),
    [sym__break] = ACTIONS(342),
    [sym__continue] = ACTIONS(342),
    [sym__this] = ACTIONS(342),
    [sym__form] = ACTIONS(342),
    [sym__super] = ACTIONS(342),
    [sym__class_store_4d] = ACTIONS(342),
    [sym__class_store_ds] = ACTIONS(342),
    [sym__class_store_cs] = ACTIONS(342),
    [sym__system_variable_ok] = ACTIONS(342),
    [sym__system_variable_document] = ACTIONS(342),
    [sym__system_variable_flddelimit] = ACTIONS(342),
    [sym__system_variable_recdelimit] = ACTIONS(342),
    [sym__system_variable_error] = ACTIONS(344),
    [sym__system_variable_error_method] = ACTIONS(342),
    [sym__system_variable_error_line] = ACTIONS(342),
    [sym__system_variable_error_formula] = ACTIONS(342),
    [sym__system_variable_mousedown] = ACTIONS(342),
    [sym__system_variable_mousex] = ACTIONS(342),
    [sym__system_variable_mousey] = ACTIONS(342),
    [sym__system_variable_keycode] = ACTIONS(342),
    [sym__system_variable_modifiers] = ACTIONS(342),
    [sym__system_variable_mouseproc] = ACTIONS(342),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [anon_sym_SLASH_STAR] = ACTIONS(342),
    [sym__if_e] = ACTIONS(342),
    [sym__if_f] = ACTIONS(344),
    [sym__else_e] = ACTIONS(342),
    [sym__else_f] = ACTIONS(342),
    [sym__end_if_e] = ACTIONS(342),
    [sym__end_if_f] = ACTIONS(342),
    [sym__begin_sql_e] = ACTIONS(342),
    [sym__begin_sql_f] = ACTIONS(342),
    [sym__end_sql_e] = ACTIONS(342),
    [sym__end_sql_f] = ACTIONS(342),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym__local] = ACTIONS(346),
    [sym__exposed] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_TILDE_PIPE] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_GT_GT] = ACTIONS(346),
    [anon_sym_QMARK_QMARK] = ACTIONS(346),
    [anon_sym_QMARK_PLUS] = ACTIONS(346),
    [anon_sym_QMARK_DASH] = ACTIONS(346),
    [anon_sym_PLUS_EQ] = ACTIONS(346),
    [anon_sym_DASH_EQ] = ACTIONS(346),
    [anon_sym_STAR_EQ] = ACTIONS(346),
    [anon_sym_SLASH_EQ] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_LT_GT] = ACTIONS(346),
    [aux_sym_numeric_parameter_token1] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(346),
    [sym__hex_literal] = ACTIONS(346),
    [aux_sym__num_literal_token1] = ACTIONS(348),
    [aux_sym__exp_literal_token1] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [sym__class_constructor] = ACTIONS(346),
    [sym__class_extends] = ACTIONS(346),
    [sym__var] = ACTIONS(346),
    [sym__property] = ACTIONS(346),
    [sym__alias] = ACTIONS(346),
    [sym__declare] = ACTIONS(346),
    [sym__function] = ACTIONS(346),
    [sym__return] = ACTIONS(346),
    [sym__break] = ACTIONS(346),
    [sym__continue] = ACTIONS(346),
    [sym__this] = ACTIONS(346),
    [sym__form] = ACTIONS(346),
    [sym__super] = ACTIONS(346),
    [sym__class_store_4d] = ACTIONS(346),
    [sym__class_store_ds] = ACTIONS(346),
    [sym__class_store_cs] = ACTIONS(346),
    [sym__system_variable_ok] = ACTIONS(346),
    [sym__system_variable_document] = ACTIONS(346),
    [sym__system_variable_flddelimit] = ACTIONS(346),
    [sym__system_variable_recdelimit] = ACTIONS(346),
    [sym__system_variable_error] = ACTIONS(348),
    [sym__system_variable_error_method] = ACTIONS(346),
    [sym__system_variable_error_line] = ACTIONS(346),
    [sym__system_variable_error_formula] = ACTIONS(346),
    [sym__system_variable_mousedown] = ACTIONS(346),
    [sym__system_variable_mousex] = ACTIONS(346),
    [sym__system_variable_mousey] = ACTIONS(346),
    [sym__system_variable_keycode] = ACTIONS(346),
    [sym__system_variable_modifiers] = ACTIONS(346),
    [sym__system_variable_mouseproc] = ACTIONS(346),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(346),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_SLASH_STAR] = ACTIONS(346),
    [sym__if_e] = ACTIONS(346),
    [sym__if_f] = ACTIONS(348),
    [sym__else_e] = ACTIONS(346),
    [sym__else_f] = ACTIONS(346),
    [sym__end_if_e] = ACTIONS(346),
    [sym__end_if_f] = ACTIONS(346),
    [sym__begin_sql_e] = ACTIONS(346),
    [sym__begin_sql_f] = ACTIONS(346),
    [sym__end_sql_e] = ACTIONS(346),
    [sym__end_sql_f] = ACTIONS(346),
  },
  [28] = {
    [sym__binary_operator] = STATE(140),
    [aux_sym__condition_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym__local] = ACTIONS(350),
    [sym__exposed] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_AMP_AMP] = ACTIONS(355),
    [anon_sym_PIPE_PIPE] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_CARET] = ACTIONS(355),
    [anon_sym_TILDE_PIPE] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_GT] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [anon_sym_QMARK_QMARK] = ACTIONS(355),
    [anon_sym_QMARK_PLUS] = ACTIONS(355),
    [anon_sym_QMARK_DASH] = ACTIONS(355),
    [anon_sym_PLUS_EQ] = ACTIONS(355),
    [anon_sym_DASH_EQ] = ACTIONS(355),
    [anon_sym_STAR_EQ] = ACTIONS(355),
    [anon_sym_SLASH_EQ] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_LT_GT] = ACTIONS(350),
    [aux_sym_numeric_parameter_token1] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(350),
    [sym__hex_literal] = ACTIONS(350),
    [aux_sym__num_literal_token1] = ACTIONS(358),
    [aux_sym__exp_literal_token1] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym__class_constructor] = ACTIONS(350),
    [sym__class_extends] = ACTIONS(350),
    [sym__var] = ACTIONS(350),
    [sym__property] = ACTIONS(350),
    [sym__alias] = ACTIONS(350),
    [sym__declare] = ACTIONS(350),
    [sym__function] = ACTIONS(350),
    [sym__return] = ACTIONS(350),
    [sym__break] = ACTIONS(350),
    [sym__continue] = ACTIONS(350),
    [sym__this] = ACTIONS(350),
    [sym__form] = ACTIONS(350),
    [sym__super] = ACTIONS(350),
    [sym__class_store_4d] = ACTIONS(350),
    [sym__class_store_ds] = ACTIONS(350),
    [sym__class_store_cs] = ACTIONS(350),
    [sym__system_variable_ok] = ACTIONS(350),
    [sym__system_variable_document] = ACTIONS(350),
    [sym__system_variable_flddelimit] = ACTIONS(350),
    [sym__system_variable_recdelimit] = ACTIONS(350),
    [sym__system_variable_error] = ACTIONS(358),
    [sym__system_variable_error_method] = ACTIONS(350),
    [sym__system_variable_error_line] = ACTIONS(350),
    [sym__system_variable_error_formula] = ACTIONS(350),
    [sym__system_variable_mousedown] = ACTIONS(350),
    [sym__system_variable_mousex] = ACTIONS(350),
    [sym__system_variable_mousey] = ACTIONS(350),
    [sym__system_variable_keycode] = ACTIONS(350),
    [sym__system_variable_modifiers] = ACTIONS(350),
    [sym__system_variable_mouseproc] = ACTIONS(350),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_STAR] = ACTIONS(350),
    [sym__if_e] = ACTIONS(350),
    [sym__if_f] = ACTIONS(358),
    [sym__else_e] = ACTIONS(350),
    [sym__else_f] = ACTIONS(350),
    [sym__end_if_e] = ACTIONS(350),
    [sym__end_if_f] = ACTIONS(350),
    [sym__begin_sql_e] = ACTIONS(350),
    [sym__begin_sql_f] = ACTIONS(350),
    [sym__end_sql_e] = ACTIONS(350),
    [sym__end_sql_f] = ACTIONS(350),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym__local] = ACTIONS(360),
    [sym__exposed] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_AMP_AMP] = ACTIONS(360),
    [anon_sym_PIPE_PIPE] = ACTIONS(360),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(360),
    [anon_sym_TILDE_PIPE] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(360),
    [anon_sym_GT_GT] = ACTIONS(360),
    [anon_sym_QMARK_QMARK] = ACTIONS(360),
    [anon_sym_QMARK_PLUS] = ACTIONS(360),
    [anon_sym_QMARK_DASH] = ACTIONS(360),
    [anon_sym_PLUS_EQ] = ACTIONS(360),
    [anon_sym_DASH_EQ] = ACTIONS(360),
    [anon_sym_STAR_EQ] = ACTIONS(360),
    [anon_sym_SLASH_EQ] = ACTIONS(360),
    [anon_sym_DOLLAR] = ACTIONS(360),
    [anon_sym_LT_GT] = ACTIONS(360),
    [aux_sym_numeric_parameter_token1] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(360),
    [sym__hex_literal] = ACTIONS(360),
    [aux_sym__num_literal_token1] = ACTIONS(362),
    [aux_sym__exp_literal_token1] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [sym__class_constructor] = ACTIONS(360),
    [sym__class_extends] = ACTIONS(360),
    [sym__var] = ACTIONS(360),
    [sym__property] = ACTIONS(360),
    [sym__alias] = ACTIONS(360),
    [sym__declare] = ACTIONS(360),
    [sym__function] = ACTIONS(360),
    [sym__return] = ACTIONS(360),
    [sym__break] = ACTIONS(360),
    [sym__continue] = ACTIONS(360),
    [sym__this] = ACTIONS(360),
    [sym__form] = ACTIONS(360),
    [sym__super] = ACTIONS(360),
    [sym__class_store_4d] = ACTIONS(360),
    [sym__class_store_ds] = ACTIONS(360),
    [sym__class_store_cs] = ACTIONS(360),
    [sym__system_variable_ok] = ACTIONS(360),
    [sym__system_variable_document] = ACTIONS(360),
    [sym__system_variable_flddelimit] = ACTIONS(360),
    [sym__system_variable_recdelimit] = ACTIONS(360),
    [sym__system_variable_error] = ACTIONS(362),
    [sym__system_variable_error_method] = ACTIONS(360),
    [sym__system_variable_error_line] = ACTIONS(360),
    [sym__system_variable_error_formula] = ACTIONS(360),
    [sym__system_variable_mousedown] = ACTIONS(360),
    [sym__system_variable_mousex] = ACTIONS(360),
    [sym__system_variable_mousey] = ACTIONS(360),
    [sym__system_variable_keycode] = ACTIONS(360),
    [sym__system_variable_modifiers] = ACTIONS(360),
    [sym__system_variable_mouseproc] = ACTIONS(360),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(360),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_SLASH_STAR] = ACTIONS(360),
    [sym__if_e] = ACTIONS(360),
    [sym__if_f] = ACTIONS(362),
    [sym__else_e] = ACTIONS(360),
    [sym__else_f] = ACTIONS(360),
    [sym__end_if_e] = ACTIONS(360),
    [sym__end_if_f] = ACTIONS(360),
    [sym__begin_sql_e] = ACTIONS(360),
    [sym__begin_sql_f] = ACTIONS(360),
    [sym__end_sql_e] = ACTIONS(360),
    [sym__end_sql_f] = ACTIONS(360),
  },
  [30] = {
    [sym__functional_expression] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym__local] = ACTIONS(364),
    [sym__exposed] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_TILDE_PIPE] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_GT_GT] = ACTIONS(364),
    [anon_sym_QMARK_QMARK] = ACTIONS(364),
    [anon_sym_QMARK_PLUS] = ACTIONS(364),
    [anon_sym_QMARK_DASH] = ACTIONS(364),
    [anon_sym_PLUS_EQ] = ACTIONS(364),
    [anon_sym_DASH_EQ] = ACTIONS(364),
    [anon_sym_STAR_EQ] = ACTIONS(364),
    [anon_sym_SLASH_EQ] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(364),
    [anon_sym_LT_GT] = ACTIONS(364),
    [aux_sym_numeric_parameter_token1] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(364),
    [sym__hex_literal] = ACTIONS(364),
    [aux_sym__num_literal_token1] = ACTIONS(368),
    [aux_sym__exp_literal_token1] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [sym__class_constructor] = ACTIONS(364),
    [sym__class_extends] = ACTIONS(364),
    [sym__var] = ACTIONS(364),
    [sym__property] = ACTIONS(364),
    [sym__alias] = ACTIONS(364),
    [sym__declare] = ACTIONS(364),
    [sym__function] = ACTIONS(364),
    [sym__return] = ACTIONS(364),
    [sym__break] = ACTIONS(364),
    [sym__continue] = ACTIONS(364),
    [sym__this] = ACTIONS(364),
    [sym__form] = ACTIONS(364),
    [sym__super] = ACTIONS(364),
    [sym__class_store_4d] = ACTIONS(364),
    [sym__class_store_ds] = ACTIONS(364),
    [sym__class_store_cs] = ACTIONS(364),
    [sym__system_variable_ok] = ACTIONS(364),
    [sym__system_variable_document] = ACTIONS(364),
    [sym__system_variable_flddelimit] = ACTIONS(364),
    [sym__system_variable_recdelimit] = ACTIONS(364),
    [sym__system_variable_error] = ACTIONS(368),
    [sym__system_variable_error_method] = ACTIONS(364),
    [sym__system_variable_error_line] = ACTIONS(364),
    [sym__system_variable_error_formula] = ACTIONS(364),
    [sym__system_variable_mousedown] = ACTIONS(364),
    [sym__system_variable_mousex] = ACTIONS(364),
    [sym__system_variable_mousey] = ACTIONS(364),
    [sym__system_variable_keycode] = ACTIONS(364),
    [sym__system_variable_modifiers] = ACTIONS(364),
    [sym__system_variable_mouseproc] = ACTIONS(364),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(364),
    [anon_sym_SLASH_SLASH] = ACTIONS(364),
    [anon_sym_SLASH_STAR] = ACTIONS(364),
    [sym__if_e] = ACTIONS(364),
    [sym__if_f] = ACTIONS(368),
    [sym__else_e] = ACTIONS(364),
    [sym__else_f] = ACTIONS(364),
    [sym__end_if_e] = ACTIONS(364),
    [sym__end_if_f] = ACTIONS(364),
    [sym__begin_sql_e] = ACTIONS(364),
    [sym__begin_sql_f] = ACTIONS(364),
    [sym__end_sql_e] = ACTIONS(364),
    [sym__end_sql_f] = ACTIONS(364),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym__local] = ACTIONS(370),
    [sym__exposed] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(370),
    [anon_sym_PIPE_PIPE] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(370),
    [anon_sym_TILDE_PIPE] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK_QMARK] = ACTIONS(370),
    [anon_sym_QMARK_PLUS] = ACTIONS(370),
    [anon_sym_QMARK_DASH] = ACTIONS(370),
    [anon_sym_PLUS_EQ] = ACTIONS(370),
    [anon_sym_DASH_EQ] = ACTIONS(370),
    [anon_sym_STAR_EQ] = ACTIONS(370),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_LT_GT] = ACTIONS(370),
    [aux_sym_numeric_parameter_token1] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(370),
    [sym__hex_literal] = ACTIONS(370),
    [aux_sym__num_literal_token1] = ACTIONS(372),
    [aux_sym__exp_literal_token1] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [sym__class_constructor] = ACTIONS(370),
    [sym__class_extends] = ACTIONS(370),
    [sym__var] = ACTIONS(370),
    [sym__property] = ACTIONS(370),
    [sym__alias] = ACTIONS(370),
    [sym__declare] = ACTIONS(370),
    [sym__function] = ACTIONS(370),
    [sym__return] = ACTIONS(370),
    [sym__break] = ACTIONS(370),
    [sym__continue] = ACTIONS(370),
    [sym__this] = ACTIONS(370),
    [sym__form] = ACTIONS(370),
    [sym__super] = ACTIONS(370),
    [sym__class_store_4d] = ACTIONS(370),
    [sym__class_store_ds] = ACTIONS(370),
    [sym__class_store_cs] = ACTIONS(370),
    [sym__system_variable_ok] = ACTIONS(370),
    [sym__system_variable_document] = ACTIONS(370),
    [sym__system_variable_flddelimit] = ACTIONS(370),
    [sym__system_variable_recdelimit] = ACTIONS(370),
    [sym__system_variable_error] = ACTIONS(372),
    [sym__system_variable_error_method] = ACTIONS(370),
    [sym__system_variable_error_line] = ACTIONS(370),
    [sym__system_variable_error_formula] = ACTIONS(370),
    [sym__system_variable_mousedown] = ACTIONS(370),
    [sym__system_variable_mousex] = ACTIONS(370),
    [sym__system_variable_mousey] = ACTIONS(370),
    [sym__system_variable_keycode] = ACTIONS(370),
    [sym__system_variable_modifiers] = ACTIONS(370),
    [sym__system_variable_mouseproc] = ACTIONS(370),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(370),
    [anon_sym_SLASH_SLASH] = ACTIONS(370),
    [anon_sym_SLASH_STAR] = ACTIONS(370),
    [sym__if_e] = ACTIONS(370),
    [sym__if_f] = ACTIONS(372),
    [sym__else_e] = ACTIONS(370),
    [sym__else_f] = ACTIONS(370),
    [sym__end_if_e] = ACTIONS(370),
    [sym__end_if_f] = ACTIONS(370),
    [sym__begin_sql_e] = ACTIONS(370),
    [sym__begin_sql_f] = ACTIONS(370),
    [sym__end_sql_e] = ACTIONS(370),
    [sym__end_sql_f] = ACTIONS(370),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym__local] = ACTIONS(374),
    [sym__exposed] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(376),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_AMP] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_CARET] = ACTIONS(374),
    [anon_sym_TILDE_PIPE] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym_POUND] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(374),
    [anon_sym_GT_GT] = ACTIONS(374),
    [anon_sym_QMARK_QMARK] = ACTIONS(374),
    [anon_sym_QMARK_PLUS] = ACTIONS(374),
    [anon_sym_QMARK_DASH] = ACTIONS(374),
    [anon_sym_PLUS_EQ] = ACTIONS(374),
    [anon_sym_DASH_EQ] = ACTIONS(374),
    [anon_sym_STAR_EQ] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(374),
    [anon_sym_DOLLAR] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_LT_GT] = ACTIONS(374),
    [aux_sym_numeric_parameter_token1] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(374),
    [anon_sym_QMARK] = ACTIONS(376),
    [anon_sym_BANG] = ACTIONS(376),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(374),
    [sym__hex_literal] = ACTIONS(374),
    [aux_sym__num_literal_token1] = ACTIONS(376),
    [aux_sym__exp_literal_token1] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [sym__class_constructor] = ACTIONS(374),
    [sym__class_extends] = ACTIONS(374),
    [sym__var] = ACTIONS(374),
    [sym__property] = ACTIONS(374),
    [sym__alias] = ACTIONS(374),
    [sym__declare] = ACTIONS(374),
    [sym__function] = ACTIONS(374),
    [sym__return] = ACTIONS(374),
    [sym__break] = ACTIONS(374),
    [sym__continue] = ACTIONS(374),
    [sym__this] = ACTIONS(374),
    [sym__form] = ACTIONS(374),
    [sym__super] = ACTIONS(374),
    [sym__class_store_4d] = ACTIONS(374),
    [sym__class_store_ds] = ACTIONS(374),
    [sym__class_store_cs] = ACTIONS(374),
    [sym__system_variable_ok] = ACTIONS(374),
    [sym__system_variable_document] = ACTIONS(374),
    [sym__system_variable_flddelimit] = ACTIONS(374),
    [sym__system_variable_recdelimit] = ACTIONS(374),
    [sym__system_variable_error] = ACTIONS(376),
    [sym__system_variable_error_method] = ACTIONS(374),
    [sym__system_variable_error_line] = ACTIONS(374),
    [sym__system_variable_error_formula] = ACTIONS(374),
    [sym__system_variable_mousedown] = ACTIONS(374),
    [sym__system_variable_mousex] = ACTIONS(374),
    [sym__system_variable_mousey] = ACTIONS(374),
    [sym__system_variable_keycode] = ACTIONS(374),
    [sym__system_variable_modifiers] = ACTIONS(374),
    [sym__system_variable_mouseproc] = ACTIONS(374),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(374),
    [anon_sym_SLASH_STAR] = ACTIONS(374),
    [sym__if_e] = ACTIONS(374),
    [sym__if_f] = ACTIONS(376),
    [sym__else_e] = ACTIONS(374),
    [sym__else_f] = ACTIONS(374),
    [sym__end_if_e] = ACTIONS(374),
    [sym__end_if_f] = ACTIONS(374),
    [sym__begin_sql_e] = ACTIONS(374),
    [sym__begin_sql_f] = ACTIONS(374),
    [sym__end_sql_e] = ACTIONS(374),
    [sym__end_sql_f] = ACTIONS(374),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym__local] = ACTIONS(378),
    [sym__exposed] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(378),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_AMP] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(380),
    [anon_sym_CARET] = ACTIONS(378),
    [anon_sym_TILDE_PIPE] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_POUND] = ACTIONS(380),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_GT_GT] = ACTIONS(378),
    [anon_sym_QMARK_QMARK] = ACTIONS(378),
    [anon_sym_QMARK_PLUS] = ACTIONS(378),
    [anon_sym_QMARK_DASH] = ACTIONS(378),
    [anon_sym_PLUS_EQ] = ACTIONS(378),
    [anon_sym_DASH_EQ] = ACTIONS(378),
    [anon_sym_STAR_EQ] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_LT_GT] = ACTIONS(378),
    [aux_sym_numeric_parameter_token1] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(378),
    [sym__hex_literal] = ACTIONS(378),
    [aux_sym__num_literal_token1] = ACTIONS(380),
    [aux_sym__exp_literal_token1] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [sym__class_constructor] = ACTIONS(378),
    [sym__class_extends] = ACTIONS(378),
    [sym__var] = ACTIONS(378),
    [sym__property] = ACTIONS(378),
    [sym__alias] = ACTIONS(378),
    [sym__declare] = ACTIONS(378),
    [sym__function] = ACTIONS(378),
    [sym__return] = ACTIONS(378),
    [sym__break] = ACTIONS(378),
    [sym__continue] = ACTIONS(378),
    [sym__this] = ACTIONS(378),
    [sym__form] = ACTIONS(378),
    [sym__super] = ACTIONS(378),
    [sym__class_store_4d] = ACTIONS(378),
    [sym__class_store_ds] = ACTIONS(378),
    [sym__class_store_cs] = ACTIONS(378),
    [sym__system_variable_ok] = ACTIONS(378),
    [sym__system_variable_document] = ACTIONS(378),
    [sym__system_variable_flddelimit] = ACTIONS(378),
    [sym__system_variable_recdelimit] = ACTIONS(378),
    [sym__system_variable_error] = ACTIONS(380),
    [sym__system_variable_error_method] = ACTIONS(378),
    [sym__system_variable_error_line] = ACTIONS(378),
    [sym__system_variable_error_formula] = ACTIONS(378),
    [sym__system_variable_mousedown] = ACTIONS(378),
    [sym__system_variable_mousex] = ACTIONS(378),
    [sym__system_variable_mousey] = ACTIONS(378),
    [sym__system_variable_keycode] = ACTIONS(378),
    [sym__system_variable_modifiers] = ACTIONS(378),
    [sym__system_variable_mouseproc] = ACTIONS(378),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [anon_sym_SLASH_STAR] = ACTIONS(378),
    [sym__if_e] = ACTIONS(378),
    [sym__if_f] = ACTIONS(380),
    [sym__else_e] = ACTIONS(378),
    [sym__else_f] = ACTIONS(378),
    [sym__end_if_e] = ACTIONS(378),
    [sym__end_if_f] = ACTIONS(378),
    [sym__begin_sql_e] = ACTIONS(378),
    [sym__begin_sql_f] = ACTIONS(378),
    [sym__end_sql_e] = ACTIONS(378),
    [sym__end_sql_f] = ACTIONS(378),
  },
  [34] = {
    [sym__functional_expression] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym__local] = ACTIONS(384),
    [sym__exposed] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_AMP_AMP] = ACTIONS(384),
    [anon_sym_PIPE_PIPE] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_TILDE_PIPE] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(384),
    [anon_sym_GT_GT] = ACTIONS(384),
    [anon_sym_QMARK_QMARK] = ACTIONS(384),
    [anon_sym_QMARK_PLUS] = ACTIONS(384),
    [anon_sym_QMARK_DASH] = ACTIONS(384),
    [anon_sym_PLUS_EQ] = ACTIONS(384),
    [anon_sym_DASH_EQ] = ACTIONS(384),
    [anon_sym_STAR_EQ] = ACTIONS(384),
    [anon_sym_SLASH_EQ] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_LT_GT] = ACTIONS(384),
    [aux_sym_numeric_parameter_token1] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(384),
    [sym__hex_literal] = ACTIONS(384),
    [aux_sym__num_literal_token1] = ACTIONS(386),
    [aux_sym__exp_literal_token1] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [sym__class_constructor] = ACTIONS(384),
    [sym__class_extends] = ACTIONS(384),
    [sym__var] = ACTIONS(384),
    [sym__property] = ACTIONS(384),
    [sym__alias] = ACTIONS(384),
    [sym__declare] = ACTIONS(384),
    [sym__function] = ACTIONS(384),
    [sym__return] = ACTIONS(384),
    [sym__break] = ACTIONS(384),
    [sym__continue] = ACTIONS(384),
    [sym__this] = ACTIONS(384),
    [sym__form] = ACTIONS(384),
    [sym__super] = ACTIONS(384),
    [sym__class_store_4d] = ACTIONS(384),
    [sym__class_store_ds] = ACTIONS(384),
    [sym__class_store_cs] = ACTIONS(384),
    [sym__system_variable_ok] = ACTIONS(384),
    [sym__system_variable_document] = ACTIONS(384),
    [sym__system_variable_flddelimit] = ACTIONS(384),
    [sym__system_variable_recdelimit] = ACTIONS(384),
    [sym__system_variable_error] = ACTIONS(386),
    [sym__system_variable_error_method] = ACTIONS(384),
    [sym__system_variable_error_line] = ACTIONS(384),
    [sym__system_variable_error_formula] = ACTIONS(384),
    [sym__system_variable_mousedown] = ACTIONS(384),
    [sym__system_variable_mousex] = ACTIONS(384),
    [sym__system_variable_mousey] = ACTIONS(384),
    [sym__system_variable_keycode] = ACTIONS(384),
    [sym__system_variable_modifiers] = ACTIONS(384),
    [sym__system_variable_mouseproc] = ACTIONS(384),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(384),
    [anon_sym_SLASH_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_STAR] = ACTIONS(384),
    [sym__if_e] = ACTIONS(384),
    [sym__if_f] = ACTIONS(386),
    [sym__else_e] = ACTIONS(384),
    [sym__else_f] = ACTIONS(384),
    [sym__end_if_e] = ACTIONS(384),
    [sym__end_if_f] = ACTIONS(384),
    [sym__begin_sql_e] = ACTIONS(384),
    [sym__begin_sql_f] = ACTIONS(384),
    [sym__end_sql_e] = ACTIONS(384),
    [sym__end_sql_f] = ACTIONS(384),
  },
  [35] = {
    [sym__binary_operator] = STATE(142),
    [aux_sym__condition_repeat1] = STATE(170),
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym__local] = ACTIONS(388),
    [sym__exposed] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_STAR] = ACTIONS(390),
    [anon_sym_SLASH] = ACTIONS(390),
    [anon_sym_AMP_AMP] = ACTIONS(392),
    [anon_sym_PIPE_PIPE] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_CARET] = ACTIONS(392),
    [anon_sym_TILDE_PIPE] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_LT_LT] = ACTIONS(392),
    [anon_sym_GT_GT] = ACTIONS(392),
    [anon_sym_QMARK_QMARK] = ACTIONS(392),
    [anon_sym_QMARK_PLUS] = ACTIONS(392),
    [anon_sym_QMARK_DASH] = ACTIONS(392),
    [anon_sym_PLUS_EQ] = ACTIONS(392),
    [anon_sym_DASH_EQ] = ACTIONS(392),
    [anon_sym_STAR_EQ] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [anon_sym_LT_GT] = ACTIONS(388),
    [aux_sym_numeric_parameter_token1] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_BANG] = ACTIONS(394),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(388),
    [sym__hex_literal] = ACTIONS(388),
    [aux_sym__num_literal_token1] = ACTIONS(394),
    [aux_sym__exp_literal_token1] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [sym__class_constructor] = ACTIONS(388),
    [sym__class_extends] = ACTIONS(388),
    [sym__var] = ACTIONS(388),
    [sym__property] = ACTIONS(388),
    [sym__alias] = ACTIONS(388),
    [sym__declare] = ACTIONS(388),
    [sym__function] = ACTIONS(388),
    [sym__return] = ACTIONS(388),
    [sym__break] = ACTIONS(388),
    [sym__continue] = ACTIONS(388),
    [sym__this] = ACTIONS(388),
    [sym__form] = ACTIONS(388),
    [sym__super] = ACTIONS(388),
    [sym__class_store_4d] = ACTIONS(388),
    [sym__class_store_ds] = ACTIONS(388),
    [sym__class_store_cs] = ACTIONS(388),
    [sym__system_variable_ok] = ACTIONS(388),
    [sym__system_variable_document] = ACTIONS(388),
    [sym__system_variable_flddelimit] = ACTIONS(388),
    [sym__system_variable_recdelimit] = ACTIONS(388),
    [sym__system_variable_error] = ACTIONS(394),
    [sym__system_variable_error_method] = ACTIONS(388),
    [sym__system_variable_error_line] = ACTIONS(388),
    [sym__system_variable_error_formula] = ACTIONS(388),
    [sym__system_variable_mousedown] = ACTIONS(388),
    [sym__system_variable_mousex] = ACTIONS(388),
    [sym__system_variable_mousey] = ACTIONS(388),
    [sym__system_variable_keycode] = ACTIONS(388),
    [sym__system_variable_modifiers] = ACTIONS(388),
    [sym__system_variable_mouseproc] = ACTIONS(388),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(388),
    [anon_sym_SLASH_SLASH] = ACTIONS(388),
    [anon_sym_SLASH_STAR] = ACTIONS(388),
    [sym__if_e] = ACTIONS(388),
    [sym__if_f] = ACTIONS(394),
    [sym__else_e] = ACTIONS(388),
    [sym__else_f] = ACTIONS(388),
    [sym__end_if_e] = ACTIONS(388),
    [sym__end_if_f] = ACTIONS(388),
    [sym__begin_sql_e] = ACTIONS(388),
    [sym__begin_sql_f] = ACTIONS(388),
    [sym__end_sql_e] = ACTIONS(388),
    [sym__end_sql_f] = ACTIONS(388),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym__local] = ACTIONS(396),
    [sym__exposed] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_AMP_AMP] = ACTIONS(396),
    [anon_sym_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(396),
    [anon_sym_TILDE_PIPE] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_LT_LT] = ACTIONS(396),
    [anon_sym_GT_GT] = ACTIONS(396),
    [anon_sym_QMARK_QMARK] = ACTIONS(396),
    [anon_sym_QMARK_PLUS] = ACTIONS(396),
    [anon_sym_QMARK_DASH] = ACTIONS(396),
    [anon_sym_PLUS_EQ] = ACTIONS(396),
    [anon_sym_DASH_EQ] = ACTIONS(396),
    [anon_sym_STAR_EQ] = ACTIONS(396),
    [anon_sym_SLASH_EQ] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_LT_GT] = ACTIONS(396),
    [aux_sym_numeric_parameter_token1] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(396),
    [sym__hex_literal] = ACTIONS(396),
    [aux_sym__num_literal_token1] = ACTIONS(398),
    [aux_sym__exp_literal_token1] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [sym__class_constructor] = ACTIONS(396),
    [sym__class_extends] = ACTIONS(396),
    [sym__var] = ACTIONS(396),
    [sym__property] = ACTIONS(396),
    [sym__alias] = ACTIONS(396),
    [sym__declare] = ACTIONS(396),
    [sym__function] = ACTIONS(396),
    [sym__return] = ACTIONS(396),
    [sym__break] = ACTIONS(396),
    [sym__continue] = ACTIONS(396),
    [sym__this] = ACTIONS(396),
    [sym__form] = ACTIONS(396),
    [sym__super] = ACTIONS(396),
    [sym__class_store_4d] = ACTIONS(396),
    [sym__class_store_ds] = ACTIONS(396),
    [sym__class_store_cs] = ACTIONS(396),
    [sym__system_variable_ok] = ACTIONS(396),
    [sym__system_variable_document] = ACTIONS(396),
    [sym__system_variable_flddelimit] = ACTIONS(396),
    [sym__system_variable_recdelimit] = ACTIONS(396),
    [sym__system_variable_error] = ACTIONS(398),
    [sym__system_variable_error_method] = ACTIONS(396),
    [sym__system_variable_error_line] = ACTIONS(396),
    [sym__system_variable_error_formula] = ACTIONS(396),
    [sym__system_variable_mousedown] = ACTIONS(396),
    [sym__system_variable_mousex] = ACTIONS(396),
    [sym__system_variable_mousey] = ACTIONS(396),
    [sym__system_variable_keycode] = ACTIONS(396),
    [sym__system_variable_modifiers] = ACTIONS(396),
    [sym__system_variable_mouseproc] = ACTIONS(396),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(396),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_SLASH_STAR] = ACTIONS(396),
    [sym__if_e] = ACTIONS(396),
    [sym__if_f] = ACTIONS(398),
    [sym__else_e] = ACTIONS(396),
    [sym__else_f] = ACTIONS(396),
    [sym__end_if_e] = ACTIONS(396),
    [sym__end_if_f] = ACTIONS(396),
    [sym__begin_sql_e] = ACTIONS(396),
    [sym__begin_sql_f] = ACTIONS(396),
    [sym__end_sql_e] = ACTIONS(396),
    [sym__end_sql_f] = ACTIONS(396),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [sym__local] = ACTIONS(400),
    [sym__exposed] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(402),
    [anon_sym_AMP_AMP] = ACTIONS(400),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_CARET] = ACTIONS(400),
    [anon_sym_TILDE_PIPE] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym_POUND] = ACTIONS(402),
    [anon_sym_LT_LT] = ACTIONS(400),
    [anon_sym_GT_GT] = ACTIONS(400),
    [anon_sym_QMARK_QMARK] = ACTIONS(400),
    [anon_sym_QMARK_PLUS] = ACTIONS(400),
    [anon_sym_QMARK_DASH] = ACTIONS(400),
    [anon_sym_PLUS_EQ] = ACTIONS(400),
    [anon_sym_DASH_EQ] = ACTIONS(400),
    [anon_sym_STAR_EQ] = ACTIONS(400),
    [anon_sym_SLASH_EQ] = ACTIONS(400),
    [anon_sym_DOLLAR] = ACTIONS(400),
    [anon_sym_LT_GT] = ACTIONS(400),
    [aux_sym_numeric_parameter_token1] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(402),
    [anon_sym_BANG] = ACTIONS(402),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(400),
    [sym__hex_literal] = ACTIONS(400),
    [aux_sym__num_literal_token1] = ACTIONS(402),
    [aux_sym__exp_literal_token1] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [sym__class_constructor] = ACTIONS(400),
    [sym__class_extends] = ACTIONS(400),
    [sym__var] = ACTIONS(400),
    [sym__property] = ACTIONS(400),
    [sym__alias] = ACTIONS(400),
    [sym__declare] = ACTIONS(400),
    [sym__function] = ACTIONS(400),
    [sym__return] = ACTIONS(400),
    [sym__break] = ACTIONS(400),
    [sym__continue] = ACTIONS(400),
    [sym__this] = ACTIONS(400),
    [sym__form] = ACTIONS(400),
    [sym__super] = ACTIONS(400),
    [sym__class_store_4d] = ACTIONS(400),
    [sym__class_store_ds] = ACTIONS(400),
    [sym__class_store_cs] = ACTIONS(400),
    [sym__system_variable_ok] = ACTIONS(400),
    [sym__system_variable_document] = ACTIONS(400),
    [sym__system_variable_flddelimit] = ACTIONS(400),
    [sym__system_variable_recdelimit] = ACTIONS(400),
    [sym__system_variable_error] = ACTIONS(402),
    [sym__system_variable_error_method] = ACTIONS(400),
    [sym__system_variable_error_line] = ACTIONS(400),
    [sym__system_variable_error_formula] = ACTIONS(400),
    [sym__system_variable_mousedown] = ACTIONS(400),
    [sym__system_variable_mousex] = ACTIONS(400),
    [sym__system_variable_mousey] = ACTIONS(400),
    [sym__system_variable_keycode] = ACTIONS(400),
    [sym__system_variable_modifiers] = ACTIONS(400),
    [sym__system_variable_mouseproc] = ACTIONS(400),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(400),
    [anon_sym_SLASH_SLASH] = ACTIONS(400),
    [anon_sym_SLASH_STAR] = ACTIONS(400),
    [sym__if_e] = ACTIONS(400),
    [sym__if_f] = ACTIONS(402),
    [sym__else_e] = ACTIONS(400),
    [sym__else_f] = ACTIONS(400),
    [sym__end_if_e] = ACTIONS(400),
    [sym__end_if_f] = ACTIONS(400),
    [sym__begin_sql_e] = ACTIONS(400),
    [sym__begin_sql_f] = ACTIONS(400),
    [sym__end_sql_e] = ACTIONS(400),
    [sym__end_sql_f] = ACTIONS(400),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [sym__local] = ACTIONS(404),
    [sym__exposed] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(404),
    [anon_sym_PIPE_PIPE] = ACTIONS(404),
    [anon_sym_AMP] = ACTIONS(406),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_CARET] = ACTIONS(404),
    [anon_sym_TILDE_PIPE] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_EQ] = ACTIONS(404),
    [anon_sym_POUND] = ACTIONS(406),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_QMARK_QMARK] = ACTIONS(404),
    [anon_sym_QMARK_PLUS] = ACTIONS(404),
    [anon_sym_QMARK_DASH] = ACTIONS(404),
    [anon_sym_PLUS_EQ] = ACTIONS(404),
    [anon_sym_DASH_EQ] = ACTIONS(404),
    [anon_sym_STAR_EQ] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(404),
    [anon_sym_DOLLAR] = ACTIONS(404),
    [anon_sym_LT_GT] = ACTIONS(404),
    [aux_sym_numeric_parameter_token1] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(404),
    [sym__hex_literal] = ACTIONS(404),
    [aux_sym__num_literal_token1] = ACTIONS(406),
    [aux_sym__exp_literal_token1] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [sym__class_constructor] = ACTIONS(404),
    [sym__class_extends] = ACTIONS(404),
    [sym__var] = ACTIONS(404),
    [sym__property] = ACTIONS(404),
    [sym__alias] = ACTIONS(404),
    [sym__declare] = ACTIONS(404),
    [sym__function] = ACTIONS(404),
    [sym__return] = ACTIONS(404),
    [sym__break] = ACTIONS(404),
    [sym__continue] = ACTIONS(404),
    [sym__this] = ACTIONS(404),
    [sym__form] = ACTIONS(404),
    [sym__super] = ACTIONS(404),
    [sym__class_store_4d] = ACTIONS(404),
    [sym__class_store_ds] = ACTIONS(404),
    [sym__class_store_cs] = ACTIONS(404),
    [sym__system_variable_ok] = ACTIONS(404),
    [sym__system_variable_document] = ACTIONS(404),
    [sym__system_variable_flddelimit] = ACTIONS(404),
    [sym__system_variable_recdelimit] = ACTIONS(404),
    [sym__system_variable_error] = ACTIONS(406),
    [sym__system_variable_error_method] = ACTIONS(404),
    [sym__system_variable_error_line] = ACTIONS(404),
    [sym__system_variable_error_formula] = ACTIONS(404),
    [sym__system_variable_mousedown] = ACTIONS(404),
    [sym__system_variable_mousex] = ACTIONS(404),
    [sym__system_variable_mousey] = ACTIONS(404),
    [sym__system_variable_keycode] = ACTIONS(404),
    [sym__system_variable_modifiers] = ACTIONS(404),
    [sym__system_variable_mouseproc] = ACTIONS(404),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_STAR] = ACTIONS(404),
    [sym__if_e] = ACTIONS(404),
    [sym__if_f] = ACTIONS(406),
    [sym__else_e] = ACTIONS(404),
    [sym__else_f] = ACTIONS(404),
    [sym__end_if_e] = ACTIONS(404),
    [sym__end_if_f] = ACTIONS(404),
    [sym__begin_sql_e] = ACTIONS(404),
    [sym__begin_sql_f] = ACTIONS(404),
    [sym__end_sql_e] = ACTIONS(404),
    [sym__end_sql_f] = ACTIONS(404),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym__local] = ACTIONS(408),
    [sym__exposed] = ACTIONS(408),
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
    [anon_sym_LT_GT] = ACTIONS(408),
    [aux_sym_numeric_parameter_token1] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(408),
    [sym__hex_literal] = ACTIONS(408),
    [aux_sym__num_literal_token1] = ACTIONS(410),
    [aux_sym__exp_literal_token1] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(408),
    [sym__class_constructor] = ACTIONS(408),
    [sym__class_extends] = ACTIONS(408),
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
    [sym__system_variable_ok] = ACTIONS(408),
    [sym__system_variable_document] = ACTIONS(408),
    [sym__system_variable_flddelimit] = ACTIONS(408),
    [sym__system_variable_recdelimit] = ACTIONS(408),
    [sym__system_variable_error] = ACTIONS(410),
    [sym__system_variable_error_method] = ACTIONS(408),
    [sym__system_variable_error_line] = ACTIONS(408),
    [sym__system_variable_error_formula] = ACTIONS(408),
    [sym__system_variable_mousedown] = ACTIONS(408),
    [sym__system_variable_mousex] = ACTIONS(408),
    [sym__system_variable_mousey] = ACTIONS(408),
    [sym__system_variable_keycode] = ACTIONS(408),
    [sym__system_variable_modifiers] = ACTIONS(408),
    [sym__system_variable_mouseproc] = ACTIONS(408),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(408),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym__local] = ACTIONS(412),
    [sym__exposed] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_AMP_AMP] = ACTIONS(384),
    [anon_sym_PIPE_PIPE] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_TILDE_PIPE] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(384),
    [anon_sym_GT_GT] = ACTIONS(384),
    [anon_sym_QMARK_QMARK] = ACTIONS(384),
    [anon_sym_QMARK_PLUS] = ACTIONS(384),
    [anon_sym_QMARK_DASH] = ACTIONS(384),
    [anon_sym_PLUS_EQ] = ACTIONS(384),
    [anon_sym_DASH_EQ] = ACTIONS(384),
    [anon_sym_STAR_EQ] = ACTIONS(384),
    [anon_sym_SLASH_EQ] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [anon_sym_LT_GT] = ACTIONS(412),
    [aux_sym_numeric_parameter_token1] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(414),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(412),
    [sym__hex_literal] = ACTIONS(412),
    [aux_sym__num_literal_token1] = ACTIONS(414),
    [aux_sym__exp_literal_token1] = ACTIONS(412),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [sym__class_constructor] = ACTIONS(412),
    [sym__class_extends] = ACTIONS(412),
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
    [sym__system_variable_ok] = ACTIONS(412),
    [sym__system_variable_document] = ACTIONS(412),
    [sym__system_variable_flddelimit] = ACTIONS(412),
    [sym__system_variable_recdelimit] = ACTIONS(412),
    [sym__system_variable_error] = ACTIONS(414),
    [sym__system_variable_error_method] = ACTIONS(412),
    [sym__system_variable_error_line] = ACTIONS(412),
    [sym__system_variable_error_formula] = ACTIONS(412),
    [sym__system_variable_mousedown] = ACTIONS(412),
    [sym__system_variable_mousex] = ACTIONS(412),
    [sym__system_variable_mousey] = ACTIONS(412),
    [sym__system_variable_keycode] = ACTIONS(412),
    [sym__system_variable_modifiers] = ACTIONS(412),
    [sym__system_variable_mouseproc] = ACTIONS(412),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(412),
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
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [sym__local] = ACTIONS(416),
    [sym__exposed] = ACTIONS(416),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_DASH] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(418),
    [anon_sym_AMP_AMP] = ACTIONS(416),
    [anon_sym_PIPE_PIPE] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(418),
    [anon_sym_CARET] = ACTIONS(416),
    [anon_sym_TILDE_PIPE] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_EQ] = ACTIONS(416),
    [anon_sym_POUND] = ACTIONS(418),
    [anon_sym_LT_LT] = ACTIONS(416),
    [anon_sym_GT_GT] = ACTIONS(416),
    [anon_sym_QMARK_QMARK] = ACTIONS(416),
    [anon_sym_QMARK_PLUS] = ACTIONS(416),
    [anon_sym_QMARK_DASH] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(416),
    [anon_sym_DASH_EQ] = ACTIONS(416),
    [anon_sym_STAR_EQ] = ACTIONS(416),
    [anon_sym_SLASH_EQ] = ACTIONS(416),
    [anon_sym_DOLLAR] = ACTIONS(416),
    [anon_sym_LT_GT] = ACTIONS(416),
    [aux_sym_numeric_parameter_token1] = ACTIONS(418),
    [anon_sym_QMARK] = ACTIONS(418),
    [anon_sym_BANG] = ACTIONS(418),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(416),
    [sym__hex_literal] = ACTIONS(416),
    [aux_sym__num_literal_token1] = ACTIONS(418),
    [aux_sym__exp_literal_token1] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [sym__class_constructor] = ACTIONS(416),
    [sym__class_extends] = ACTIONS(416),
    [sym__var] = ACTIONS(416),
    [sym__property] = ACTIONS(416),
    [sym__alias] = ACTIONS(416),
    [sym__declare] = ACTIONS(416),
    [sym__function] = ACTIONS(416),
    [sym__return] = ACTIONS(416),
    [sym__break] = ACTIONS(416),
    [sym__continue] = ACTIONS(416),
    [sym__this] = ACTIONS(416),
    [sym__form] = ACTIONS(416),
    [sym__super] = ACTIONS(416),
    [sym__class_store_4d] = ACTIONS(416),
    [sym__class_store_ds] = ACTIONS(416),
    [sym__class_store_cs] = ACTIONS(416),
    [sym__system_variable_ok] = ACTIONS(416),
    [sym__system_variable_document] = ACTIONS(416),
    [sym__system_variable_flddelimit] = ACTIONS(416),
    [sym__system_variable_recdelimit] = ACTIONS(416),
    [sym__system_variable_error] = ACTIONS(418),
    [sym__system_variable_error_method] = ACTIONS(416),
    [sym__system_variable_error_line] = ACTIONS(416),
    [sym__system_variable_error_formula] = ACTIONS(416),
    [sym__system_variable_mousedown] = ACTIONS(416),
    [sym__system_variable_mousex] = ACTIONS(416),
    [sym__system_variable_mousey] = ACTIONS(416),
    [sym__system_variable_keycode] = ACTIONS(416),
    [sym__system_variable_modifiers] = ACTIONS(416),
    [sym__system_variable_mouseproc] = ACTIONS(416),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(416),
    [anon_sym_SLASH_SLASH] = ACTIONS(416),
    [anon_sym_SLASH_STAR] = ACTIONS(416),
    [sym__if_e] = ACTIONS(416),
    [sym__if_f] = ACTIONS(418),
    [sym__else_e] = ACTIONS(416),
    [sym__else_f] = ACTIONS(416),
    [sym__end_if_e] = ACTIONS(416),
    [sym__end_if_f] = ACTIONS(416),
    [sym__begin_sql_e] = ACTIONS(416),
    [sym__begin_sql_f] = ACTIONS(416),
    [sym__end_sql_e] = ACTIONS(416),
    [sym__end_sql_f] = ACTIONS(416),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym__local] = ACTIONS(420),
    [sym__exposed] = ACTIONS(420),
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
    [anon_sym_LT_GT] = ACTIONS(420),
    [aux_sym_numeric_parameter_token1] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_BANG] = ACTIONS(422),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(420),
    [sym__hex_literal] = ACTIONS(420),
    [aux_sym__num_literal_token1] = ACTIONS(422),
    [aux_sym__exp_literal_token1] = ACTIONS(420),
    [anon_sym_DQUOTE] = ACTIONS(420),
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
    [sym__system_variable_ok] = ACTIONS(420),
    [sym__system_variable_document] = ACTIONS(420),
    [sym__system_variable_flddelimit] = ACTIONS(420),
    [sym__system_variable_recdelimit] = ACTIONS(420),
    [sym__system_variable_error] = ACTIONS(422),
    [sym__system_variable_error_method] = ACTIONS(420),
    [sym__system_variable_error_line] = ACTIONS(420),
    [sym__system_variable_error_formula] = ACTIONS(420),
    [sym__system_variable_mousedown] = ACTIONS(420),
    [sym__system_variable_mousex] = ACTIONS(420),
    [sym__system_variable_mousey] = ACTIONS(420),
    [sym__system_variable_keycode] = ACTIONS(420),
    [sym__system_variable_modifiers] = ACTIONS(420),
    [sym__system_variable_mouseproc] = ACTIONS(420),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(420),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym__local] = ACTIONS(424),
    [sym__exposed] = ACTIONS(424),
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
    [anon_sym_LT_GT] = ACTIONS(424),
    [aux_sym_numeric_parameter_token1] = ACTIONS(426),
    [anon_sym_QMARK] = ACTIONS(426),
    [anon_sym_BANG] = ACTIONS(426),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(424),
    [sym__hex_literal] = ACTIONS(424),
    [aux_sym__num_literal_token1] = ACTIONS(426),
    [aux_sym__exp_literal_token1] = ACTIONS(424),
    [anon_sym_DQUOTE] = ACTIONS(424),
    [sym__class_constructor] = ACTIONS(424),
    [sym__class_extends] = ACTIONS(424),
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
    [sym__system_variable_ok] = ACTIONS(424),
    [sym__system_variable_document] = ACTIONS(424),
    [sym__system_variable_flddelimit] = ACTIONS(424),
    [sym__system_variable_recdelimit] = ACTIONS(424),
    [sym__system_variable_error] = ACTIONS(426),
    [sym__system_variable_error_method] = ACTIONS(424),
    [sym__system_variable_error_line] = ACTIONS(424),
    [sym__system_variable_error_formula] = ACTIONS(424),
    [sym__system_variable_mousedown] = ACTIONS(424),
    [sym__system_variable_mousex] = ACTIONS(424),
    [sym__system_variable_mousey] = ACTIONS(424),
    [sym__system_variable_keycode] = ACTIONS(424),
    [sym__system_variable_modifiers] = ACTIONS(424),
    [sym__system_variable_mouseproc] = ACTIONS(424),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(424),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym__local] = ACTIONS(428),
    [sym__exposed] = ACTIONS(428),
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
    [anon_sym_LT_GT] = ACTIONS(428),
    [aux_sym_numeric_parameter_token1] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(428),
    [sym__hex_literal] = ACTIONS(428),
    [aux_sym__num_literal_token1] = ACTIONS(430),
    [aux_sym__exp_literal_token1] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
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
    [sym__system_variable_ok] = ACTIONS(428),
    [sym__system_variable_document] = ACTIONS(428),
    [sym__system_variable_flddelimit] = ACTIONS(428),
    [sym__system_variable_recdelimit] = ACTIONS(428),
    [sym__system_variable_error] = ACTIONS(430),
    [sym__system_variable_error_method] = ACTIONS(428),
    [sym__system_variable_error_line] = ACTIONS(428),
    [sym__system_variable_error_formula] = ACTIONS(428),
    [sym__system_variable_mousedown] = ACTIONS(428),
    [sym__system_variable_mousex] = ACTIONS(428),
    [sym__system_variable_mousey] = ACTIONS(428),
    [sym__system_variable_keycode] = ACTIONS(428),
    [sym__system_variable_modifiers] = ACTIONS(428),
    [sym__system_variable_mouseproc] = ACTIONS(428),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(428),
    [anon_sym_SLASH_SLASH] = ACTIONS(428),
    [anon_sym_SLASH_STAR] = ACTIONS(428),
    [sym__if_e] = ACTIONS(428),
    [sym__if_f] = ACTIONS(430),
    [sym__else_e] = ACTIONS(428),
    [sym__else_f] = ACTIONS(428),
    [sym__end_if_e] = ACTIONS(428),
    [sym__end_if_f] = ACTIONS(428),
    [sym__begin_sql_e] = ACTIONS(428),
    [sym__begin_sql_f] = ACTIONS(428),
    [sym__end_sql_e] = ACTIONS(428),
    [sym__end_sql_f] = ACTIONS(428),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym__local] = ACTIONS(432),
    [sym__exposed] = ACTIONS(432),
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
    [anon_sym_LT_GT] = ACTIONS(432),
    [aux_sym_numeric_parameter_token1] = ACTIONS(434),
    [anon_sym_QMARK] = ACTIONS(434),
    [anon_sym_BANG] = ACTIONS(434),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(432),
    [sym__hex_literal] = ACTIONS(432),
    [aux_sym__num_literal_token1] = ACTIONS(434),
    [aux_sym__exp_literal_token1] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__class_constructor] = ACTIONS(432),
    [sym__class_extends] = ACTIONS(432),
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
    [sym__system_variable_ok] = ACTIONS(432),
    [sym__system_variable_document] = ACTIONS(432),
    [sym__system_variable_flddelimit] = ACTIONS(432),
    [sym__system_variable_recdelimit] = ACTIONS(432),
    [sym__system_variable_error] = ACTIONS(434),
    [sym__system_variable_error_method] = ACTIONS(432),
    [sym__system_variable_error_line] = ACTIONS(432),
    [sym__system_variable_error_formula] = ACTIONS(432),
    [sym__system_variable_mousedown] = ACTIONS(432),
    [sym__system_variable_mousex] = ACTIONS(432),
    [sym__system_variable_mousey] = ACTIONS(432),
    [sym__system_variable_keycode] = ACTIONS(432),
    [sym__system_variable_modifiers] = ACTIONS(432),
    [sym__system_variable_mouseproc] = ACTIONS(432),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(432),
    [anon_sym_SLASH_SLASH] = ACTIONS(432),
    [anon_sym_SLASH_STAR] = ACTIONS(432),
    [sym__if_e] = ACTIONS(432),
    [sym__if_f] = ACTIONS(434),
    [sym__else_e] = ACTIONS(432),
    [sym__else_f] = ACTIONS(432),
    [sym__end_if_e] = ACTIONS(432),
    [sym__end_if_f] = ACTIONS(432),
    [sym__begin_sql_e] = ACTIONS(432),
    [sym__begin_sql_f] = ACTIONS(432),
    [sym__end_sql_e] = ACTIONS(432),
    [sym__end_sql_f] = ACTIONS(432),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym__local] = ACTIONS(436),
    [sym__exposed] = ACTIONS(436),
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
    [anon_sym_LT_GT] = ACTIONS(436),
    [aux_sym_numeric_parameter_token1] = ACTIONS(438),
    [anon_sym_QMARK] = ACTIONS(438),
    [anon_sym_BANG] = ACTIONS(438),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(436),
    [sym__hex_literal] = ACTIONS(436),
    [aux_sym__num_literal_token1] = ACTIONS(438),
    [aux_sym__exp_literal_token1] = ACTIONS(436),
    [anon_sym_DQUOTE] = ACTIONS(436),
    [sym__class_constructor] = ACTIONS(436),
    [sym__class_extends] = ACTIONS(436),
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
    [sym__system_variable_ok] = ACTIONS(436),
    [sym__system_variable_document] = ACTIONS(436),
    [sym__system_variable_flddelimit] = ACTIONS(436),
    [sym__system_variable_recdelimit] = ACTIONS(436),
    [sym__system_variable_error] = ACTIONS(438),
    [sym__system_variable_error_method] = ACTIONS(436),
    [sym__system_variable_error_line] = ACTIONS(436),
    [sym__system_variable_error_formula] = ACTIONS(436),
    [sym__system_variable_mousedown] = ACTIONS(436),
    [sym__system_variable_mousex] = ACTIONS(436),
    [sym__system_variable_mousey] = ACTIONS(436),
    [sym__system_variable_keycode] = ACTIONS(436),
    [sym__system_variable_modifiers] = ACTIONS(436),
    [sym__system_variable_mouseproc] = ACTIONS(436),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(436),
    [anon_sym_SLASH_SLASH] = ACTIONS(436),
    [anon_sym_SLASH_STAR] = ACTIONS(436),
    [sym__if_e] = ACTIONS(436),
    [sym__if_f] = ACTIONS(438),
    [sym__else_e] = ACTIONS(436),
    [sym__else_f] = ACTIONS(436),
    [sym__end_if_e] = ACTIONS(436),
    [sym__end_if_f] = ACTIONS(436),
    [sym__begin_sql_e] = ACTIONS(436),
    [sym__begin_sql_f] = ACTIONS(436),
    [sym__end_sql_e] = ACTIONS(436),
    [sym__end_sql_f] = ACTIONS(436),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym__local] = ACTIONS(440),
    [sym__exposed] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(440),
    [anon_sym_PIPE_PIPE] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_TILDE_PIPE] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(442),
    [anon_sym_LT_LT] = ACTIONS(440),
    [anon_sym_GT_GT] = ACTIONS(440),
    [anon_sym_QMARK_QMARK] = ACTIONS(440),
    [anon_sym_QMARK_PLUS] = ACTIONS(440),
    [anon_sym_QMARK_DASH] = ACTIONS(440),
    [anon_sym_PLUS_EQ] = ACTIONS(440),
    [anon_sym_DASH_EQ] = ACTIONS(440),
    [anon_sym_STAR_EQ] = ACTIONS(440),
    [anon_sym_SLASH_EQ] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(440),
    [anon_sym_LT_GT] = ACTIONS(440),
    [aux_sym_numeric_parameter_token1] = ACTIONS(442),
    [anon_sym_QMARK] = ACTIONS(442),
    [anon_sym_BANG] = ACTIONS(442),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(440),
    [sym__hex_literal] = ACTIONS(440),
    [aux_sym__num_literal_token1] = ACTIONS(442),
    [aux_sym__exp_literal_token1] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [sym__class_constructor] = ACTIONS(440),
    [sym__class_extends] = ACTIONS(440),
    [sym__var] = ACTIONS(440),
    [sym__property] = ACTIONS(440),
    [sym__alias] = ACTIONS(440),
    [sym__declare] = ACTIONS(440),
    [sym__function] = ACTIONS(440),
    [sym__return] = ACTIONS(440),
    [sym__break] = ACTIONS(440),
    [sym__continue] = ACTIONS(440),
    [sym__this] = ACTIONS(440),
    [sym__form] = ACTIONS(440),
    [sym__super] = ACTIONS(440),
    [sym__class_store_4d] = ACTIONS(440),
    [sym__class_store_ds] = ACTIONS(440),
    [sym__class_store_cs] = ACTIONS(440),
    [sym__system_variable_ok] = ACTIONS(440),
    [sym__system_variable_document] = ACTIONS(440),
    [sym__system_variable_flddelimit] = ACTIONS(440),
    [sym__system_variable_recdelimit] = ACTIONS(440),
    [sym__system_variable_error] = ACTIONS(442),
    [sym__system_variable_error_method] = ACTIONS(440),
    [sym__system_variable_error_line] = ACTIONS(440),
    [sym__system_variable_error_formula] = ACTIONS(440),
    [sym__system_variable_mousedown] = ACTIONS(440),
    [sym__system_variable_mousex] = ACTIONS(440),
    [sym__system_variable_mousey] = ACTIONS(440),
    [sym__system_variable_keycode] = ACTIONS(440),
    [sym__system_variable_modifiers] = ACTIONS(440),
    [sym__system_variable_mouseproc] = ACTIONS(440),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(440),
    [anon_sym_SLASH_SLASH] = ACTIONS(440),
    [anon_sym_SLASH_STAR] = ACTIONS(440),
    [sym__if_e] = ACTIONS(440),
    [sym__if_f] = ACTIONS(442),
    [sym__else_e] = ACTIONS(440),
    [sym__else_f] = ACTIONS(440),
    [sym__end_if_e] = ACTIONS(440),
    [sym__end_if_f] = ACTIONS(440),
    [sym__begin_sql_e] = ACTIONS(440),
    [sym__begin_sql_f] = ACTIONS(440),
    [sym__end_sql_e] = ACTIONS(440),
    [sym__end_sql_f] = ACTIONS(440),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym__local] = ACTIONS(350),
    [sym__exposed] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(350),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_TILDE_PIPE] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(350),
    [anon_sym_GT_GT] = ACTIONS(350),
    [anon_sym_QMARK_QMARK] = ACTIONS(350),
    [anon_sym_QMARK_PLUS] = ACTIONS(350),
    [anon_sym_QMARK_DASH] = ACTIONS(350),
    [anon_sym_PLUS_EQ] = ACTIONS(350),
    [anon_sym_DASH_EQ] = ACTIONS(350),
    [anon_sym_STAR_EQ] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_LT_GT] = ACTIONS(350),
    [aux_sym_numeric_parameter_token1] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(350),
    [sym__hex_literal] = ACTIONS(350),
    [aux_sym__num_literal_token1] = ACTIONS(358),
    [aux_sym__exp_literal_token1] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym__class_constructor] = ACTIONS(350),
    [sym__class_extends] = ACTIONS(350),
    [sym__var] = ACTIONS(350),
    [sym__property] = ACTIONS(350),
    [sym__alias] = ACTIONS(350),
    [sym__declare] = ACTIONS(350),
    [sym__function] = ACTIONS(350),
    [sym__return] = ACTIONS(350),
    [sym__break] = ACTIONS(350),
    [sym__continue] = ACTIONS(350),
    [sym__this] = ACTIONS(350),
    [sym__form] = ACTIONS(350),
    [sym__super] = ACTIONS(350),
    [sym__class_store_4d] = ACTIONS(350),
    [sym__class_store_ds] = ACTIONS(350),
    [sym__class_store_cs] = ACTIONS(350),
    [sym__system_variable_ok] = ACTIONS(350),
    [sym__system_variable_document] = ACTIONS(350),
    [sym__system_variable_flddelimit] = ACTIONS(350),
    [sym__system_variable_recdelimit] = ACTIONS(350),
    [sym__system_variable_error] = ACTIONS(358),
    [sym__system_variable_error_method] = ACTIONS(350),
    [sym__system_variable_error_line] = ACTIONS(350),
    [sym__system_variable_error_formula] = ACTIONS(350),
    [sym__system_variable_mousedown] = ACTIONS(350),
    [sym__system_variable_mousex] = ACTIONS(350),
    [sym__system_variable_mousey] = ACTIONS(350),
    [sym__system_variable_keycode] = ACTIONS(350),
    [sym__system_variable_modifiers] = ACTIONS(350),
    [sym__system_variable_mouseproc] = ACTIONS(350),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(350),
    [anon_sym_SLASH_STAR] = ACTIONS(350),
    [sym__if_e] = ACTIONS(350),
    [sym__if_f] = ACTIONS(358),
    [sym__else_e] = ACTIONS(350),
    [sym__else_f] = ACTIONS(350),
    [sym__end_if_e] = ACTIONS(350),
    [sym__end_if_f] = ACTIONS(350),
    [sym__begin_sql_e] = ACTIONS(350),
    [sym__begin_sql_f] = ACTIONS(350),
    [sym__end_sql_e] = ACTIONS(350),
    [sym__end_sql_f] = ACTIONS(350),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(215), 1,
      sym__function_parameter,
    STATE(217), 1,
      aux_sym__functional_expression_repeat1,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(235), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(221), 1,
      sym__function_parameter,
    STATE(234), 1,
      aux_sym__functional_expression_repeat1,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(235), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [246] = 30,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(220), 1,
      aux_sym__functional_expression_repeat1,
    STATE(223), 1,
      sym__function_parameter,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(456), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(235), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [369] = 5,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(280), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(278), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [440] = 4,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(273), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(271), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [509] = 5,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(465), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(265), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(263), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [580] = 3,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(310), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [646] = 2,
    ACTIONS(286), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(284), 54,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [710] = 3,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(316), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [776] = 2,
    ACTIONS(473), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(471), 54,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [840] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(290), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(288), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [908] = 2,
    ACTIONS(298), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(296), 54,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [972] = 2,
    ACTIONS(302), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(300), 54,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1036] = 27,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    STATE(285), 1,
      sym__function_parameter,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(475), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(235), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [1150] = 3,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(304), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1216] = 2,
    ACTIONS(273), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(271), 54,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1280] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(294), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(292), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1348] = 2,
    ACTIONS(372), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(370), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1411] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(481), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(479), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1478] = 2,
    ACTIONS(324), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(322), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1541] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(485), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(483), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1608] = 2,
    ACTIONS(362), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(360), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1671] = 4,
    ACTIONS(489), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym_function_result,
    ACTIONS(491), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(487), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1738] = 4,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym__functional_expression,
    ACTIONS(368), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(364), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1805] = 2,
    ACTIONS(497), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(495), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1868] = 4,
    ACTIONS(489), 1,
      anon_sym_DASH_GT,
    STATE(124), 1,
      sym_function_result,
    ACTIONS(501), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(499), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [1935] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(505), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(503), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2002] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(509), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(507), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2069] = 4,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym__functional_expression,
    ACTIONS(386), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(384), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2136] = 2,
    ACTIONS(513), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(511), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2199] = 2,
    ACTIONS(517), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(515), 53,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2262] = 3,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(380), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(378), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2327] = 2,
    ACTIONS(523), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(521), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2389] = 2,
    ACTIONS(402), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(400), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2451] = 2,
    ACTIONS(406), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(404), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2513] = 2,
    ACTIONS(527), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(525), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2575] = 2,
    ACTIONS(531), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(529), 52,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2637] = 2,
    ACTIONS(535), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(533), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2698] = 2,
    ACTIONS(539), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(537), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2759] = 2,
    ACTIONS(543), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(541), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2820] = 2,
    ACTIONS(398), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(396), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2881] = 2,
    ACTIONS(547), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(545), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [2942] = 2,
    ACTIONS(551), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(549), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3003] = 2,
    ACTIONS(555), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(553), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3064] = 2,
    ACTIONS(559), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(557), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3125] = 26,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(561), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 1,
      anon_sym_LT_GT,
    ACTIONS(567), 1,
      anon_sym_QMARK,
    ACTIONS(569), 1,
      anon_sym_BANG,
    ACTIONS(571), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      sym__system_variable_error,
    STATE(14), 1,
      sym__class_store,
    STATE(30), 1,
      sym__class,
    STATE(33), 1,
      sym__variable,
    STATE(34), 1,
      sym__mutable,
    STATE(110), 1,
      sym_ternary_block,
    STATE(284), 1,
      sym_super,
    STATE(300), 1,
      sym__condition,
    ACTIONS(565), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(573), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(577), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(41), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(35), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(579), 13,
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
  [3234] = 2,
    ACTIONS(442), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(440), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3295] = 2,
    ACTIONS(340), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(338), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3356] = 25,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(257), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [3463] = 2,
    ACTIONS(585), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(583), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3524] = 2,
    ACTIONS(376), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(374), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3585] = 25,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(255), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [3692] = 2,
    ACTIONS(589), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(587), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3753] = 2,
    ACTIONS(593), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(591), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3814] = 2,
    ACTIONS(597), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(595), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3875] = 2,
    ACTIONS(601), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(599), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3936] = 2,
    ACTIONS(605), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(603), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [3997] = 2,
    ACTIONS(609), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(607), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4058] = 2,
    ACTIONS(434), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(432), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4119] = 2,
    ACTIONS(613), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(611), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4180] = 2,
    ACTIONS(430), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(428), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4241] = 2,
    ACTIONS(394), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(388), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4302] = 2,
    ACTIONS(617), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(615), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4363] = 2,
    ACTIONS(344), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(342), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4424] = 2,
    ACTIONS(621), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(619), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4485] = 2,
    ACTIONS(625), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(623), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4546] = 2,
    ACTIONS(629), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(627), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4607] = 2,
    ACTIONS(418), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(416), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4668] = 25,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(58), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [4775] = 2,
    ACTIONS(426), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(424), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4836] = 2,
    ACTIONS(422), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(420), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4897] = 2,
    ACTIONS(633), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(631), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [4958] = 25,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(283), 2,
      sym__condition,
      sym_ternary_block,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(173), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5065] = 2,
    ACTIONS(348), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(346), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [5126] = 2,
    ACTIONS(637), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(635), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [5187] = 2,
    ACTIONS(641), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(639), 51,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
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
  [5248] = 25,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(561), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 1,
      anon_sym_LT_GT,
    ACTIONS(567), 1,
      anon_sym_QMARK,
    ACTIONS(569), 1,
      anon_sym_BANG,
    ACTIONS(571), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      sym__system_variable_error,
    STATE(14), 1,
      sym__class_store,
    STATE(30), 1,
      sym__class,
    STATE(33), 1,
      sym__variable,
    STATE(34), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(565), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(573), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(58), 2,
      sym__condition,
      sym_ternary_block,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(577), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(41), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(23), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(579), 13,
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
  [5355] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
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
    ACTIONS(53), 13,
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
  [5458] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(304), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5561] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(308), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5664] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(311), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5767] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(326), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5870] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(305), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [5973] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
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
    ACTIONS(53), 13,
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
  [6076] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(307), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [6179] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(340), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [6282] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
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
    ACTIONS(53), 13,
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
  [6385] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
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
    ACTIONS(53), 13,
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
  [6488] = 4,
    STATE(9), 1,
      sym_else,
    ACTIONS(647), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(645), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(643), 46,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [6551] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(303), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [6654] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
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
    ACTIONS(53), 13,
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
  [6757] = 24,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(561), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 1,
      anon_sym_LT_GT,
    ACTIONS(567), 1,
      anon_sym_QMARK,
    ACTIONS(569), 1,
      anon_sym_BANG,
    ACTIONS(571), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      sym__system_variable_error,
    STATE(14), 1,
      sym__class_store,
    STATE(30), 1,
      sym__class,
    STATE(33), 1,
      sym__variable,
    STATE(34), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(565), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(573), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(316), 2,
      sym_this,
      sym_form,
    ACTIONS(577), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(41), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(48), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(579), 13,
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
  [6860] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(323), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [6963] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(166), 1,
      sym__class,
    STATE(176), 1,
      sym__mutable,
    STATE(266), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(185), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [7066] = 24,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LT_GT,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(55), 1,
      sym__system_variable_error,
    STATE(159), 1,
      sym__class_store,
    STATE(161), 1,
      sym__variable,
    STATE(179), 1,
      sym__class,
    STATE(213), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(298), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(157), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(167), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(174), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(334), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(53), 13,
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
  [7169] = 2,
    ACTIONS(651), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(649), 47,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [7225] = 2,
    ACTIONS(655), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(653), 47,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
      sym__end_sql_e,
      sym__end_sql_f,
  [7281] = 2,
    ACTIONS(659), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(657), 47,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [7337] = 2,
    ACTIONS(663), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(661), 45,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
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
      aux_sym__classic_compiler_longint_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym__if_e,
      sym__if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [7391] = 4,
    ACTIONS(665), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(273), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(271), 22,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7434] = 5,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(670), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(265), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(263), 21,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7479] = 5,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(280), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(278), 21,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7524] = 2,
    ACTIONS(273), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(271), 23,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7562] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(310), 22,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7602] = 2,
    ACTIONS(286), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(284), 23,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7640] = 2,
    ACTIONS(298), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(296), 23,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7678] = 3,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(304), 22,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7718] = 2,
    ACTIONS(302), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(300), 23,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7756] = 3,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(316), 22,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7796] = 4,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(294), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(292), 21,
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
  [7837] = 4,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(158), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(290), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(288), 21,
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
  [7878] = 2,
    ACTIONS(362), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(360), 22,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7915] = 3,
    ACTIONS(680), 1,
      anon_sym_DOT,
    ACTIONS(380), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(378), 21,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [7954] = 2,
    ACTIONS(372), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(370), 22,
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
  [7990] = 2,
    ACTIONS(402), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(400), 21,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [8026] = 2,
    ACTIONS(324), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(322), 22,
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
  [8062] = 2,
    ACTIONS(406), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(404), 21,
      anon_sym_SEMI,
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
      anon_sym_COLON_EQ,
  [8098] = 4,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__functional_expression,
    ACTIONS(368), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(364), 18,
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
  [8136] = 2,
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
    ACTIONS(432), 20,
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
  [8170] = 2,
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
    ACTIONS(420), 20,
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
  [8204] = 6,
    ACTIONS(358), 1,
      anon_sym_QMARK,
    STATE(142), 1,
      sym__binary_operator,
    STATE(169), 1,
      aux_sym__condition_repeat1,
    ACTIONS(350), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(684), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(687), 15,
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
  [8246] = 6,
    ACTIONS(336), 1,
      anon_sym_QMARK,
    STATE(142), 1,
      sym__binary_operator,
    STATE(169), 1,
      aux_sym__condition_repeat1,
    ACTIONS(334), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(390), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 15,
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
  [8288] = 2,
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
    ACTIONS(436), 20,
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
  [8322] = 2,
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
    ACTIONS(408), 20,
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
  [8356] = 6,
    ACTIONS(332), 1,
      anon_sym_QMARK,
    STATE(142), 1,
      sym__binary_operator,
    STATE(170), 1,
      aux_sym__condition_repeat1,
    ACTIONS(326), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(390), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 15,
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
  [8398] = 2,
    ACTIONS(418), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(416), 20,
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
  [8432] = 2,
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
  [8466] = 4,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__functional_expression,
    ACTIONS(386), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(384), 18,
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
  [8504] = 2,
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
    ACTIONS(424), 20,
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
  [8538] = 2,
    ACTIONS(442), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(440), 20,
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
  [8572] = 4,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__functional_expression,
    ACTIONS(368), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(364), 17,
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
  [8609] = 5,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      anon_sym_COLON_EQ,
    STATE(32), 1,
      sym__functional_expression,
    ACTIONS(386), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(384), 15,
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
  [8647] = 2,
    ACTIONS(398), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(396), 18,
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
  [8679] = 2,
    ACTIONS(376), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(374), 18,
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
  [8711] = 2,
    ACTIONS(340), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(338), 18,
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
  [8743] = 2,
    ACTIONS(344), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(342), 18,
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
  [8775] = 2,
    ACTIONS(358), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(350), 18,
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
  [8807] = 2,
    ACTIONS(348), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(346), 18,
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
  [8839] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(103), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [8869] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(88), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [8899] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(123), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [8929] = 5,
    STATE(79), 1,
      sym_class,
    STATE(159), 1,
      sym__class_store,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [8959] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(115), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [8989] = 5,
    STATE(78), 1,
      sym_class,
    STATE(159), 1,
      sym__class_store,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [9019] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(79), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [9049] = 5,
    STATE(59), 1,
      sym__class_store,
    STATE(78), 1,
      sym_class,
    STATE(73), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(692), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(694), 12,
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
  [9079] = 3,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym_string_repeat1,
    ACTIONS(698), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9094] = 3,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat1,
    ACTIONS(702), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9109] = 3,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat1,
    ACTIONS(706), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9124] = 3,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat1,
    ACTIONS(702), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9139] = 3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat1,
    ACTIONS(702), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9154] = 3,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      aux_sym_string_repeat1,
    ACTIONS(715), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9169] = 4,
    ACTIONS(719), 1,
      aux_sym__name_token1,
    STATE(267), 1,
      sym__computed,
    STATE(318), 1,
      sym__name,
    ACTIONS(717), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [9185] = 4,
    ACTIONS(723), 1,
      aux_sym__name_token1,
    STATE(261), 1,
      sym__computed,
    STATE(331), 1,
      sym__name,
    ACTIONS(721), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [9201] = 3,
    ACTIONS(727), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(725), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(19), 2,
      sym__name,
      sym__classic_name,
  [9213] = 1,
    ACTIONS(729), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [9221] = 3,
    ACTIONS(733), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(731), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(155), 2,
      sym__name,
      sym__classic_name,
  [9233] = 3,
    ACTIONS(735), 1,
      aux_sym__name_token1,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(262), 2,
      sym__name,
      sym_local_variable,
  [9244] = 2,
    ACTIONS(739), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(20), 2,
      sym__name,
      sym__classic_name,
  [9253] = 2,
    ACTIONS(741), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(152), 2,
      sym__name,
      sym__classic_name,
  [9262] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(743), 1,
      aux_sym__name_token1,
    STATE(242), 2,
      sym__name,
      sym_local_variable,
  [9273] = 4,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_local_variable,
    STATE(240), 1,
      sym__function_argument,
  [9286] = 2,
    ACTIONS(731), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(155), 2,
      sym__name,
      sym__classic_name,
  [9295] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(747), 1,
      aux_sym__name_token1,
    STATE(231), 2,
      sym__name,
      sym_local_variable,
  [9306] = 3,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__functional_expression,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [9317] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(749), 1,
      aux_sym__name_token1,
    STATE(276), 2,
      sym__name,
      sym_local_variable,
  [9328] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym__functional_expression_repeat1,
  [9338] = 3,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9348] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9358] = 3,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9368] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9378] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9388] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym__functional_expression_repeat1,
  [9398] = 3,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_COLON,
    STATE(222), 1,
      aux_sym_property_declaration_block_repeat1,
  [9408] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym__functional_expression_repeat1,
  [9418] = 3,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(776), 1,
      anon_sym_COLON,
    STATE(224), 1,
      aux_sym_var_declaration_block_repeat1,
  [9428] = 2,
    STATE(69), 1,
      sym__name,
    ACTIONS(778), 2,
      aux_sym__name_token1,
      sym__class_store_4d,
  [9436] = 3,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9446] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9456] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9466] = 3,
    ACTIONS(789), 1,
      anon_sym_SEMI,
    ACTIONS(791), 1,
      anon_sym_COLON,
    STATE(230), 1,
      aux_sym__function_argument_repeat1,
  [9476] = 3,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      anon_sym_COLON,
    STATE(230), 1,
      aux_sym__function_argument_repeat1,
  [9486] = 3,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_COLON,
    STATE(245), 1,
      aux_sym_var_declaration_block_repeat1,
  [9496] = 3,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_function_arguments_repeat1,
  [9506] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(239), 1,
      sym_local_variable,
    STATE(253), 1,
      sym__function_argument,
  [9516] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9526] = 2,
    ACTIONS(808), 1,
      anon_sym_QMARK,
    ACTIONS(806), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9534] = 3,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_function_arguments_repeat1,
  [9544] = 3,
    ACTIONS(789), 1,
      anon_sym_SEMI,
    ACTIONS(815), 1,
      anon_sym_COLON,
    STATE(241), 1,
      aux_sym__function_argument_repeat1,
  [9554] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym__function_argument,
    STATE(237), 1,
      sym_local_variable,
  [9564] = 3,
    ACTIONS(789), 1,
      anon_sym_SEMI,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(229), 1,
      aux_sym__function_argument_repeat1,
  [9574] = 3,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_function_arguments_repeat1,
  [9584] = 3,
    ACTIONS(789), 1,
      anon_sym_SEMI,
    ACTIONS(821), 1,
      anon_sym_COLON,
    STATE(230), 1,
      aux_sym__function_argument_repeat1,
  [9594] = 3,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9604] = 3,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    ACTIONS(827), 1,
      anon_sym_COLON,
    STATE(222), 1,
      aux_sym_property_declaration_block_repeat1,
  [9614] = 3,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    ACTIONS(829), 1,
      anon_sym_COLON,
    STATE(243), 1,
      aux_sym_property_declaration_block_repeat1,
  [9624] = 3,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(831), 1,
      anon_sym_COLON,
    STATE(224), 1,
      aux_sym_var_declaration_block_repeat1,
  [9634] = 2,
    ACTIONS(833), 1,
      aux_sym__name_token1,
    STATE(317), 1,
      sym__name,
  [9641] = 2,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_function_arguments,
  [9648] = 2,
    ACTIONS(837), 1,
      aux_sym_time_token1,
    ACTIONS(839), 1,
      aux_sym_date_token1,
  [9655] = 2,
    ACTIONS(841), 1,
      sym__local,
    ACTIONS(843), 1,
      sym__function,
  [9662] = 2,
    ACTIONS(845), 1,
      aux_sym_time_token1,
    ACTIONS(847), 1,
      aux_sym_date_token1,
  [9669] = 2,
    ACTIONS(849), 1,
      aux_sym__name_token1,
    STATE(64), 1,
      sym__name,
  [9676] = 1,
    ACTIONS(851), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [9681] = 1,
    ACTIONS(813), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9686] = 1,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9691] = 2,
    ACTIONS(808), 1,
      anon_sym_QMARK,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
  [9698] = 2,
    ACTIONS(855), 1,
      aux_sym__name_token1,
    STATE(279), 1,
      sym__name,
  [9705] = 2,
    ACTIONS(808), 1,
      anon_sym_QMARK,
    ACTIONS(857), 1,
      anon_sym_COLON,
  [9712] = 2,
    ACTIONS(841), 1,
      sym__exposed,
    ACTIONS(843), 1,
      sym__function,
  [9719] = 2,
    ACTIONS(859), 1,
      aux_sym_command_suffix_token1,
    STATE(290), 1,
      sym_command_suffix,
  [9726] = 2,
    ACTIONS(859), 1,
      aux_sym_command_suffix_token1,
    STATE(289), 1,
      sym_command_suffix,
  [9733] = 2,
    ACTIONS(861), 1,
      aux_sym__name_token1,
    STATE(314), 1,
      sym__name,
  [9740] = 1,
    ACTIONS(760), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9745] = 2,
    ACTIONS(859), 1,
      aux_sym_command_suffix_token1,
    STATE(288), 1,
      sym_command_suffix,
  [9752] = 2,
    ACTIONS(859), 1,
      aux_sym_command_suffix_token1,
    STATE(162), 1,
      sym_command_suffix,
  [9759] = 2,
    ACTIONS(863), 1,
      aux_sym__name_token1,
    STATE(151), 1,
      sym__name,
  [9766] = 2,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__functional_expression,
  [9773] = 2,
    ACTIONS(865), 1,
      aux_sym__name_token1,
    STATE(331), 1,
      sym__name,
  [9780] = 2,
    ACTIONS(867), 1,
      aux_sym_command_suffix_token1,
    STATE(31), 1,
      sym_command_suffix,
  [9787] = 2,
    ACTIONS(869), 1,
      aux_sym__name_token1,
    STATE(149), 1,
      sym__name,
  [9794] = 2,
    ACTIONS(859), 1,
      aux_sym_command_suffix_token1,
    STATE(327), 1,
      sym_command_suffix,
  [9801] = 2,
    ACTIONS(871), 1,
      aux_sym__name_token1,
    STATE(10), 1,
      sym__name,
  [9808] = 2,
    ACTIONS(873), 1,
      aux_sym__name_token1,
    STATE(54), 1,
      sym__name,
  [9815] = 2,
    ACTIONS(875), 1,
      aux_sym__name_token1,
    STATE(244), 1,
      sym__name,
  [9822] = 2,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(254), 1,
      sym_local_variable,
  [9829] = 2,
    ACTIONS(877), 1,
      aux_sym__name_token1,
    STATE(17), 1,
      sym__name,
  [9836] = 1,
    ACTIONS(776), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9841] = 2,
    ACTIONS(879), 1,
      aux_sym__name_token1,
    STATE(75), 1,
      sym__name,
  [9848] = 2,
    ACTIONS(881), 1,
      aux_sym_command_suffix_token1,
    STATE(66), 1,
      sym_command_suffix,
  [9855] = 1,
    ACTIONS(771), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9860] = 2,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym__functional_expression,
  [9867] = 2,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_function_arguments,
  [9874] = 2,
    ACTIONS(37), 1,
      sym__function,
    STATE(202), 1,
      sym_function,
  [9881] = 2,
    ACTIONS(808), 1,
      anon_sym_QMARK,
    ACTIONS(883), 1,
      anon_sym_COLON,
  [9888] = 2,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__functional_expression,
  [9895] = 1,
    ACTIONS(783), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9900] = 1,
    ACTIONS(885), 1,
      aux_sym_comment_token2,
  [9904] = 1,
    ACTIONS(887), 1,
      anon_sym_QMARK,
  [9908] = 1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
  [9912] = 1,
    ACTIONS(891), 1,
      anon_sym_DOT,
  [9916] = 1,
    ACTIONS(893), 1,
      anon_sym_DOT,
  [9920] = 1,
    ACTIONS(895), 1,
      anon_sym_DASH,
  [9924] = 1,
    ACTIONS(897), 1,
      anon_sym_DASH,
  [9928] = 1,
    ACTIONS(899), 1,
      anon_sym_COLON,
  [9932] = 1,
    ACTIONS(901), 1,
      sym__function,
  [9936] = 1,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
  [9940] = 1,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
  [9944] = 1,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
  [9948] = 1,
    ACTIONS(680), 1,
      anon_sym_DOT,
  [9952] = 1,
    ACTIONS(909), 1,
      aux_sym_time_token1,
  [9956] = 1,
    ACTIONS(911), 1,
      anon_sym_QMARK,
  [9960] = 1,
    ACTIONS(519), 1,
      anon_sym_DOT,
  [9964] = 1,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
  [9968] = 1,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [9972] = 1,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
  [9976] = 1,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
  [9980] = 1,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
  [9984] = 1,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
  [9988] = 1,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
  [9992] = 1,
    ACTIONS(927), 1,
      anon_sym_QMARK,
  [9996] = 1,
    ACTIONS(929), 1,
      anon_sym_BANG,
  [10000] = 1,
    ACTIONS(931), 1,
      anon_sym_RBRACK,
  [10004] = 1,
    ACTIONS(933), 1,
      aux_sym_comment_token1,
  [10008] = 1,
    ACTIONS(935), 1,
      anon_sym_BANG,
  [10012] = 1,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [10016] = 1,
    ACTIONS(939), 1,
      anon_sym_SLASH,
  [10020] = 1,
    ACTIONS(382), 1,
      anon_sym_DOT,
  [10024] = 1,
    ACTIONS(941), 1,
      aux_sym__name_token1,
  [10028] = 1,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
  [10032] = 1,
    ACTIONS(945), 1,
      aux_sym_time_token1,
  [10036] = 1,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [10040] = 1,
    ACTIONS(949), 1,
      anon_sym_QMARK,
  [10044] = 1,
    ACTIONS(951), 1,
      aux_sym_time_token1,
  [10048] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [10052] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [10056] = 1,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
  [10060] = 1,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
  [10064] = 1,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
  [10068] = 1,
    ACTIONS(963), 1,
      anon_sym_BANG,
  [10072] = 1,
    ACTIONS(965), 1,
      anon_sym_RBRACK,
  [10076] = 1,
    ACTIONS(967), 1,
      aux_sym_time_token1,
  [10080] = 1,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
  [10084] = 1,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
  [10088] = 1,
    ACTIONS(973), 1,
      aux_sym__name_token1,
  [10092] = 1,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [10096] = 1,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [10100] = 1,
    ACTIONS(979), 1,
      aux_sym__name_token1,
  [10104] = 1,
    ACTIONS(981), 1,
      aux_sym_time_token1,
  [10108] = 1,
    ACTIONS(983), 1,
      aux_sym_date_token1,
  [10112] = 1,
    ACTIONS(983), 1,
      aux_sym_time_token1,
  [10116] = 1,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
  [10120] = 1,
    ACTIONS(987), 1,
      aux_sym_time_token1,
  [10124] = 1,
    ACTIONS(989), 1,
      anon_sym_COLON,
  [10128] = 1,
    ACTIONS(991), 1,
      aux_sym_time_token1,
  [10132] = 1,
    ACTIONS(987), 1,
      aux_sym_date_token1,
  [10136] = 1,
    ACTIONS(993), 1,
      aux_sym_time_token1,
  [10140] = 1,
    ACTIONS(995), 1,
      aux_sym_date_token1,
  [10144] = 1,
    ACTIONS(995), 1,
      aux_sym_time_token1,
  [10148] = 1,
    ACTIONS(997), 1,
      anon_sym_DASH,
  [10152] = 1,
    ACTIONS(999), 1,
      anon_sym_COLON,
  [10156] = 1,
    ACTIONS(1001), 1,
      anon_sym_DASH,
  [10160] = 1,
    ACTIONS(1003), 1,
      anon_sym_DASH,
  [10164] = 1,
    ACTIONS(1005), 1,
      anon_sym_COLON,
  [10168] = 1,
    ACTIONS(1007), 1,
      anon_sym_DASH,
  [10172] = 1,
    ACTIONS(1009), 1,
      anon_sym_DASH,
  [10176] = 1,
    ACTIONS(1011), 1,
      aux_sym_time_token1,
  [10180] = 1,
    ACTIONS(1013), 1,
      aux_sym_time_token1,
  [10184] = 1,
    ACTIONS(1015), 1,
      aux_sym_time_token1,
  [10188] = 1,
    ACTIONS(1017), 1,
      aux_sym_time_token1,
  [10192] = 1,
    ACTIONS(1019), 1,
      aux_sym_time_token1,
  [10196] = 1,
    ACTIONS(1021), 1,
      aux_sym_time_token1,
  [10200] = 1,
    ACTIONS(1023), 1,
      anon_sym_COLON,
  [10204] = 1,
    ACTIONS(1025), 1,
      anon_sym_DASH,
  [10208] = 1,
    ACTIONS(1027), 1,
      anon_sym_DASH,
  [10212] = 1,
    ACTIONS(1029), 1,
      anon_sym_COLON,
  [10216] = 1,
    ACTIONS(1031), 1,
      anon_sym_DASH,
  [10220] = 1,
    ACTIONS(1033), 1,
      anon_sym_DASH,
  [10224] = 1,
    ACTIONS(1035), 1,
      aux_sym_time_token1,
  [10228] = 1,
    ACTIONS(1037), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 123,
  [SMALL_STATE(51)] = 246,
  [SMALL_STATE(52)] = 369,
  [SMALL_STATE(53)] = 440,
  [SMALL_STATE(54)] = 509,
  [SMALL_STATE(55)] = 580,
  [SMALL_STATE(56)] = 646,
  [SMALL_STATE(57)] = 710,
  [SMALL_STATE(58)] = 776,
  [SMALL_STATE(59)] = 840,
  [SMALL_STATE(60)] = 908,
  [SMALL_STATE(61)] = 972,
  [SMALL_STATE(62)] = 1036,
  [SMALL_STATE(63)] = 1150,
  [SMALL_STATE(64)] = 1216,
  [SMALL_STATE(65)] = 1280,
  [SMALL_STATE(66)] = 1348,
  [SMALL_STATE(67)] = 1411,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1541,
  [SMALL_STATE(70)] = 1608,
  [SMALL_STATE(71)] = 1671,
  [SMALL_STATE(72)] = 1738,
  [SMALL_STATE(73)] = 1805,
  [SMALL_STATE(74)] = 1868,
  [SMALL_STATE(75)] = 1935,
  [SMALL_STATE(76)] = 2002,
  [SMALL_STATE(77)] = 2069,
  [SMALL_STATE(78)] = 2136,
  [SMALL_STATE(79)] = 2199,
  [SMALL_STATE(80)] = 2262,
  [SMALL_STATE(81)] = 2327,
  [SMALL_STATE(82)] = 2389,
  [SMALL_STATE(83)] = 2451,
  [SMALL_STATE(84)] = 2513,
  [SMALL_STATE(85)] = 2575,
  [SMALL_STATE(86)] = 2637,
  [SMALL_STATE(87)] = 2698,
  [SMALL_STATE(88)] = 2759,
  [SMALL_STATE(89)] = 2820,
  [SMALL_STATE(90)] = 2881,
  [SMALL_STATE(91)] = 2942,
  [SMALL_STATE(92)] = 3003,
  [SMALL_STATE(93)] = 3064,
  [SMALL_STATE(94)] = 3125,
  [SMALL_STATE(95)] = 3234,
  [SMALL_STATE(96)] = 3295,
  [SMALL_STATE(97)] = 3356,
  [SMALL_STATE(98)] = 3463,
  [SMALL_STATE(99)] = 3524,
  [SMALL_STATE(100)] = 3585,
  [SMALL_STATE(101)] = 3692,
  [SMALL_STATE(102)] = 3753,
  [SMALL_STATE(103)] = 3814,
  [SMALL_STATE(104)] = 3875,
  [SMALL_STATE(105)] = 3936,
  [SMALL_STATE(106)] = 3997,
  [SMALL_STATE(107)] = 4058,
  [SMALL_STATE(108)] = 4119,
  [SMALL_STATE(109)] = 4180,
  [SMALL_STATE(110)] = 4241,
  [SMALL_STATE(111)] = 4302,
  [SMALL_STATE(112)] = 4363,
  [SMALL_STATE(113)] = 4424,
  [SMALL_STATE(114)] = 4485,
  [SMALL_STATE(115)] = 4546,
  [SMALL_STATE(116)] = 4607,
  [SMALL_STATE(117)] = 4668,
  [SMALL_STATE(118)] = 4775,
  [SMALL_STATE(119)] = 4836,
  [SMALL_STATE(120)] = 4897,
  [SMALL_STATE(121)] = 4958,
  [SMALL_STATE(122)] = 5065,
  [SMALL_STATE(123)] = 5126,
  [SMALL_STATE(124)] = 5187,
  [SMALL_STATE(125)] = 5248,
  [SMALL_STATE(126)] = 5355,
  [SMALL_STATE(127)] = 5458,
  [SMALL_STATE(128)] = 5561,
  [SMALL_STATE(129)] = 5664,
  [SMALL_STATE(130)] = 5767,
  [SMALL_STATE(131)] = 5870,
  [SMALL_STATE(132)] = 5973,
  [SMALL_STATE(133)] = 6076,
  [SMALL_STATE(134)] = 6179,
  [SMALL_STATE(135)] = 6282,
  [SMALL_STATE(136)] = 6385,
  [SMALL_STATE(137)] = 6488,
  [SMALL_STATE(138)] = 6551,
  [SMALL_STATE(139)] = 6654,
  [SMALL_STATE(140)] = 6757,
  [SMALL_STATE(141)] = 6860,
  [SMALL_STATE(142)] = 6963,
  [SMALL_STATE(143)] = 7066,
  [SMALL_STATE(144)] = 7169,
  [SMALL_STATE(145)] = 7225,
  [SMALL_STATE(146)] = 7281,
  [SMALL_STATE(147)] = 7337,
  [SMALL_STATE(148)] = 7391,
  [SMALL_STATE(149)] = 7434,
  [SMALL_STATE(150)] = 7479,
  [SMALL_STATE(151)] = 7524,
  [SMALL_STATE(152)] = 7562,
  [SMALL_STATE(153)] = 7602,
  [SMALL_STATE(154)] = 7640,
  [SMALL_STATE(155)] = 7678,
  [SMALL_STATE(156)] = 7718,
  [SMALL_STATE(157)] = 7756,
  [SMALL_STATE(158)] = 7796,
  [SMALL_STATE(159)] = 7837,
  [SMALL_STATE(160)] = 7878,
  [SMALL_STATE(161)] = 7915,
  [SMALL_STATE(162)] = 7954,
  [SMALL_STATE(163)] = 7990,
  [SMALL_STATE(164)] = 8026,
  [SMALL_STATE(165)] = 8062,
  [SMALL_STATE(166)] = 8098,
  [SMALL_STATE(167)] = 8136,
  [SMALL_STATE(168)] = 8170,
  [SMALL_STATE(169)] = 8204,
  [SMALL_STATE(170)] = 8246,
  [SMALL_STATE(171)] = 8288,
  [SMALL_STATE(172)] = 8322,
  [SMALL_STATE(173)] = 8356,
  [SMALL_STATE(174)] = 8398,
  [SMALL_STATE(175)] = 8432,
  [SMALL_STATE(176)] = 8466,
  [SMALL_STATE(177)] = 8504,
  [SMALL_STATE(178)] = 8538,
  [SMALL_STATE(179)] = 8572,
  [SMALL_STATE(180)] = 8609,
  [SMALL_STATE(181)] = 8647,
  [SMALL_STATE(182)] = 8679,
  [SMALL_STATE(183)] = 8711,
  [SMALL_STATE(184)] = 8743,
  [SMALL_STATE(185)] = 8775,
  [SMALL_STATE(186)] = 8807,
  [SMALL_STATE(187)] = 8839,
  [SMALL_STATE(188)] = 8869,
  [SMALL_STATE(189)] = 8899,
  [SMALL_STATE(190)] = 8929,
  [SMALL_STATE(191)] = 8959,
  [SMALL_STATE(192)] = 8989,
  [SMALL_STATE(193)] = 9019,
  [SMALL_STATE(194)] = 9049,
  [SMALL_STATE(195)] = 9079,
  [SMALL_STATE(196)] = 9094,
  [SMALL_STATE(197)] = 9109,
  [SMALL_STATE(198)] = 9124,
  [SMALL_STATE(199)] = 9139,
  [SMALL_STATE(200)] = 9154,
  [SMALL_STATE(201)] = 9169,
  [SMALL_STATE(202)] = 9185,
  [SMALL_STATE(203)] = 9201,
  [SMALL_STATE(204)] = 9213,
  [SMALL_STATE(205)] = 9221,
  [SMALL_STATE(206)] = 9233,
  [SMALL_STATE(207)] = 9244,
  [SMALL_STATE(208)] = 9253,
  [SMALL_STATE(209)] = 9262,
  [SMALL_STATE(210)] = 9273,
  [SMALL_STATE(211)] = 9286,
  [SMALL_STATE(212)] = 9295,
  [SMALL_STATE(213)] = 9306,
  [SMALL_STATE(214)] = 9317,
  [SMALL_STATE(215)] = 9328,
  [SMALL_STATE(216)] = 9338,
  [SMALL_STATE(217)] = 9348,
  [SMALL_STATE(218)] = 9358,
  [SMALL_STATE(219)] = 9368,
  [SMALL_STATE(220)] = 9378,
  [SMALL_STATE(221)] = 9388,
  [SMALL_STATE(222)] = 9398,
  [SMALL_STATE(223)] = 9408,
  [SMALL_STATE(224)] = 9418,
  [SMALL_STATE(225)] = 9428,
  [SMALL_STATE(226)] = 9436,
  [SMALL_STATE(227)] = 9446,
  [SMALL_STATE(228)] = 9456,
  [SMALL_STATE(229)] = 9466,
  [SMALL_STATE(230)] = 9476,
  [SMALL_STATE(231)] = 9486,
  [SMALL_STATE(232)] = 9496,
  [SMALL_STATE(233)] = 9506,
  [SMALL_STATE(234)] = 9516,
  [SMALL_STATE(235)] = 9526,
  [SMALL_STATE(236)] = 9534,
  [SMALL_STATE(237)] = 9544,
  [SMALL_STATE(238)] = 9554,
  [SMALL_STATE(239)] = 9564,
  [SMALL_STATE(240)] = 9574,
  [SMALL_STATE(241)] = 9584,
  [SMALL_STATE(242)] = 9594,
  [SMALL_STATE(243)] = 9604,
  [SMALL_STATE(244)] = 9614,
  [SMALL_STATE(245)] = 9624,
  [SMALL_STATE(246)] = 9634,
  [SMALL_STATE(247)] = 9641,
  [SMALL_STATE(248)] = 9648,
  [SMALL_STATE(249)] = 9655,
  [SMALL_STATE(250)] = 9662,
  [SMALL_STATE(251)] = 9669,
  [SMALL_STATE(252)] = 9676,
  [SMALL_STATE(253)] = 9681,
  [SMALL_STATE(254)] = 9686,
  [SMALL_STATE(255)] = 9691,
  [SMALL_STATE(256)] = 9698,
  [SMALL_STATE(257)] = 9705,
  [SMALL_STATE(258)] = 9712,
  [SMALL_STATE(259)] = 9719,
  [SMALL_STATE(260)] = 9726,
  [SMALL_STATE(261)] = 9733,
  [SMALL_STATE(262)] = 9740,
  [SMALL_STATE(263)] = 9745,
  [SMALL_STATE(264)] = 9752,
  [SMALL_STATE(265)] = 9759,
  [SMALL_STATE(266)] = 9766,
  [SMALL_STATE(267)] = 9773,
  [SMALL_STATE(268)] = 9780,
  [SMALL_STATE(269)] = 9787,
  [SMALL_STATE(270)] = 9794,
  [SMALL_STATE(271)] = 9801,
  [SMALL_STATE(272)] = 9808,
  [SMALL_STATE(273)] = 9815,
  [SMALL_STATE(274)] = 9822,
  [SMALL_STATE(275)] = 9829,
  [SMALL_STATE(276)] = 9836,
  [SMALL_STATE(277)] = 9841,
  [SMALL_STATE(278)] = 9848,
  [SMALL_STATE(279)] = 9855,
  [SMALL_STATE(280)] = 9860,
  [SMALL_STATE(281)] = 9867,
  [SMALL_STATE(282)] = 9874,
  [SMALL_STATE(283)] = 9881,
  [SMALL_STATE(284)] = 9888,
  [SMALL_STATE(285)] = 9895,
  [SMALL_STATE(286)] = 9900,
  [SMALL_STATE(287)] = 9904,
  [SMALL_STATE(288)] = 9908,
  [SMALL_STATE(289)] = 9912,
  [SMALL_STATE(290)] = 9916,
  [SMALL_STATE(291)] = 9920,
  [SMALL_STATE(292)] = 9924,
  [SMALL_STATE(293)] = 9928,
  [SMALL_STATE(294)] = 9932,
  [SMALL_STATE(295)] = 9936,
  [SMALL_STATE(296)] = 9940,
  [SMALL_STATE(297)] = 9944,
  [SMALL_STATE(298)] = 9948,
  [SMALL_STATE(299)] = 9952,
  [SMALL_STATE(300)] = 9956,
  [SMALL_STATE(301)] = 9960,
  [SMALL_STATE(302)] = 9964,
  [SMALL_STATE(303)] = 9968,
  [SMALL_STATE(304)] = 9972,
  [SMALL_STATE(305)] = 9976,
  [SMALL_STATE(306)] = 9980,
  [SMALL_STATE(307)] = 9984,
  [SMALL_STATE(308)] = 9988,
  [SMALL_STATE(309)] = 9992,
  [SMALL_STATE(310)] = 9996,
  [SMALL_STATE(311)] = 10000,
  [SMALL_STATE(312)] = 10004,
  [SMALL_STATE(313)] = 10008,
  [SMALL_STATE(314)] = 10012,
  [SMALL_STATE(315)] = 10016,
  [SMALL_STATE(316)] = 10020,
  [SMALL_STATE(317)] = 10024,
  [SMALL_STATE(318)] = 10028,
  [SMALL_STATE(319)] = 10032,
  [SMALL_STATE(320)] = 10036,
  [SMALL_STATE(321)] = 10040,
  [SMALL_STATE(322)] = 10044,
  [SMALL_STATE(323)] = 10048,
  [SMALL_STATE(324)] = 10052,
  [SMALL_STATE(325)] = 10056,
  [SMALL_STATE(326)] = 10060,
  [SMALL_STATE(327)] = 10064,
  [SMALL_STATE(328)] = 10068,
  [SMALL_STATE(329)] = 10072,
  [SMALL_STATE(330)] = 10076,
  [SMALL_STATE(331)] = 10080,
  [SMALL_STATE(332)] = 10084,
  [SMALL_STATE(333)] = 10088,
  [SMALL_STATE(334)] = 10092,
  [SMALL_STATE(335)] = 10096,
  [SMALL_STATE(336)] = 10100,
  [SMALL_STATE(337)] = 10104,
  [SMALL_STATE(338)] = 10108,
  [SMALL_STATE(339)] = 10112,
  [SMALL_STATE(340)] = 10116,
  [SMALL_STATE(341)] = 10120,
  [SMALL_STATE(342)] = 10124,
  [SMALL_STATE(343)] = 10128,
  [SMALL_STATE(344)] = 10132,
  [SMALL_STATE(345)] = 10136,
  [SMALL_STATE(346)] = 10140,
  [SMALL_STATE(347)] = 10144,
  [SMALL_STATE(348)] = 10148,
  [SMALL_STATE(349)] = 10152,
  [SMALL_STATE(350)] = 10156,
  [SMALL_STATE(351)] = 10160,
  [SMALL_STATE(352)] = 10164,
  [SMALL_STATE(353)] = 10168,
  [SMALL_STATE(354)] = 10172,
  [SMALL_STATE(355)] = 10176,
  [SMALL_STATE(356)] = 10180,
  [SMALL_STATE(357)] = 10184,
  [SMALL_STATE(358)] = 10188,
  [SMALL_STATE(359)] = 10192,
  [SMALL_STATE(360)] = 10196,
  [SMALL_STATE(361)] = 10200,
  [SMALL_STATE(362)] = 10204,
  [SMALL_STATE(363)] = 10208,
  [SMALL_STATE(364)] = 10212,
  [SMALL_STATE(365)] = 10216,
  [SMALL_STATE(366)] = 10220,
  [SMALL_STATE(367)] = 10224,
  [SMALL_STATE(368)] = 10228,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(258),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(249),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(205),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(208),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(167),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(343),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(250),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(172),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(167),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(200),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(114),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(225),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(252),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(336),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(333),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(332),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(204),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(120),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(104),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(102),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(260),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(263),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(264),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(270),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(312),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(286),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(306),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(145),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(258),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(249),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(205),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(208),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(167),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(343),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(250),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(172),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(167),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(200),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(114),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(225),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(252),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(336),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(333),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(332),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(204),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(120),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(104),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(102),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(259),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(260),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(263),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(264),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(171),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(171),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(270),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(312),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(286),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(306),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(145),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(275),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(140),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(140),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(251),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_sql, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_sql, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 1),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(265),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(142),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(142),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(197),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(206),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(256),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(214),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(62),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(274),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(233),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [913] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
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
