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
#define STATE_COUNT 368
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
      if (lookahead == '!') ADVANCE(501);
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(486);
      if (lookahead == '&') ADVANCE(466);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '+') ADVANCE(457);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '4') ADVANCE(492);
      if (lookahead == ':') ADVANCE(453);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(498);
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
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(409);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(450);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(505);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(500);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '&') ADVANCE(466);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '+') ADVANCE(457);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(463);
      if (lookahead == '4') ADVANCE(86);
      if (lookahead == ':') ADVANCE(453);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(54);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '\\') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '$') ADVANCE(486);
      if (lookahead == '&') ADVANCE(466);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '+') ADVANCE(457);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(463);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(442);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '&') ADVANCE(466);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '+') ADVANCE(457);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '/') ADVANCE(463);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '/') ADVANCE(564);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(568);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(17);
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
      if (lookahead == '=') ADVANCE(520);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(456);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(489);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(393);
      END_STATE();
    case 38:
      if (lookahead == '|') ADVANCE(469);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(543);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(314);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(556);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(557);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 157:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(569);
      END_STATE();
    case 158:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(573);
      END_STATE();
    case 159:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(595);
      END_STATE();
    case 160:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 161:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(575);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 200:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(154);
      END_STATE();
    case 201:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(547);
      END_STATE();
    case 202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(527);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      if (lookahead == '_') ADVANCE(213);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 232:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 282:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 284:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 285:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(373);
      END_STATE();
    case 286:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(209);
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
          lookahead == 'q') ADVANCE(375);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 368:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 371:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 372:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 373:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 374:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 375:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 376:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 377:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 380:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 382:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 383:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 384:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 385:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 386:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 387:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      END_STATE();
    case 388:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(431);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 392:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 393:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 394:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 395:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(506);
      END_STATE();
    case 396:
      if (eof) ADVANCE(398);
      if (lookahead == '!') ADVANCE(501);
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '$') ADVANCE(486);
      if (lookahead == '&') ADVANCE(466);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '+') ADVANCE(457);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '4') ADVANCE(492);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '?') ADVANCE(498);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '|') ADVANCE(467);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 397:
      if (eof) ADVANCE(398);
      if (lookahead == '!') ADVANCE(501);
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(486);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '4') ADVANCE(492);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(451);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '?') ADVANCE(497);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(491);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      if (lookahead == '_') ADVANCE(213);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(547);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
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
          lookahead == 'b') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(520);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(482);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(483);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(483);
      if (lookahead == '>') ADVANCE(456);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(484);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '/') ADVANCE(564);
      if (lookahead == '=') ADVANCE(485);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(485);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(464);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(465);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(477);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '>') ADVANCE(489);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(480);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead == '?') ADVANCE(479);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(29);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(515);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(37);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(25);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__for_each_e);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__for_each_f);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__end_for_each_e);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__end_for_each_f);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__while_e);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__while_f);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__until_e);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__until_f);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__for_e);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__for_f);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__end_for_e);
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__end_for_f);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__use_e);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__use_f);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__end_use_e);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__end_use_f);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__repeat_e);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__repeat_f);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__end_while_e);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__end_while_f);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__case_of_e);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__case_of_f);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__end_case_e);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__end_case_f);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 602:
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
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 18},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 18},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 21},
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
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 389},
  [204] = {.lex_state = 389},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 389},
  [208] = {.lex_state = 389},
  [209] = {.lex_state = 21},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 389},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 397},
  [217] = {.lex_state = 397},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 397},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 397},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 397},
  [225] = {.lex_state = 397},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 397},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 397},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 397},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 397},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 397},
  [244] = {.lex_state = 397},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 397},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 397},
  [255] = {.lex_state = 397},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 397},
  [258] = {.lex_state = 397},
  [259] = {.lex_state = 562},
  [260] = {.lex_state = 562},
  [261] = {.lex_state = 21},
  [262] = {.lex_state = 562},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 562},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 562},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 562},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 21},
  [276] = {.lex_state = 397},
  [277] = {.lex_state = 397},
  [278] = {.lex_state = 562},
  [279] = {.lex_state = 397},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 397},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 397},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 396},
  [291] = {.lex_state = 396},
  [292] = {.lex_state = 397},
  [293] = {.lex_state = 397},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 397},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 397},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 565},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 21},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 397},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 21},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 21},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 397},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 396},
  [348] = {.lex_state = 397},
  [349] = {.lex_state = 396},
  [350] = {.lex_state = 396},
  [351] = {.lex_state = 397},
  [352] = {.lex_state = 396},
  [353] = {.lex_state = 396},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 397},
  [361] = {.lex_state = 396},
  [362] = {.lex_state = 396},
  [363] = {.lex_state = 397},
  [364] = {.lex_state = 396},
  [365] = {.lex_state = 396},
  [366] = {.lex_state = 18},
  [367] = {.lex_state = 396},
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
    [sym_source] = STATE(305),
    [sym__statement] = STATE(8),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(8),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
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
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(8),
    [sym_break] = STATE(8),
    [sym_continue] = STATE(8),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(8),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(8),
    [sym_begin_sql] = STATE(2),
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
    [sym__statement] = STATE(3),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(3),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
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
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(3),
    [sym_break] = STATE(3),
    [sym_continue] = STATE(3),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(3),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(3),
    [sym_begin_sql] = STATE(2),
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
    [sym__end_sql_e] = ACTIONS(67),
    [sym__end_sql_f] = ACTIONS(67),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(4),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(4),
    [sym_declare_block] = STATE(4),
    [sym_alias_block] = STATE(4),
    [sym_class_extends] = STATE(4),
    [sym_class_constructor] = STATE(4),
    [sym_var_declaration_block] = STATE(4),
    [sym_classic_compiler_block] = STATE(4),
    [sym_property_declaration_block] = STATE(4),
    [sym_return_block] = STATE(4),
    [sym_assignment_block] = STATE(4),
    [sym_function_call] = STATE(4),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(4),
    [sym_break] = STATE(4),
    [sym_continue] = STATE(4),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(4),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(4),
    [sym_begin_sql] = STATE(2),
    [sym_end_sql] = STATE(89),
    [sym_sql_block] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
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
    [sym__end_sql_e] = ACTIONS(67),
    [sym__end_sql_f] = ACTIONS(67),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(4),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(4),
    [sym_declare_block] = STATE(4),
    [sym_alias_block] = STATE(4),
    [sym_class_extends] = STATE(4),
    [sym_class_constructor] = STATE(4),
    [sym_var_declaration_block] = STATE(4),
    [sym_classic_compiler_block] = STATE(4),
    [sym_property_declaration_block] = STATE(4),
    [sym_return_block] = STATE(4),
    [sym_assignment_block] = STATE(4),
    [sym_function_call] = STATE(4),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(4),
    [sym_break] = STATE(4),
    [sym_continue] = STATE(4),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(4),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(4),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__local] = ACTIONS(71),
    [sym__exposed] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(80),
    [aux_sym_numeric_parameter_token1] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(89),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(92),
    [sym__hex_literal] = ACTIONS(95),
    [aux_sym__num_literal_token1] = ACTIONS(83),
    [aux_sym__exp_literal_token1] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__class_constructor] = ACTIONS(101),
    [sym__class_extends] = ACTIONS(104),
    [sym__var] = ACTIONS(107),
    [sym__property] = ACTIONS(110),
    [sym__alias] = ACTIONS(113),
    [sym__declare] = ACTIONS(116),
    [sym__function] = ACTIONS(119),
    [sym__return] = ACTIONS(122),
    [sym__break] = ACTIONS(125),
    [sym__continue] = ACTIONS(128),
    [sym__this] = ACTIONS(131),
    [sym__form] = ACTIONS(134),
    [sym__super] = ACTIONS(137),
    [sym__class_store_4d] = ACTIONS(140),
    [sym__class_store_ds] = ACTIONS(140),
    [sym__class_store_cs] = ACTIONS(140),
    [sym__system_variable_ok] = ACTIONS(143),
    [sym__system_variable_document] = ACTIONS(143),
    [sym__system_variable_flddelimit] = ACTIONS(143),
    [sym__system_variable_recdelimit] = ACTIONS(143),
    [sym__system_variable_error] = ACTIONS(146),
    [sym__system_variable_error_method] = ACTIONS(143),
    [sym__system_variable_error_line] = ACTIONS(143),
    [sym__system_variable_error_formula] = ACTIONS(143),
    [sym__system_variable_mousedown] = ACTIONS(143),
    [sym__system_variable_mousex] = ACTIONS(143),
    [sym__system_variable_mousey] = ACTIONS(143),
    [sym__system_variable_keycode] = ACTIONS(143),
    [sym__system_variable_modifiers] = ACTIONS(143),
    [sym__system_variable_mouseproc] = ACTIONS(143),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(149),
    [anon_sym_SLASH_SLASH] = ACTIONS(152),
    [anon_sym_SLASH_STAR] = ACTIONS(155),
    [sym__if_e] = ACTIONS(158),
    [sym__if_f] = ACTIONS(158),
    [sym__begin_sql_e] = ACTIONS(161),
    [sym__begin_sql_f] = ACTIONS(161),
    [sym__end_sql_e] = ACTIONS(69),
    [sym__end_sql_f] = ACTIONS(69),
  },
  [5] = {
    [sym__statement] = STATE(125),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(125),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(125),
    [sym_declare_block] = STATE(125),
    [sym_alias_block] = STATE(125),
    [sym_class_extends] = STATE(125),
    [sym_class_constructor] = STATE(125),
    [sym_var_declaration_block] = STATE(125),
    [sym_classic_compiler_block] = STATE(125),
    [sym_property_declaration_block] = STATE(125),
    [sym_return_block] = STATE(125),
    [sym_assignment_block] = STATE(125),
    [sym_function_call] = STATE(125),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(125),
    [sym_break] = STATE(125),
    [sym_continue] = STATE(125),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(125),
    [sym_if] = STATE(294),
    [sym_end_if] = STATE(84),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(125),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(125),
    [aux_sym_if_block_repeat1] = STATE(6),
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
    [sym__end_if_e] = ACTIONS(164),
    [sym__end_if_f] = ACTIONS(164),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [6] = {
    [sym__statement] = STATE(125),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(125),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(125),
    [sym_declare_block] = STATE(125),
    [sym_alias_block] = STATE(125),
    [sym_class_extends] = STATE(125),
    [sym_class_constructor] = STATE(125),
    [sym_var_declaration_block] = STATE(125),
    [sym_classic_compiler_block] = STATE(125),
    [sym_property_declaration_block] = STATE(125),
    [sym_return_block] = STATE(125),
    [sym_assignment_block] = STATE(125),
    [sym_function_call] = STATE(125),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(125),
    [sym_break] = STATE(125),
    [sym_continue] = STATE(125),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(125),
    [sym_if] = STATE(294),
    [sym_end_if] = STATE(90),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(125),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(125),
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
    [sym__end_if_e] = ACTIONS(164),
    [sym__end_if_f] = ACTIONS(164),
    [sym__begin_sql_e] = ACTIONS(65),
    [sym__begin_sql_f] = ACTIONS(65),
  },
  [7] = {
    [sym__statement] = STATE(125),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(125),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(125),
    [sym_declare_block] = STATE(125),
    [sym_alias_block] = STATE(125),
    [sym_class_extends] = STATE(125),
    [sym_class_constructor] = STATE(125),
    [sym_var_declaration_block] = STATE(125),
    [sym_classic_compiler_block] = STATE(125),
    [sym_property_declaration_block] = STATE(125),
    [sym_return_block] = STATE(125),
    [sym_assignment_block] = STATE(125),
    [sym_function_call] = STATE(125),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(125),
    [sym_break] = STATE(125),
    [sym_continue] = STATE(125),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(125),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(125),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(125),
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
    [sym__statement] = STATE(4),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(4),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(4),
    [sym_declare_block] = STATE(4),
    [sym_alias_block] = STATE(4),
    [sym_class_extends] = STATE(4),
    [sym_class_constructor] = STATE(4),
    [sym_var_declaration_block] = STATE(4),
    [sym_classic_compiler_block] = STATE(4),
    [sym_property_declaration_block] = STATE(4),
    [sym_return_block] = STATE(4),
    [sym_assignment_block] = STATE(4),
    [sym_function_call] = STATE(4),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(4),
    [sym_break] = STATE(4),
    [sym_continue] = STATE(4),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(4),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(4),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
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
    [sym__statement] = STATE(144),
    [sym__scope] = STATE(283),
    [sym_function_name] = STATE(282),
    [sym_alias_name] = STATE(281),
    [sym_local_variable] = STATE(151),
    [sym_interprocess_variable] = STATE(151),
    [sym_numeric_parameter] = STATE(151),
    [sym__variable] = STATE(160),
    [sym__mutable] = STATE(184),
    [sym__immutable] = STATE(172),
    [sym_class_function] = STATE(45),
    [sym_generic_function] = STATE(45),
    [sym__function_call] = STATE(45),
    [sym__single_condition] = STATE(172),
    [sym__condition] = STATE(300),
    [sym_ternary_block] = STATE(144),
    [sym_time] = STATE(173),
    [sym_date] = STATE(173),
    [sym__dec_literal] = STATE(169),
    [sym__num_literal] = STATE(169),
    [sym__exp_literal] = STATE(169),
    [sym_number] = STATE(173),
    [sym_string] = STATE(173),
    [sym_constant] = STATE(172),
    [sym_function_block] = STATE(144),
    [sym_declare_block] = STATE(144),
    [sym_alias_block] = STATE(144),
    [sym_class_extends] = STATE(144),
    [sym_class_constructor] = STATE(144),
    [sym_var_declaration_block] = STATE(144),
    [sym_classic_compiler_block] = STATE(144),
    [sym_property_declaration_block] = STATE(144),
    [sym_return_block] = STATE(144),
    [sym_assignment_block] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_var] = STATE(213),
    [sym_property] = STATE(275),
    [sym_alias] = STATE(245),
    [sym_declare] = STATE(272),
    [sym_function] = STATE(202),
    [sym_return] = STATE(144),
    [sym_break] = STATE(144),
    [sym_continue] = STATE(144),
    [sym_this] = STATE(297),
    [sym_form] = STATE(297),
    [sym_super] = STATE(284),
    [sym__class_store] = STATE(158),
    [sym__class] = STATE(178),
    [sym_system_variable] = STATE(172),
    [sym__classic_compiler_longint] = STATE(296),
    [sym_classic_compiler] = STATE(295),
    [sym_comment] = STATE(144),
    [sym_if] = STATE(294),
    [sym__if] = STATE(5),
    [sym_if_block] = STATE(144),
    [sym_begin_sql] = STATE(2),
    [sym_sql_block] = STATE(144),
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
    [aux_sym__mutable_repeat1] = STATE(11),
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
    [aux_sym__mutable_repeat1] = STATE(12),
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
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(275),
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
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym__local] = ACTIONS(277),
    [sym__exposed] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_TILDE_PIPE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(277),
    [anon_sym_QMARK_PLUS] = ACTIONS(277),
    [anon_sym_QMARK_DASH] = ACTIONS(277),
    [anon_sym_PLUS_EQ] = ACTIONS(277),
    [anon_sym_DASH_EQ] = ACTIONS(277),
    [anon_sym_STAR_EQ] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_LT_GT] = ACTIONS(277),
    [aux_sym_numeric_parameter_token1] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(279),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(277),
    [sym__hex_literal] = ACTIONS(277),
    [aux_sym__num_literal_token1] = ACTIONS(279),
    [aux_sym__exp_literal_token1] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym__class_constructor] = ACTIONS(277),
    [sym__class_extends] = ACTIONS(277),
    [sym__var] = ACTIONS(277),
    [sym__property] = ACTIONS(277),
    [sym__alias] = ACTIONS(277),
    [sym__declare] = ACTIONS(277),
    [sym__function] = ACTIONS(277),
    [sym__return] = ACTIONS(277),
    [sym__break] = ACTIONS(277),
    [sym__continue] = ACTIONS(277),
    [sym__this] = ACTIONS(277),
    [sym__form] = ACTIONS(277),
    [sym__super] = ACTIONS(277),
    [sym__class_store_4d] = ACTIONS(277),
    [sym__class_store_ds] = ACTIONS(277),
    [sym__class_store_cs] = ACTIONS(277),
    [sym__system_variable_ok] = ACTIONS(277),
    [sym__system_variable_document] = ACTIONS(277),
    [sym__system_variable_flddelimit] = ACTIONS(277),
    [sym__system_variable_recdelimit] = ACTIONS(277),
    [sym__system_variable_error] = ACTIONS(279),
    [sym__system_variable_error_method] = ACTIONS(277),
    [sym__system_variable_error_line] = ACTIONS(277),
    [sym__system_variable_error_formula] = ACTIONS(277),
    [sym__system_variable_mousedown] = ACTIONS(277),
    [sym__system_variable_mousex] = ACTIONS(277),
    [sym__system_variable_mousey] = ACTIONS(277),
    [sym__system_variable_keycode] = ACTIONS(277),
    [sym__system_variable_modifiers] = ACTIONS(277),
    [sym__system_variable_mouseproc] = ACTIONS(277),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_STAR] = ACTIONS(277),
    [sym__if_e] = ACTIONS(277),
    [sym__if_f] = ACTIONS(279),
    [sym__else_e] = ACTIONS(277),
    [sym__else_f] = ACTIONS(277),
    [sym__end_if_e] = ACTIONS(277),
    [sym__end_if_f] = ACTIONS(277),
    [sym__begin_sql_e] = ACTIONS(277),
    [sym__begin_sql_f] = ACTIONS(277),
    [sym__end_sql_e] = ACTIONS(277),
    [sym__end_sql_f] = ACTIONS(277),
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
    [anon_sym_LBRACE] = ACTIONS(288),
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
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym__local] = ACTIONS(277),
    [sym__exposed] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_TILDE_PIPE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_QMARK_QMARK] = ACTIONS(277),
    [anon_sym_QMARK_PLUS] = ACTIONS(277),
    [anon_sym_QMARK_DASH] = ACTIONS(277),
    [anon_sym_PLUS_EQ] = ACTIONS(277),
    [anon_sym_DASH_EQ] = ACTIONS(277),
    [anon_sym_STAR_EQ] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_LT_GT] = ACTIONS(277),
    [aux_sym_numeric_parameter_token1] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(279),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(277),
    [sym__hex_literal] = ACTIONS(277),
    [aux_sym__num_literal_token1] = ACTIONS(279),
    [aux_sym__exp_literal_token1] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym__class_constructor] = ACTIONS(277),
    [sym__class_extends] = ACTIONS(277),
    [sym__var] = ACTIONS(277),
    [sym__property] = ACTIONS(277),
    [sym__alias] = ACTIONS(277),
    [sym__declare] = ACTIONS(277),
    [sym__function] = ACTIONS(277),
    [sym__return] = ACTIONS(277),
    [sym__break] = ACTIONS(277),
    [sym__continue] = ACTIONS(277),
    [sym__this] = ACTIONS(277),
    [sym__form] = ACTIONS(277),
    [sym__super] = ACTIONS(277),
    [sym__class_store_4d] = ACTIONS(277),
    [sym__class_store_ds] = ACTIONS(277),
    [sym__class_store_cs] = ACTIONS(277),
    [sym__system_variable_ok] = ACTIONS(277),
    [sym__system_variable_document] = ACTIONS(277),
    [sym__system_variable_flddelimit] = ACTIONS(277),
    [sym__system_variable_recdelimit] = ACTIONS(277),
    [sym__system_variable_error] = ACTIONS(279),
    [sym__system_variable_error_method] = ACTIONS(277),
    [sym__system_variable_error_line] = ACTIONS(277),
    [sym__system_variable_error_formula] = ACTIONS(277),
    [sym__system_variable_mousedown] = ACTIONS(277),
    [sym__system_variable_mousex] = ACTIONS(277),
    [sym__system_variable_mousey] = ACTIONS(277),
    [sym__system_variable_keycode] = ACTIONS(277),
    [sym__system_variable_modifiers] = ACTIONS(277),
    [sym__system_variable_mouseproc] = ACTIONS(277),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_STAR] = ACTIONS(277),
    [sym__if_e] = ACTIONS(277),
    [sym__if_f] = ACTIONS(279),
    [sym__else_e] = ACTIONS(277),
    [sym__else_f] = ACTIONS(277),
    [sym__end_if_e] = ACTIONS(277),
    [sym__end_if_f] = ACTIONS(277),
    [sym__begin_sql_e] = ACTIONS(277),
    [sym__begin_sql_f] = ACTIONS(277),
    [sym__end_sql_e] = ACTIONS(277),
    [sym__end_sql_f] = ACTIONS(277),
  },
  [15] = {
    [aux_sym__mutable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym__local] = ACTIONS(290),
    [sym__exposed] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_AMP_AMP] = ACTIONS(290),
    [anon_sym_PIPE_PIPE] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(290),
    [anon_sym_TILDE_PIPE] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_POUND] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_GT_GT] = ACTIONS(290),
    [anon_sym_QMARK_QMARK] = ACTIONS(290),
    [anon_sym_QMARK_PLUS] = ACTIONS(290),
    [anon_sym_QMARK_DASH] = ACTIONS(290),
    [anon_sym_PLUS_EQ] = ACTIONS(290),
    [anon_sym_DASH_EQ] = ACTIONS(290),
    [anon_sym_STAR_EQ] = ACTIONS(290),
    [anon_sym_SLASH_EQ] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_LT_GT] = ACTIONS(290),
    [aux_sym_numeric_parameter_token1] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(292),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(290),
    [sym__hex_literal] = ACTIONS(290),
    [aux_sym__num_literal_token1] = ACTIONS(292),
    [aux_sym__exp_literal_token1] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [sym__class_constructor] = ACTIONS(290),
    [sym__class_extends] = ACTIONS(290),
    [sym__var] = ACTIONS(290),
    [sym__property] = ACTIONS(290),
    [sym__alias] = ACTIONS(290),
    [sym__declare] = ACTIONS(290),
    [sym__function] = ACTIONS(290),
    [sym__return] = ACTIONS(290),
    [sym__break] = ACTIONS(290),
    [sym__continue] = ACTIONS(290),
    [sym__this] = ACTIONS(290),
    [sym__form] = ACTIONS(290),
    [sym__super] = ACTIONS(290),
    [sym__class_store_4d] = ACTIONS(290),
    [sym__class_store_ds] = ACTIONS(290),
    [sym__class_store_cs] = ACTIONS(290),
    [sym__system_variable_ok] = ACTIONS(290),
    [sym__system_variable_document] = ACTIONS(290),
    [sym__system_variable_flddelimit] = ACTIONS(290),
    [sym__system_variable_recdelimit] = ACTIONS(290),
    [sym__system_variable_error] = ACTIONS(292),
    [sym__system_variable_error_method] = ACTIONS(290),
    [sym__system_variable_error_line] = ACTIONS(290),
    [sym__system_variable_error_formula] = ACTIONS(290),
    [sym__system_variable_mousedown] = ACTIONS(290),
    [sym__system_variable_mousex] = ACTIONS(290),
    [sym__system_variable_mousey] = ACTIONS(290),
    [sym__system_variable_keycode] = ACTIONS(290),
    [sym__system_variable_modifiers] = ACTIONS(290),
    [sym__system_variable_mouseproc] = ACTIONS(290),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(290),
    [anon_sym_SLASH_STAR] = ACTIONS(290),
    [sym__if_e] = ACTIONS(290),
    [sym__if_f] = ACTIONS(292),
    [sym__else_e] = ACTIONS(290),
    [sym__else_f] = ACTIONS(290),
    [sym__end_if_e] = ACTIONS(290),
    [sym__end_if_f] = ACTIONS(290),
    [sym__begin_sql_e] = ACTIONS(290),
    [sym__begin_sql_f] = ACTIONS(290),
    [sym__end_sql_e] = ACTIONS(290),
    [sym__end_sql_f] = ACTIONS(290),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym__local] = ACTIONS(294),
    [sym__exposed] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_TILDE_PIPE] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(294),
    [anon_sym_QMARK_QMARK] = ACTIONS(294),
    [anon_sym_QMARK_PLUS] = ACTIONS(294),
    [anon_sym_QMARK_DASH] = ACTIONS(294),
    [anon_sym_PLUS_EQ] = ACTIONS(294),
    [anon_sym_DASH_EQ] = ACTIONS(294),
    [anon_sym_STAR_EQ] = ACTIONS(294),
    [anon_sym_SLASH_EQ] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_LT_GT] = ACTIONS(294),
    [aux_sym_numeric_parameter_token1] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(294),
    [sym__hex_literal] = ACTIONS(294),
    [aux_sym__num_literal_token1] = ACTIONS(296),
    [aux_sym__exp_literal_token1] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [sym__class_constructor] = ACTIONS(294),
    [sym__class_extends] = ACTIONS(294),
    [sym__var] = ACTIONS(294),
    [sym__property] = ACTIONS(294),
    [sym__alias] = ACTIONS(294),
    [sym__declare] = ACTIONS(294),
    [sym__function] = ACTIONS(294),
    [sym__return] = ACTIONS(294),
    [sym__break] = ACTIONS(294),
    [sym__continue] = ACTIONS(294),
    [sym__this] = ACTIONS(294),
    [sym__form] = ACTIONS(294),
    [sym__super] = ACTIONS(294),
    [sym__class_store_4d] = ACTIONS(294),
    [sym__class_store_ds] = ACTIONS(294),
    [sym__class_store_cs] = ACTIONS(294),
    [sym__system_variable_ok] = ACTIONS(294),
    [sym__system_variable_document] = ACTIONS(294),
    [sym__system_variable_flddelimit] = ACTIONS(294),
    [sym__system_variable_recdelimit] = ACTIONS(294),
    [sym__system_variable_error] = ACTIONS(296),
    [sym__system_variable_error_method] = ACTIONS(294),
    [sym__system_variable_error_line] = ACTIONS(294),
    [sym__system_variable_error_formula] = ACTIONS(294),
    [sym__system_variable_mousedown] = ACTIONS(294),
    [sym__system_variable_mousex] = ACTIONS(294),
    [sym__system_variable_mousey] = ACTIONS(294),
    [sym__system_variable_keycode] = ACTIONS(294),
    [sym__system_variable_modifiers] = ACTIONS(294),
    [sym__system_variable_mouseproc] = ACTIONS(294),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(294),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_SLASH_STAR] = ACTIONS(294),
    [sym__if_e] = ACTIONS(294),
    [sym__if_f] = ACTIONS(296),
    [sym__else_e] = ACTIONS(294),
    [sym__else_f] = ACTIONS(294),
    [sym__end_if_e] = ACTIONS(294),
    [sym__end_if_f] = ACTIONS(294),
    [sym__begin_sql_e] = ACTIONS(294),
    [sym__begin_sql_f] = ACTIONS(294),
    [sym__end_sql_e] = ACTIONS(294),
    [sym__end_sql_f] = ACTIONS(294),
  },
  [17] = {
    [aux_sym__mutable_repeat1] = STATE(15),
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
    [anon_sym_LT_GT] = ACTIONS(300),
    [aux_sym_numeric_parameter_token1] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(267),
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
  [18] = {
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
    [anon_sym_LBRACE] = ACTIONS(304),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym__local] = ACTIONS(308),
    [sym__exposed] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_AMP_AMP] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_TILDE_PIPE] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_GT_GT] = ACTIONS(308),
    [anon_sym_QMARK_QMARK] = ACTIONS(308),
    [anon_sym_QMARK_PLUS] = ACTIONS(308),
    [anon_sym_QMARK_DASH] = ACTIONS(308),
    [anon_sym_PLUS_EQ] = ACTIONS(308),
    [anon_sym_DASH_EQ] = ACTIONS(308),
    [anon_sym_STAR_EQ] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_LT_GT] = ACTIONS(308),
    [aux_sym_numeric_parameter_token1] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(308),
    [sym__hex_literal] = ACTIONS(308),
    [aux_sym__num_literal_token1] = ACTIONS(310),
    [aux_sym__exp_literal_token1] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__class_constructor] = ACTIONS(308),
    [sym__class_extends] = ACTIONS(308),
    [sym__var] = ACTIONS(308),
    [sym__property] = ACTIONS(308),
    [sym__alias] = ACTIONS(308),
    [sym__declare] = ACTIONS(308),
    [sym__function] = ACTIONS(308),
    [sym__return] = ACTIONS(308),
    [sym__break] = ACTIONS(308),
    [sym__continue] = ACTIONS(308),
    [sym__this] = ACTIONS(308),
    [sym__form] = ACTIONS(308),
    [sym__super] = ACTIONS(308),
    [sym__class_store_4d] = ACTIONS(308),
    [sym__class_store_ds] = ACTIONS(308),
    [sym__class_store_cs] = ACTIONS(308),
    [sym__system_variable_ok] = ACTIONS(308),
    [sym__system_variable_document] = ACTIONS(308),
    [sym__system_variable_flddelimit] = ACTIONS(308),
    [sym__system_variable_recdelimit] = ACTIONS(308),
    [sym__system_variable_error] = ACTIONS(310),
    [sym__system_variable_error_method] = ACTIONS(308),
    [sym__system_variable_error_line] = ACTIONS(308),
    [sym__system_variable_error_formula] = ACTIONS(308),
    [sym__system_variable_mousedown] = ACTIONS(308),
    [sym__system_variable_mousex] = ACTIONS(308),
    [sym__system_variable_mousey] = ACTIONS(308),
    [sym__system_variable_keycode] = ACTIONS(308),
    [sym__system_variable_modifiers] = ACTIONS(308),
    [sym__system_variable_mouseproc] = ACTIONS(308),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_SLASH_STAR] = ACTIONS(308),
    [sym__if_e] = ACTIONS(308),
    [sym__if_f] = ACTIONS(310),
    [sym__else_e] = ACTIONS(308),
    [sym__else_f] = ACTIONS(308),
    [sym__end_if_e] = ACTIONS(308),
    [sym__end_if_f] = ACTIONS(308),
    [sym__begin_sql_e] = ACTIONS(308),
    [sym__begin_sql_f] = ACTIONS(308),
    [sym__end_sql_e] = ACTIONS(308),
    [sym__end_sql_f] = ACTIONS(308),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym__local] = ACTIONS(312),
    [sym__exposed] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_AMP_AMP] = ACTIONS(312),
    [anon_sym_PIPE_PIPE] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_TILDE_PIPE] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LT_LT] = ACTIONS(312),
    [anon_sym_GT_GT] = ACTIONS(312),
    [anon_sym_QMARK_QMARK] = ACTIONS(312),
    [anon_sym_QMARK_PLUS] = ACTIONS(312),
    [anon_sym_QMARK_DASH] = ACTIONS(312),
    [anon_sym_PLUS_EQ] = ACTIONS(312),
    [anon_sym_DASH_EQ] = ACTIONS(312),
    [anon_sym_STAR_EQ] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LT_GT] = ACTIONS(312),
    [aux_sym_numeric_parameter_token1] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(312),
    [sym__hex_literal] = ACTIONS(312),
    [aux_sym__num_literal_token1] = ACTIONS(314),
    [aux_sym__exp_literal_token1] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [sym__class_constructor] = ACTIONS(312),
    [sym__class_extends] = ACTIONS(312),
    [sym__var] = ACTIONS(312),
    [sym__property] = ACTIONS(312),
    [sym__alias] = ACTIONS(312),
    [sym__declare] = ACTIONS(312),
    [sym__function] = ACTIONS(312),
    [sym__return] = ACTIONS(312),
    [sym__break] = ACTIONS(312),
    [sym__continue] = ACTIONS(312),
    [sym__this] = ACTIONS(312),
    [sym__form] = ACTIONS(312),
    [sym__super] = ACTIONS(312),
    [sym__class_store_4d] = ACTIONS(312),
    [sym__class_store_ds] = ACTIONS(312),
    [sym__class_store_cs] = ACTIONS(312),
    [sym__system_variable_ok] = ACTIONS(312),
    [sym__system_variable_document] = ACTIONS(312),
    [sym__system_variable_flddelimit] = ACTIONS(312),
    [sym__system_variable_recdelimit] = ACTIONS(312),
    [sym__system_variable_error] = ACTIONS(314),
    [sym__system_variable_error_method] = ACTIONS(312),
    [sym__system_variable_error_line] = ACTIONS(312),
    [sym__system_variable_error_formula] = ACTIONS(312),
    [sym__system_variable_mousedown] = ACTIONS(312),
    [sym__system_variable_mousex] = ACTIONS(312),
    [sym__system_variable_mousey] = ACTIONS(312),
    [sym__system_variable_keycode] = ACTIONS(312),
    [sym__system_variable_modifiers] = ACTIONS(312),
    [sym__system_variable_mouseproc] = ACTIONS(312),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__if_e] = ACTIONS(312),
    [sym__if_f] = ACTIONS(314),
    [sym__else_e] = ACTIONS(312),
    [sym__else_f] = ACTIONS(312),
    [sym__end_if_e] = ACTIONS(312),
    [sym__end_if_f] = ACTIONS(312),
    [sym__begin_sql_e] = ACTIONS(312),
    [sym__begin_sql_f] = ACTIONS(312),
    [sym__end_sql_e] = ACTIONS(312),
    [sym__end_sql_f] = ACTIONS(312),
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
    [sym__binary_operator] = STATE(141),
    [aux_sym__condition_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym__local] = ACTIONS(322),
    [sym__exposed] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(326),
    [anon_sym_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym_TILDE_PIPE] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_GT_GT] = ACTIONS(326),
    [anon_sym_QMARK_QMARK] = ACTIONS(326),
    [anon_sym_QMARK_PLUS] = ACTIONS(326),
    [anon_sym_QMARK_DASH] = ACTIONS(326),
    [anon_sym_PLUS_EQ] = ACTIONS(326),
    [anon_sym_DASH_EQ] = ACTIONS(326),
    [anon_sym_STAR_EQ] = ACTIONS(326),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_LT_GT] = ACTIONS(322),
    [aux_sym_numeric_parameter_token1] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(322),
    [sym__hex_literal] = ACTIONS(322),
    [aux_sym__num_literal_token1] = ACTIONS(328),
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
    [sym__system_variable_error] = ACTIONS(328),
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
    [sym__if_f] = ACTIONS(328),
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
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym__local] = ACTIONS(330),
    [sym__exposed] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_TILDE_PIPE] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_GT_GT] = ACTIONS(330),
    [anon_sym_QMARK_QMARK] = ACTIONS(330),
    [anon_sym_QMARK_PLUS] = ACTIONS(330),
    [anon_sym_QMARK_DASH] = ACTIONS(330),
    [anon_sym_PLUS_EQ] = ACTIONS(330),
    [anon_sym_DASH_EQ] = ACTIONS(330),
    [anon_sym_STAR_EQ] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [anon_sym_LT_GT] = ACTIONS(330),
    [aux_sym_numeric_parameter_token1] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_BANG] = ACTIONS(332),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(330),
    [sym__hex_literal] = ACTIONS(330),
    [aux_sym__num_literal_token1] = ACTIONS(332),
    [aux_sym__exp_literal_token1] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [sym__class_constructor] = ACTIONS(330),
    [sym__class_extends] = ACTIONS(330),
    [sym__var] = ACTIONS(330),
    [sym__property] = ACTIONS(330),
    [sym__alias] = ACTIONS(330),
    [sym__declare] = ACTIONS(330),
    [sym__function] = ACTIONS(330),
    [sym__return] = ACTIONS(330),
    [sym__break] = ACTIONS(330),
    [sym__continue] = ACTIONS(330),
    [sym__this] = ACTIONS(330),
    [sym__form] = ACTIONS(330),
    [sym__super] = ACTIONS(330),
    [sym__class_store_4d] = ACTIONS(330),
    [sym__class_store_ds] = ACTIONS(330),
    [sym__class_store_cs] = ACTIONS(330),
    [sym__system_variable_ok] = ACTIONS(330),
    [sym__system_variable_document] = ACTIONS(330),
    [sym__system_variable_flddelimit] = ACTIONS(330),
    [sym__system_variable_recdelimit] = ACTIONS(330),
    [sym__system_variable_error] = ACTIONS(332),
    [sym__system_variable_error_method] = ACTIONS(330),
    [sym__system_variable_error_line] = ACTIONS(330),
    [sym__system_variable_error_formula] = ACTIONS(330),
    [sym__system_variable_mousedown] = ACTIONS(330),
    [sym__system_variable_mousex] = ACTIONS(330),
    [sym__system_variable_mousey] = ACTIONS(330),
    [sym__system_variable_keycode] = ACTIONS(330),
    [sym__system_variable_modifiers] = ACTIONS(330),
    [sym__system_variable_mouseproc] = ACTIONS(330),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_STAR] = ACTIONS(330),
    [sym__if_e] = ACTIONS(330),
    [sym__if_f] = ACTIONS(332),
    [sym__else_e] = ACTIONS(330),
    [sym__else_f] = ACTIONS(330),
    [sym__end_if_e] = ACTIONS(330),
    [sym__end_if_f] = ACTIONS(330),
    [sym__begin_sql_e] = ACTIONS(330),
    [sym__begin_sql_f] = ACTIONS(330),
    [sym__end_sql_e] = ACTIONS(330),
    [sym__end_sql_f] = ACTIONS(330),
  },
  [24] = {
    [sym__functional_expression] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym__local] = ACTIONS(334),
    [sym__exposed] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_TILDE_PIPE] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_GT_GT] = ACTIONS(334),
    [anon_sym_QMARK_QMARK] = ACTIONS(334),
    [anon_sym_QMARK_PLUS] = ACTIONS(334),
    [anon_sym_QMARK_DASH] = ACTIONS(334),
    [anon_sym_PLUS_EQ] = ACTIONS(334),
    [anon_sym_DASH_EQ] = ACTIONS(334),
    [anon_sym_STAR_EQ] = ACTIONS(334),
    [anon_sym_SLASH_EQ] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [anon_sym_LT_GT] = ACTIONS(334),
    [aux_sym_numeric_parameter_token1] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(334),
    [sym__hex_literal] = ACTIONS(334),
    [aux_sym__num_literal_token1] = ACTIONS(338),
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
    [sym__system_variable_error] = ACTIONS(338),
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
    [sym__if_f] = ACTIONS(338),
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
    [ts_builtin_sym_end] = ACTIONS(340),
    [sym__local] = ACTIONS(340),
    [sym__exposed] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_TILDE_PIPE] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym_POUND] = ACTIONS(342),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_QMARK_QMARK] = ACTIONS(340),
    [anon_sym_QMARK_PLUS] = ACTIONS(340),
    [anon_sym_QMARK_DASH] = ACTIONS(340),
    [anon_sym_PLUS_EQ] = ACTIONS(340),
    [anon_sym_DASH_EQ] = ACTIONS(340),
    [anon_sym_STAR_EQ] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_LT_GT] = ACTIONS(340),
    [aux_sym_numeric_parameter_token1] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_BANG] = ACTIONS(342),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(340),
    [sym__hex_literal] = ACTIONS(340),
    [aux_sym__num_literal_token1] = ACTIONS(342),
    [aux_sym__exp_literal_token1] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym__class_constructor] = ACTIONS(340),
    [sym__class_extends] = ACTIONS(340),
    [sym__var] = ACTIONS(340),
    [sym__property] = ACTIONS(340),
    [sym__alias] = ACTIONS(340),
    [sym__declare] = ACTIONS(340),
    [sym__function] = ACTIONS(340),
    [sym__return] = ACTIONS(340),
    [sym__break] = ACTIONS(340),
    [sym__continue] = ACTIONS(340),
    [sym__this] = ACTIONS(340),
    [sym__form] = ACTIONS(340),
    [sym__super] = ACTIONS(340),
    [sym__class_store_4d] = ACTIONS(340),
    [sym__class_store_ds] = ACTIONS(340),
    [sym__class_store_cs] = ACTIONS(340),
    [sym__system_variable_ok] = ACTIONS(340),
    [sym__system_variable_document] = ACTIONS(340),
    [sym__system_variable_flddelimit] = ACTIONS(340),
    [sym__system_variable_recdelimit] = ACTIONS(340),
    [sym__system_variable_error] = ACTIONS(342),
    [sym__system_variable_error_method] = ACTIONS(340),
    [sym__system_variable_error_line] = ACTIONS(340),
    [sym__system_variable_error_formula] = ACTIONS(340),
    [sym__system_variable_mousedown] = ACTIONS(340),
    [sym__system_variable_mousex] = ACTIONS(340),
    [sym__system_variable_mousey] = ACTIONS(340),
    [sym__system_variable_keycode] = ACTIONS(340),
    [sym__system_variable_modifiers] = ACTIONS(340),
    [sym__system_variable_mouseproc] = ACTIONS(340),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_STAR] = ACTIONS(340),
    [sym__if_e] = ACTIONS(340),
    [sym__if_f] = ACTIONS(342),
    [sym__else_e] = ACTIONS(340),
    [sym__else_f] = ACTIONS(340),
    [sym__end_if_e] = ACTIONS(340),
    [sym__end_if_f] = ACTIONS(340),
    [sym__begin_sql_e] = ACTIONS(340),
    [sym__begin_sql_f] = ACTIONS(340),
    [sym__end_sql_e] = ACTIONS(340),
    [sym__end_sql_f] = ACTIONS(340),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym__local] = ACTIONS(344),
    [sym__exposed] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_TILDE_PIPE] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(344),
    [anon_sym_GT_GT] = ACTIONS(344),
    [anon_sym_QMARK_QMARK] = ACTIONS(344),
    [anon_sym_QMARK_PLUS] = ACTIONS(344),
    [anon_sym_QMARK_DASH] = ACTIONS(344),
    [anon_sym_PLUS_EQ] = ACTIONS(344),
    [anon_sym_DASH_EQ] = ACTIONS(344),
    [anon_sym_STAR_EQ] = ACTIONS(344),
    [anon_sym_SLASH_EQ] = ACTIONS(344),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_LT_GT] = ACTIONS(344),
    [aux_sym_numeric_parameter_token1] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(344),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(344),
    [sym__hex_literal] = ACTIONS(344),
    [aux_sym__num_literal_token1] = ACTIONS(346),
    [aux_sym__exp_literal_token1] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym__class_constructor] = ACTIONS(344),
    [sym__class_extends] = ACTIONS(344),
    [sym__var] = ACTIONS(344),
    [sym__property] = ACTIONS(344),
    [sym__alias] = ACTIONS(344),
    [sym__declare] = ACTIONS(344),
    [sym__function] = ACTIONS(344),
    [sym__return] = ACTIONS(344),
    [sym__break] = ACTIONS(344),
    [sym__continue] = ACTIONS(344),
    [sym__this] = ACTIONS(344),
    [sym__form] = ACTIONS(344),
    [sym__super] = ACTIONS(344),
    [sym__class_store_4d] = ACTIONS(344),
    [sym__class_store_ds] = ACTIONS(344),
    [sym__class_store_cs] = ACTIONS(344),
    [sym__system_variable_ok] = ACTIONS(344),
    [sym__system_variable_document] = ACTIONS(344),
    [sym__system_variable_flddelimit] = ACTIONS(344),
    [sym__system_variable_recdelimit] = ACTIONS(344),
    [sym__system_variable_error] = ACTIONS(346),
    [sym__system_variable_error_method] = ACTIONS(344),
    [sym__system_variable_error_line] = ACTIONS(344),
    [sym__system_variable_error_formula] = ACTIONS(344),
    [sym__system_variable_mousedown] = ACTIONS(344),
    [sym__system_variable_mousex] = ACTIONS(344),
    [sym__system_variable_mousey] = ACTIONS(344),
    [sym__system_variable_keycode] = ACTIONS(344),
    [sym__system_variable_modifiers] = ACTIONS(344),
    [sym__system_variable_mouseproc] = ACTIONS(344),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(344),
    [anon_sym_SLASH_SLASH] = ACTIONS(344),
    [anon_sym_SLASH_STAR] = ACTIONS(344),
    [sym__if_e] = ACTIONS(344),
    [sym__if_f] = ACTIONS(346),
    [sym__else_e] = ACTIONS(344),
    [sym__else_f] = ACTIONS(344),
    [sym__end_if_e] = ACTIONS(344),
    [sym__end_if_f] = ACTIONS(344),
    [sym__begin_sql_e] = ACTIONS(344),
    [sym__begin_sql_f] = ACTIONS(344),
    [sym__end_sql_e] = ACTIONS(344),
    [sym__end_sql_f] = ACTIONS(344),
  },
  [27] = {
    [sym__binary_operator] = STATE(141),
    [aux_sym__condition_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym__local] = ACTIONS(348),
    [sym__exposed] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(326),
    [anon_sym_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym_TILDE_PIPE] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_GT_GT] = ACTIONS(326),
    [anon_sym_QMARK_QMARK] = ACTIONS(326),
    [anon_sym_QMARK_PLUS] = ACTIONS(326),
    [anon_sym_QMARK_DASH] = ACTIONS(326),
    [anon_sym_PLUS_EQ] = ACTIONS(326),
    [anon_sym_DASH_EQ] = ACTIONS(326),
    [anon_sym_STAR_EQ] = ACTIONS(326),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_LT_GT] = ACTIONS(348),
    [aux_sym_numeric_parameter_token1] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(348),
    [sym__hex_literal] = ACTIONS(348),
    [aux_sym__num_literal_token1] = ACTIONS(350),
    [aux_sym__exp_literal_token1] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [sym__class_constructor] = ACTIONS(348),
    [sym__class_extends] = ACTIONS(348),
    [sym__var] = ACTIONS(348),
    [sym__property] = ACTIONS(348),
    [sym__alias] = ACTIONS(348),
    [sym__declare] = ACTIONS(348),
    [sym__function] = ACTIONS(348),
    [sym__return] = ACTIONS(348),
    [sym__break] = ACTIONS(348),
    [sym__continue] = ACTIONS(348),
    [sym__this] = ACTIONS(348),
    [sym__form] = ACTIONS(348),
    [sym__super] = ACTIONS(348),
    [sym__class_store_4d] = ACTIONS(348),
    [sym__class_store_ds] = ACTIONS(348),
    [sym__class_store_cs] = ACTIONS(348),
    [sym__system_variable_ok] = ACTIONS(348),
    [sym__system_variable_document] = ACTIONS(348),
    [sym__system_variable_flddelimit] = ACTIONS(348),
    [sym__system_variable_recdelimit] = ACTIONS(348),
    [sym__system_variable_error] = ACTIONS(350),
    [sym__system_variable_error_method] = ACTIONS(348),
    [sym__system_variable_error_line] = ACTIONS(348),
    [sym__system_variable_error_formula] = ACTIONS(348),
    [sym__system_variable_mousedown] = ACTIONS(348),
    [sym__system_variable_mousex] = ACTIONS(348),
    [sym__system_variable_mousey] = ACTIONS(348),
    [sym__system_variable_keycode] = ACTIONS(348),
    [sym__system_variable_modifiers] = ACTIONS(348),
    [sym__system_variable_mouseproc] = ACTIONS(348),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [anon_sym_SLASH_STAR] = ACTIONS(348),
    [sym__if_e] = ACTIONS(348),
    [sym__if_f] = ACTIONS(350),
    [sym__else_e] = ACTIONS(348),
    [sym__else_f] = ACTIONS(348),
    [sym__end_if_e] = ACTIONS(348),
    [sym__end_if_f] = ACTIONS(348),
    [sym__begin_sql_e] = ACTIONS(348),
    [sym__begin_sql_f] = ACTIONS(348),
    [sym__end_sql_e] = ACTIONS(348),
    [sym__end_sql_f] = ACTIONS(348),
  },
  [28] = {
    [sym__binary_operator] = STATE(141),
    [aux_sym__condition_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym__local] = ACTIONS(352),
    [sym__exposed] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(357),
    [anon_sym_PIPE_PIPE] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_CARET] = ACTIONS(357),
    [anon_sym_TILDE_PIPE] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(357),
    [anon_sym_GT_GT] = ACTIONS(357),
    [anon_sym_QMARK_QMARK] = ACTIONS(357),
    [anon_sym_QMARK_PLUS] = ACTIONS(357),
    [anon_sym_QMARK_DASH] = ACTIONS(357),
    [anon_sym_PLUS_EQ] = ACTIONS(357),
    [anon_sym_DASH_EQ] = ACTIONS(357),
    [anon_sym_STAR_EQ] = ACTIONS(357),
    [anon_sym_SLASH_EQ] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(352),
    [anon_sym_LT_GT] = ACTIONS(352),
    [aux_sym_numeric_parameter_token1] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(360),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(352),
    [sym__hex_literal] = ACTIONS(352),
    [aux_sym__num_literal_token1] = ACTIONS(360),
    [aux_sym__exp_literal_token1] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [sym__class_constructor] = ACTIONS(352),
    [sym__class_extends] = ACTIONS(352),
    [sym__var] = ACTIONS(352),
    [sym__property] = ACTIONS(352),
    [sym__alias] = ACTIONS(352),
    [sym__declare] = ACTIONS(352),
    [sym__function] = ACTIONS(352),
    [sym__return] = ACTIONS(352),
    [sym__break] = ACTIONS(352),
    [sym__continue] = ACTIONS(352),
    [sym__this] = ACTIONS(352),
    [sym__form] = ACTIONS(352),
    [sym__super] = ACTIONS(352),
    [sym__class_store_4d] = ACTIONS(352),
    [sym__class_store_ds] = ACTIONS(352),
    [sym__class_store_cs] = ACTIONS(352),
    [sym__system_variable_ok] = ACTIONS(352),
    [sym__system_variable_document] = ACTIONS(352),
    [sym__system_variable_flddelimit] = ACTIONS(352),
    [sym__system_variable_recdelimit] = ACTIONS(352),
    [sym__system_variable_error] = ACTIONS(360),
    [sym__system_variable_error_method] = ACTIONS(352),
    [sym__system_variable_error_line] = ACTIONS(352),
    [sym__system_variable_error_formula] = ACTIONS(352),
    [sym__system_variable_mousedown] = ACTIONS(352),
    [sym__system_variable_mousex] = ACTIONS(352),
    [sym__system_variable_mousey] = ACTIONS(352),
    [sym__system_variable_keycode] = ACTIONS(352),
    [sym__system_variable_modifiers] = ACTIONS(352),
    [sym__system_variable_mouseproc] = ACTIONS(352),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_SLASH_STAR] = ACTIONS(352),
    [sym__if_e] = ACTIONS(352),
    [sym__if_f] = ACTIONS(360),
    [sym__else_e] = ACTIONS(352),
    [sym__else_f] = ACTIONS(352),
    [sym__end_if_e] = ACTIONS(352),
    [sym__end_if_f] = ACTIONS(352),
    [sym__begin_sql_e] = ACTIONS(352),
    [sym__begin_sql_f] = ACTIONS(352),
    [sym__end_sql_e] = ACTIONS(352),
    [sym__end_sql_f] = ACTIONS(352),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym__local] = ACTIONS(362),
    [sym__exposed] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_AMP_AMP] = ACTIONS(362),
    [anon_sym_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym_TILDE_PIPE] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(364),
    [anon_sym_LT_LT] = ACTIONS(362),
    [anon_sym_GT_GT] = ACTIONS(362),
    [anon_sym_QMARK_QMARK] = ACTIONS(362),
    [anon_sym_QMARK_PLUS] = ACTIONS(362),
    [anon_sym_QMARK_DASH] = ACTIONS(362),
    [anon_sym_PLUS_EQ] = ACTIONS(362),
    [anon_sym_DASH_EQ] = ACTIONS(362),
    [anon_sym_STAR_EQ] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_LT_GT] = ACTIONS(362),
    [aux_sym_numeric_parameter_token1] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(366),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(362),
    [sym__hex_literal] = ACTIONS(362),
    [aux_sym__num_literal_token1] = ACTIONS(364),
    [aux_sym__exp_literal_token1] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [sym__class_constructor] = ACTIONS(362),
    [sym__class_extends] = ACTIONS(362),
    [sym__var] = ACTIONS(362),
    [sym__property] = ACTIONS(362),
    [sym__alias] = ACTIONS(362),
    [sym__declare] = ACTIONS(362),
    [sym__function] = ACTIONS(362),
    [sym__return] = ACTIONS(362),
    [sym__break] = ACTIONS(362),
    [sym__continue] = ACTIONS(362),
    [sym__this] = ACTIONS(362),
    [sym__form] = ACTIONS(362),
    [sym__super] = ACTIONS(362),
    [sym__class_store_4d] = ACTIONS(362),
    [sym__class_store_ds] = ACTIONS(362),
    [sym__class_store_cs] = ACTIONS(362),
    [sym__system_variable_ok] = ACTIONS(362),
    [sym__system_variable_document] = ACTIONS(362),
    [sym__system_variable_flddelimit] = ACTIONS(362),
    [sym__system_variable_recdelimit] = ACTIONS(362),
    [sym__system_variable_error] = ACTIONS(364),
    [sym__system_variable_error_method] = ACTIONS(362),
    [sym__system_variable_error_line] = ACTIONS(362),
    [sym__system_variable_error_formula] = ACTIONS(362),
    [sym__system_variable_mousedown] = ACTIONS(362),
    [sym__system_variable_mousex] = ACTIONS(362),
    [sym__system_variable_mousey] = ACTIONS(362),
    [sym__system_variable_keycode] = ACTIONS(362),
    [sym__system_variable_modifiers] = ACTIONS(362),
    [sym__system_variable_mouseproc] = ACTIONS(362),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(362),
    [anon_sym_SLASH_STAR] = ACTIONS(362),
    [sym__if_e] = ACTIONS(362),
    [sym__if_f] = ACTIONS(364),
    [sym__else_e] = ACTIONS(362),
    [sym__else_f] = ACTIONS(362),
    [sym__end_if_e] = ACTIONS(362),
    [sym__end_if_f] = ACTIONS(362),
    [sym__begin_sql_e] = ACTIONS(362),
    [sym__begin_sql_f] = ACTIONS(362),
    [sym__end_sql_e] = ACTIONS(362),
    [sym__end_sql_f] = ACTIONS(362),
  },
  [30] = {
    [sym__functional_expression] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym__local] = ACTIONS(368),
    [sym__exposed] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP_AMP] = ACTIONS(368),
    [anon_sym_PIPE_PIPE] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_TILDE_PIPE] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(368),
    [anon_sym_GT_GT] = ACTIONS(368),
    [anon_sym_QMARK_QMARK] = ACTIONS(368),
    [anon_sym_QMARK_PLUS] = ACTIONS(368),
    [anon_sym_QMARK_DASH] = ACTIONS(368),
    [anon_sym_PLUS_EQ] = ACTIONS(368),
    [anon_sym_DASH_EQ] = ACTIONS(368),
    [anon_sym_STAR_EQ] = ACTIONS(368),
    [anon_sym_SLASH_EQ] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(368),
    [anon_sym_LT_GT] = ACTIONS(368),
    [aux_sym_numeric_parameter_token1] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(368),
    [sym__hex_literal] = ACTIONS(368),
    [aux_sym__num_literal_token1] = ACTIONS(370),
    [aux_sym__exp_literal_token1] = ACTIONS(368),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [sym__class_constructor] = ACTIONS(368),
    [sym__class_extends] = ACTIONS(368),
    [sym__var] = ACTIONS(368),
    [sym__property] = ACTIONS(368),
    [sym__alias] = ACTIONS(368),
    [sym__declare] = ACTIONS(368),
    [sym__function] = ACTIONS(368),
    [sym__return] = ACTIONS(368),
    [sym__break] = ACTIONS(368),
    [sym__continue] = ACTIONS(368),
    [sym__this] = ACTIONS(368),
    [sym__form] = ACTIONS(368),
    [sym__super] = ACTIONS(368),
    [sym__class_store_4d] = ACTIONS(368),
    [sym__class_store_ds] = ACTIONS(368),
    [sym__class_store_cs] = ACTIONS(368),
    [sym__system_variable_ok] = ACTIONS(368),
    [sym__system_variable_document] = ACTIONS(368),
    [sym__system_variable_flddelimit] = ACTIONS(368),
    [sym__system_variable_recdelimit] = ACTIONS(368),
    [sym__system_variable_error] = ACTIONS(370),
    [sym__system_variable_error_method] = ACTIONS(368),
    [sym__system_variable_error_line] = ACTIONS(368),
    [sym__system_variable_error_formula] = ACTIONS(368),
    [sym__system_variable_mousedown] = ACTIONS(368),
    [sym__system_variable_mousex] = ACTIONS(368),
    [sym__system_variable_mousey] = ACTIONS(368),
    [sym__system_variable_keycode] = ACTIONS(368),
    [sym__system_variable_modifiers] = ACTIONS(368),
    [sym__system_variable_mouseproc] = ACTIONS(368),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(368),
    [anon_sym_SLASH_STAR] = ACTIONS(368),
    [sym__if_e] = ACTIONS(368),
    [sym__if_f] = ACTIONS(370),
    [sym__else_e] = ACTIONS(368),
    [sym__else_f] = ACTIONS(368),
    [sym__end_if_e] = ACTIONS(368),
    [sym__end_if_f] = ACTIONS(368),
    [sym__begin_sql_e] = ACTIONS(368),
    [sym__begin_sql_f] = ACTIONS(368),
    [sym__end_sql_e] = ACTIONS(368),
    [sym__end_sql_f] = ACTIONS(368),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym__local] = ACTIONS(372),
    [sym__exposed] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_TILDE_PIPE] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_POUND] = ACTIONS(374),
    [anon_sym_LT_LT] = ACTIONS(372),
    [anon_sym_GT_GT] = ACTIONS(372),
    [anon_sym_QMARK_QMARK] = ACTIONS(372),
    [anon_sym_QMARK_PLUS] = ACTIONS(372),
    [anon_sym_QMARK_DASH] = ACTIONS(372),
    [anon_sym_PLUS_EQ] = ACTIONS(372),
    [anon_sym_DASH_EQ] = ACTIONS(372),
    [anon_sym_STAR_EQ] = ACTIONS(372),
    [anon_sym_SLASH_EQ] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_LT_GT] = ACTIONS(372),
    [aux_sym_numeric_parameter_token1] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(372),
    [sym__hex_literal] = ACTIONS(372),
    [aux_sym__num_literal_token1] = ACTIONS(374),
    [aux_sym__exp_literal_token1] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym__class_constructor] = ACTIONS(372),
    [sym__class_extends] = ACTIONS(372),
    [sym__var] = ACTIONS(372),
    [sym__property] = ACTIONS(372),
    [sym__alias] = ACTIONS(372),
    [sym__declare] = ACTIONS(372),
    [sym__function] = ACTIONS(372),
    [sym__return] = ACTIONS(372),
    [sym__break] = ACTIONS(372),
    [sym__continue] = ACTIONS(372),
    [sym__this] = ACTIONS(372),
    [sym__form] = ACTIONS(372),
    [sym__super] = ACTIONS(372),
    [sym__class_store_4d] = ACTIONS(372),
    [sym__class_store_ds] = ACTIONS(372),
    [sym__class_store_cs] = ACTIONS(372),
    [sym__system_variable_ok] = ACTIONS(372),
    [sym__system_variable_document] = ACTIONS(372),
    [sym__system_variable_flddelimit] = ACTIONS(372),
    [sym__system_variable_recdelimit] = ACTIONS(372),
    [sym__system_variable_error] = ACTIONS(374),
    [sym__system_variable_error_method] = ACTIONS(372),
    [sym__system_variable_error_line] = ACTIONS(372),
    [sym__system_variable_error_formula] = ACTIONS(372),
    [sym__system_variable_mousedown] = ACTIONS(372),
    [sym__system_variable_mousex] = ACTIONS(372),
    [sym__system_variable_mousey] = ACTIONS(372),
    [sym__system_variable_keycode] = ACTIONS(372),
    [sym__system_variable_modifiers] = ACTIONS(372),
    [sym__system_variable_mouseproc] = ACTIONS(372),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(372),
    [anon_sym_SLASH_SLASH] = ACTIONS(372),
    [anon_sym_SLASH_STAR] = ACTIONS(372),
    [sym__if_e] = ACTIONS(372),
    [sym__if_f] = ACTIONS(374),
    [sym__else_e] = ACTIONS(372),
    [sym__else_f] = ACTIONS(372),
    [sym__end_if_e] = ACTIONS(372),
    [sym__end_if_f] = ACTIONS(372),
    [sym__begin_sql_e] = ACTIONS(372),
    [sym__begin_sql_f] = ACTIONS(372),
    [sym__end_sql_e] = ACTIONS(372),
    [sym__end_sql_f] = ACTIONS(372),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym__local] = ACTIONS(376),
    [sym__exposed] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(376),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_AMP] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_TILDE_PIPE] = ACTIONS(376),
    [anon_sym_LT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(376),
    [anon_sym_GT_GT] = ACTIONS(376),
    [anon_sym_QMARK_QMARK] = ACTIONS(376),
    [anon_sym_QMARK_PLUS] = ACTIONS(376),
    [anon_sym_QMARK_DASH] = ACTIONS(376),
    [anon_sym_PLUS_EQ] = ACTIONS(376),
    [anon_sym_DASH_EQ] = ACTIONS(376),
    [anon_sym_STAR_EQ] = ACTIONS(376),
    [anon_sym_SLASH_EQ] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(376),
    [anon_sym_LT_GT] = ACTIONS(376),
    [aux_sym_numeric_parameter_token1] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(378),
    [anon_sym_BANG] = ACTIONS(378),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(376),
    [sym__hex_literal] = ACTIONS(376),
    [aux_sym__num_literal_token1] = ACTIONS(378),
    [aux_sym__exp_literal_token1] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__class_constructor] = ACTIONS(376),
    [sym__class_extends] = ACTIONS(376),
    [sym__var] = ACTIONS(376),
    [sym__property] = ACTIONS(376),
    [sym__alias] = ACTIONS(376),
    [sym__declare] = ACTIONS(376),
    [sym__function] = ACTIONS(376),
    [sym__return] = ACTIONS(376),
    [sym__break] = ACTIONS(376),
    [sym__continue] = ACTIONS(376),
    [sym__this] = ACTIONS(376),
    [sym__form] = ACTIONS(376),
    [sym__super] = ACTIONS(376),
    [sym__class_store_4d] = ACTIONS(376),
    [sym__class_store_ds] = ACTIONS(376),
    [sym__class_store_cs] = ACTIONS(376),
    [sym__system_variable_ok] = ACTIONS(376),
    [sym__system_variable_document] = ACTIONS(376),
    [sym__system_variable_flddelimit] = ACTIONS(376),
    [sym__system_variable_recdelimit] = ACTIONS(376),
    [sym__system_variable_error] = ACTIONS(378),
    [sym__system_variable_error_method] = ACTIONS(376),
    [sym__system_variable_error_line] = ACTIONS(376),
    [sym__system_variable_error_formula] = ACTIONS(376),
    [sym__system_variable_mousedown] = ACTIONS(376),
    [sym__system_variable_mousex] = ACTIONS(376),
    [sym__system_variable_mousey] = ACTIONS(376),
    [sym__system_variable_keycode] = ACTIONS(376),
    [sym__system_variable_modifiers] = ACTIONS(376),
    [sym__system_variable_mouseproc] = ACTIONS(376),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(376),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [anon_sym_SLASH_STAR] = ACTIONS(376),
    [sym__if_e] = ACTIONS(376),
    [sym__if_f] = ACTIONS(378),
    [sym__else_e] = ACTIONS(376),
    [sym__else_f] = ACTIONS(376),
    [sym__end_if_e] = ACTIONS(376),
    [sym__end_if_f] = ACTIONS(376),
    [sym__begin_sql_e] = ACTIONS(376),
    [sym__begin_sql_f] = ACTIONS(376),
    [sym__end_sql_e] = ACTIONS(376),
    [sym__end_sql_f] = ACTIONS(376),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym__local] = ACTIONS(380),
    [sym__exposed] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(382),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(382),
    [anon_sym_SLASH] = ACTIONS(382),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_CARET] = ACTIONS(380),
    [anon_sym_TILDE_PIPE] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_POUND] = ACTIONS(382),
    [anon_sym_LT_LT] = ACTIONS(380),
    [anon_sym_GT_GT] = ACTIONS(380),
    [anon_sym_QMARK_QMARK] = ACTIONS(380),
    [anon_sym_QMARK_PLUS] = ACTIONS(380),
    [anon_sym_QMARK_DASH] = ACTIONS(380),
    [anon_sym_PLUS_EQ] = ACTIONS(380),
    [anon_sym_DASH_EQ] = ACTIONS(380),
    [anon_sym_STAR_EQ] = ACTIONS(380),
    [anon_sym_SLASH_EQ] = ACTIONS(380),
    [anon_sym_DOLLAR] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_LT_GT] = ACTIONS(380),
    [aux_sym_numeric_parameter_token1] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_BANG] = ACTIONS(382),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(380),
    [sym__hex_literal] = ACTIONS(380),
    [aux_sym__num_literal_token1] = ACTIONS(382),
    [aux_sym__exp_literal_token1] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [sym__class_constructor] = ACTIONS(380),
    [sym__class_extends] = ACTIONS(380),
    [sym__var] = ACTIONS(380),
    [sym__property] = ACTIONS(380),
    [sym__alias] = ACTIONS(380),
    [sym__declare] = ACTIONS(380),
    [sym__function] = ACTIONS(380),
    [sym__return] = ACTIONS(380),
    [sym__break] = ACTIONS(380),
    [sym__continue] = ACTIONS(380),
    [sym__this] = ACTIONS(380),
    [sym__form] = ACTIONS(380),
    [sym__super] = ACTIONS(380),
    [sym__class_store_4d] = ACTIONS(380),
    [sym__class_store_ds] = ACTIONS(380),
    [sym__class_store_cs] = ACTIONS(380),
    [sym__system_variable_ok] = ACTIONS(380),
    [sym__system_variable_document] = ACTIONS(380),
    [sym__system_variable_flddelimit] = ACTIONS(380),
    [sym__system_variable_recdelimit] = ACTIONS(380),
    [sym__system_variable_error] = ACTIONS(382),
    [sym__system_variable_error_method] = ACTIONS(380),
    [sym__system_variable_error_line] = ACTIONS(380),
    [sym__system_variable_error_formula] = ACTIONS(380),
    [sym__system_variable_mousedown] = ACTIONS(380),
    [sym__system_variable_mousex] = ACTIONS(380),
    [sym__system_variable_mousey] = ACTIONS(380),
    [sym__system_variable_keycode] = ACTIONS(380),
    [sym__system_variable_modifiers] = ACTIONS(380),
    [sym__system_variable_mouseproc] = ACTIONS(380),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(380),
    [anon_sym_SLASH_SLASH] = ACTIONS(380),
    [anon_sym_SLASH_STAR] = ACTIONS(380),
    [sym__if_e] = ACTIONS(380),
    [sym__if_f] = ACTIONS(382),
    [sym__else_e] = ACTIONS(380),
    [sym__else_f] = ACTIONS(380),
    [sym__end_if_e] = ACTIONS(380),
    [sym__end_if_f] = ACTIONS(380),
    [sym__begin_sql_e] = ACTIONS(380),
    [sym__begin_sql_f] = ACTIONS(380),
    [sym__end_sql_e] = ACTIONS(380),
    [sym__end_sql_f] = ACTIONS(380),
  },
  [34] = {
    [sym__binary_operator] = STATE(140),
    [aux_sym__condition_repeat1] = STATE(177),
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym__local] = ACTIONS(384),
    [sym__exposed] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(388),
    [anon_sym_TILDE_PIPE] = ACTIONS(388),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(388),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_QMARK_QMARK] = ACTIONS(388),
    [anon_sym_QMARK_PLUS] = ACTIONS(388),
    [anon_sym_QMARK_DASH] = ACTIONS(388),
    [anon_sym_PLUS_EQ] = ACTIONS(388),
    [anon_sym_DASH_EQ] = ACTIONS(388),
    [anon_sym_STAR_EQ] = ACTIONS(388),
    [anon_sym_SLASH_EQ] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_LT_GT] = ACTIONS(384),
    [aux_sym_numeric_parameter_token1] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(390),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(384),
    [sym__hex_literal] = ACTIONS(384),
    [aux_sym__num_literal_token1] = ACTIONS(390),
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
    [sym__system_variable_error] = ACTIONS(390),
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
    [sym__if_f] = ACTIONS(390),
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
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym__local] = ACTIONS(392),
    [sym__exposed] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(394),
    [anon_sym_SLASH] = ACTIONS(394),
    [anon_sym_AMP_AMP] = ACTIONS(392),
    [anon_sym_PIPE_PIPE] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_CARET] = ACTIONS(392),
    [anon_sym_TILDE_PIPE] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(394),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_LT_LT] = ACTIONS(392),
    [anon_sym_GT_GT] = ACTIONS(392),
    [anon_sym_QMARK_QMARK] = ACTIONS(392),
    [anon_sym_QMARK_PLUS] = ACTIONS(392),
    [anon_sym_QMARK_DASH] = ACTIONS(392),
    [anon_sym_PLUS_EQ] = ACTIONS(392),
    [anon_sym_DASH_EQ] = ACTIONS(392),
    [anon_sym_STAR_EQ] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [anon_sym_LT_GT] = ACTIONS(392),
    [aux_sym_numeric_parameter_token1] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(392),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_BANG] = ACTIONS(394),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(392),
    [sym__hex_literal] = ACTIONS(392),
    [aux_sym__num_literal_token1] = ACTIONS(394),
    [aux_sym__exp_literal_token1] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(392),
    [sym__class_constructor] = ACTIONS(392),
    [sym__class_extends] = ACTIONS(392),
    [sym__var] = ACTIONS(392),
    [sym__property] = ACTIONS(392),
    [sym__alias] = ACTIONS(392),
    [sym__declare] = ACTIONS(392),
    [sym__function] = ACTIONS(392),
    [sym__return] = ACTIONS(392),
    [sym__break] = ACTIONS(392),
    [sym__continue] = ACTIONS(392),
    [sym__this] = ACTIONS(392),
    [sym__form] = ACTIONS(392),
    [sym__super] = ACTIONS(392),
    [sym__class_store_4d] = ACTIONS(392),
    [sym__class_store_ds] = ACTIONS(392),
    [sym__class_store_cs] = ACTIONS(392),
    [sym__system_variable_ok] = ACTIONS(392),
    [sym__system_variable_document] = ACTIONS(392),
    [sym__system_variable_flddelimit] = ACTIONS(392),
    [sym__system_variable_recdelimit] = ACTIONS(392),
    [sym__system_variable_error] = ACTIONS(394),
    [sym__system_variable_error_method] = ACTIONS(392),
    [sym__system_variable_error_line] = ACTIONS(392),
    [sym__system_variable_error_formula] = ACTIONS(392),
    [sym__system_variable_mousedown] = ACTIONS(392),
    [sym__system_variable_mousex] = ACTIONS(392),
    [sym__system_variable_mousey] = ACTIONS(392),
    [sym__system_variable_keycode] = ACTIONS(392),
    [sym__system_variable_modifiers] = ACTIONS(392),
    [sym__system_variable_mouseproc] = ACTIONS(392),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_STAR] = ACTIONS(392),
    [sym__if_e] = ACTIONS(392),
    [sym__if_f] = ACTIONS(394),
    [sym__else_e] = ACTIONS(392),
    [sym__else_f] = ACTIONS(392),
    [sym__end_if_e] = ACTIONS(392),
    [sym__end_if_f] = ACTIONS(392),
    [sym__begin_sql_e] = ACTIONS(392),
    [sym__begin_sql_f] = ACTIONS(392),
    [sym__end_sql_e] = ACTIONS(392),
    [sym__end_sql_f] = ACTIONS(392),
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
    [anon_sym_LT_GT] = ACTIONS(412),
    [aux_sym_numeric_parameter_token1] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(414),
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
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym__local] = ACTIONS(352),
    [sym__exposed] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_AMP_AMP] = ACTIONS(352),
    [anon_sym_PIPE_PIPE] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_TILDE_PIPE] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_GT_GT] = ACTIONS(352),
    [anon_sym_QMARK_QMARK] = ACTIONS(352),
    [anon_sym_QMARK_PLUS] = ACTIONS(352),
    [anon_sym_QMARK_DASH] = ACTIONS(352),
    [anon_sym_PLUS_EQ] = ACTIONS(352),
    [anon_sym_DASH_EQ] = ACTIONS(352),
    [anon_sym_STAR_EQ] = ACTIONS(352),
    [anon_sym_SLASH_EQ] = ACTIONS(352),
    [anon_sym_DOLLAR] = ACTIONS(352),
    [anon_sym_LT_GT] = ACTIONS(352),
    [aux_sym_numeric_parameter_token1] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(360),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(352),
    [sym__hex_literal] = ACTIONS(352),
    [aux_sym__num_literal_token1] = ACTIONS(360),
    [aux_sym__exp_literal_token1] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [sym__class_constructor] = ACTIONS(352),
    [sym__class_extends] = ACTIONS(352),
    [sym__var] = ACTIONS(352),
    [sym__property] = ACTIONS(352),
    [sym__alias] = ACTIONS(352),
    [sym__declare] = ACTIONS(352),
    [sym__function] = ACTIONS(352),
    [sym__return] = ACTIONS(352),
    [sym__break] = ACTIONS(352),
    [sym__continue] = ACTIONS(352),
    [sym__this] = ACTIONS(352),
    [sym__form] = ACTIONS(352),
    [sym__super] = ACTIONS(352),
    [sym__class_store_4d] = ACTIONS(352),
    [sym__class_store_ds] = ACTIONS(352),
    [sym__class_store_cs] = ACTIONS(352),
    [sym__system_variable_ok] = ACTIONS(352),
    [sym__system_variable_document] = ACTIONS(352),
    [sym__system_variable_flddelimit] = ACTIONS(352),
    [sym__system_variable_recdelimit] = ACTIONS(352),
    [sym__system_variable_error] = ACTIONS(360),
    [sym__system_variable_error_method] = ACTIONS(352),
    [sym__system_variable_error_line] = ACTIONS(352),
    [sym__system_variable_error_formula] = ACTIONS(352),
    [sym__system_variable_mousedown] = ACTIONS(352),
    [sym__system_variable_mousex] = ACTIONS(352),
    [sym__system_variable_mousey] = ACTIONS(352),
    [sym__system_variable_keycode] = ACTIONS(352),
    [sym__system_variable_modifiers] = ACTIONS(352),
    [sym__system_variable_mouseproc] = ACTIONS(352),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_SLASH_STAR] = ACTIONS(352),
    [sym__if_e] = ACTIONS(352),
    [sym__if_f] = ACTIONS(360),
    [sym__else_e] = ACTIONS(352),
    [sym__else_f] = ACTIONS(352),
    [sym__end_if_e] = ACTIONS(352),
    [sym__end_if_f] = ACTIONS(352),
    [sym__begin_sql_e] = ACTIONS(352),
    [sym__begin_sql_f] = ACTIONS(352),
    [sym__end_sql_e] = ACTIONS(352),
    [sym__end_sql_f] = ACTIONS(352),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym__local] = ACTIONS(428),
    [sym__exposed] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_TILDE_PIPE] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_GT_GT] = ACTIONS(334),
    [anon_sym_QMARK_QMARK] = ACTIONS(334),
    [anon_sym_QMARK_PLUS] = ACTIONS(334),
    [anon_sym_QMARK_DASH] = ACTIONS(334),
    [anon_sym_PLUS_EQ] = ACTIONS(334),
    [anon_sym_DASH_EQ] = ACTIONS(334),
    [anon_sym_STAR_EQ] = ACTIONS(334),
    [anon_sym_SLASH_EQ] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_LT_GT] = ACTIONS(428),
    [aux_sym_numeric_parameter_token1] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(338),
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
  [46] = {
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
  [47] = {
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
  [48] = {
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(219), 1,
      aux_sym__functional_expression_repeat1,
    STATE(223), 1,
      sym__function_parameter,
    STATE(268), 1,
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
    STATE(220), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(234), 1,
      aux_sym__functional_expression_repeat1,
    STATE(236), 1,
      sym__function_parameter,
    STATE(268), 1,
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
    STATE(220), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(228), 1,
      aux_sym__functional_expression_repeat1,
    STATE(230), 1,
      sym__function_parameter,
    STATE(268), 1,
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
    STATE(220), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
    ACTIONS(273), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(271), 52,
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
    ACTIONS(279), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(277), 53,
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
  [580] = 27,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(246), 1,
      sym__function_parameter,
    STATE(268), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(467), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(220), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
  [694] = 2,
    ACTIONS(310), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(308), 54,
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
  [758] = 3,
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
  [824] = 2,
    ACTIONS(279), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(277), 54,
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
  [888] = 2,
    ACTIONS(314), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(312), 54,
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
  [952] = 2,
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
  [1016] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(292), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(290), 52,
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
  [1084] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(302), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(300), 52,
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
  [1152] = 2,
    ACTIONS(306), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(304), 54,
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
  [1216] = 3,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(294), 53,
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
  [1282] = 3,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(284), 53,
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
  [1348] = 4,
    ACTIONS(481), 1,
      anon_sym_DASH_GT,
    STATE(95), 1,
      sym_function_result,
    ACTIONS(483), 5,
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
  [1415] = 2,
    ACTIONS(332), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(330), 53,
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
  [1478] = 2,
    ACTIONS(378), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(376), 53,
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
  [1541] = 2,
    ACTIONS(487), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(485), 53,
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
  [1604] = 4,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__functional_expression,
    ACTIONS(370), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(368), 51,
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
  [1671] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(493), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(491), 51,
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
  [1738] = 2,
    ACTIONS(374), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(372), 53,
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
  [1801] = 2,
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
  [1864] = 2,
    ACTIONS(501), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(499), 53,
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
  [1927] = 4,
    ACTIONS(481), 1,
      anon_sym_DASH_GT,
    STATE(123), 1,
      sym_function_result,
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
  [1994] = 4,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(71), 1,
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
  [2061] = 4,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym__functional_expression,
    ACTIONS(338), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(334), 51,
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
  [2128] = 3,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(364), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(362), 52,
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
  [2193] = 2,
    ACTIONS(515), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(513), 52,
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
  [2255] = 2,
    ACTIONS(519), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(517), 52,
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
  [2317] = 2,
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
  [2379] = 2,
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
  [2441] = 2,
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
  [2503] = 2,
    ACTIONS(527), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(525), 51,
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
  [2564] = 2,
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
  [2625] = 2,
    ACTIONS(531), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(529), 51,
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
  [2686] = 2,
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
  [2747] = 2,
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
  [2808] = 2,
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
  [2869] = 2,
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
  [2930] = 2,
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
  [2991] = 2,
    ACTIONS(382), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(380), 51,
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
  [3052] = 2,
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
  [3113] = 26,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      anon_sym_LT_GT,
    ACTIONS(559), 1,
      anon_sym_QMARK,
    ACTIONS(561), 1,
      anon_sym_BANG,
    ACTIONS(563), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    ACTIONS(573), 1,
      sym__system_variable_error,
    STATE(17), 1,
      sym__class_store,
    STATE(24), 1,
      sym__mutable,
    STATE(29), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(109), 1,
      sym_ternary_block,
    STATE(284), 1,
      sym_super,
    STATE(300), 1,
      sym__condition,
    ACTIONS(557), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(565), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(315), 2,
      sym_this,
      sym_form,
    ACTIONS(569), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(40), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(48), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(34), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(571), 13,
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
  [3222] = 2,
    ACTIONS(577), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(575), 51,
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
  [3283] = 25,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(268), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(279), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
  [3390] = 25,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(268), 1,
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
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
  [3497] = 2,
    ACTIONS(581), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(579), 51,
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
  [3558] = 2,
    ACTIONS(342), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(340), 51,
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
  [3619] = 25,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(268), 1,
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
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
  [3726] = 2,
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
  [3787] = 2,
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
  [3848] = 2,
    ACTIONS(414), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(412), 51,
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
  [3909] = 2,
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
  [3970] = 2,
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
  [4031] = 2,
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
  [4092] = 2,
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
  [4153] = 2,
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
  [4214] = 2,
    ACTIONS(390), 5,
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
  [4275] = 2,
    ACTIONS(394), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(392), 51,
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
  [4336] = 25,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(268), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(60), 2,
      sym__condition,
      sym_ternary_block,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(172), 7,
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
  [4443] = 2,
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
  [4504] = 2,
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
  [4565] = 2,
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
  [4626] = 2,
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
  [4687] = 2,
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
  [4748] = 2,
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
  [4809] = 2,
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
  [4870] = 2,
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
  [4931] = 2,
    ACTIONS(410), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(408), 51,
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
  [4992] = 2,
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
  [5053] = 2,
    ACTIONS(346), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(344), 51,
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
  [5114] = 2,
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
  [5175] = 25,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      anon_sym_LT_GT,
    ACTIONS(559), 1,
      anon_sym_QMARK,
    ACTIONS(561), 1,
      anon_sym_BANG,
    ACTIONS(563), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    ACTIONS(573), 1,
      sym__system_variable_error,
    STATE(17), 1,
      sym__class_store,
    STATE(24), 1,
      sym__mutable,
    STATE(29), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(284), 1,
      sym_super,
    ACTIONS(557), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(565), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(60), 2,
      sym__condition,
      sym_ternary_block,
    STATE(315), 2,
      sym_this,
      sym_form,
    ACTIONS(569), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(40), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(48), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(22), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(571), 13,
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
  [5282] = 4,
    STATE(9), 1,
      sym_else,
    ACTIONS(643), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(641), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(639), 46,
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
  [5345] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5448] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5551] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5654] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5757] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5860] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [5963] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(319), 7,
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
  [6066] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [6169] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(322), 7,
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
  [6272] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [6375] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(306), 7,
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
  [6478] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(310), 7,
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
  [6581] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [6684] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [6787] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(165), 1,
      sym__class,
    STATE(174), 1,
      sym__mutable,
    STATE(268), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
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
  [6890] = 24,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      anon_sym_LT_GT,
    ACTIONS(559), 1,
      anon_sym_QMARK,
    ACTIONS(561), 1,
      anon_sym_BANG,
    ACTIONS(563), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    ACTIONS(573), 1,
      sym__system_variable_error,
    STATE(17), 1,
      sym__class_store,
    STATE(24), 1,
      sym__mutable,
    STATE(29), 1,
      sym__variable,
    STATE(30), 1,
      sym__class,
    STATE(284), 1,
      sym_super,
    ACTIONS(557), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(565), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(315), 2,
      sym_this,
      sym_form,
    ACTIONS(569), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(21), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(40), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(48), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(44), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(571), 13,
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
  [6993] = 24,
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
    STATE(158), 1,
      sym__class_store,
    STATE(160), 1,
      sym__variable,
    STATE(178), 1,
      sym__class,
    STATE(214), 1,
      sym__mutable,
    STATE(284), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(297), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(151), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(169), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(173), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(302), 7,
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
  [7096] = 2,
    ACTIONS(647), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(645), 47,
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
  [7152] = 2,
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
  [7208] = 2,
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
      sym__end_if_e,
      sym__end_if_f,
      sym__begin_sql_e,
      sym__begin_sql_f,
  [7264] = 2,
    ACTIONS(659), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(657), 45,
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
  [7318] = 5,
    ACTIONS(661), 1,
      anon_sym_DOT,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
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
    ACTIONS(271), 21,
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
  [7363] = 4,
    ACTIONS(665), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(279), 10,
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
    ACTIONS(277), 22,
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
  [7406] = 5,
    ACTIONS(661), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
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
  [7451] = 2,
    ACTIONS(279), 10,
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
    ACTIONS(277), 23,
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
  [7489] = 3,
    ACTIONS(670), 1,
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
  [7529] = 2,
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
    ACTIONS(304), 23,
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
  [7567] = 2,
    ACTIONS(310), 10,
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
    ACTIONS(308), 23,
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
  [7605] = 3,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 10,
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
    ACTIONS(294), 22,
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
  [7645] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
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
    ACTIONS(284), 22,
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
  [7685] = 2,
    ACTIONS(314), 10,
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
    ACTIONS(312), 23,
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
  [7723] = 4,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(292), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(290), 21,
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
  [7764] = 4,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(157), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(302), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(300), 21,
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
  [7805] = 2,
    ACTIONS(374), 10,
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
    ACTIONS(372), 22,
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
  [7842] = 3,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(364), 10,
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
    ACTIONS(362), 21,
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
  [7881] = 2,
    ACTIONS(378), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(376), 22,
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
  [7917] = 2,
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
  [7953] = 2,
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
  [7989] = 2,
    ACTIONS(332), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(330), 22,
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
  [8025] = 4,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__functional_expression,
    ACTIONS(370), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(368), 18,
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
  [8063] = 2,
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
  [8097] = 2,
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
  [8131] = 6,
    ACTIONS(360), 1,
      anon_sym_QMARK,
    STATE(140), 1,
      sym__binary_operator,
    STATE(168), 1,
      aux_sym__condition_repeat1,
    ACTIONS(352), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(680), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(683), 15,
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
  [8173] = 2,
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
    ACTIONS(412), 20,
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
  [8207] = 2,
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
  [8241] = 2,
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
  [8275] = 6,
    ACTIONS(328), 1,
      anon_sym_QMARK,
    STATE(140), 1,
      sym__binary_operator,
    STATE(177), 1,
      aux_sym__condition_repeat1,
    ACTIONS(322), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(386), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 15,
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
  [8317] = 2,
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
  [8351] = 4,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__functional_expression,
    ACTIONS(338), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(334), 18,
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
  [8389] = 2,
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
  [8423] = 2,
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
  [8457] = 6,
    ACTIONS(350), 1,
      anon_sym_QMARK,
    STATE(140), 1,
      sym__binary_operator,
    STATE(168), 1,
      aux_sym__condition_repeat1,
    ACTIONS(348), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(386), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 15,
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
  [8499] = 4,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__functional_expression,
    ACTIONS(370), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(368), 17,
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
  [8536] = 2,
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
  [8568] = 2,
    ACTIONS(394), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(392), 18,
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
  [8600] = 2,
    ACTIONS(382), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(380), 18,
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
  [8632] = 2,
    ACTIONS(342), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(340), 18,
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
  [8664] = 2,
    ACTIONS(346), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(344), 18,
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
  [8696] = 5,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      anon_sym_COLON_EQ,
    STATE(25), 1,
      sym__functional_expression,
    ACTIONS(338), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(334), 15,
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
  [8734] = 2,
    ACTIONS(360), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(352), 18,
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
  [8766] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(88), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8796] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(87), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8826] = 5,
    STATE(73), 1,
      sym_class,
    STATE(158), 1,
      sym__class_store,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8856] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(121), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8886] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(73), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8916] = 5,
    STATE(74), 1,
      sym_class,
    STATE(158), 1,
      sym__class_store,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8946] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(115), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [8976] = 5,
    STATE(62), 1,
      sym__class_store,
    STATE(74), 1,
      sym_class,
    STATE(69), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(688), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(690), 12,
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
  [9006] = 3,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(694), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9021] = 3,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(694), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9036] = 3,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(694), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9051] = 3,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      aux_sym_string_repeat1,
    ACTIONS(702), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9066] = 3,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_string_repeat1,
    ACTIONS(706), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9081] = 3,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(710), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [9096] = 5,
    ACTIONS(688), 1,
      sym__class_store_4d,
    ACTIONS(713), 1,
      aux_sym__name_token1,
    STATE(62), 1,
      sym__class_store,
    ACTIONS(715), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(86), 2,
      sym__name,
      sym__class,
  [9114] = 4,
    ACTIONS(719), 1,
      aux_sym__name_token1,
    STATE(261), 1,
      sym__computed,
    STATE(331), 1,
      sym__name,
    ACTIONS(717), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [9130] = 4,
    ACTIONS(723), 1,
      aux_sym__name_token1,
    STATE(267), 1,
      sym__computed,
    STATE(318), 1,
      sym__name,
    ACTIONS(721), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [9146] = 3,
    ACTIONS(727), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(725), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(155), 2,
      sym__name,
      sym__classic_name,
  [9158] = 3,
    ACTIONS(731), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(729), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(13), 2,
      sym__name,
      sym__classic_name,
  [9170] = 1,
    ACTIONS(733), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [9178] = 3,
    ACTIONS(735), 1,
      aux_sym__name_token1,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(263), 2,
      sym__name,
      sym_local_variable,
  [9189] = 2,
    ACTIONS(739), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(16), 2,
      sym__name,
      sym__classic_name,
  [9198] = 2,
    ACTIONS(741), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(154), 2,
      sym__name,
      sym__classic_name,
  [9207] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(743), 1,
      aux_sym__name_token1,
    STATE(242), 2,
      sym__name,
      sym_local_variable,
  [9218] = 4,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_local_variable,
    STATE(240), 1,
      sym__function_argument,
  [9231] = 2,
    ACTIONS(725), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(155), 2,
      sym__name,
      sym__classic_name,
  [9240] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(747), 1,
      aux_sym__name_token1,
    STATE(276), 2,
      sym__name,
      sym_local_variable,
  [9251] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    ACTIONS(749), 1,
      aux_sym__name_token1,
    STATE(231), 2,
      sym__name,
      sym_local_variable,
  [9262] = 3,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__functional_expression,
    ACTIONS(334), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [9273] = 3,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9283] = 3,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    ACTIONS(759), 1,
      anon_sym_COLON,
    STATE(216), 1,
      aux_sym__function_argument_repeat1,
  [9293] = 3,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(763), 1,
      anon_sym_COLON,
    STATE(224), 1,
      aux_sym_var_declaration_block_repeat1,
  [9303] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9313] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9323] = 2,
    ACTIONS(771), 1,
      anon_sym_QMARK,
    ACTIONS(769), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9331] = 3,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9341] = 3,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    ACTIONS(780), 1,
      anon_sym_COLON,
    STATE(222), 1,
      aux_sym_property_declaration_block_repeat1,
  [9351] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym__functional_expression_repeat1,
  [9361] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_COLON,
    STATE(224), 1,
      aux_sym_var_declaration_block_repeat1,
  [9371] = 3,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    ACTIONS(789), 1,
      anon_sym_COLON,
    STATE(216), 1,
      aux_sym__function_argument_repeat1,
  [9381] = 3,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9391] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9401] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9411] = 3,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_COLON,
    STATE(216), 1,
      aux_sym__function_argument_repeat1,
  [9421] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym__functional_expression_repeat1,
  [9431] = 3,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(802), 1,
      anon_sym_COLON,
    STATE(217), 1,
      aux_sym_var_declaration_block_repeat1,
  [9441] = 3,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_function_arguments_repeat1,
  [9451] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(239), 1,
      sym_local_variable,
    STATE(253), 1,
      sym__function_argument,
  [9461] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9471] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9481] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym__functional_expression_repeat1,
  [9491] = 3,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_function_arguments_repeat1,
  [9501] = 3,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym__function_argument,
    STATE(241), 1,
      sym_local_variable,
  [9511] = 3,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(229), 1,
      aux_sym__function_argument_repeat1,
  [9521] = 3,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_function_arguments_repeat1,
  [9531] = 3,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    ACTIONS(821), 1,
      anon_sym_COLON,
    STATE(225), 1,
      aux_sym__function_argument_repeat1,
  [9541] = 3,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9551] = 3,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    ACTIONS(827), 1,
      anon_sym_COLON,
    STATE(222), 1,
      aux_sym_property_declaration_block_repeat1,
  [9561] = 3,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    ACTIONS(829), 1,
      anon_sym_COLON,
    STATE(243), 1,
      aux_sym_property_declaration_block_repeat1,
  [9571] = 2,
    ACTIONS(831), 1,
      aux_sym__name_token1,
    STATE(317), 1,
      sym__name,
  [9578] = 1,
    ACTIONS(794), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9583] = 2,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(254), 1,
      sym_local_variable,
  [9590] = 2,
    ACTIONS(833), 1,
      aux_sym_time_token1,
    ACTIONS(835), 1,
      aux_sym_date_token1,
  [9597] = 2,
    ACTIONS(837), 1,
      sym__local,
    ACTIONS(839), 1,
      sym__function,
  [9604] = 2,
    ACTIONS(841), 1,
      aux_sym__name_token1,
    STATE(58), 1,
      sym__name,
  [9611] = 2,
    ACTIONS(843), 1,
      aux_sym_time_token1,
    ACTIONS(845), 1,
      aux_sym_date_token1,
  [9618] = 1,
    ACTIONS(847), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [9623] = 1,
    ACTIONS(815), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9628] = 1,
    ACTIONS(759), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9633] = 2,
    ACTIONS(771), 1,
      anon_sym_QMARK,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
  [9640] = 2,
    ACTIONS(851), 1,
      aux_sym__name_token1,
    STATE(277), 1,
      sym__name,
  [9647] = 2,
    ACTIONS(771), 1,
      anon_sym_QMARK,
    ACTIONS(853), 1,
      anon_sym_COLON,
  [9654] = 2,
    ACTIONS(837), 1,
      sym__exposed,
    ACTIONS(839), 1,
      sym__function,
  [9661] = 2,
    ACTIONS(855), 1,
      aux_sym_command_suffix_token1,
    STATE(289), 1,
      sym_command_suffix,
  [9668] = 2,
    ACTIONS(855), 1,
      aux_sym_command_suffix_token1,
    STATE(288), 1,
      sym_command_suffix,
  [9675] = 2,
    ACTIONS(857), 1,
      aux_sym__name_token1,
    STATE(314), 1,
      sym__name,
  [9682] = 2,
    ACTIONS(855), 1,
      aux_sym_command_suffix_token1,
    STATE(287), 1,
      sym_command_suffix,
  [9689] = 1,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9694] = 2,
    ACTIONS(855), 1,
      aux_sym_command_suffix_token1,
    STATE(161), 1,
      sym_command_suffix,
  [9701] = 2,
    ACTIONS(859), 1,
      aux_sym__name_token1,
    STATE(150), 1,
      sym__name,
  [9708] = 2,
    ACTIONS(855), 1,
      aux_sym_command_suffix_token1,
    STATE(326), 1,
      sym_command_suffix,
  [9715] = 2,
    ACTIONS(861), 1,
      aux_sym__name_token1,
    STATE(331), 1,
      sym__name,
  [9722] = 2,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__functional_expression,
  [9729] = 2,
    ACTIONS(863), 1,
      aux_sym__name_token1,
    STATE(149), 1,
      sym__name,
  [9736] = 2,
    ACTIONS(865), 1,
      aux_sym__name_token1,
    STATE(10), 1,
      sym__name,
  [9743] = 2,
    ACTIONS(867), 1,
      aux_sym_command_suffix_token1,
    STATE(32), 1,
      sym_command_suffix,
  [9750] = 2,
    ACTIONS(869), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_function_arguments,
  [9757] = 2,
    ACTIONS(871), 1,
      aux_sym__name_token1,
    STATE(54), 1,
      sym__name,
  [9764] = 2,
    ACTIONS(873), 1,
      aux_sym__name_token1,
    STATE(14), 1,
      sym__name,
  [9771] = 2,
    ACTIONS(875), 1,
      aux_sym__name_token1,
    STATE(244), 1,
      sym__name,
  [9778] = 1,
    ACTIONS(785), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9783] = 1,
    ACTIONS(780), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9788] = 2,
    ACTIONS(877), 1,
      aux_sym_command_suffix_token1,
    STATE(68), 1,
      sym_command_suffix,
  [9795] = 2,
    ACTIONS(771), 1,
      anon_sym_QMARK,
    ACTIONS(879), 1,
      anon_sym_COLON,
  [9802] = 2,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__functional_expression,
  [9809] = 2,
    ACTIONS(881), 1,
      aux_sym__name_token1,
    STATE(76), 1,
      sym__name,
  [9816] = 2,
    ACTIONS(869), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_function_arguments,
  [9823] = 2,
    ACTIONS(37), 1,
      sym__function,
    STATE(201), 1,
      sym_function,
  [9830] = 2,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__functional_expression,
  [9837] = 1,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
  [9841] = 1,
    ACTIONS(885), 1,
      anon_sym_QMARK,
  [9845] = 1,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
  [9849] = 1,
    ACTIONS(889), 1,
      anon_sym_DOT,
  [9853] = 1,
    ACTIONS(891), 1,
      anon_sym_DOT,
  [9857] = 1,
    ACTIONS(893), 1,
      anon_sym_DASH,
  [9861] = 1,
    ACTIONS(895), 1,
      anon_sym_DASH,
  [9865] = 1,
    ACTIONS(897), 1,
      anon_sym_COLON,
  [9869] = 1,
    ACTIONS(899), 1,
      sym__function,
  [9873] = 1,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
  [9877] = 1,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
  [9881] = 1,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
  [9885] = 1,
    ACTIONS(676), 1,
      anon_sym_DOT,
  [9889] = 1,
    ACTIONS(907), 1,
      aux_sym_time_token1,
  [9893] = 1,
    ACTIONS(909), 1,
      aux_sym_date_token1,
  [9897] = 1,
    ACTIONS(911), 1,
      anon_sym_QMARK,
  [9901] = 1,
    ACTIONS(511), 1,
      anon_sym_DOT,
  [9905] = 1,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
  [9909] = 1,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [9913] = 1,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
  [9917] = 1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
  [9921] = 1,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
  [9925] = 1,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
  [9929] = 1,
    ACTIONS(925), 1,
      anon_sym_QMARK,
  [9933] = 1,
    ACTIONS(927), 1,
      anon_sym_BANG,
  [9937] = 1,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
  [9941] = 1,
    ACTIONS(931), 1,
      aux_sym_comment_token2,
  [9945] = 1,
    ACTIONS(933), 1,
      anon_sym_BANG,
  [9949] = 1,
    ACTIONS(935), 1,
      aux_sym_comment_token1,
  [9953] = 1,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [9957] = 1,
    ACTIONS(366), 1,
      anon_sym_DOT,
  [9961] = 1,
    ACTIONS(939), 1,
      anon_sym_SLASH,
  [9965] = 1,
    ACTIONS(941), 1,
      aux_sym__name_token1,
  [9969] = 1,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
  [9973] = 1,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [9977] = 1,
    ACTIONS(947), 1,
      anon_sym_QMARK,
  [9981] = 1,
    ACTIONS(949), 1,
      aux_sym_time_token1,
  [9985] = 1,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
  [9989] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [9993] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
  [9997] = 1,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
  [10001] = 1,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
  [10005] = 1,
    ACTIONS(961), 1,
      anon_sym_BANG,
  [10009] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
  [10013] = 1,
    ACTIONS(965), 1,
      aux_sym_time_token1,
  [10017] = 1,
    ACTIONS(967), 1,
      aux_sym_time_token1,
  [10021] = 1,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
  [10025] = 1,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
  [10029] = 1,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [10033] = 1,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [10037] = 1,
    ACTIONS(977), 1,
      aux_sym__name_token1,
  [10041] = 1,
    ACTIONS(979), 1,
      aux_sym_time_token1,
  [10045] = 1,
    ACTIONS(981), 1,
      aux_sym_date_token1,
  [10049] = 1,
    ACTIONS(981), 1,
      aux_sym_time_token1,
  [10053] = 1,
    ACTIONS(983), 1,
      aux_sym__name_token1,
  [10057] = 1,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
  [10061] = 1,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [10065] = 1,
    ACTIONS(989), 1,
      aux_sym_time_token1,
  [10069] = 1,
    ACTIONS(909), 1,
      aux_sym_time_token1,
  [10073] = 1,
    ACTIONS(991), 1,
      aux_sym_time_token1,
  [10077] = 1,
    ACTIONS(993), 1,
      aux_sym_date_token1,
  [10081] = 1,
    ACTIONS(993), 1,
      aux_sym_time_token1,
  [10085] = 1,
    ACTIONS(995), 1,
      anon_sym_DASH,
  [10089] = 1,
    ACTIONS(997), 1,
      anon_sym_COLON,
  [10093] = 1,
    ACTIONS(999), 1,
      anon_sym_DASH,
  [10097] = 1,
    ACTIONS(1001), 1,
      anon_sym_DASH,
  [10101] = 1,
    ACTIONS(1003), 1,
      anon_sym_COLON,
  [10105] = 1,
    ACTIONS(1005), 1,
      anon_sym_DASH,
  [10109] = 1,
    ACTIONS(1007), 1,
      anon_sym_DASH,
  [10113] = 1,
    ACTIONS(1009), 1,
      aux_sym_time_token1,
  [10117] = 1,
    ACTIONS(1011), 1,
      aux_sym_time_token1,
  [10121] = 1,
    ACTIONS(1013), 1,
      aux_sym_time_token1,
  [10125] = 1,
    ACTIONS(1015), 1,
      aux_sym_time_token1,
  [10129] = 1,
    ACTIONS(1017), 1,
      aux_sym_time_token1,
  [10133] = 1,
    ACTIONS(1019), 1,
      aux_sym_time_token1,
  [10137] = 1,
    ACTIONS(1021), 1,
      anon_sym_COLON,
  [10141] = 1,
    ACTIONS(1023), 1,
      anon_sym_DASH,
  [10145] = 1,
    ACTIONS(1025), 1,
      anon_sym_DASH,
  [10149] = 1,
    ACTIONS(1027), 1,
      anon_sym_COLON,
  [10153] = 1,
    ACTIONS(1029), 1,
      anon_sym_DASH,
  [10157] = 1,
    ACTIONS(1031), 1,
      anon_sym_DASH,
  [10161] = 1,
    ACTIONS(1033), 1,
      aux_sym_time_token1,
  [10165] = 1,
    ACTIONS(1035), 1,
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
  [SMALL_STATE(56)] = 694,
  [SMALL_STATE(57)] = 758,
  [SMALL_STATE(58)] = 824,
  [SMALL_STATE(59)] = 888,
  [SMALL_STATE(60)] = 952,
  [SMALL_STATE(61)] = 1016,
  [SMALL_STATE(62)] = 1084,
  [SMALL_STATE(63)] = 1152,
  [SMALL_STATE(64)] = 1216,
  [SMALL_STATE(65)] = 1282,
  [SMALL_STATE(66)] = 1348,
  [SMALL_STATE(67)] = 1415,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1541,
  [SMALL_STATE(70)] = 1604,
  [SMALL_STATE(71)] = 1671,
  [SMALL_STATE(72)] = 1738,
  [SMALL_STATE(73)] = 1801,
  [SMALL_STATE(74)] = 1864,
  [SMALL_STATE(75)] = 1927,
  [SMALL_STATE(76)] = 1994,
  [SMALL_STATE(77)] = 2061,
  [SMALL_STATE(78)] = 2128,
  [SMALL_STATE(79)] = 2193,
  [SMALL_STATE(80)] = 2255,
  [SMALL_STATE(81)] = 2317,
  [SMALL_STATE(82)] = 2379,
  [SMALL_STATE(83)] = 2441,
  [SMALL_STATE(84)] = 2503,
  [SMALL_STATE(85)] = 2564,
  [SMALL_STATE(86)] = 2625,
  [SMALL_STATE(87)] = 2686,
  [SMALL_STATE(88)] = 2747,
  [SMALL_STATE(89)] = 2808,
  [SMALL_STATE(90)] = 2869,
  [SMALL_STATE(91)] = 2930,
  [SMALL_STATE(92)] = 2991,
  [SMALL_STATE(93)] = 3052,
  [SMALL_STATE(94)] = 3113,
  [SMALL_STATE(95)] = 3222,
  [SMALL_STATE(96)] = 3283,
  [SMALL_STATE(97)] = 3390,
  [SMALL_STATE(98)] = 3497,
  [SMALL_STATE(99)] = 3558,
  [SMALL_STATE(100)] = 3619,
  [SMALL_STATE(101)] = 3726,
  [SMALL_STATE(102)] = 3787,
  [SMALL_STATE(103)] = 3848,
  [SMALL_STATE(104)] = 3909,
  [SMALL_STATE(105)] = 3970,
  [SMALL_STATE(106)] = 4031,
  [SMALL_STATE(107)] = 4092,
  [SMALL_STATE(108)] = 4153,
  [SMALL_STATE(109)] = 4214,
  [SMALL_STATE(110)] = 4275,
  [SMALL_STATE(111)] = 4336,
  [SMALL_STATE(112)] = 4443,
  [SMALL_STATE(113)] = 4504,
  [SMALL_STATE(114)] = 4565,
  [SMALL_STATE(115)] = 4626,
  [SMALL_STATE(116)] = 4687,
  [SMALL_STATE(117)] = 4748,
  [SMALL_STATE(118)] = 4809,
  [SMALL_STATE(119)] = 4870,
  [SMALL_STATE(120)] = 4931,
  [SMALL_STATE(121)] = 4992,
  [SMALL_STATE(122)] = 5053,
  [SMALL_STATE(123)] = 5114,
  [SMALL_STATE(124)] = 5175,
  [SMALL_STATE(125)] = 5282,
  [SMALL_STATE(126)] = 5345,
  [SMALL_STATE(127)] = 5448,
  [SMALL_STATE(128)] = 5551,
  [SMALL_STATE(129)] = 5654,
  [SMALL_STATE(130)] = 5757,
  [SMALL_STATE(131)] = 5860,
  [SMALL_STATE(132)] = 5963,
  [SMALL_STATE(133)] = 6066,
  [SMALL_STATE(134)] = 6169,
  [SMALL_STATE(135)] = 6272,
  [SMALL_STATE(136)] = 6375,
  [SMALL_STATE(137)] = 6478,
  [SMALL_STATE(138)] = 6581,
  [SMALL_STATE(139)] = 6684,
  [SMALL_STATE(140)] = 6787,
  [SMALL_STATE(141)] = 6890,
  [SMALL_STATE(142)] = 6993,
  [SMALL_STATE(143)] = 7096,
  [SMALL_STATE(144)] = 7152,
  [SMALL_STATE(145)] = 7208,
  [SMALL_STATE(146)] = 7264,
  [SMALL_STATE(147)] = 7318,
  [SMALL_STATE(148)] = 7363,
  [SMALL_STATE(149)] = 7406,
  [SMALL_STATE(150)] = 7451,
  [SMALL_STATE(151)] = 7489,
  [SMALL_STATE(152)] = 7529,
  [SMALL_STATE(153)] = 7567,
  [SMALL_STATE(154)] = 7605,
  [SMALL_STATE(155)] = 7645,
  [SMALL_STATE(156)] = 7685,
  [SMALL_STATE(157)] = 7723,
  [SMALL_STATE(158)] = 7764,
  [SMALL_STATE(159)] = 7805,
  [SMALL_STATE(160)] = 7842,
  [SMALL_STATE(161)] = 7881,
  [SMALL_STATE(162)] = 7917,
  [SMALL_STATE(163)] = 7953,
  [SMALL_STATE(164)] = 7989,
  [SMALL_STATE(165)] = 8025,
  [SMALL_STATE(166)] = 8063,
  [SMALL_STATE(167)] = 8097,
  [SMALL_STATE(168)] = 8131,
  [SMALL_STATE(169)] = 8173,
  [SMALL_STATE(170)] = 8207,
  [SMALL_STATE(171)] = 8241,
  [SMALL_STATE(172)] = 8275,
  [SMALL_STATE(173)] = 8317,
  [SMALL_STATE(174)] = 8351,
  [SMALL_STATE(175)] = 8389,
  [SMALL_STATE(176)] = 8423,
  [SMALL_STATE(177)] = 8457,
  [SMALL_STATE(178)] = 8499,
  [SMALL_STATE(179)] = 8536,
  [SMALL_STATE(180)] = 8568,
  [SMALL_STATE(181)] = 8600,
  [SMALL_STATE(182)] = 8632,
  [SMALL_STATE(183)] = 8664,
  [SMALL_STATE(184)] = 8696,
  [SMALL_STATE(185)] = 8734,
  [SMALL_STATE(186)] = 8766,
  [SMALL_STATE(187)] = 8796,
  [SMALL_STATE(188)] = 8826,
  [SMALL_STATE(189)] = 8856,
  [SMALL_STATE(190)] = 8886,
  [SMALL_STATE(191)] = 8916,
  [SMALL_STATE(192)] = 8946,
  [SMALL_STATE(193)] = 8976,
  [SMALL_STATE(194)] = 9006,
  [SMALL_STATE(195)] = 9021,
  [SMALL_STATE(196)] = 9036,
  [SMALL_STATE(197)] = 9051,
  [SMALL_STATE(198)] = 9066,
  [SMALL_STATE(199)] = 9081,
  [SMALL_STATE(200)] = 9096,
  [SMALL_STATE(201)] = 9114,
  [SMALL_STATE(202)] = 9130,
  [SMALL_STATE(203)] = 9146,
  [SMALL_STATE(204)] = 9158,
  [SMALL_STATE(205)] = 9170,
  [SMALL_STATE(206)] = 9178,
  [SMALL_STATE(207)] = 9189,
  [SMALL_STATE(208)] = 9198,
  [SMALL_STATE(209)] = 9207,
  [SMALL_STATE(210)] = 9218,
  [SMALL_STATE(211)] = 9231,
  [SMALL_STATE(212)] = 9240,
  [SMALL_STATE(213)] = 9251,
  [SMALL_STATE(214)] = 9262,
  [SMALL_STATE(215)] = 9273,
  [SMALL_STATE(216)] = 9283,
  [SMALL_STATE(217)] = 9293,
  [SMALL_STATE(218)] = 9303,
  [SMALL_STATE(219)] = 9313,
  [SMALL_STATE(220)] = 9323,
  [SMALL_STATE(221)] = 9331,
  [SMALL_STATE(222)] = 9341,
  [SMALL_STATE(223)] = 9351,
  [SMALL_STATE(224)] = 9361,
  [SMALL_STATE(225)] = 9371,
  [SMALL_STATE(226)] = 9381,
  [SMALL_STATE(227)] = 9391,
  [SMALL_STATE(228)] = 9401,
  [SMALL_STATE(229)] = 9411,
  [SMALL_STATE(230)] = 9421,
  [SMALL_STATE(231)] = 9431,
  [SMALL_STATE(232)] = 9441,
  [SMALL_STATE(233)] = 9451,
  [SMALL_STATE(234)] = 9461,
  [SMALL_STATE(235)] = 9471,
  [SMALL_STATE(236)] = 9481,
  [SMALL_STATE(237)] = 9491,
  [SMALL_STATE(238)] = 9501,
  [SMALL_STATE(239)] = 9511,
  [SMALL_STATE(240)] = 9521,
  [SMALL_STATE(241)] = 9531,
  [SMALL_STATE(242)] = 9541,
  [SMALL_STATE(243)] = 9551,
  [SMALL_STATE(244)] = 9561,
  [SMALL_STATE(245)] = 9571,
  [SMALL_STATE(246)] = 9578,
  [SMALL_STATE(247)] = 9583,
  [SMALL_STATE(248)] = 9590,
  [SMALL_STATE(249)] = 9597,
  [SMALL_STATE(250)] = 9604,
  [SMALL_STATE(251)] = 9611,
  [SMALL_STATE(252)] = 9618,
  [SMALL_STATE(253)] = 9623,
  [SMALL_STATE(254)] = 9628,
  [SMALL_STATE(255)] = 9633,
  [SMALL_STATE(256)] = 9640,
  [SMALL_STATE(257)] = 9647,
  [SMALL_STATE(258)] = 9654,
  [SMALL_STATE(259)] = 9661,
  [SMALL_STATE(260)] = 9668,
  [SMALL_STATE(261)] = 9675,
  [SMALL_STATE(262)] = 9682,
  [SMALL_STATE(263)] = 9689,
  [SMALL_STATE(264)] = 9694,
  [SMALL_STATE(265)] = 9701,
  [SMALL_STATE(266)] = 9708,
  [SMALL_STATE(267)] = 9715,
  [SMALL_STATE(268)] = 9722,
  [SMALL_STATE(269)] = 9729,
  [SMALL_STATE(270)] = 9736,
  [SMALL_STATE(271)] = 9743,
  [SMALL_STATE(272)] = 9750,
  [SMALL_STATE(273)] = 9757,
  [SMALL_STATE(274)] = 9764,
  [SMALL_STATE(275)] = 9771,
  [SMALL_STATE(276)] = 9778,
  [SMALL_STATE(277)] = 9783,
  [SMALL_STATE(278)] = 9788,
  [SMALL_STATE(279)] = 9795,
  [SMALL_STATE(280)] = 9802,
  [SMALL_STATE(281)] = 9809,
  [SMALL_STATE(282)] = 9816,
  [SMALL_STATE(283)] = 9823,
  [SMALL_STATE(284)] = 9830,
  [SMALL_STATE(285)] = 9837,
  [SMALL_STATE(286)] = 9841,
  [SMALL_STATE(287)] = 9845,
  [SMALL_STATE(288)] = 9849,
  [SMALL_STATE(289)] = 9853,
  [SMALL_STATE(290)] = 9857,
  [SMALL_STATE(291)] = 9861,
  [SMALL_STATE(292)] = 9865,
  [SMALL_STATE(293)] = 9869,
  [SMALL_STATE(294)] = 9873,
  [SMALL_STATE(295)] = 9877,
  [SMALL_STATE(296)] = 9881,
  [SMALL_STATE(297)] = 9885,
  [SMALL_STATE(298)] = 9889,
  [SMALL_STATE(299)] = 9893,
  [SMALL_STATE(300)] = 9897,
  [SMALL_STATE(301)] = 9901,
  [SMALL_STATE(302)] = 9905,
  [SMALL_STATE(303)] = 9909,
  [SMALL_STATE(304)] = 9913,
  [SMALL_STATE(305)] = 9917,
  [SMALL_STATE(306)] = 9921,
  [SMALL_STATE(307)] = 9925,
  [SMALL_STATE(308)] = 9929,
  [SMALL_STATE(309)] = 9933,
  [SMALL_STATE(310)] = 9937,
  [SMALL_STATE(311)] = 9941,
  [SMALL_STATE(312)] = 9945,
  [SMALL_STATE(313)] = 9949,
  [SMALL_STATE(314)] = 9953,
  [SMALL_STATE(315)] = 9957,
  [SMALL_STATE(316)] = 9961,
  [SMALL_STATE(317)] = 9965,
  [SMALL_STATE(318)] = 9969,
  [SMALL_STATE(319)] = 9973,
  [SMALL_STATE(320)] = 9977,
  [SMALL_STATE(321)] = 9981,
  [SMALL_STATE(322)] = 9985,
  [SMALL_STATE(323)] = 9989,
  [SMALL_STATE(324)] = 9993,
  [SMALL_STATE(325)] = 9997,
  [SMALL_STATE(326)] = 10001,
  [SMALL_STATE(327)] = 10005,
  [SMALL_STATE(328)] = 10009,
  [SMALL_STATE(329)] = 10013,
  [SMALL_STATE(330)] = 10017,
  [SMALL_STATE(331)] = 10021,
  [SMALL_STATE(332)] = 10025,
  [SMALL_STATE(333)] = 10029,
  [SMALL_STATE(334)] = 10033,
  [SMALL_STATE(335)] = 10037,
  [SMALL_STATE(336)] = 10041,
  [SMALL_STATE(337)] = 10045,
  [SMALL_STATE(338)] = 10049,
  [SMALL_STATE(339)] = 10053,
  [SMALL_STATE(340)] = 10057,
  [SMALL_STATE(341)] = 10061,
  [SMALL_STATE(342)] = 10065,
  [SMALL_STATE(343)] = 10069,
  [SMALL_STATE(344)] = 10073,
  [SMALL_STATE(345)] = 10077,
  [SMALL_STATE(346)] = 10081,
  [SMALL_STATE(347)] = 10085,
  [SMALL_STATE(348)] = 10089,
  [SMALL_STATE(349)] = 10093,
  [SMALL_STATE(350)] = 10097,
  [SMALL_STATE(351)] = 10101,
  [SMALL_STATE(352)] = 10105,
  [SMALL_STATE(353)] = 10109,
  [SMALL_STATE(354)] = 10113,
  [SMALL_STATE(355)] = 10117,
  [SMALL_STATE(356)] = 10121,
  [SMALL_STATE(357)] = 10125,
  [SMALL_STATE(358)] = 10129,
  [SMALL_STATE(359)] = 10133,
  [SMALL_STATE(360)] = 10137,
  [SMALL_STATE(361)] = 10141,
  [SMALL_STATE(362)] = 10145,
  [SMALL_STATE(363)] = 10149,
  [SMALL_STATE(364)] = 10153,
  [SMALL_STATE(365)] = 10157,
  [SMALL_STATE(366)] = 10161,
  [SMALL_STATE(367)] = 10165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(258),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(249),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(203),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(208),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(169),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(342),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(251),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(167),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(169),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(198),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(113),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(200),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(252),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(339),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(335),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(332),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(205),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(119),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(104),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(102),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(260),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(262),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(264),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(171),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(266),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(313),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(311),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(285),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(143),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(258),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(249),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(203),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(208),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(169),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(342),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(251),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(167),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(169),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(198),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(113),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(200),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(252),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(339),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(335),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(332),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(205),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(119),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(104),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(102),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(259),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(260),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(262),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(264),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(171),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(171),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(266),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(313),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(311),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(285),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(143),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(274),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(141),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(141),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(250),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_block, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_block, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_sql, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_sql, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(265),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(140),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(140),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(199),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(206),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(247),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(256),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(212),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(55),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(233),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [919] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
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
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
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
