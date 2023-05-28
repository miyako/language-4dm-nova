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
#define STATE_COUNT 362
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
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
  sym_source = 116,
  sym__statement = 117,
  sym__computed = 118,
  sym__scope = 119,
  sym__name = 120,
  sym__classic_name = 121,
  sym_function_name = 122,
  sym__function_argument = 123,
  sym_function_arguments = 124,
  sym_function_result = 125,
  sym_alias_name = 126,
  sym__binary_operator = 127,
  sym_class = 128,
  sym_local_variable = 129,
  sym_interprocess_variable = 130,
  sym_numeric_parameter = 131,
  sym__variable = 132,
  sym__mutable = 133,
  sym__immutable = 134,
  sym_class_function = 135,
  sym_generic_function = 136,
  sym__function_parameter = 137,
  sym__functional_expression = 138,
  sym__function_call = 139,
  sym__single_condition = 140,
  sym__condition = 141,
  sym_ternary_block = 142,
  sym_time = 143,
  sym_date = 144,
  sym__dec_literal = 145,
  sym__num_literal = 146,
  sym__exp_literal = 147,
  sym_number = 148,
  sym_string = 149,
  sym_constant = 150,
  sym_function_block = 151,
  sym_declare_block = 152,
  sym_alias_block = 153,
  sym_class_extends = 154,
  sym_class_constructor = 155,
  sym_var_declaration_block = 156,
  sym_classic_compiler_block = 157,
  sym_property_declaration_block = 158,
  sym_return_block = 159,
  sym_assignment_block = 160,
  sym_function_call = 161,
  sym_var = 162,
  sym_property = 163,
  sym_alias = 164,
  sym_declare = 165,
  sym_function = 166,
  sym_return = 167,
  sym_break = 168,
  sym_continue = 169,
  sym_this = 170,
  sym_form = 171,
  sym_super = 172,
  sym__class_store = 173,
  sym__class = 174,
  sym__basic_type = 175,
  sym_system_variable = 176,
  sym__classic_compiler_longint = 177,
  sym_classic_compiler = 178,
  sym_command_suffix = 179,
  sym_comment = 180,
  sym_if = 181,
  sym_else = 182,
  sym_end_if = 183,
  sym__if = 184,
  sym_if_block = 185,
  aux_sym_source_repeat1 = 186,
  aux_sym__function_argument_repeat1 = 187,
  aux_sym_function_arguments_repeat1 = 188,
  aux_sym__mutable_repeat1 = 189,
  aux_sym__functional_expression_repeat1 = 190,
  aux_sym__condition_repeat1 = 191,
  aux_sym_string_repeat1 = 192,
  aux_sym_var_declaration_block_repeat1 = 193,
  aux_sym_classic_compiler_block_repeat1 = 194,
  aux_sym_property_declaration_block_repeat1 = 195,
  aux_sym_if_block_repeat1 = 196,
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
      if (eof) ADVANCE(273);
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == '4') ADVANCE(364);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(323);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(345);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(297);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(302);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(286);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '^') ADVANCE(340);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(322);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(377);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(372);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '4') ADVANCE(58);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(323);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(345);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '^') ADVANCE(340);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '4') ADVANCE(57);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(345);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      if (lookahead == '^') ADVANCE(340);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == ';') ADVANCE(323);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(345);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(317);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '^') ADVANCE(340);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '/') ADVANCE(436);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(440);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(328);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(268);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(341);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(428);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 105:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(445);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 133:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(419);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(399);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 195:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 196:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 225:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 251:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 252:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 254:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 255:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 256:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 257:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 258:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      END_STATE();
    case 259:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 260:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 261:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 262:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(394);
      END_STATE();
    case 263:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(303);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 271:
      if (eof) ADVANCE(273);
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == '4') ADVANCE(364);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(345);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(32);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '^') ADVANCE(340);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 272:
      if (eof) ADVANCE(273);
      if (lookahead == '!') ADVANCE(373);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(327);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == '4') ADVANCE(364);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == ';') ADVANCE(323);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(32);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(2);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(2);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '>') ADVANCE(328);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(336);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_numeric_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(352);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '?') ADVANCE(351);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(387);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__this);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__form);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__super);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__system_variable_ok);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__system_variable_document);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__system_variable_flddelimit);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__system_variable_recdelimit);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__system_variable_error);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__system_variable_error_method);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__system_variable_error_line);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__system_variable_error_formula);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__system_variable_mousedown);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__system_variable_mousex);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__system_variable_mousey);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__system_variable_keycode);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__system_variable_modifiers);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__system_variable_mouseproc);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_command_suffix_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(14);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__if_e);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__if_f);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__else_e);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__else_f);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__end_if_e);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__end_if_f);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 272},
  [2] = {.lex_state = 272},
  [3] = {.lex_state = 272},
  [4] = {.lex_state = 272},
  [5] = {.lex_state = 272},
  [6] = {.lex_state = 272},
  [7] = {.lex_state = 272},
  [8] = {.lex_state = 271},
  [9] = {.lex_state = 271},
  [10] = {.lex_state = 271},
  [11] = {.lex_state = 271},
  [12] = {.lex_state = 271},
  [13] = {.lex_state = 271},
  [14] = {.lex_state = 271},
  [15] = {.lex_state = 271},
  [16] = {.lex_state = 271},
  [17] = {.lex_state = 271},
  [18] = {.lex_state = 271},
  [19] = {.lex_state = 271},
  [20] = {.lex_state = 271},
  [21] = {.lex_state = 271},
  [22] = {.lex_state = 271},
  [23] = {.lex_state = 271},
  [24] = {.lex_state = 271},
  [25] = {.lex_state = 271},
  [26] = {.lex_state = 271},
  [27] = {.lex_state = 271},
  [28] = {.lex_state = 271},
  [29] = {.lex_state = 271},
  [30] = {.lex_state = 271},
  [31] = {.lex_state = 271},
  [32] = {.lex_state = 271},
  [33] = {.lex_state = 271},
  [34] = {.lex_state = 271},
  [35] = {.lex_state = 271},
  [36] = {.lex_state = 271},
  [37] = {.lex_state = 271},
  [38] = {.lex_state = 271},
  [39] = {.lex_state = 271},
  [40] = {.lex_state = 271},
  [41] = {.lex_state = 271},
  [42] = {.lex_state = 271},
  [43] = {.lex_state = 271},
  [44] = {.lex_state = 271},
  [45] = {.lex_state = 271},
  [46] = {.lex_state = 271},
  [47] = {.lex_state = 272},
  [48] = {.lex_state = 272},
  [49] = {.lex_state = 272},
  [50] = {.lex_state = 272},
  [51] = {.lex_state = 272},
  [52] = {.lex_state = 272},
  [53] = {.lex_state = 272},
  [54] = {.lex_state = 272},
  [55] = {.lex_state = 272},
  [56] = {.lex_state = 272},
  [57] = {.lex_state = 272},
  [58] = {.lex_state = 272},
  [59] = {.lex_state = 272},
  [60] = {.lex_state = 272},
  [61] = {.lex_state = 272},
  [62] = {.lex_state = 272},
  [63] = {.lex_state = 272},
  [64] = {.lex_state = 272},
  [65] = {.lex_state = 272},
  [66] = {.lex_state = 272},
  [67] = {.lex_state = 272},
  [68] = {.lex_state = 272},
  [69] = {.lex_state = 272},
  [70] = {.lex_state = 272},
  [71] = {.lex_state = 272},
  [72] = {.lex_state = 272},
  [73] = {.lex_state = 272},
  [74] = {.lex_state = 272},
  [75] = {.lex_state = 272},
  [76] = {.lex_state = 272},
  [77] = {.lex_state = 272},
  [78] = {.lex_state = 272},
  [79] = {.lex_state = 272},
  [80] = {.lex_state = 272},
  [81] = {.lex_state = 272},
  [82] = {.lex_state = 272},
  [83] = {.lex_state = 272},
  [84] = {.lex_state = 272},
  [85] = {.lex_state = 272},
  [86] = {.lex_state = 272},
  [87] = {.lex_state = 272},
  [88] = {.lex_state = 272},
  [89] = {.lex_state = 272},
  [90] = {.lex_state = 272},
  [91] = {.lex_state = 272},
  [92] = {.lex_state = 272},
  [93] = {.lex_state = 272},
  [94] = {.lex_state = 272},
  [95] = {.lex_state = 272},
  [96] = {.lex_state = 272},
  [97] = {.lex_state = 272},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 272},
  [100] = {.lex_state = 272},
  [101] = {.lex_state = 272},
  [102] = {.lex_state = 272},
  [103] = {.lex_state = 272},
  [104] = {.lex_state = 272},
  [105] = {.lex_state = 272},
  [106] = {.lex_state = 272},
  [107] = {.lex_state = 272},
  [108] = {.lex_state = 272},
  [109] = {.lex_state = 272},
  [110] = {.lex_state = 272},
  [111] = {.lex_state = 272},
  [112] = {.lex_state = 272},
  [113] = {.lex_state = 272},
  [114] = {.lex_state = 272},
  [115] = {.lex_state = 272},
  [116] = {.lex_state = 272},
  [117] = {.lex_state = 272},
  [118] = {.lex_state = 272},
  [119] = {.lex_state = 272},
  [120] = {.lex_state = 272},
  [121] = {.lex_state = 272},
  [122] = {.lex_state = 272},
  [123] = {.lex_state = 272},
  [124] = {.lex_state = 272},
  [125] = {.lex_state = 272},
  [126] = {.lex_state = 272},
  [127] = {.lex_state = 272},
  [128] = {.lex_state = 272},
  [129] = {.lex_state = 272},
  [130] = {.lex_state = 272},
  [131] = {.lex_state = 272},
  [132] = {.lex_state = 272},
  [133] = {.lex_state = 272},
  [134] = {.lex_state = 272},
  [135] = {.lex_state = 272},
  [136] = {.lex_state = 272},
  [137] = {.lex_state = 272},
  [138] = {.lex_state = 272},
  [139] = {.lex_state = 272},
  [140] = {.lex_state = 272},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 264},
  [198] = {.lex_state = 264},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 264},
  [202] = {.lex_state = 264},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 264},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 272},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 272},
  [215] = {.lex_state = 272},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 272},
  [219] = {.lex_state = 272},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 272},
  [222] = {.lex_state = 272},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 272},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 272},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 272},
  [230] = {.lex_state = 272},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 272},
  [239] = {.lex_state = 434},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 272},
  [244] = {.lex_state = 272},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 272},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 434},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 434},
  [262] = {.lex_state = 272},
  [263] = {.lex_state = 272},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 272},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 272},
  [271] = {.lex_state = 434},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 434},
  [274] = {.lex_state = 272},
  [275] = {.lex_state = 434},
  [276] = {.lex_state = 434},
  [277] = {.lex_state = 272},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 272},
  [281] = {.lex_state = 272},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 437},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 272},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 272},
  [300] = {.lex_state = 271},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 272},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 271},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 271},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 271},
  [326] = {.lex_state = 272},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 7},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 272},
  [342] = {.lex_state = 272},
  [343] = {.lex_state = 271},
  [344] = {.lex_state = 271},
  [345] = {.lex_state = 272},
  [346] = {.lex_state = 271},
  [347] = {.lex_state = 271},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 272},
  [355] = {.lex_state = 271},
  [356] = {.lex_state = 271},
  [357] = {.lex_state = 272},
  [358] = {.lex_state = 271},
  [359] = {.lex_state = 271},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source] = STATE(282),
    [sym__statement] = STATE(6),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(6),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
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
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(6),
    [sym_break] = STATE(6),
    [sym_continue] = STATE(6),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(6),
    [sym_if] = STATE(294),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
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
  },
  [2] = {
    [sym__statement] = STATE(107),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(107),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(107),
    [sym_declare_block] = STATE(107),
    [sym_alias_block] = STATE(107),
    [sym_class_extends] = STATE(107),
    [sym_class_constructor] = STATE(107),
    [sym_var_declaration_block] = STATE(107),
    [sym_classic_compiler_block] = STATE(107),
    [sym_property_declaration_block] = STATE(107),
    [sym_return_block] = STATE(107),
    [sym_assignment_block] = STATE(107),
    [sym_function_call] = STATE(107),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(107),
    [sym_if] = STATE(294),
    [sym_end_if] = STATE(132),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(107),
    [aux_sym_if_block_repeat1] = STATE(4),
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
    [sym__end_if_e] = ACTIONS(65),
    [sym__end_if_f] = ACTIONS(65),
  },
  [3] = {
    [sym__statement] = STATE(107),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(107),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(107),
    [sym_declare_block] = STATE(107),
    [sym_alias_block] = STATE(107),
    [sym_class_extends] = STATE(107),
    [sym_class_constructor] = STATE(107),
    [sym_var_declaration_block] = STATE(107),
    [sym_classic_compiler_block] = STATE(107),
    [sym_property_declaration_block] = STATE(107),
    [sym_return_block] = STATE(107),
    [sym_assignment_block] = STATE(107),
    [sym_function_call] = STATE(107),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(107),
    [sym_if] = STATE(294),
    [sym_end_if] = STATE(119),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(107),
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
    [sym__end_if_e] = ACTIONS(65),
    [sym__end_if_f] = ACTIONS(65),
  },
  [4] = {
    [sym__statement] = STATE(107),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(107),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(107),
    [sym_declare_block] = STATE(107),
    [sym_alias_block] = STATE(107),
    [sym_class_extends] = STATE(107),
    [sym_class_constructor] = STATE(107),
    [sym_var_declaration_block] = STATE(107),
    [sym_classic_compiler_block] = STATE(107),
    [sym_property_declaration_block] = STATE(107),
    [sym_return_block] = STATE(107),
    [sym_assignment_block] = STATE(107),
    [sym_function_call] = STATE(107),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(107),
    [sym_if] = STATE(294),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(107),
    [aux_sym_if_block_repeat1] = STATE(4),
    [sym__local] = ACTIONS(67),
    [sym__exposed] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_LT_GT] = ACTIONS(76),
    [aux_sym_numeric_parameter_token1] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(88),
    [sym__hex_literal] = ACTIONS(91),
    [aux_sym__num_literal_token1] = ACTIONS(79),
    [aux_sym__exp_literal_token1] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym__class_constructor] = ACTIONS(97),
    [sym__class_extends] = ACTIONS(100),
    [sym__var] = ACTIONS(103),
    [sym__property] = ACTIONS(106),
    [sym__alias] = ACTIONS(109),
    [sym__declare] = ACTIONS(112),
    [sym__function] = ACTIONS(115),
    [sym__return] = ACTIONS(118),
    [sym__break] = ACTIONS(121),
    [sym__continue] = ACTIONS(124),
    [sym__this] = ACTIONS(127),
    [sym__form] = ACTIONS(130),
    [sym__super] = ACTIONS(133),
    [sym__class_store_4d] = ACTIONS(136),
    [sym__class_store_ds] = ACTIONS(136),
    [sym__class_store_cs] = ACTIONS(136),
    [sym__system_variable_ok] = ACTIONS(139),
    [sym__system_variable_document] = ACTIONS(139),
    [sym__system_variable_flddelimit] = ACTIONS(139),
    [sym__system_variable_recdelimit] = ACTIONS(139),
    [sym__system_variable_error] = ACTIONS(142),
    [sym__system_variable_error_method] = ACTIONS(139),
    [sym__system_variable_error_line] = ACTIONS(139),
    [sym__system_variable_error_formula] = ACTIONS(139),
    [sym__system_variable_mousedown] = ACTIONS(139),
    [sym__system_variable_mousex] = ACTIONS(139),
    [sym__system_variable_mousey] = ACTIONS(139),
    [sym__system_variable_keycode] = ACTIONS(139),
    [sym__system_variable_modifiers] = ACTIONS(139),
    [sym__system_variable_mouseproc] = ACTIONS(139),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(145),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__if_e] = ACTIONS(154),
    [sym__if_f] = ACTIONS(154),
    [sym__end_if_e] = ACTIONS(157),
    [sym__end_if_f] = ACTIONS(157),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(5),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(5),
    [sym_declare_block] = STATE(5),
    [sym_alias_block] = STATE(5),
    [sym_class_extends] = STATE(5),
    [sym_class_constructor] = STATE(5),
    [sym_var_declaration_block] = STATE(5),
    [sym_classic_compiler_block] = STATE(5),
    [sym_property_declaration_block] = STATE(5),
    [sym_return_block] = STATE(5),
    [sym_assignment_block] = STATE(5),
    [sym_function_call] = STATE(5),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(5),
    [sym_break] = STATE(5),
    [sym_continue] = STATE(5),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(5),
    [sym_if] = STATE(294),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym__local] = ACTIONS(161),
    [sym__exposed] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [anon_sym_LT_GT] = ACTIONS(170),
    [aux_sym_numeric_parameter_token1] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(182),
    [sym__hex_literal] = ACTIONS(185),
    [aux_sym__num_literal_token1] = ACTIONS(173),
    [aux_sym__exp_literal_token1] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [sym__class_constructor] = ACTIONS(191),
    [sym__class_extends] = ACTIONS(194),
    [sym__var] = ACTIONS(197),
    [sym__property] = ACTIONS(200),
    [sym__alias] = ACTIONS(203),
    [sym__declare] = ACTIONS(206),
    [sym__function] = ACTIONS(209),
    [sym__return] = ACTIONS(212),
    [sym__break] = ACTIONS(215),
    [sym__continue] = ACTIONS(218),
    [sym__this] = ACTIONS(221),
    [sym__form] = ACTIONS(224),
    [sym__super] = ACTIONS(227),
    [sym__class_store_4d] = ACTIONS(230),
    [sym__class_store_ds] = ACTIONS(230),
    [sym__class_store_cs] = ACTIONS(230),
    [sym__system_variable_ok] = ACTIONS(233),
    [sym__system_variable_document] = ACTIONS(233),
    [sym__system_variable_flddelimit] = ACTIONS(233),
    [sym__system_variable_recdelimit] = ACTIONS(233),
    [sym__system_variable_error] = ACTIONS(236),
    [sym__system_variable_error_method] = ACTIONS(233),
    [sym__system_variable_error_line] = ACTIONS(233),
    [sym__system_variable_error_formula] = ACTIONS(233),
    [sym__system_variable_mousedown] = ACTIONS(233),
    [sym__system_variable_mousex] = ACTIONS(233),
    [sym__system_variable_mousey] = ACTIONS(233),
    [sym__system_variable_keycode] = ACTIONS(233),
    [sym__system_variable_modifiers] = ACTIONS(233),
    [sym__system_variable_mouseproc] = ACTIONS(233),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [anon_sym_SLASH_STAR] = ACTIONS(245),
    [sym__if_e] = ACTIONS(248),
    [sym__if_f] = ACTIONS(248),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(5),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(5),
    [sym_declare_block] = STATE(5),
    [sym_alias_block] = STATE(5),
    [sym_class_extends] = STATE(5),
    [sym_class_constructor] = STATE(5),
    [sym_var_declaration_block] = STATE(5),
    [sym_classic_compiler_block] = STATE(5),
    [sym_property_declaration_block] = STATE(5),
    [sym_return_block] = STATE(5),
    [sym_assignment_block] = STATE(5),
    [sym_function_call] = STATE(5),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(5),
    [sym_break] = STATE(5),
    [sym_continue] = STATE(5),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(5),
    [sym_if] = STATE(294),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(251),
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
  },
  [7] = {
    [sym__statement] = STATE(138),
    [sym__scope] = STATE(270),
    [sym_function_name] = STATE(269),
    [sym_alias_name] = STATE(266),
    [sym_local_variable] = STATE(147),
    [sym_interprocess_variable] = STATE(147),
    [sym_numeric_parameter] = STATE(147),
    [sym__variable] = STATE(153),
    [sym__mutable] = STATE(178),
    [sym__immutable] = STATE(169),
    [sym_class_function] = STATE(41),
    [sym_generic_function] = STATE(41),
    [sym__function_call] = STATE(41),
    [sym__single_condition] = STATE(169),
    [sym__condition] = STATE(281),
    [sym_ternary_block] = STATE(138),
    [sym_time] = STATE(167),
    [sym_date] = STATE(167),
    [sym__dec_literal] = STATE(159),
    [sym__num_literal] = STATE(159),
    [sym__exp_literal] = STATE(159),
    [sym_number] = STATE(167),
    [sym_string] = STATE(167),
    [sym_constant] = STATE(169),
    [sym_function_block] = STATE(138),
    [sym_declare_block] = STATE(138),
    [sym_alias_block] = STATE(138),
    [sym_class_extends] = STATE(138),
    [sym_class_constructor] = STATE(138),
    [sym_var_declaration_block] = STATE(138),
    [sym_classic_compiler_block] = STATE(138),
    [sym_property_declaration_block] = STATE(138),
    [sym_return_block] = STATE(138),
    [sym_assignment_block] = STATE(138),
    [sym_function_call] = STATE(138),
    [sym_var] = STATE(200),
    [sym_property] = STATE(256),
    [sym_alias] = STATE(255),
    [sym_declare] = STATE(254),
    [sym_function] = STATE(195),
    [sym_return] = STATE(138),
    [sym_break] = STATE(138),
    [sym_continue] = STATE(138),
    [sym_this] = STATE(291),
    [sym_form] = STATE(291),
    [sym_super] = STATE(251),
    [sym__class_store] = STATE(151),
    [sym__class] = STATE(172),
    [sym_system_variable] = STATE(169),
    [sym__classic_compiler_longint] = STATE(293),
    [sym_classic_compiler] = STATE(279),
    [sym_comment] = STATE(138),
    [sym_if] = STATE(294),
    [sym__if] = STATE(3),
    [sym_if_block] = STATE(138),
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
  },
  [8] = {
    [aux_sym__mutable_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__local] = ACTIONS(253),
    [sym__exposed] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_TILDE_PIPE] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_QMARK_QMARK] = ACTIONS(253),
    [anon_sym_QMARK_PLUS] = ACTIONS(253),
    [anon_sym_QMARK_DASH] = ACTIONS(253),
    [anon_sym_PLUS_EQ] = ACTIONS(253),
    [anon_sym_DASH_EQ] = ACTIONS(253),
    [anon_sym_STAR_EQ] = ACTIONS(253),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_LT_GT] = ACTIONS(253),
    [aux_sym_numeric_parameter_token1] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(253),
    [sym__hex_literal] = ACTIONS(253),
    [aux_sym__num_literal_token1] = ACTIONS(255),
    [aux_sym__exp_literal_token1] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym__class_constructor] = ACTIONS(253),
    [sym__class_extends] = ACTIONS(253),
    [sym__var] = ACTIONS(253),
    [sym__property] = ACTIONS(253),
    [sym__alias] = ACTIONS(253),
    [sym__declare] = ACTIONS(253),
    [sym__function] = ACTIONS(253),
    [sym__return] = ACTIONS(253),
    [sym__break] = ACTIONS(253),
    [sym__continue] = ACTIONS(253),
    [sym__this] = ACTIONS(253),
    [sym__form] = ACTIONS(253),
    [sym__super] = ACTIONS(253),
    [sym__class_store_4d] = ACTIONS(253),
    [sym__class_store_ds] = ACTIONS(253),
    [sym__class_store_cs] = ACTIONS(253),
    [sym__system_variable_ok] = ACTIONS(253),
    [sym__system_variable_document] = ACTIONS(253),
    [sym__system_variable_flddelimit] = ACTIONS(253),
    [sym__system_variable_recdelimit] = ACTIONS(253),
    [sym__system_variable_error] = ACTIONS(255),
    [sym__system_variable_error_method] = ACTIONS(253),
    [sym__system_variable_error_line] = ACTIONS(253),
    [sym__system_variable_error_formula] = ACTIONS(253),
    [sym__system_variable_mousedown] = ACTIONS(253),
    [sym__system_variable_mousex] = ACTIONS(253),
    [sym__system_variable_mousey] = ACTIONS(253),
    [sym__system_variable_keycode] = ACTIONS(253),
    [sym__system_variable_modifiers] = ACTIONS(253),
    [sym__system_variable_mouseproc] = ACTIONS(253),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(253),
    [anon_sym_SLASH_SLASH] = ACTIONS(253),
    [anon_sym_SLASH_STAR] = ACTIONS(253),
    [sym__if_e] = ACTIONS(253),
    [sym__if_f] = ACTIONS(255),
    [sym__else_e] = ACTIONS(253),
    [sym__else_f] = ACTIONS(253),
    [sym__end_if_e] = ACTIONS(253),
    [sym__end_if_f] = ACTIONS(253),
  },
  [9] = {
    [aux_sym__mutable_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym__local] = ACTIONS(261),
    [sym__exposed] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_TILDE_PIPE] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(261),
    [anon_sym_QMARK_PLUS] = ACTIONS(261),
    [anon_sym_QMARK_DASH] = ACTIONS(261),
    [anon_sym_PLUS_EQ] = ACTIONS(261),
    [anon_sym_DASH_EQ] = ACTIONS(261),
    [anon_sym_STAR_EQ] = ACTIONS(261),
    [anon_sym_SLASH_EQ] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_LT_GT] = ACTIONS(261),
    [aux_sym_numeric_parameter_token1] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(261),
    [sym__hex_literal] = ACTIONS(261),
    [aux_sym__num_literal_token1] = ACTIONS(263),
    [aux_sym__exp_literal_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym__class_constructor] = ACTIONS(261),
    [sym__class_extends] = ACTIONS(261),
    [sym__var] = ACTIONS(261),
    [sym__property] = ACTIONS(261),
    [sym__alias] = ACTIONS(261),
    [sym__declare] = ACTIONS(261),
    [sym__function] = ACTIONS(261),
    [sym__return] = ACTIONS(261),
    [sym__break] = ACTIONS(261),
    [sym__continue] = ACTIONS(261),
    [sym__this] = ACTIONS(261),
    [sym__form] = ACTIONS(261),
    [sym__super] = ACTIONS(261),
    [sym__class_store_4d] = ACTIONS(261),
    [sym__class_store_ds] = ACTIONS(261),
    [sym__class_store_cs] = ACTIONS(261),
    [sym__system_variable_ok] = ACTIONS(261),
    [sym__system_variable_document] = ACTIONS(261),
    [sym__system_variable_flddelimit] = ACTIONS(261),
    [sym__system_variable_recdelimit] = ACTIONS(261),
    [sym__system_variable_error] = ACTIONS(263),
    [sym__system_variable_error_method] = ACTIONS(261),
    [sym__system_variable_error_line] = ACTIONS(261),
    [sym__system_variable_error_formula] = ACTIONS(261),
    [sym__system_variable_mousedown] = ACTIONS(261),
    [sym__system_variable_mousex] = ACTIONS(261),
    [sym__system_variable_mousey] = ACTIONS(261),
    [sym__system_variable_keycode] = ACTIONS(261),
    [sym__system_variable_modifiers] = ACTIONS(261),
    [sym__system_variable_mouseproc] = ACTIONS(261),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(261),
    [anon_sym_SLASH_SLASH] = ACTIONS(261),
    [anon_sym_SLASH_STAR] = ACTIONS(261),
    [sym__if_e] = ACTIONS(261),
    [sym__if_f] = ACTIONS(263),
    [sym__else_e] = ACTIONS(261),
    [sym__else_f] = ACTIONS(261),
    [sym__end_if_e] = ACTIONS(261),
    [sym__end_if_f] = ACTIONS(261),
  },
  [10] = {
    [aux_sym__mutable_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym__local] = ACTIONS(268),
    [sym__exposed] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_TILDE_PIPE] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_QMARK_QMARK] = ACTIONS(268),
    [anon_sym_QMARK_PLUS] = ACTIONS(268),
    [anon_sym_QMARK_DASH] = ACTIONS(268),
    [anon_sym_PLUS_EQ] = ACTIONS(268),
    [anon_sym_DASH_EQ] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(268),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [anon_sym_LT_GT] = ACTIONS(268),
    [aux_sym_numeric_parameter_token1] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(270),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(268),
    [sym__hex_literal] = ACTIONS(268),
    [aux_sym__num_literal_token1] = ACTIONS(270),
    [aux_sym__exp_literal_token1] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [sym__class_constructor] = ACTIONS(268),
    [sym__class_extends] = ACTIONS(268),
    [sym__var] = ACTIONS(268),
    [sym__property] = ACTIONS(268),
    [sym__alias] = ACTIONS(268),
    [sym__declare] = ACTIONS(268),
    [sym__function] = ACTIONS(268),
    [sym__return] = ACTIONS(268),
    [sym__break] = ACTIONS(268),
    [sym__continue] = ACTIONS(268),
    [sym__this] = ACTIONS(268),
    [sym__form] = ACTIONS(268),
    [sym__super] = ACTIONS(268),
    [sym__class_store_4d] = ACTIONS(268),
    [sym__class_store_ds] = ACTIONS(268),
    [sym__class_store_cs] = ACTIONS(268),
    [sym__system_variable_ok] = ACTIONS(268),
    [sym__system_variable_document] = ACTIONS(268),
    [sym__system_variable_flddelimit] = ACTIONS(268),
    [sym__system_variable_recdelimit] = ACTIONS(268),
    [sym__system_variable_error] = ACTIONS(270),
    [sym__system_variable_error_method] = ACTIONS(268),
    [sym__system_variable_error_line] = ACTIONS(268),
    [sym__system_variable_error_formula] = ACTIONS(268),
    [sym__system_variable_mousedown] = ACTIONS(268),
    [sym__system_variable_mousex] = ACTIONS(268),
    [sym__system_variable_mousey] = ACTIONS(268),
    [sym__system_variable_keycode] = ACTIONS(268),
    [sym__system_variable_modifiers] = ACTIONS(268),
    [sym__system_variable_mouseproc] = ACTIONS(268),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_STAR] = ACTIONS(268),
    [sym__if_e] = ACTIONS(268),
    [sym__if_f] = ACTIONS(270),
    [sym__else_e] = ACTIONS(268),
    [sym__else_f] = ACTIONS(268),
    [sym__end_if_e] = ACTIONS(268),
    [sym__end_if_f] = ACTIONS(268),
  },
  [11] = {
    [aux_sym__mutable_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym__local] = ACTIONS(274),
    [sym__exposed] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(276),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym_TILDE_PIPE] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_POUND] = ACTIONS(276),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_GT_GT] = ACTIONS(274),
    [anon_sym_QMARK_QMARK] = ACTIONS(274),
    [anon_sym_QMARK_PLUS] = ACTIONS(274),
    [anon_sym_QMARK_DASH] = ACTIONS(274),
    [anon_sym_PLUS_EQ] = ACTIONS(274),
    [anon_sym_DASH_EQ] = ACTIONS(274),
    [anon_sym_STAR_EQ] = ACTIONS(274),
    [anon_sym_SLASH_EQ] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [anon_sym_LT_GT] = ACTIONS(274),
    [aux_sym_numeric_parameter_token1] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(276),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(274),
    [sym__hex_literal] = ACTIONS(274),
    [aux_sym__num_literal_token1] = ACTIONS(276),
    [aux_sym__exp_literal_token1] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [sym__class_constructor] = ACTIONS(274),
    [sym__class_extends] = ACTIONS(274),
    [sym__var] = ACTIONS(274),
    [sym__property] = ACTIONS(274),
    [sym__alias] = ACTIONS(274),
    [sym__declare] = ACTIONS(274),
    [sym__function] = ACTIONS(274),
    [sym__return] = ACTIONS(274),
    [sym__break] = ACTIONS(274),
    [sym__continue] = ACTIONS(274),
    [sym__this] = ACTIONS(274),
    [sym__form] = ACTIONS(274),
    [sym__super] = ACTIONS(274),
    [sym__class_store_4d] = ACTIONS(274),
    [sym__class_store_ds] = ACTIONS(274),
    [sym__class_store_cs] = ACTIONS(274),
    [sym__system_variable_ok] = ACTIONS(274),
    [sym__system_variable_document] = ACTIONS(274),
    [sym__system_variable_flddelimit] = ACTIONS(274),
    [sym__system_variable_recdelimit] = ACTIONS(274),
    [sym__system_variable_error] = ACTIONS(276),
    [sym__system_variable_error_method] = ACTIONS(274),
    [sym__system_variable_error_line] = ACTIONS(274),
    [sym__system_variable_error_formula] = ACTIONS(274),
    [sym__system_variable_mousedown] = ACTIONS(274),
    [sym__system_variable_mousex] = ACTIONS(274),
    [sym__system_variable_mousey] = ACTIONS(274),
    [sym__system_variable_keycode] = ACTIONS(274),
    [sym__system_variable_modifiers] = ACTIONS(274),
    [sym__system_variable_mouseproc] = ACTIONS(274),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(274),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [anon_sym_SLASH_STAR] = ACTIONS(274),
    [sym__if_e] = ACTIONS(274),
    [sym__if_f] = ACTIONS(276),
    [sym__else_e] = ACTIONS(274),
    [sym__else_f] = ACTIONS(274),
    [sym__end_if_e] = ACTIONS(274),
    [sym__end_if_f] = ACTIONS(274),
  },
  [12] = {
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
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_LT_GT] = ACTIONS(278),
    [aux_sym_numeric_parameter_token1] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(278),
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
  },
  [14] = {
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
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_LT_GT] = ACTIONS(288),
    [aux_sym_numeric_parameter_token1] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(288),
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
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym__local] = ACTIONS(261),
    [sym__exposed] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_TILDE_PIPE] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_QMARK_QMARK] = ACTIONS(261),
    [anon_sym_QMARK_PLUS] = ACTIONS(261),
    [anon_sym_QMARK_DASH] = ACTIONS(261),
    [anon_sym_PLUS_EQ] = ACTIONS(261),
    [anon_sym_DASH_EQ] = ACTIONS(261),
    [anon_sym_STAR_EQ] = ACTIONS(261),
    [anon_sym_SLASH_EQ] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_LT_GT] = ACTIONS(261),
    [aux_sym_numeric_parameter_token1] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(261),
    [sym__hex_literal] = ACTIONS(261),
    [aux_sym__num_literal_token1] = ACTIONS(263),
    [aux_sym__exp_literal_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym__class_constructor] = ACTIONS(261),
    [sym__class_extends] = ACTIONS(261),
    [sym__var] = ACTIONS(261),
    [sym__property] = ACTIONS(261),
    [sym__alias] = ACTIONS(261),
    [sym__declare] = ACTIONS(261),
    [sym__function] = ACTIONS(261),
    [sym__return] = ACTIONS(261),
    [sym__break] = ACTIONS(261),
    [sym__continue] = ACTIONS(261),
    [sym__this] = ACTIONS(261),
    [sym__form] = ACTIONS(261),
    [sym__super] = ACTIONS(261),
    [sym__class_store_4d] = ACTIONS(261),
    [sym__class_store_ds] = ACTIONS(261),
    [sym__class_store_cs] = ACTIONS(261),
    [sym__system_variable_ok] = ACTIONS(261),
    [sym__system_variable_document] = ACTIONS(261),
    [sym__system_variable_flddelimit] = ACTIONS(261),
    [sym__system_variable_recdelimit] = ACTIONS(261),
    [sym__system_variable_error] = ACTIONS(263),
    [sym__system_variable_error_method] = ACTIONS(261),
    [sym__system_variable_error_line] = ACTIONS(261),
    [sym__system_variable_error_formula] = ACTIONS(261),
    [sym__system_variable_mousedown] = ACTIONS(261),
    [sym__system_variable_mousex] = ACTIONS(261),
    [sym__system_variable_mousey] = ACTIONS(261),
    [sym__system_variable_keycode] = ACTIONS(261),
    [sym__system_variable_modifiers] = ACTIONS(261),
    [sym__system_variable_mouseproc] = ACTIONS(261),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(261),
    [anon_sym_SLASH_SLASH] = ACTIONS(261),
    [anon_sym_SLASH_STAR] = ACTIONS(261),
    [sym__if_e] = ACTIONS(261),
    [sym__if_f] = ACTIONS(263),
    [sym__else_e] = ACTIONS(261),
    [sym__else_f] = ACTIONS(261),
    [sym__end_if_e] = ACTIONS(261),
    [sym__end_if_f] = ACTIONS(261),
  },
  [16] = {
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
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_LT_GT] = ACTIONS(292),
    [aux_sym_numeric_parameter_token1] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(292),
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
  },
  [17] = {
    [aux_sym__mutable_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym__local] = ACTIONS(298),
    [sym__exposed] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_TILDE_PIPE] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(298),
    [anon_sym_QMARK_QMARK] = ACTIONS(298),
    [anon_sym_QMARK_PLUS] = ACTIONS(298),
    [anon_sym_QMARK_DASH] = ACTIONS(298),
    [anon_sym_PLUS_EQ] = ACTIONS(298),
    [anon_sym_DASH_EQ] = ACTIONS(298),
    [anon_sym_STAR_EQ] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_LT_GT] = ACTIONS(298),
    [aux_sym_numeric_parameter_token1] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_QMARK] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(300),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(298),
    [sym__hex_literal] = ACTIONS(298),
    [aux_sym__num_literal_token1] = ACTIONS(300),
    [aux_sym__exp_literal_token1] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [sym__class_constructor] = ACTIONS(298),
    [sym__class_extends] = ACTIONS(298),
    [sym__var] = ACTIONS(298),
    [sym__property] = ACTIONS(298),
    [sym__alias] = ACTIONS(298),
    [sym__declare] = ACTIONS(298),
    [sym__function] = ACTIONS(298),
    [sym__return] = ACTIONS(298),
    [sym__break] = ACTIONS(298),
    [sym__continue] = ACTIONS(298),
    [sym__this] = ACTIONS(298),
    [sym__form] = ACTIONS(298),
    [sym__super] = ACTIONS(298),
    [sym__class_store_4d] = ACTIONS(298),
    [sym__class_store_ds] = ACTIONS(298),
    [sym__class_store_cs] = ACTIONS(298),
    [sym__system_variable_ok] = ACTIONS(298),
    [sym__system_variable_document] = ACTIONS(298),
    [sym__system_variable_flddelimit] = ACTIONS(298),
    [sym__system_variable_recdelimit] = ACTIONS(298),
    [sym__system_variable_error] = ACTIONS(300),
    [sym__system_variable_error_method] = ACTIONS(298),
    [sym__system_variable_error_line] = ACTIONS(298),
    [sym__system_variable_error_formula] = ACTIONS(298),
    [sym__system_variable_mousedown] = ACTIONS(298),
    [sym__system_variable_mousex] = ACTIONS(298),
    [sym__system_variable_mousey] = ACTIONS(298),
    [sym__system_variable_keycode] = ACTIONS(298),
    [sym__system_variable_modifiers] = ACTIONS(298),
    [sym__system_variable_mouseproc] = ACTIONS(298),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_STAR] = ACTIONS(298),
    [sym__if_e] = ACTIONS(298),
    [sym__if_f] = ACTIONS(300),
    [sym__else_e] = ACTIONS(298),
    [sym__else_f] = ACTIONS(298),
    [sym__end_if_e] = ACTIONS(298),
    [sym__end_if_f] = ACTIONS(298),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym__local] = ACTIONS(302),
    [sym__exposed] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_AMP_AMP] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_TILDE_PIPE] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_GT_GT] = ACTIONS(302),
    [anon_sym_QMARK_QMARK] = ACTIONS(302),
    [anon_sym_QMARK_PLUS] = ACTIONS(302),
    [anon_sym_QMARK_DASH] = ACTIONS(302),
    [anon_sym_PLUS_EQ] = ACTIONS(302),
    [anon_sym_DASH_EQ] = ACTIONS(302),
    [anon_sym_STAR_EQ] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_LT_GT] = ACTIONS(302),
    [aux_sym_numeric_parameter_token1] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(304),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(302),
    [sym__hex_literal] = ACTIONS(302),
    [aux_sym__num_literal_token1] = ACTIONS(304),
    [aux_sym__exp_literal_token1] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym__class_constructor] = ACTIONS(302),
    [sym__class_extends] = ACTIONS(302),
    [sym__var] = ACTIONS(302),
    [sym__property] = ACTIONS(302),
    [sym__alias] = ACTIONS(302),
    [sym__declare] = ACTIONS(302),
    [sym__function] = ACTIONS(302),
    [sym__return] = ACTIONS(302),
    [sym__break] = ACTIONS(302),
    [sym__continue] = ACTIONS(302),
    [sym__this] = ACTIONS(302),
    [sym__form] = ACTIONS(302),
    [sym__super] = ACTIONS(302),
    [sym__class_store_4d] = ACTIONS(302),
    [sym__class_store_ds] = ACTIONS(302),
    [sym__class_store_cs] = ACTIONS(302),
    [sym__system_variable_ok] = ACTIONS(302),
    [sym__system_variable_document] = ACTIONS(302),
    [sym__system_variable_flddelimit] = ACTIONS(302),
    [sym__system_variable_recdelimit] = ACTIONS(302),
    [sym__system_variable_error] = ACTIONS(304),
    [sym__system_variable_error_method] = ACTIONS(302),
    [sym__system_variable_error_line] = ACTIONS(302),
    [sym__system_variable_error_formula] = ACTIONS(302),
    [sym__system_variable_mousedown] = ACTIONS(302),
    [sym__system_variable_mousex] = ACTIONS(302),
    [sym__system_variable_mousey] = ACTIONS(302),
    [sym__system_variable_keycode] = ACTIONS(302),
    [sym__system_variable_modifiers] = ACTIONS(302),
    [sym__system_variable_mouseproc] = ACTIONS(302),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(302),
    [anon_sym_SLASH_STAR] = ACTIONS(302),
    [sym__if_e] = ACTIONS(302),
    [sym__if_f] = ACTIONS(304),
    [sym__else_e] = ACTIONS(302),
    [sym__else_f] = ACTIONS(302),
    [sym__end_if_e] = ACTIONS(302),
    [sym__end_if_f] = ACTIONS(302),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym__local] = ACTIONS(306),
    [sym__exposed] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE_PIPE] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_QMARK_QMARK] = ACTIONS(306),
    [anon_sym_QMARK_PLUS] = ACTIONS(306),
    [anon_sym_QMARK_DASH] = ACTIONS(306),
    [anon_sym_PLUS_EQ] = ACTIONS(306),
    [anon_sym_DASH_EQ] = ACTIONS(306),
    [anon_sym_STAR_EQ] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_LT_GT] = ACTIONS(306),
    [aux_sym_numeric_parameter_token1] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(306),
    [sym__hex_literal] = ACTIONS(306),
    [aux_sym__num_literal_token1] = ACTIONS(308),
    [aux_sym__exp_literal_token1] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym__class_constructor] = ACTIONS(306),
    [sym__class_extends] = ACTIONS(306),
    [sym__var] = ACTIONS(306),
    [sym__property] = ACTIONS(306),
    [sym__alias] = ACTIONS(306),
    [sym__declare] = ACTIONS(306),
    [sym__function] = ACTIONS(306),
    [sym__return] = ACTIONS(306),
    [sym__break] = ACTIONS(306),
    [sym__continue] = ACTIONS(306),
    [sym__this] = ACTIONS(306),
    [sym__form] = ACTIONS(306),
    [sym__super] = ACTIONS(306),
    [sym__class_store_4d] = ACTIONS(306),
    [sym__class_store_ds] = ACTIONS(306),
    [sym__class_store_cs] = ACTIONS(306),
    [sym__system_variable_ok] = ACTIONS(306),
    [sym__system_variable_document] = ACTIONS(306),
    [sym__system_variable_flddelimit] = ACTIONS(306),
    [sym__system_variable_recdelimit] = ACTIONS(306),
    [sym__system_variable_error] = ACTIONS(308),
    [sym__system_variable_error_method] = ACTIONS(306),
    [sym__system_variable_error_line] = ACTIONS(306),
    [sym__system_variable_error_formula] = ACTIONS(306),
    [sym__system_variable_mousedown] = ACTIONS(306),
    [sym__system_variable_mousex] = ACTIONS(306),
    [sym__system_variable_mousey] = ACTIONS(306),
    [sym__system_variable_keycode] = ACTIONS(306),
    [sym__system_variable_modifiers] = ACTIONS(306),
    [sym__system_variable_mouseproc] = ACTIONS(306),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_STAR] = ACTIONS(306),
    [sym__if_e] = ACTIONS(306),
    [sym__if_f] = ACTIONS(308),
    [sym__else_e] = ACTIONS(306),
    [sym__else_f] = ACTIONS(306),
    [sym__end_if_e] = ACTIONS(306),
    [sym__end_if_f] = ACTIONS(306),
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
  },
  [22] = {
    [sym__binary_operator] = STATE(82),
    [aux_sym__condition_repeat1] = STATE(163),
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym__local] = ACTIONS(320),
    [sym__exposed] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_AMP_AMP] = ACTIONS(324),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_TILDE_PIPE] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_GT_GT] = ACTIONS(324),
    [anon_sym_QMARK_QMARK] = ACTIONS(324),
    [anon_sym_QMARK_PLUS] = ACTIONS(324),
    [anon_sym_QMARK_DASH] = ACTIONS(324),
    [anon_sym_PLUS_EQ] = ACTIONS(324),
    [anon_sym_DASH_EQ] = ACTIONS(324),
    [anon_sym_STAR_EQ] = ACTIONS(324),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_LT_GT] = ACTIONS(320),
    [aux_sym_numeric_parameter_token1] = ACTIONS(326),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(326),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(320),
    [sym__hex_literal] = ACTIONS(320),
    [aux_sym__num_literal_token1] = ACTIONS(326),
    [aux_sym__exp_literal_token1] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [sym__class_constructor] = ACTIONS(320),
    [sym__class_extends] = ACTIONS(320),
    [sym__var] = ACTIONS(320),
    [sym__property] = ACTIONS(320),
    [sym__alias] = ACTIONS(320),
    [sym__declare] = ACTIONS(320),
    [sym__function] = ACTIONS(320),
    [sym__return] = ACTIONS(320),
    [sym__break] = ACTIONS(320),
    [sym__continue] = ACTIONS(320),
    [sym__this] = ACTIONS(320),
    [sym__form] = ACTIONS(320),
    [sym__super] = ACTIONS(320),
    [sym__class_store_4d] = ACTIONS(320),
    [sym__class_store_ds] = ACTIONS(320),
    [sym__class_store_cs] = ACTIONS(320),
    [sym__system_variable_ok] = ACTIONS(320),
    [sym__system_variable_document] = ACTIONS(320),
    [sym__system_variable_flddelimit] = ACTIONS(320),
    [sym__system_variable_recdelimit] = ACTIONS(320),
    [sym__system_variable_error] = ACTIONS(326),
    [sym__system_variable_error_method] = ACTIONS(320),
    [sym__system_variable_error_line] = ACTIONS(320),
    [sym__system_variable_error_formula] = ACTIONS(320),
    [sym__system_variable_mousedown] = ACTIONS(320),
    [sym__system_variable_mousex] = ACTIONS(320),
    [sym__system_variable_mousey] = ACTIONS(320),
    [sym__system_variable_keycode] = ACTIONS(320),
    [sym__system_variable_modifiers] = ACTIONS(320),
    [sym__system_variable_mouseproc] = ACTIONS(320),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(320),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [anon_sym_SLASH_STAR] = ACTIONS(320),
    [sym__if_e] = ACTIONS(320),
    [sym__if_f] = ACTIONS(326),
    [sym__else_e] = ACTIONS(320),
    [sym__else_f] = ACTIONS(320),
    [sym__end_if_e] = ACTIONS(320),
    [sym__end_if_f] = ACTIONS(320),
  },
  [23] = {
    [sym__binary_operator] = STATE(73),
    [aux_sym__condition_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym__local] = ACTIONS(330),
    [sym__exposed] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_TILDE_PIPE] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_GT_GT] = ACTIONS(334),
    [anon_sym_QMARK_QMARK] = ACTIONS(334),
    [anon_sym_QMARK_PLUS] = ACTIONS(334),
    [anon_sym_QMARK_DASH] = ACTIONS(334),
    [anon_sym_PLUS_EQ] = ACTIONS(334),
    [anon_sym_DASH_EQ] = ACTIONS(334),
    [anon_sym_STAR_EQ] = ACTIONS(334),
    [anon_sym_SLASH_EQ] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [anon_sym_LT_GT] = ACTIONS(330),
    [aux_sym_numeric_parameter_token1] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(330),
    [sym__hex_literal] = ACTIONS(330),
    [aux_sym__num_literal_token1] = ACTIONS(328),
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
    [sym__system_variable_error] = ACTIONS(328),
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
    [sym__if_f] = ACTIONS(328),
    [sym__else_e] = ACTIONS(330),
    [sym__else_f] = ACTIONS(330),
    [sym__end_if_e] = ACTIONS(330),
    [sym__end_if_f] = ACTIONS(330),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym__local] = ACTIONS(336),
    [sym__exposed] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_TILDE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_QMARK_QMARK] = ACTIONS(336),
    [anon_sym_QMARK_PLUS] = ACTIONS(336),
    [anon_sym_QMARK_DASH] = ACTIONS(336),
    [anon_sym_PLUS_EQ] = ACTIONS(336),
    [anon_sym_DASH_EQ] = ACTIONS(336),
    [anon_sym_STAR_EQ] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(336),
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_LT_GT] = ACTIONS(336),
    [aux_sym_numeric_parameter_token1] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(336),
    [sym__hex_literal] = ACTIONS(336),
    [aux_sym__num_literal_token1] = ACTIONS(338),
    [aux_sym__exp_literal_token1] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__class_constructor] = ACTIONS(336),
    [sym__class_extends] = ACTIONS(336),
    [sym__var] = ACTIONS(336),
    [sym__property] = ACTIONS(336),
    [sym__alias] = ACTIONS(336),
    [sym__declare] = ACTIONS(336),
    [sym__function] = ACTIONS(336),
    [sym__return] = ACTIONS(336),
    [sym__break] = ACTIONS(336),
    [sym__continue] = ACTIONS(336),
    [sym__this] = ACTIONS(336),
    [sym__form] = ACTIONS(336),
    [sym__super] = ACTIONS(336),
    [sym__class_store_4d] = ACTIONS(336),
    [sym__class_store_ds] = ACTIONS(336),
    [sym__class_store_cs] = ACTIONS(336),
    [sym__system_variable_ok] = ACTIONS(336),
    [sym__system_variable_document] = ACTIONS(336),
    [sym__system_variable_flddelimit] = ACTIONS(336),
    [sym__system_variable_recdelimit] = ACTIONS(336),
    [sym__system_variable_error] = ACTIONS(338),
    [sym__system_variable_error_method] = ACTIONS(336),
    [sym__system_variable_error_line] = ACTIONS(336),
    [sym__system_variable_error_formula] = ACTIONS(336),
    [sym__system_variable_mousedown] = ACTIONS(336),
    [sym__system_variable_mousex] = ACTIONS(336),
    [sym__system_variable_mousey] = ACTIONS(336),
    [sym__system_variable_keycode] = ACTIONS(336),
    [sym__system_variable_modifiers] = ACTIONS(336),
    [sym__system_variable_mouseproc] = ACTIONS(336),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_STAR] = ACTIONS(336),
    [sym__if_e] = ACTIONS(336),
    [sym__if_f] = ACTIONS(338),
    [sym__else_e] = ACTIONS(336),
    [sym__else_f] = ACTIONS(336),
    [sym__end_if_e] = ACTIONS(336),
    [sym__end_if_f] = ACTIONS(336),
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
  },
  [26] = {
    [sym__binary_operator] = STATE(73),
    [aux_sym__condition_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym__local] = ACTIONS(344),
    [sym__exposed] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_TILDE_PIPE] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_GT_GT] = ACTIONS(334),
    [anon_sym_QMARK_QMARK] = ACTIONS(334),
    [anon_sym_QMARK_PLUS] = ACTIONS(334),
    [anon_sym_QMARK_DASH] = ACTIONS(334),
    [anon_sym_PLUS_EQ] = ACTIONS(334),
    [anon_sym_DASH_EQ] = ACTIONS(334),
    [anon_sym_STAR_EQ] = ACTIONS(334),
    [anon_sym_SLASH_EQ] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_LT_GT] = ACTIONS(344),
    [aux_sym_numeric_parameter_token1] = ACTIONS(346),
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
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym__local] = ACTIONS(348),
    [sym__exposed] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_TILDE_PIPE] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(348),
    [anon_sym_GT_GT] = ACTIONS(348),
    [anon_sym_QMARK_QMARK] = ACTIONS(348),
    [anon_sym_QMARK_PLUS] = ACTIONS(348),
    [anon_sym_QMARK_DASH] = ACTIONS(348),
    [anon_sym_PLUS_EQ] = ACTIONS(348),
    [anon_sym_DASH_EQ] = ACTIONS(348),
    [anon_sym_STAR_EQ] = ACTIONS(348),
    [anon_sym_SLASH_EQ] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_LT_GT] = ACTIONS(348),
    [aux_sym_numeric_parameter_token1] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(348),
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
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym__local] = ACTIONS(352),
    [sym__exposed] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(352),
    [anon_sym_PIPE_PIPE] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_TILDE_PIPE] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_POUND] = ACTIONS(354),
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
    [aux_sym_numeric_parameter_token1] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(352),
    [sym__hex_literal] = ACTIONS(352),
    [aux_sym__num_literal_token1] = ACTIONS(354),
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
    [sym__system_variable_error] = ACTIONS(354),
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
    [sym__if_f] = ACTIONS(354),
    [sym__else_e] = ACTIONS(352),
    [sym__else_f] = ACTIONS(352),
    [sym__end_if_e] = ACTIONS(352),
    [sym__end_if_f] = ACTIONS(352),
  },
  [29] = {
    [sym__functional_expression] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym__local] = ACTIONS(358),
    [sym__exposed] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_TILDE_PIPE] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(358),
    [anon_sym_QMARK_QMARK] = ACTIONS(358),
    [anon_sym_QMARK_PLUS] = ACTIONS(358),
    [anon_sym_QMARK_DASH] = ACTIONS(358),
    [anon_sym_PLUS_EQ] = ACTIONS(358),
    [anon_sym_DASH_EQ] = ACTIONS(358),
    [anon_sym_STAR_EQ] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_LT_GT] = ACTIONS(358),
    [aux_sym_numeric_parameter_token1] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(358),
    [sym__hex_literal] = ACTIONS(358),
    [aux_sym__num_literal_token1] = ACTIONS(362),
    [aux_sym__exp_literal_token1] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__class_constructor] = ACTIONS(358),
    [sym__class_extends] = ACTIONS(358),
    [sym__var] = ACTIONS(358),
    [sym__property] = ACTIONS(358),
    [sym__alias] = ACTIONS(358),
    [sym__declare] = ACTIONS(358),
    [sym__function] = ACTIONS(358),
    [sym__return] = ACTIONS(358),
    [sym__break] = ACTIONS(358),
    [sym__continue] = ACTIONS(358),
    [sym__this] = ACTIONS(358),
    [sym__form] = ACTIONS(358),
    [sym__super] = ACTIONS(358),
    [sym__class_store_4d] = ACTIONS(358),
    [sym__class_store_ds] = ACTIONS(358),
    [sym__class_store_cs] = ACTIONS(358),
    [sym__system_variable_ok] = ACTIONS(358),
    [sym__system_variable_document] = ACTIONS(358),
    [sym__system_variable_flddelimit] = ACTIONS(358),
    [sym__system_variable_recdelimit] = ACTIONS(358),
    [sym__system_variable_error] = ACTIONS(362),
    [sym__system_variable_error_method] = ACTIONS(358),
    [sym__system_variable_error_line] = ACTIONS(358),
    [sym__system_variable_error_formula] = ACTIONS(358),
    [sym__system_variable_mousedown] = ACTIONS(358),
    [sym__system_variable_mousex] = ACTIONS(358),
    [sym__system_variable_mousey] = ACTIONS(358),
    [sym__system_variable_keycode] = ACTIONS(358),
    [sym__system_variable_modifiers] = ACTIONS(358),
    [sym__system_variable_mouseproc] = ACTIONS(358),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(358),
    [anon_sym_SLASH_STAR] = ACTIONS(358),
    [sym__if_e] = ACTIONS(358),
    [sym__if_f] = ACTIONS(362),
    [sym__else_e] = ACTIONS(358),
    [sym__else_f] = ACTIONS(358),
    [sym__end_if_e] = ACTIONS(358),
    [sym__end_if_f] = ACTIONS(358),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym__local] = ACTIONS(364),
    [sym__exposed] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(366),
    [anon_sym_SLASH] = ACTIONS(366),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(366),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_TILDE_PIPE] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_POUND] = ACTIONS(366),
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
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_LT_GT] = ACTIONS(364),
    [aux_sym_numeric_parameter_token1] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_BANG] = ACTIONS(366),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(364),
    [sym__hex_literal] = ACTIONS(364),
    [aux_sym__num_literal_token1] = ACTIONS(366),
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
    [sym__system_variable_error] = ACTIONS(366),
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
    [sym__if_f] = ACTIONS(366),
    [sym__else_e] = ACTIONS(364),
    [sym__else_f] = ACTIONS(364),
    [sym__end_if_e] = ACTIONS(364),
    [sym__end_if_f] = ACTIONS(364),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym__local] = ACTIONS(368),
    [sym__exposed] = ACTIONS(368),
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
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_LT_GT] = ACTIONS(368),
    [aux_sym_numeric_parameter_token1] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(368),
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
  },
  [32] = {
    [sym__binary_operator] = STATE(73),
    [aux_sym__condition_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym__local] = ACTIONS(372),
    [sym__exposed] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_TILDE_PIPE] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(374),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(377),
    [anon_sym_QMARK_QMARK] = ACTIONS(377),
    [anon_sym_QMARK_PLUS] = ACTIONS(377),
    [anon_sym_QMARK_DASH] = ACTIONS(377),
    [anon_sym_PLUS_EQ] = ACTIONS(377),
    [anon_sym_DASH_EQ] = ACTIONS(377),
    [anon_sym_STAR_EQ] = ACTIONS(377),
    [anon_sym_SLASH_EQ] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_LT_GT] = ACTIONS(372),
    [aux_sym_numeric_parameter_token1] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(372),
    [sym__hex_literal] = ACTIONS(372),
    [aux_sym__num_literal_token1] = ACTIONS(380),
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
    [sym__system_variable_error] = ACTIONS(380),
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
    [sym__if_f] = ACTIONS(380),
    [sym__else_e] = ACTIONS(372),
    [sym__else_f] = ACTIONS(372),
    [sym__end_if_e] = ACTIONS(372),
    [sym__end_if_f] = ACTIONS(372),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym__local] = ACTIONS(382),
    [sym__exposed] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(382),
    [anon_sym_TILDE_PIPE] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_LT_LT] = ACTIONS(382),
    [anon_sym_GT_GT] = ACTIONS(382),
    [anon_sym_QMARK_QMARK] = ACTIONS(382),
    [anon_sym_QMARK_PLUS] = ACTIONS(382),
    [anon_sym_QMARK_DASH] = ACTIONS(382),
    [anon_sym_PLUS_EQ] = ACTIONS(382),
    [anon_sym_DASH_EQ] = ACTIONS(382),
    [anon_sym_STAR_EQ] = ACTIONS(382),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [anon_sym_LT_GT] = ACTIONS(382),
    [aux_sym_numeric_parameter_token1] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(382),
    [sym__hex_literal] = ACTIONS(382),
    [aux_sym__num_literal_token1] = ACTIONS(384),
    [aux_sym__exp_literal_token1] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__class_constructor] = ACTIONS(382),
    [sym__class_extends] = ACTIONS(382),
    [sym__var] = ACTIONS(382),
    [sym__property] = ACTIONS(382),
    [sym__alias] = ACTIONS(382),
    [sym__declare] = ACTIONS(382),
    [sym__function] = ACTIONS(382),
    [sym__return] = ACTIONS(382),
    [sym__break] = ACTIONS(382),
    [sym__continue] = ACTIONS(382),
    [sym__this] = ACTIONS(382),
    [sym__form] = ACTIONS(382),
    [sym__super] = ACTIONS(382),
    [sym__class_store_4d] = ACTIONS(382),
    [sym__class_store_ds] = ACTIONS(382),
    [sym__class_store_cs] = ACTIONS(382),
    [sym__system_variable_ok] = ACTIONS(382),
    [sym__system_variable_document] = ACTIONS(382),
    [sym__system_variable_flddelimit] = ACTIONS(382),
    [sym__system_variable_recdelimit] = ACTIONS(382),
    [sym__system_variable_error] = ACTIONS(384),
    [sym__system_variable_error_method] = ACTIONS(382),
    [sym__system_variable_error_line] = ACTIONS(382),
    [sym__system_variable_error_formula] = ACTIONS(382),
    [sym__system_variable_mousedown] = ACTIONS(382),
    [sym__system_variable_mousex] = ACTIONS(382),
    [sym__system_variable_mousey] = ACTIONS(382),
    [sym__system_variable_keycode] = ACTIONS(382),
    [sym__system_variable_modifiers] = ACTIONS(382),
    [sym__system_variable_mouseproc] = ACTIONS(382),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(382),
    [anon_sym_SLASH_SLASH] = ACTIONS(382),
    [anon_sym_SLASH_STAR] = ACTIONS(382),
    [sym__if_e] = ACTIONS(382),
    [sym__if_f] = ACTIONS(384),
    [sym__else_e] = ACTIONS(382),
    [sym__else_f] = ACTIONS(382),
    [sym__end_if_e] = ACTIONS(382),
    [sym__end_if_f] = ACTIONS(382),
  },
  [34] = {
    [sym__functional_expression] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym__local] = ACTIONS(386),
    [sym__exposed] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_TILDE_PIPE] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(386),
    [anon_sym_QMARK_QMARK] = ACTIONS(386),
    [anon_sym_QMARK_PLUS] = ACTIONS(386),
    [anon_sym_QMARK_DASH] = ACTIONS(386),
    [anon_sym_PLUS_EQ] = ACTIONS(386),
    [anon_sym_DASH_EQ] = ACTIONS(386),
    [anon_sym_STAR_EQ] = ACTIONS(386),
    [anon_sym_SLASH_EQ] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_LT_GT] = ACTIONS(386),
    [aux_sym_numeric_parameter_token1] = ACTIONS(388),
    [anon_sym_QMARK] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(388),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(386),
    [sym__hex_literal] = ACTIONS(386),
    [aux_sym__num_literal_token1] = ACTIONS(388),
    [aux_sym__exp_literal_token1] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [sym__class_constructor] = ACTIONS(386),
    [sym__class_extends] = ACTIONS(386),
    [sym__var] = ACTIONS(386),
    [sym__property] = ACTIONS(386),
    [sym__alias] = ACTIONS(386),
    [sym__declare] = ACTIONS(386),
    [sym__function] = ACTIONS(386),
    [sym__return] = ACTIONS(386),
    [sym__break] = ACTIONS(386),
    [sym__continue] = ACTIONS(386),
    [sym__this] = ACTIONS(386),
    [sym__form] = ACTIONS(386),
    [sym__super] = ACTIONS(386),
    [sym__class_store_4d] = ACTIONS(386),
    [sym__class_store_ds] = ACTIONS(386),
    [sym__class_store_cs] = ACTIONS(386),
    [sym__system_variable_ok] = ACTIONS(386),
    [sym__system_variable_document] = ACTIONS(386),
    [sym__system_variable_flddelimit] = ACTIONS(386),
    [sym__system_variable_recdelimit] = ACTIONS(386),
    [sym__system_variable_error] = ACTIONS(388),
    [sym__system_variable_error_method] = ACTIONS(386),
    [sym__system_variable_error_line] = ACTIONS(386),
    [sym__system_variable_error_formula] = ACTIONS(386),
    [sym__system_variable_mousedown] = ACTIONS(386),
    [sym__system_variable_mousex] = ACTIONS(386),
    [sym__system_variable_mousey] = ACTIONS(386),
    [sym__system_variable_keycode] = ACTIONS(386),
    [sym__system_variable_modifiers] = ACTIONS(386),
    [sym__system_variable_mouseproc] = ACTIONS(386),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(386),
    [anon_sym_SLASH_SLASH] = ACTIONS(386),
    [anon_sym_SLASH_STAR] = ACTIONS(386),
    [sym__if_e] = ACTIONS(386),
    [sym__if_f] = ACTIONS(388),
    [sym__else_e] = ACTIONS(386),
    [sym__else_f] = ACTIONS(386),
    [sym__end_if_e] = ACTIONS(386),
    [sym__end_if_f] = ACTIONS(386),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym__local] = ACTIONS(390),
    [sym__exposed] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym_STAR] = ACTIONS(392),
    [anon_sym_SLASH] = ACTIONS(392),
    [anon_sym_AMP_AMP] = ACTIONS(390),
    [anon_sym_PIPE_PIPE] = ACTIONS(390),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_CARET] = ACTIONS(390),
    [anon_sym_TILDE_PIPE] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [anon_sym_EQ] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(392),
    [anon_sym_LT_LT] = ACTIONS(390),
    [anon_sym_GT_GT] = ACTIONS(390),
    [anon_sym_QMARK_QMARK] = ACTIONS(390),
    [anon_sym_QMARK_PLUS] = ACTIONS(390),
    [anon_sym_QMARK_DASH] = ACTIONS(390),
    [anon_sym_PLUS_EQ] = ACTIONS(390),
    [anon_sym_DASH_EQ] = ACTIONS(390),
    [anon_sym_STAR_EQ] = ACTIONS(390),
    [anon_sym_SLASH_EQ] = ACTIONS(390),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [anon_sym_LT_GT] = ACTIONS(390),
    [aux_sym_numeric_parameter_token1] = ACTIONS(392),
    [anon_sym_QMARK] = ACTIONS(392),
    [anon_sym_BANG] = ACTIONS(392),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(390),
    [sym__hex_literal] = ACTIONS(390),
    [aux_sym__num_literal_token1] = ACTIONS(392),
    [aux_sym__exp_literal_token1] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [sym__class_constructor] = ACTIONS(390),
    [sym__class_extends] = ACTIONS(390),
    [sym__var] = ACTIONS(390),
    [sym__property] = ACTIONS(390),
    [sym__alias] = ACTIONS(390),
    [sym__declare] = ACTIONS(390),
    [sym__function] = ACTIONS(390),
    [sym__return] = ACTIONS(390),
    [sym__break] = ACTIONS(390),
    [sym__continue] = ACTIONS(390),
    [sym__this] = ACTIONS(390),
    [sym__form] = ACTIONS(390),
    [sym__super] = ACTIONS(390),
    [sym__class_store_4d] = ACTIONS(390),
    [sym__class_store_ds] = ACTIONS(390),
    [sym__class_store_cs] = ACTIONS(390),
    [sym__system_variable_ok] = ACTIONS(390),
    [sym__system_variable_document] = ACTIONS(390),
    [sym__system_variable_flddelimit] = ACTIONS(390),
    [sym__system_variable_recdelimit] = ACTIONS(390),
    [sym__system_variable_error] = ACTIONS(392),
    [sym__system_variable_error_method] = ACTIONS(390),
    [sym__system_variable_error_line] = ACTIONS(390),
    [sym__system_variable_error_formula] = ACTIONS(390),
    [sym__system_variable_mousedown] = ACTIONS(390),
    [sym__system_variable_mousex] = ACTIONS(390),
    [sym__system_variable_mousey] = ACTIONS(390),
    [sym__system_variable_keycode] = ACTIONS(390),
    [sym__system_variable_modifiers] = ACTIONS(390),
    [sym__system_variable_mouseproc] = ACTIONS(390),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(390),
    [anon_sym_SLASH_SLASH] = ACTIONS(390),
    [anon_sym_SLASH_STAR] = ACTIONS(390),
    [sym__if_e] = ACTIONS(390),
    [sym__if_f] = ACTIONS(392),
    [sym__else_e] = ACTIONS(390),
    [sym__else_f] = ACTIONS(390),
    [sym__end_if_e] = ACTIONS(390),
    [sym__end_if_f] = ACTIONS(390),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym__local] = ACTIONS(394),
    [sym__exposed] = ACTIONS(394),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(394),
    [anon_sym_PIPE_PIPE] = ACTIONS(394),
    [anon_sym_AMP] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(394),
    [anon_sym_TILDE_PIPE] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(396),
    [anon_sym_LT_LT] = ACTIONS(394),
    [anon_sym_GT_GT] = ACTIONS(394),
    [anon_sym_QMARK_QMARK] = ACTIONS(394),
    [anon_sym_QMARK_PLUS] = ACTIONS(394),
    [anon_sym_QMARK_DASH] = ACTIONS(394),
    [anon_sym_PLUS_EQ] = ACTIONS(394),
    [anon_sym_DASH_EQ] = ACTIONS(394),
    [anon_sym_STAR_EQ] = ACTIONS(394),
    [anon_sym_SLASH_EQ] = ACTIONS(394),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [anon_sym_LT_GT] = ACTIONS(394),
    [aux_sym_numeric_parameter_token1] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(394),
    [sym__hex_literal] = ACTIONS(394),
    [aux_sym__num_literal_token1] = ACTIONS(396),
    [aux_sym__exp_literal_token1] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [sym__class_constructor] = ACTIONS(394),
    [sym__class_extends] = ACTIONS(394),
    [sym__var] = ACTIONS(394),
    [sym__property] = ACTIONS(394),
    [sym__alias] = ACTIONS(394),
    [sym__declare] = ACTIONS(394),
    [sym__function] = ACTIONS(394),
    [sym__return] = ACTIONS(394),
    [sym__break] = ACTIONS(394),
    [sym__continue] = ACTIONS(394),
    [sym__this] = ACTIONS(394),
    [sym__form] = ACTIONS(394),
    [sym__super] = ACTIONS(394),
    [sym__class_store_4d] = ACTIONS(394),
    [sym__class_store_ds] = ACTIONS(394),
    [sym__class_store_cs] = ACTIONS(394),
    [sym__system_variable_ok] = ACTIONS(394),
    [sym__system_variable_document] = ACTIONS(394),
    [sym__system_variable_flddelimit] = ACTIONS(394),
    [sym__system_variable_recdelimit] = ACTIONS(394),
    [sym__system_variable_error] = ACTIONS(396),
    [sym__system_variable_error_method] = ACTIONS(394),
    [sym__system_variable_error_line] = ACTIONS(394),
    [sym__system_variable_error_formula] = ACTIONS(394),
    [sym__system_variable_mousedown] = ACTIONS(394),
    [sym__system_variable_mousex] = ACTIONS(394),
    [sym__system_variable_mousey] = ACTIONS(394),
    [sym__system_variable_keycode] = ACTIONS(394),
    [sym__system_variable_modifiers] = ACTIONS(394),
    [sym__system_variable_mouseproc] = ACTIONS(394),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(394),
    [anon_sym_SLASH_SLASH] = ACTIONS(394),
    [anon_sym_SLASH_STAR] = ACTIONS(394),
    [sym__if_e] = ACTIONS(394),
    [sym__if_f] = ACTIONS(396),
    [sym__else_e] = ACTIONS(394),
    [sym__else_f] = ACTIONS(394),
    [sym__end_if_e] = ACTIONS(394),
    [sym__end_if_f] = ACTIONS(394),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym__local] = ACTIONS(398),
    [sym__exposed] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_SLASH] = ACTIONS(400),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_TILDE_PIPE] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(398),
    [anon_sym_GT_GT] = ACTIONS(398),
    [anon_sym_QMARK_QMARK] = ACTIONS(398),
    [anon_sym_QMARK_PLUS] = ACTIONS(398),
    [anon_sym_QMARK_DASH] = ACTIONS(398),
    [anon_sym_PLUS_EQ] = ACTIONS(398),
    [anon_sym_DASH_EQ] = ACTIONS(398),
    [anon_sym_STAR_EQ] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_LT_GT] = ACTIONS(398),
    [aux_sym_numeric_parameter_token1] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(400),
    [anon_sym_BANG] = ACTIONS(400),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(398),
    [sym__hex_literal] = ACTIONS(398),
    [aux_sym__num_literal_token1] = ACTIONS(400),
    [aux_sym__exp_literal_token1] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [sym__class_constructor] = ACTIONS(398),
    [sym__class_extends] = ACTIONS(398),
    [sym__var] = ACTIONS(398),
    [sym__property] = ACTIONS(398),
    [sym__alias] = ACTIONS(398),
    [sym__declare] = ACTIONS(398),
    [sym__function] = ACTIONS(398),
    [sym__return] = ACTIONS(398),
    [sym__break] = ACTIONS(398),
    [sym__continue] = ACTIONS(398),
    [sym__this] = ACTIONS(398),
    [sym__form] = ACTIONS(398),
    [sym__super] = ACTIONS(398),
    [sym__class_store_4d] = ACTIONS(398),
    [sym__class_store_ds] = ACTIONS(398),
    [sym__class_store_cs] = ACTIONS(398),
    [sym__system_variable_ok] = ACTIONS(398),
    [sym__system_variable_document] = ACTIONS(398),
    [sym__system_variable_flddelimit] = ACTIONS(398),
    [sym__system_variable_recdelimit] = ACTIONS(398),
    [sym__system_variable_error] = ACTIONS(400),
    [sym__system_variable_error_method] = ACTIONS(398),
    [sym__system_variable_error_line] = ACTIONS(398),
    [sym__system_variable_error_formula] = ACTIONS(398),
    [sym__system_variable_mousedown] = ACTIONS(398),
    [sym__system_variable_mousex] = ACTIONS(398),
    [sym__system_variable_mousey] = ACTIONS(398),
    [sym__system_variable_keycode] = ACTIONS(398),
    [sym__system_variable_modifiers] = ACTIONS(398),
    [sym__system_variable_mouseproc] = ACTIONS(398),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(398),
    [anon_sym_SLASH_STAR] = ACTIONS(398),
    [sym__if_e] = ACTIONS(398),
    [sym__if_f] = ACTIONS(400),
    [sym__else_e] = ACTIONS(398),
    [sym__else_f] = ACTIONS(398),
    [sym__end_if_e] = ACTIONS(398),
    [sym__end_if_f] = ACTIONS(398),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym__local] = ACTIONS(402),
    [sym__exposed] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(402),
    [anon_sym_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_TILDE_PIPE] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_EQ] = ACTIONS(402),
    [anon_sym_POUND] = ACTIONS(404),
    [anon_sym_LT_LT] = ACTIONS(402),
    [anon_sym_GT_GT] = ACTIONS(402),
    [anon_sym_QMARK_QMARK] = ACTIONS(402),
    [anon_sym_QMARK_PLUS] = ACTIONS(402),
    [anon_sym_QMARK_DASH] = ACTIONS(402),
    [anon_sym_PLUS_EQ] = ACTIONS(402),
    [anon_sym_DASH_EQ] = ACTIONS(402),
    [anon_sym_STAR_EQ] = ACTIONS(402),
    [anon_sym_SLASH_EQ] = ACTIONS(402),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [anon_sym_LT_GT] = ACTIONS(402),
    [aux_sym_numeric_parameter_token1] = ACTIONS(404),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_BANG] = ACTIONS(404),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(402),
    [sym__hex_literal] = ACTIONS(402),
    [aux_sym__num_literal_token1] = ACTIONS(404),
    [aux_sym__exp_literal_token1] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(402),
    [sym__class_constructor] = ACTIONS(402),
    [sym__class_extends] = ACTIONS(402),
    [sym__var] = ACTIONS(402),
    [sym__property] = ACTIONS(402),
    [sym__alias] = ACTIONS(402),
    [sym__declare] = ACTIONS(402),
    [sym__function] = ACTIONS(402),
    [sym__return] = ACTIONS(402),
    [sym__break] = ACTIONS(402),
    [sym__continue] = ACTIONS(402),
    [sym__this] = ACTIONS(402),
    [sym__form] = ACTIONS(402),
    [sym__super] = ACTIONS(402),
    [sym__class_store_4d] = ACTIONS(402),
    [sym__class_store_ds] = ACTIONS(402),
    [sym__class_store_cs] = ACTIONS(402),
    [sym__system_variable_ok] = ACTIONS(402),
    [sym__system_variable_document] = ACTIONS(402),
    [sym__system_variable_flddelimit] = ACTIONS(402),
    [sym__system_variable_recdelimit] = ACTIONS(402),
    [sym__system_variable_error] = ACTIONS(404),
    [sym__system_variable_error_method] = ACTIONS(402),
    [sym__system_variable_error_line] = ACTIONS(402),
    [sym__system_variable_error_formula] = ACTIONS(402),
    [sym__system_variable_mousedown] = ACTIONS(402),
    [sym__system_variable_mousex] = ACTIONS(402),
    [sym__system_variable_mousey] = ACTIONS(402),
    [sym__system_variable_keycode] = ACTIONS(402),
    [sym__system_variable_modifiers] = ACTIONS(402),
    [sym__system_variable_mouseproc] = ACTIONS(402),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(402),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [anon_sym_SLASH_STAR] = ACTIONS(402),
    [sym__if_e] = ACTIONS(402),
    [sym__if_f] = ACTIONS(404),
    [sym__else_e] = ACTIONS(402),
    [sym__else_f] = ACTIONS(402),
    [sym__end_if_e] = ACTIONS(402),
    [sym__end_if_f] = ACTIONS(402),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [sym__local] = ACTIONS(406),
    [sym__exposed] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(406),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_CARET] = ACTIONS(406),
    [anon_sym_TILDE_PIPE] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_LT_LT] = ACTIONS(406),
    [anon_sym_GT_GT] = ACTIONS(406),
    [anon_sym_QMARK_QMARK] = ACTIONS(406),
    [anon_sym_QMARK_PLUS] = ACTIONS(406),
    [anon_sym_QMARK_DASH] = ACTIONS(406),
    [anon_sym_PLUS_EQ] = ACTIONS(406),
    [anon_sym_DASH_EQ] = ACTIONS(406),
    [anon_sym_STAR_EQ] = ACTIONS(406),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [anon_sym_DOLLAR] = ACTIONS(406),
    [anon_sym_LT_GT] = ACTIONS(406),
    [aux_sym_numeric_parameter_token1] = ACTIONS(408),
    [anon_sym_QMARK] = ACTIONS(408),
    [anon_sym_BANG] = ACTIONS(408),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(406),
    [sym__hex_literal] = ACTIONS(406),
    [aux_sym__num_literal_token1] = ACTIONS(408),
    [aux_sym__exp_literal_token1] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [sym__class_constructor] = ACTIONS(406),
    [sym__class_extends] = ACTIONS(406),
    [sym__var] = ACTIONS(406),
    [sym__property] = ACTIONS(406),
    [sym__alias] = ACTIONS(406),
    [sym__declare] = ACTIONS(406),
    [sym__function] = ACTIONS(406),
    [sym__return] = ACTIONS(406),
    [sym__break] = ACTIONS(406),
    [sym__continue] = ACTIONS(406),
    [sym__this] = ACTIONS(406),
    [sym__form] = ACTIONS(406),
    [sym__super] = ACTIONS(406),
    [sym__class_store_4d] = ACTIONS(406),
    [sym__class_store_ds] = ACTIONS(406),
    [sym__class_store_cs] = ACTIONS(406),
    [sym__system_variable_ok] = ACTIONS(406),
    [sym__system_variable_document] = ACTIONS(406),
    [sym__system_variable_flddelimit] = ACTIONS(406),
    [sym__system_variable_recdelimit] = ACTIONS(406),
    [sym__system_variable_error] = ACTIONS(408),
    [sym__system_variable_error_method] = ACTIONS(406),
    [sym__system_variable_error_line] = ACTIONS(406),
    [sym__system_variable_error_formula] = ACTIONS(406),
    [sym__system_variable_mousedown] = ACTIONS(406),
    [sym__system_variable_mousex] = ACTIONS(406),
    [sym__system_variable_mousey] = ACTIONS(406),
    [sym__system_variable_keycode] = ACTIONS(406),
    [sym__system_variable_modifiers] = ACTIONS(406),
    [sym__system_variable_mouseproc] = ACTIONS(406),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(406),
    [anon_sym_SLASH_SLASH] = ACTIONS(406),
    [anon_sym_SLASH_STAR] = ACTIONS(406),
    [sym__if_e] = ACTIONS(406),
    [sym__if_f] = ACTIONS(408),
    [sym__else_e] = ACTIONS(406),
    [sym__else_f] = ACTIONS(406),
    [sym__end_if_e] = ACTIONS(406),
    [sym__end_if_f] = ACTIONS(406),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym__local] = ACTIONS(372),
    [sym__exposed] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(380),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_TILDE_PIPE] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_POUND] = ACTIONS(380),
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
    [aux_sym_numeric_parameter_token1] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(372),
    [sym__hex_literal] = ACTIONS(372),
    [aux_sym__num_literal_token1] = ACTIONS(380),
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
    [sym__system_variable_error] = ACTIONS(380),
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
    [sym__if_f] = ACTIONS(380),
    [sym__else_e] = ACTIONS(372),
    [sym__else_f] = ACTIONS(372),
    [sym__end_if_e] = ACTIONS(372),
    [sym__end_if_f] = ACTIONS(372),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym__local] = ACTIONS(410),
    [sym__exposed] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_TILDE_PIPE] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(386),
    [anon_sym_QMARK_QMARK] = ACTIONS(386),
    [anon_sym_QMARK_PLUS] = ACTIONS(386),
    [anon_sym_QMARK_DASH] = ACTIONS(386),
    [anon_sym_PLUS_EQ] = ACTIONS(386),
    [anon_sym_DASH_EQ] = ACTIONS(386),
    [anon_sym_STAR_EQ] = ACTIONS(386),
    [anon_sym_SLASH_EQ] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(410),
    [anon_sym_LT_GT] = ACTIONS(410),
    [aux_sym_numeric_parameter_token1] = ACTIONS(412),
    [anon_sym_QMARK] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(412),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(410),
    [sym__hex_literal] = ACTIONS(410),
    [aux_sym__num_literal_token1] = ACTIONS(412),
    [aux_sym__exp_literal_token1] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym__class_constructor] = ACTIONS(410),
    [sym__class_extends] = ACTIONS(410),
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
    [sym__system_variable_ok] = ACTIONS(410),
    [sym__system_variable_document] = ACTIONS(410),
    [sym__system_variable_flddelimit] = ACTIONS(410),
    [sym__system_variable_recdelimit] = ACTIONS(410),
    [sym__system_variable_error] = ACTIONS(412),
    [sym__system_variable_error_method] = ACTIONS(410),
    [sym__system_variable_error_line] = ACTIONS(410),
    [sym__system_variable_error_formula] = ACTIONS(410),
    [sym__system_variable_mousedown] = ACTIONS(410),
    [sym__system_variable_mousex] = ACTIONS(410),
    [sym__system_variable_mousey] = ACTIONS(410),
    [sym__system_variable_keycode] = ACTIONS(410),
    [sym__system_variable_modifiers] = ACTIONS(410),
    [sym__system_variable_mouseproc] = ACTIONS(410),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(410),
    [anon_sym_SLASH_SLASH] = ACTIONS(410),
    [anon_sym_SLASH_STAR] = ACTIONS(410),
    [sym__if_e] = ACTIONS(410),
    [sym__if_f] = ACTIONS(412),
    [sym__else_e] = ACTIONS(410),
    [sym__else_f] = ACTIONS(410),
    [sym__end_if_e] = ACTIONS(410),
    [sym__end_if_f] = ACTIONS(410),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym__local] = ACTIONS(414),
    [sym__exposed] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_AMP_AMP] = ACTIONS(414),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(414),
    [anon_sym_TILDE_PIPE] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_EQ] = ACTIONS(414),
    [anon_sym_POUND] = ACTIONS(416),
    [anon_sym_LT_LT] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(414),
    [anon_sym_QMARK_QMARK] = ACTIONS(414),
    [anon_sym_QMARK_PLUS] = ACTIONS(414),
    [anon_sym_QMARK_DASH] = ACTIONS(414),
    [anon_sym_PLUS_EQ] = ACTIONS(414),
    [anon_sym_DASH_EQ] = ACTIONS(414),
    [anon_sym_STAR_EQ] = ACTIONS(414),
    [anon_sym_SLASH_EQ] = ACTIONS(414),
    [anon_sym_DOLLAR] = ACTIONS(414),
    [anon_sym_LT_GT] = ACTIONS(414),
    [aux_sym_numeric_parameter_token1] = ACTIONS(416),
    [anon_sym_QMARK] = ACTIONS(416),
    [anon_sym_BANG] = ACTIONS(416),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(414),
    [sym__hex_literal] = ACTIONS(414),
    [aux_sym__num_literal_token1] = ACTIONS(416),
    [aux_sym__exp_literal_token1] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__class_constructor] = ACTIONS(414),
    [sym__class_extends] = ACTIONS(414),
    [sym__var] = ACTIONS(414),
    [sym__property] = ACTIONS(414),
    [sym__alias] = ACTIONS(414),
    [sym__declare] = ACTIONS(414),
    [sym__function] = ACTIONS(414),
    [sym__return] = ACTIONS(414),
    [sym__break] = ACTIONS(414),
    [sym__continue] = ACTIONS(414),
    [sym__this] = ACTIONS(414),
    [sym__form] = ACTIONS(414),
    [sym__super] = ACTIONS(414),
    [sym__class_store_4d] = ACTIONS(414),
    [sym__class_store_ds] = ACTIONS(414),
    [sym__class_store_cs] = ACTIONS(414),
    [sym__system_variable_ok] = ACTIONS(414),
    [sym__system_variable_document] = ACTIONS(414),
    [sym__system_variable_flddelimit] = ACTIONS(414),
    [sym__system_variable_recdelimit] = ACTIONS(414),
    [sym__system_variable_error] = ACTIONS(416),
    [sym__system_variable_error_method] = ACTIONS(414),
    [sym__system_variable_error_line] = ACTIONS(414),
    [sym__system_variable_error_formula] = ACTIONS(414),
    [sym__system_variable_mousedown] = ACTIONS(414),
    [sym__system_variable_mousex] = ACTIONS(414),
    [sym__system_variable_mousey] = ACTIONS(414),
    [sym__system_variable_keycode] = ACTIONS(414),
    [sym__system_variable_modifiers] = ACTIONS(414),
    [sym__system_variable_mouseproc] = ACTIONS(414),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(414),
    [anon_sym_SLASH_SLASH] = ACTIONS(414),
    [anon_sym_SLASH_STAR] = ACTIONS(414),
    [sym__if_e] = ACTIONS(414),
    [sym__if_f] = ACTIONS(416),
    [sym__else_e] = ACTIONS(414),
    [sym__else_f] = ACTIONS(414),
    [sym__end_if_e] = ACTIONS(414),
    [sym__end_if_f] = ACTIONS(414),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym__local] = ACTIONS(418),
    [sym__exposed] = ACTIONS(418),
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
    [anon_sym_LT_GT] = ACTIONS(418),
    [aux_sym_numeric_parameter_token1] = ACTIONS(420),
    [anon_sym_QMARK] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(418),
    [sym__hex_literal] = ACTIONS(418),
    [aux_sym__num_literal_token1] = ACTIONS(420),
    [aux_sym__exp_literal_token1] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(418),
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
    [sym__system_variable_ok] = ACTIONS(418),
    [sym__system_variable_document] = ACTIONS(418),
    [sym__system_variable_flddelimit] = ACTIONS(418),
    [sym__system_variable_recdelimit] = ACTIONS(418),
    [sym__system_variable_error] = ACTIONS(420),
    [sym__system_variable_error_method] = ACTIONS(418),
    [sym__system_variable_error_line] = ACTIONS(418),
    [sym__system_variable_error_formula] = ACTIONS(418),
    [sym__system_variable_mousedown] = ACTIONS(418),
    [sym__system_variable_mousex] = ACTIONS(418),
    [sym__system_variable_mousey] = ACTIONS(418),
    [sym__system_variable_keycode] = ACTIONS(418),
    [sym__system_variable_modifiers] = ACTIONS(418),
    [sym__system_variable_mouseproc] = ACTIONS(418),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_STAR] = ACTIONS(418),
    [sym__if_e] = ACTIONS(418),
    [sym__if_f] = ACTIONS(420),
    [sym__else_e] = ACTIONS(418),
    [sym__else_f] = ACTIONS(418),
    [sym__end_if_e] = ACTIONS(418),
    [sym__end_if_f] = ACTIONS(418),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [sym__local] = ACTIONS(422),
    [sym__exposed] = ACTIONS(422),
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
    [anon_sym_LT_GT] = ACTIONS(422),
    [aux_sym_numeric_parameter_token1] = ACTIONS(424),
    [anon_sym_QMARK] = ACTIONS(424),
    [anon_sym_BANG] = ACTIONS(424),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(422),
    [sym__hex_literal] = ACTIONS(422),
    [aux_sym__num_literal_token1] = ACTIONS(424),
    [aux_sym__exp_literal_token1] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [sym__class_constructor] = ACTIONS(422),
    [sym__class_extends] = ACTIONS(422),
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
    [sym__system_variable_ok] = ACTIONS(422),
    [sym__system_variable_document] = ACTIONS(422),
    [sym__system_variable_flddelimit] = ACTIONS(422),
    [sym__system_variable_recdelimit] = ACTIONS(422),
    [sym__system_variable_error] = ACTIONS(424),
    [sym__system_variable_error_method] = ACTIONS(422),
    [sym__system_variable_error_line] = ACTIONS(422),
    [sym__system_variable_error_formula] = ACTIONS(422),
    [sym__system_variable_mousedown] = ACTIONS(422),
    [sym__system_variable_mousex] = ACTIONS(422),
    [sym__system_variable_mousey] = ACTIONS(422),
    [sym__system_variable_keycode] = ACTIONS(422),
    [sym__system_variable_modifiers] = ACTIONS(422),
    [sym__system_variable_mouseproc] = ACTIONS(422),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(422),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_SLASH_STAR] = ACTIONS(422),
    [sym__if_e] = ACTIONS(422),
    [sym__if_f] = ACTIONS(424),
    [sym__else_e] = ACTIONS(422),
    [sym__else_f] = ACTIONS(422),
    [sym__end_if_e] = ACTIONS(422),
    [sym__end_if_f] = ACTIONS(422),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym__local] = ACTIONS(426),
    [sym__exposed] = ACTIONS(426),
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
    [anon_sym_LT_GT] = ACTIONS(426),
    [aux_sym_numeric_parameter_token1] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(428),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(426),
    [sym__hex_literal] = ACTIONS(426),
    [aux_sym__num_literal_token1] = ACTIONS(428),
    [aux_sym__exp_literal_token1] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [sym__class_constructor] = ACTIONS(426),
    [sym__class_extends] = ACTIONS(426),
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
    [sym__system_variable_ok] = ACTIONS(426),
    [sym__system_variable_document] = ACTIONS(426),
    [sym__system_variable_flddelimit] = ACTIONS(426),
    [sym__system_variable_recdelimit] = ACTIONS(426),
    [sym__system_variable_error] = ACTIONS(428),
    [sym__system_variable_error_method] = ACTIONS(426),
    [sym__system_variable_error_line] = ACTIONS(426),
    [sym__system_variable_error_formula] = ACTIONS(426),
    [sym__system_variable_mousedown] = ACTIONS(426),
    [sym__system_variable_mousex] = ACTIONS(426),
    [sym__system_variable_mousey] = ACTIONS(426),
    [sym__system_variable_keycode] = ACTIONS(426),
    [sym__system_variable_modifiers] = ACTIONS(426),
    [sym__system_variable_mouseproc] = ACTIONS(426),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(426),
    [anon_sym_SLASH_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_STAR] = ACTIONS(426),
    [sym__if_e] = ACTIONS(426),
    [sym__if_f] = ACTIONS(428),
    [sym__else_e] = ACTIONS(426),
    [sym__else_f] = ACTIONS(426),
    [sym__end_if_e] = ACTIONS(426),
    [sym__end_if_f] = ACTIONS(426),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [sym__local] = ACTIONS(430),
    [sym__exposed] = ACTIONS(430),
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
    [anon_sym_LT_GT] = ACTIONS(430),
    [aux_sym_numeric_parameter_token1] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(430),
    [sym__hex_literal] = ACTIONS(430),
    [aux_sym__num_literal_token1] = ACTIONS(432),
    [aux_sym__exp_literal_token1] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(430),
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
    [sym__system_variable_ok] = ACTIONS(430),
    [sym__system_variable_document] = ACTIONS(430),
    [sym__system_variable_flddelimit] = ACTIONS(430),
    [sym__system_variable_recdelimit] = ACTIONS(430),
    [sym__system_variable_error] = ACTIONS(432),
    [sym__system_variable_error_method] = ACTIONS(430),
    [sym__system_variable_error_line] = ACTIONS(430),
    [sym__system_variable_error_formula] = ACTIONS(430),
    [sym__system_variable_mousedown] = ACTIONS(430),
    [sym__system_variable_mousex] = ACTIONS(430),
    [sym__system_variable_mousey] = ACTIONS(430),
    [sym__system_variable_keycode] = ACTIONS(430),
    [sym__system_variable_modifiers] = ACTIONS(430),
    [sym__system_variable_mouseproc] = ACTIONS(430),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(430),
    [anon_sym_SLASH_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_STAR] = ACTIONS(430),
    [sym__if_e] = ACTIONS(430),
    [sym__if_f] = ACTIONS(432),
    [sym__else_e] = ACTIONS(430),
    [sym__else_f] = ACTIONS(430),
    [sym__end_if_e] = ACTIONS(430),
    [sym__end_if_f] = ACTIONS(430),
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
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(216), 1,
      aux_sym__functional_expression_repeat1,
    STATE(220), 1,
      sym__function_parameter,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(438), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(219), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(231), 1,
      sym__function_parameter,
    STATE(232), 1,
      aux_sym__functional_expression_repeat1,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(442), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(219), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(228), 1,
      aux_sym__functional_expression_repeat1,
    STATE(233), 1,
      sym__function_parameter,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(219), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [369] = 27,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    STATE(253), 1,
      sym__function_parameter,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(219), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [483] = 25,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(68), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [590] = 25,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(262), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [697] = 25,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(263), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [804] = 25,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(452), 1,
      anon_sym_LT_GT,
    ACTIONS(456), 1,
      anon_sym_QMARK,
    ACTIONS(458), 1,
      anon_sym_BANG,
    ACTIONS(460), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      sym__system_variable_error,
    STATE(11), 1,
      sym__class_store,
    STATE(28), 1,
      sym__variable,
    STATE(29), 1,
      sym__class,
    STATE(34), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(454), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(462), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(68), 2,
      sym__condition,
      sym_ternary_block,
    STATE(309), 2,
      sym_this,
      sym_form,
    ACTIONS(466), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(19), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(43), 4,
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
    ACTIONS(468), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [911] = 26,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(452), 1,
      anon_sym_LT_GT,
    ACTIONS(456), 1,
      anon_sym_QMARK,
    ACTIONS(458), 1,
      anon_sym_BANG,
    ACTIONS(460), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      sym__system_variable_error,
    STATE(11), 1,
      sym__class_store,
    STATE(28), 1,
      sym__variable,
    STATE(29), 1,
      sym__class,
    STATE(34), 1,
      sym__mutable,
    STATE(128), 1,
      sym_ternary_block,
    STATE(251), 1,
      sym_super,
    STATE(281), 1,
      sym__condition,
    ACTIONS(454), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(462), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(309), 2,
      sym_this,
      sym_form,
    ACTIONS(466), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(19), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(43), 4,
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
    ACTIONS(468), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [1020] = 5,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(255), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(253), 48,
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
  [1087] = 4,
    ACTIONS(476), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(263), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(261), 49,
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
  [1152] = 5,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(270), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(268), 48,
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
  [1219] = 25,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(243), 2,
      sym__condition,
      sym_ternary_block,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(169), 7,
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
  [1326] = 2,
    ACTIONS(286), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(284), 50,
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
  [1386] = 2,
    ACTIONS(290), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(288), 50,
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
  [1446] = 3,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(306), 49,
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
  [1508] = 2,
    ACTIONS(263), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(261), 50,
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
  [1568] = 3,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(278), 49,
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
  [1630] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(292), 49,
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
  [1692] = 4,
    ACTIONS(472), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(300), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(298), 48,
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
  [1756] = 2,
    ACTIONS(304), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(302), 50,
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
  [1816] = 2,
    ACTIONS(489), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(487), 50,
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
  [1876] = 4,
    ACTIONS(472), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(276), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(274), 48,
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
  [1940] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(316), 7,
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
  [2043] = 4,
    ACTIONS(472), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(493), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(491), 47,
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
  [2106] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(336), 7,
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
  [2209] = 24,
    ACTIONS(45), 1,
      sym__this,
    ACTIONS(47), 1,
      sym__form,
    ACTIONS(49), 1,
      sym__super,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(452), 1,
      anon_sym_LT_GT,
    ACTIONS(456), 1,
      anon_sym_QMARK,
    ACTIONS(458), 1,
      anon_sym_BANG,
    ACTIONS(460), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      sym__system_variable_error,
    STATE(11), 1,
      sym__class_store,
    STATE(28), 1,
      sym__variable,
    STATE(29), 1,
      sym__class,
    STATE(34), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(454), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(462), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(309), 2,
      sym_this,
      sym_form,
    ACTIONS(466), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(19), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(45), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(43), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(40), 7,
      sym__immutable,
      sym_class_function,
      sym_generic_function,
      sym__function_call,
      sym__single_condition,
      sym_constant,
      sym_system_variable,
    ACTIONS(468), 13,
      sym__system_variable_ok,
      sym__system_variable_document,
      sym__system_variable_flddelimit,
      sym__system_variable_recdelimit,
      sym__system_variable_error_method,
      sym__system_variable_error_line,
      sym__system_variable_error_formula,
      sym__system_variable_mousedown,
      sym__system_variable_mousex,
      sym__system_variable_mousey,
      sym__system_variable_keycode,
      sym__system_variable_modifiers,
      sym__system_variable_mouseproc,
  [2312] = 2,
    ACTIONS(497), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(495), 49,
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
  [2371] = 4,
    ACTIONS(501), 1,
      anon_sym_DASH_GT,
    STATE(118), 1,
      sym_function_result,
    ACTIONS(503), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(499), 47,
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
  [2434] = 4,
    ACTIONS(472), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(507), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(505), 47,
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
  [2497] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(298), 7,
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
  [2600] = 2,
    ACTIONS(384), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(382), 49,
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
  [2659] = 2,
    ACTIONS(318), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(316), 49,
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
  [2718] = 2,
    ACTIONS(511), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(509), 49,
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
  [2777] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(301), 7,
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
  [2880] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(160), 1,
      sym__class,
    STATE(168), 1,
      sym__mutable,
    STATE(240), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(174), 7,
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
  [2983] = 2,
    ACTIONS(314), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(312), 49,
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
  [3042] = 2,
    ACTIONS(515), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(513), 49,
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
  [3101] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [3204] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(317), 7,
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
  [3307] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [3410] = 4,
    ACTIONS(501), 1,
      anon_sym_DASH_GT,
    STATE(130), 1,
      sym_function_result,
    ACTIONS(519), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(517), 47,
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
  [3473] = 4,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym__functional_expression,
    ACTIONS(362), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(358), 47,
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
  [3536] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [3639] = 4,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym__functional_expression,
    ACTIONS(388), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(386), 47,
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
  [3702] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(292), 7,
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
  [3805] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(296), 7,
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
  [3908] = 3,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(354), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(352), 48,
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
  [3969] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(297), 7,
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
  [4072] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [4175] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(313), 7,
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
  [4278] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [4381] = 24,
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
    STATE(151), 1,
      sym__class_store,
    STATE(153), 1,
      sym__variable,
    STATE(172), 1,
      sym__class,
    STATE(205), 1,
      sym__mutable,
    STATE(251), 1,
      sym_super,
    ACTIONS(13), 2,
      aux_sym_numeric_parameter_token1,
      aux_sym__num_literal_token1,
    ACTIONS(21), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    STATE(291), 2,
      sym_this,
      sym_form,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(147), 3,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
    STATE(159), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(167), 4,
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
  [4484] = 2,
    ACTIONS(392), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(390), 48,
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
  [4542] = 2,
    ACTIONS(527), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(525), 48,
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
  [4600] = 2,
    ACTIONS(531), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(529), 48,
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
  [4658] = 2,
    ACTIONS(396), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(394), 48,
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
  [4716] = 2,
    ACTIONS(535), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(533), 48,
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
  [4774] = 2,
    ACTIONS(370), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(368), 47,
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
  [4831] = 2,
    ACTIONS(342), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(340), 47,
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
  [4888] = 4,
    STATE(7), 1,
      sym_else,
    ACTIONS(541), 2,
      sym__else_e,
      sym__else_f,
    ACTIONS(539), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(537), 44,
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
  [4949] = 2,
    ACTIONS(428), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(426), 47,
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
  [5006] = 2,
    ACTIONS(545), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(543), 47,
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
  [5063] = 2,
    ACTIONS(549), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(547), 47,
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
  [5120] = 2,
    ACTIONS(553), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(551), 47,
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
  [5177] = 2,
    ACTIONS(557), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(555), 47,
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
  [5234] = 2,
    ACTIONS(561), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(559), 47,
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
  [5291] = 2,
    ACTIONS(366), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(364), 47,
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
  [5348] = 2,
    ACTIONS(565), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(563), 47,
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
  [5405] = 2,
    ACTIONS(338), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(336), 47,
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
  [5462] = 2,
    ACTIONS(404), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(402), 47,
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
  [5519] = 2,
    ACTIONS(569), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(567), 47,
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
  [5576] = 2,
    ACTIONS(573), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(571), 47,
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
  [5633] = 2,
    ACTIONS(577), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(575), 47,
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
  [5690] = 2,
    ACTIONS(581), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(579), 47,
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
  [5747] = 2,
    ACTIONS(585), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(583), 47,
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
  [5804] = 2,
    ACTIONS(350), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(348), 47,
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
  [5861] = 2,
    ACTIONS(589), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(587), 47,
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
  [5918] = 2,
    ACTIONS(593), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(591), 47,
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
  [5975] = 2,
    ACTIONS(420), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(418), 47,
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
  [6032] = 2,
    ACTIONS(408), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(406), 47,
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
  [6089] = 2,
    ACTIONS(326), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(320), 47,
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
  [6146] = 2,
    ACTIONS(597), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(595), 47,
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
  [6203] = 2,
    ACTIONS(601), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(599), 47,
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
  [6260] = 2,
    ACTIONS(416), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(414), 47,
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
  [6317] = 2,
    ACTIONS(605), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(603), 47,
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
  [6374] = 2,
    ACTIONS(609), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(607), 47,
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
  [6431] = 2,
    ACTIONS(400), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(398), 47,
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
  [6488] = 2,
    ACTIONS(613), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(611), 47,
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
  [6545] = 2,
    ACTIONS(617), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(615), 47,
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
  [6602] = 2,
    ACTIONS(621), 5,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
      sym__if_f,
    ACTIONS(619), 47,
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
  [6659] = 2,
    ACTIONS(625), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(623), 45,
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
  [6713] = 2,
    ACTIONS(629), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(627), 45,
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
  [6767] = 2,
    ACTIONS(633), 4,
      aux_sym_numeric_parameter_token1,
      anon_sym_BANG,
      aux_sym__num_literal_token1,
      sym__system_variable_error,
    ACTIONS(631), 43,
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
  [6819] = 4,
    ACTIONS(635), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(263), 10,
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
    ACTIONS(261), 22,
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
  [6862] = 5,
    ACTIONS(638), 1,
      anon_sym_DOT,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(255), 10,
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
    ACTIONS(253), 21,
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
  [6907] = 5,
    ACTIONS(638), 1,
      anon_sym_DOT,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(270), 10,
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
    ACTIONS(268), 21,
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
  [6952] = 2,
    ACTIONS(263), 10,
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
    ACTIONS(261), 23,
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
  [6990] = 2,
    ACTIONS(290), 10,
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
    ACTIONS(288), 23,
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
  [7028] = 2,
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
  [7066] = 3,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 10,
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
    ACTIONS(306), 22,
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
  [7106] = 2,
    ACTIONS(304), 10,
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
    ACTIONS(302), 23,
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
  [7144] = 3,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 10,
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
    ACTIONS(292), 22,
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
  [7184] = 3,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
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
    ACTIONS(278), 22,
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
  [7224] = 4,
    ACTIONS(638), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(276), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(274), 21,
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
  [7265] = 2,
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
  [7302] = 3,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(354), 10,
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
    ACTIONS(352), 21,
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
  [7341] = 4,
    ACTIONS(638), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym__mutable_repeat1,
    ACTIONS(300), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(298), 21,
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
  [7382] = 2,
    ACTIONS(392), 10,
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
    ACTIONS(390), 21,
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
  [7418] = 2,
    ACTIONS(314), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(312), 22,
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
  [7454] = 2,
    ACTIONS(384), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(382), 22,
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
  [7490] = 2,
    ACTIONS(396), 10,
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
    ACTIONS(394), 21,
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
  [7526] = 2,
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
    ACTIONS(426), 20,
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
  [7560] = 4,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym__functional_expression,
    ACTIONS(362), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(358), 18,
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
  [7598] = 2,
    ACTIONS(400), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(398), 20,
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
  [7632] = 2,
    ACTIONS(404), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(402), 20,
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
  [7666] = 6,
    ACTIONS(346), 1,
      anon_sym_QMARK,
    STATE(82), 1,
      sym__binary_operator,
    STATE(166), 1,
      aux_sym__condition_repeat1,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(322), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 15,
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
  [7708] = 2,
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
  [7742] = 2,
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
    ACTIONS(430), 20,
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
  [7776] = 6,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(82), 1,
      sym__binary_operator,
    STATE(166), 1,
      aux_sym__condition_repeat1,
    ACTIONS(372), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(654), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(657), 15,
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
  [7818] = 2,
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
  [7852] = 4,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym__functional_expression,
    ACTIONS(388), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(386), 18,
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
  [7890] = 6,
    ACTIONS(328), 1,
      anon_sym_QMARK,
    STATE(82), 1,
      sym__binary_operator,
    STATE(163), 1,
      aux_sym__condition_repeat1,
    ACTIONS(330), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(322), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 15,
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
  [7932] = 2,
    ACTIONS(408), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(406), 20,
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
  [7966] = 2,
    ACTIONS(416), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(414), 20,
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
  [8000] = 4,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__functional_expression,
    ACTIONS(362), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(358), 17,
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
  [8037] = 2,
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
    ACTIONS(336), 18,
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
  [8069] = 2,
    ACTIONS(380), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(372), 18,
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
  [8101] = 2,
    ACTIONS(366), 9,
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
  [8133] = 2,
    ACTIONS(350), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(348), 18,
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
  [8165] = 2,
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
  [8197] = 5,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym_COLON_EQ,
    STATE(30), 1,
      sym__functional_expression,
    ACTIONS(388), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(386), 15,
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
  [8235] = 2,
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
  [8267] = 5,
    STATE(80), 1,
      sym_class,
    STATE(151), 1,
      sym__class_store,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8297] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(74), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8327] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(129), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8357] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(111), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8387] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(113), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8417] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(80), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8447] = 5,
    STATE(74), 1,
      sym_class,
    STATE(151), 1,
      sym__class_store,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(51), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8477] = 5,
    STATE(69), 1,
      sym__class_store,
    STATE(125), 1,
      sym_class,
    STATE(84), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(664), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(662), 12,
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
  [8507] = 3,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(668), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8522] = 3,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(668), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8537] = 3,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      aux_sym_string_repeat1,
    ACTIONS(674), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8552] = 3,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(678), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8567] = 3,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_string_repeat1,
    ACTIONS(668), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8582] = 3,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_string_repeat1,
    ACTIONS(685), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [8597] = 4,
    ACTIONS(689), 1,
      aux_sym__name_token1,
    STATE(272), 1,
      sym__computed,
    STATE(361), 1,
      sym__name,
    ACTIONS(687), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [8613] = 4,
    ACTIONS(693), 1,
      aux_sym__name_token1,
    STATE(247), 1,
      sym__computed,
    STATE(324), 1,
      sym__name,
    ACTIONS(691), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [8629] = 5,
    ACTIONS(664), 1,
      sym__class_store_4d,
    ACTIONS(695), 1,
      aux_sym__name_token1,
    STATE(69), 1,
      sym__class_store,
    ACTIONS(697), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(121), 2,
      sym__name,
      sym__class,
  [8647] = 3,
    ACTIONS(701), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(699), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(16), 2,
      sym__name,
      sym__classic_name,
  [8659] = 3,
    ACTIONS(705), 1,
      aux_sym_numeric_parameter_token1,
    ACTIONS(703), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(149), 2,
      sym__name,
      sym__classic_name,
  [8671] = 1,
    ACTIONS(707), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [8679] = 3,
    ACTIONS(709), 1,
      aux_sym__name_token1,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    STATE(230), 2,
      sym__name,
      sym_local_variable,
  [8690] = 2,
    ACTIONS(703), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(149), 2,
      sym__name,
      sym__classic_name,
  [8699] = 2,
    ACTIONS(713), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(12), 2,
      sym__name,
      sym__classic_name,
  [8708] = 3,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    ACTIONS(715), 1,
      aux_sym__name_token1,
    STATE(265), 2,
      sym__name,
      sym_local_variable,
  [8719] = 4,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym_local_variable,
    STATE(213), 1,
      sym__function_argument,
  [8732] = 3,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__functional_expression,
    ACTIONS(386), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8743] = 3,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    ACTIONS(719), 1,
      aux_sym__name_token1,
    STATE(234), 2,
      sym__name,
      sym_local_variable,
  [8754] = 3,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    ACTIONS(721), 1,
      aux_sym__name_token1,
    STATE(277), 2,
      sym__name,
      sym_local_variable,
  [8765] = 2,
    ACTIONS(723), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(150), 2,
      sym__name,
      sym__classic_name,
  [8774] = 3,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym__function_argument,
    STATE(222), 1,
      sym_local_variable,
  [8784] = 3,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_classic_compiler_block_repeat1,
  [8794] = 3,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [8804] = 3,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(225), 1,
      aux_sym__function_argument_repeat1,
  [8814] = 3,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_function_arguments_repeat1,
  [8824] = 3,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      anon_sym_COLON,
    STATE(218), 1,
      aux_sym_property_declaration_block_repeat1,
  [8834] = 3,
    ACTIONS(746), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_var_declaration_block_repeat1,
  [8844] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [8854] = 3,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_classic_compiler_block_repeat1,
  [8864] = 3,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(218), 1,
      aux_sym_property_declaration_block_repeat1,
  [8874] = 2,
    ACTIONS(765), 1,
      anon_sym_QMARK,
    ACTIONS(763), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [8882] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym__functional_expression_repeat1,
  [8892] = 3,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(767), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym__function_argument_repeat1,
  [8902] = 3,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(769), 1,
      anon_sym_COLON,
    STATE(221), 1,
      aux_sym__function_argument_repeat1,
  [8912] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [8922] = 3,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_function_arguments_repeat1,
  [8932] = 3,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(778), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym__function_argument_repeat1,
  [8942] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [8952] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(785), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym__function_argument_repeat1,
  [8962] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [8972] = 3,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(789), 1,
      anon_sym_COLON,
    STATE(214), 1,
      aux_sym_property_declaration_block_repeat1,
  [8982] = 3,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_COLON,
    STATE(238), 1,
      aux_sym_var_declaration_block_repeat1,
  [8992] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym__functional_expression_repeat1,
  [9002] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [9012] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym__functional_expression_repeat1,
  [9022] = 3,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_classic_compiler_block_repeat1,
  [9032] = 3,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym__functional_expression_repeat1,
  [9042] = 3,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_function_arguments_repeat1,
  [9052] = 3,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    STATE(212), 1,
      sym_local_variable,
    STATE(250), 1,
      sym__function_argument,
  [9062] = 3,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(803), 1,
      anon_sym_COLON,
    STATE(215), 1,
      aux_sym_var_declaration_block_repeat1,
  [9072] = 2,
    ACTIONS(805), 1,
      aux_sym_command_suffix_token1,
    STATE(33), 1,
      sym_command_suffix,
  [9079] = 2,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym__functional_expression,
  [9086] = 2,
    ACTIONS(711), 1,
      anon_sym_DOLLAR,
    STATE(244), 1,
      sym_local_variable,
  [9093] = 2,
    ACTIONS(807), 1,
      aux_sym__name_token1,
    STATE(63), 1,
      sym__name,
  [9100] = 2,
    ACTIONS(765), 1,
      anon_sym_QMARK,
    ACTIONS(809), 1,
      anon_sym_COLON,
  [9107] = 1,
    ACTIONS(785), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9112] = 2,
    ACTIONS(811), 1,
      aux_sym__name_token1,
    STATE(143), 1,
      sym__name,
  [9119] = 2,
    ACTIONS(813), 1,
      aux_sym__name_token1,
    STATE(58), 1,
      sym__name,
  [9126] = 2,
    ACTIONS(815), 1,
      aux_sym__name_token1,
    STATE(361), 1,
      sym__name,
  [9133] = 2,
    ACTIONS(817), 1,
      aux_sym__name_token1,
    STATE(144), 1,
      sym__name,
  [9140] = 2,
    ACTIONS(819), 1,
      sym__exposed,
    ACTIONS(821), 1,
      sym__function,
  [9147] = 1,
    ACTIONS(776), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9152] = 2,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__functional_expression,
  [9159] = 2,
    ACTIONS(823), 1,
      aux_sym__name_token1,
    STATE(267), 1,
      sym__name,
  [9166] = 1,
    ACTIONS(732), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9171] = 2,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_function_arguments,
  [9178] = 2,
    ACTIONS(827), 1,
      aux_sym__name_token1,
    STATE(318), 1,
      sym__name,
  [9185] = 2,
    ACTIONS(829), 1,
      aux_sym__name_token1,
    STATE(229), 1,
      sym__name,
  [9192] = 2,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym__functional_expression,
  [9199] = 1,
    ACTIONS(831), 2,
      aux_sym__name_token1,
      anon_sym_DOLLAR,
  [9204] = 2,
    ACTIONS(833), 1,
      aux_sym_command_suffix_token1,
    STATE(310), 1,
      sym_command_suffix,
  [9211] = 2,
    ACTIONS(835), 1,
      aux_sym_time_token1,
    ACTIONS(837), 1,
      aux_sym_date_token1,
  [9218] = 2,
    ACTIONS(833), 1,
      aux_sym_command_suffix_token1,
    STATE(157), 1,
      sym_command_suffix,
  [9225] = 2,
    ACTIONS(765), 1,
      anon_sym_QMARK,
    ACTIONS(839), 1,
      anon_sym_COLON,
  [9232] = 2,
    ACTIONS(765), 1,
      anon_sym_QMARK,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [9239] = 2,
    ACTIONS(843), 1,
      aux_sym__name_token1,
    STATE(10), 1,
      sym__name,
  [9246] = 1,
    ACTIONS(756), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [9251] = 2,
    ACTIONS(845), 1,
      aux_sym__name_token1,
    STATE(76), 1,
      sym__name,
  [9258] = 1,
    ACTIONS(761), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9263] = 2,
    ACTIONS(847), 1,
      aux_sym__name_token1,
    STATE(15), 1,
      sym__name,
  [9270] = 2,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_function_arguments,
  [9277] = 2,
    ACTIONS(37), 1,
      sym__function,
    STATE(194), 1,
      sym_function,
  [9284] = 2,
    ACTIONS(833), 1,
      aux_sym_command_suffix_token1,
    STATE(308), 1,
      sym_command_suffix,
  [9291] = 2,
    ACTIONS(849), 1,
      aux_sym__name_token1,
    STATE(307), 1,
      sym__name,
  [9298] = 2,
    ACTIONS(833), 1,
      aux_sym_command_suffix_token1,
    STATE(306), 1,
      sym_command_suffix,
  [9305] = 2,
    ACTIONS(819), 1,
      sym__local,
    ACTIONS(821), 1,
      sym__function,
  [9312] = 2,
    ACTIONS(851), 1,
      aux_sym_command_suffix_token1,
    STATE(78), 1,
      sym_command_suffix,
  [9319] = 2,
    ACTIONS(833), 1,
      aux_sym_command_suffix_token1,
    STATE(314), 1,
      sym_command_suffix,
  [9326] = 1,
    ACTIONS(749), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [9331] = 2,
    ACTIONS(853), 1,
      aux_sym_time_token1,
    ACTIONS(855), 1,
      aux_sym_date_token1,
  [9338] = 1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
  [9342] = 1,
    ACTIONS(859), 1,
      anon_sym_QMARK,
  [9346] = 1,
    ACTIONS(861), 1,
      anon_sym_QMARK,
  [9350] = 1,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
  [9354] = 1,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
  [9358] = 1,
    ACTIONS(867), 1,
      aux_sym_comment_token2,
  [9362] = 1,
    ACTIONS(869), 1,
      aux_sym_comment_token1,
  [9366] = 1,
    ACTIONS(523), 1,
      anon_sym_DOT,
  [9370] = 1,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
  [9374] = 1,
    ACTIONS(873), 1,
      aux_sym_date_token1,
  [9378] = 1,
    ACTIONS(873), 1,
      aux_sym_time_token1,
  [9382] = 1,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
  [9386] = 1,
    ACTIONS(650), 1,
      anon_sym_DOT,
  [9390] = 1,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [9394] = 1,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
  [9398] = 1,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
  [9402] = 1,
    ACTIONS(883), 1,
      sym__function,
  [9406] = 1,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
  [9410] = 1,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
  [9414] = 1,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
  [9418] = 1,
    ACTIONS(891), 1,
      anon_sym_COLON,
  [9422] = 1,
    ACTIONS(893), 1,
      anon_sym_DASH,
  [9426] = 1,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
  [9430] = 1,
    ACTIONS(897), 1,
      anon_sym_QMARK,
  [9434] = 1,
    ACTIONS(899), 1,
      anon_sym_BANG,
  [9438] = 1,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
  [9442] = 1,
    ACTIONS(903), 1,
      anon_sym_DASH,
  [9446] = 1,
    ACTIONS(905), 1,
      anon_sym_DOT,
  [9450] = 1,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
  [9454] = 1,
    ACTIONS(909), 1,
      anon_sym_DOT,
  [9458] = 1,
    ACTIONS(356), 1,
      anon_sym_DOT,
  [9462] = 1,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
  [9466] = 1,
    ACTIONS(913), 1,
      anon_sym_DASH,
  [9470] = 1,
    ACTIONS(915), 1,
      aux_sym__name_token1,
  [9474] = 1,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
  [9478] = 1,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
  [9482] = 1,
    ACTIONS(921), 1,
      anon_sym_SLASH,
  [9486] = 1,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [9490] = 1,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
  [9494] = 1,
    ACTIONS(927), 1,
      aux_sym__name_token1,
  [9498] = 1,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
  [9502] = 1,
    ACTIONS(931), 1,
      aux_sym_time_token1,
  [9506] = 1,
    ACTIONS(933), 1,
      anon_sym_BANG,
  [9510] = 1,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
  [9514] = 1,
    ACTIONS(937), 1,
      aux_sym__name_token1,
  [9518] = 1,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
  [9522] = 1,
    ACTIONS(941), 1,
      anon_sym_DASH,
  [9526] = 1,
    ACTIONS(943), 1,
      anon_sym_COLON,
  [9530] = 1,
    ACTIONS(945), 1,
      aux_sym_time_token1,
  [9534] = 1,
    ACTIONS(947), 1,
      aux_sym_time_token1,
  [9538] = 1,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [9542] = 1,
    ACTIONS(951), 1,
      aux_sym_time_token1,
  [9546] = 1,
    ACTIONS(953), 1,
      aux_sym_date_token1,
  [9550] = 1,
    ACTIONS(953), 1,
      aux_sym_time_token1,
  [9554] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [9558] = 1,
    ACTIONS(957), 1,
      aux_sym_time_token1,
  [9562] = 1,
    ACTIONS(959), 1,
      aux_sym_time_token1,
  [9566] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
  [9570] = 1,
    ACTIONS(963), 1,
      anon_sym_BANG,
  [9574] = 1,
    ACTIONS(965), 1,
      aux_sym_time_token1,
  [9578] = 1,
    ACTIONS(967), 1,
      aux_sym_date_token1,
  [9582] = 1,
    ACTIONS(967), 1,
      aux_sym_time_token1,
  [9586] = 1,
    ACTIONS(969), 1,
      anon_sym_QMARK,
  [9590] = 1,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [9594] = 1,
    ACTIONS(973), 1,
      anon_sym_DASH,
  [9598] = 1,
    ACTIONS(975), 1,
      anon_sym_DASH,
  [9602] = 1,
    ACTIONS(977), 1,
      anon_sym_COLON,
  [9606] = 1,
    ACTIONS(979), 1,
      anon_sym_DASH,
  [9610] = 1,
    ACTIONS(981), 1,
      anon_sym_DASH,
  [9614] = 1,
    ACTIONS(983), 1,
      aux_sym_time_token1,
  [9618] = 1,
    ACTIONS(985), 1,
      aux_sym_time_token1,
  [9622] = 1,
    ACTIONS(987), 1,
      aux_sym_time_token1,
  [9626] = 1,
    ACTIONS(989), 1,
      aux_sym_time_token1,
  [9630] = 1,
    ACTIONS(991), 1,
      aux_sym_time_token1,
  [9634] = 1,
    ACTIONS(993), 1,
      aux_sym_time_token1,
  [9638] = 1,
    ACTIONS(995), 1,
      anon_sym_COLON,
  [9642] = 1,
    ACTIONS(997), 1,
      anon_sym_DASH,
  [9646] = 1,
    ACTIONS(999), 1,
      anon_sym_DASH,
  [9650] = 1,
    ACTIONS(1001), 1,
      anon_sym_COLON,
  [9654] = 1,
    ACTIONS(1003), 1,
      anon_sym_DASH,
  [9658] = 1,
    ACTIONS(1005), 1,
      anon_sym_DASH,
  [9662] = 1,
    ACTIONS(1007), 1,
      aux_sym_time_token1,
  [9666] = 1,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 123,
  [SMALL_STATE(49)] = 246,
  [SMALL_STATE(50)] = 369,
  [SMALL_STATE(51)] = 483,
  [SMALL_STATE(52)] = 590,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 804,
  [SMALL_STATE(55)] = 911,
  [SMALL_STATE(56)] = 1020,
  [SMALL_STATE(57)] = 1087,
  [SMALL_STATE(58)] = 1152,
  [SMALL_STATE(59)] = 1219,
  [SMALL_STATE(60)] = 1326,
  [SMALL_STATE(61)] = 1386,
  [SMALL_STATE(62)] = 1446,
  [SMALL_STATE(63)] = 1508,
  [SMALL_STATE(64)] = 1568,
  [SMALL_STATE(65)] = 1630,
  [SMALL_STATE(66)] = 1692,
  [SMALL_STATE(67)] = 1756,
  [SMALL_STATE(68)] = 1816,
  [SMALL_STATE(69)] = 1876,
  [SMALL_STATE(70)] = 1940,
  [SMALL_STATE(71)] = 2043,
  [SMALL_STATE(72)] = 2106,
  [SMALL_STATE(73)] = 2209,
  [SMALL_STATE(74)] = 2312,
  [SMALL_STATE(75)] = 2371,
  [SMALL_STATE(76)] = 2434,
  [SMALL_STATE(77)] = 2497,
  [SMALL_STATE(78)] = 2600,
  [SMALL_STATE(79)] = 2659,
  [SMALL_STATE(80)] = 2718,
  [SMALL_STATE(81)] = 2777,
  [SMALL_STATE(82)] = 2880,
  [SMALL_STATE(83)] = 2983,
  [SMALL_STATE(84)] = 3042,
  [SMALL_STATE(85)] = 3101,
  [SMALL_STATE(86)] = 3204,
  [SMALL_STATE(87)] = 3307,
  [SMALL_STATE(88)] = 3410,
  [SMALL_STATE(89)] = 3473,
  [SMALL_STATE(90)] = 3536,
  [SMALL_STATE(91)] = 3639,
  [SMALL_STATE(92)] = 3702,
  [SMALL_STATE(93)] = 3805,
  [SMALL_STATE(94)] = 3908,
  [SMALL_STATE(95)] = 3969,
  [SMALL_STATE(96)] = 4072,
  [SMALL_STATE(97)] = 4175,
  [SMALL_STATE(98)] = 4278,
  [SMALL_STATE(99)] = 4381,
  [SMALL_STATE(100)] = 4484,
  [SMALL_STATE(101)] = 4542,
  [SMALL_STATE(102)] = 4600,
  [SMALL_STATE(103)] = 4658,
  [SMALL_STATE(104)] = 4716,
  [SMALL_STATE(105)] = 4774,
  [SMALL_STATE(106)] = 4831,
  [SMALL_STATE(107)] = 4888,
  [SMALL_STATE(108)] = 4949,
  [SMALL_STATE(109)] = 5006,
  [SMALL_STATE(110)] = 5063,
  [SMALL_STATE(111)] = 5120,
  [SMALL_STATE(112)] = 5177,
  [SMALL_STATE(113)] = 5234,
  [SMALL_STATE(114)] = 5291,
  [SMALL_STATE(115)] = 5348,
  [SMALL_STATE(116)] = 5405,
  [SMALL_STATE(117)] = 5462,
  [SMALL_STATE(118)] = 5519,
  [SMALL_STATE(119)] = 5576,
  [SMALL_STATE(120)] = 5633,
  [SMALL_STATE(121)] = 5690,
  [SMALL_STATE(122)] = 5747,
  [SMALL_STATE(123)] = 5804,
  [SMALL_STATE(124)] = 5861,
  [SMALL_STATE(125)] = 5918,
  [SMALL_STATE(126)] = 5975,
  [SMALL_STATE(127)] = 6032,
  [SMALL_STATE(128)] = 6089,
  [SMALL_STATE(129)] = 6146,
  [SMALL_STATE(130)] = 6203,
  [SMALL_STATE(131)] = 6260,
  [SMALL_STATE(132)] = 6317,
  [SMALL_STATE(133)] = 6374,
  [SMALL_STATE(134)] = 6431,
  [SMALL_STATE(135)] = 6488,
  [SMALL_STATE(136)] = 6545,
  [SMALL_STATE(137)] = 6602,
  [SMALL_STATE(138)] = 6659,
  [SMALL_STATE(139)] = 6713,
  [SMALL_STATE(140)] = 6767,
  [SMALL_STATE(141)] = 6819,
  [SMALL_STATE(142)] = 6862,
  [SMALL_STATE(143)] = 6907,
  [SMALL_STATE(144)] = 6952,
  [SMALL_STATE(145)] = 6990,
  [SMALL_STATE(146)] = 7028,
  [SMALL_STATE(147)] = 7066,
  [SMALL_STATE(148)] = 7106,
  [SMALL_STATE(149)] = 7144,
  [SMALL_STATE(150)] = 7184,
  [SMALL_STATE(151)] = 7224,
  [SMALL_STATE(152)] = 7265,
  [SMALL_STATE(153)] = 7302,
  [SMALL_STATE(154)] = 7341,
  [SMALL_STATE(155)] = 7382,
  [SMALL_STATE(156)] = 7418,
  [SMALL_STATE(157)] = 7454,
  [SMALL_STATE(158)] = 7490,
  [SMALL_STATE(159)] = 7526,
  [SMALL_STATE(160)] = 7560,
  [SMALL_STATE(161)] = 7598,
  [SMALL_STATE(162)] = 7632,
  [SMALL_STATE(163)] = 7666,
  [SMALL_STATE(164)] = 7708,
  [SMALL_STATE(165)] = 7742,
  [SMALL_STATE(166)] = 7776,
  [SMALL_STATE(167)] = 7818,
  [SMALL_STATE(168)] = 7852,
  [SMALL_STATE(169)] = 7890,
  [SMALL_STATE(170)] = 7932,
  [SMALL_STATE(171)] = 7966,
  [SMALL_STATE(172)] = 8000,
  [SMALL_STATE(173)] = 8037,
  [SMALL_STATE(174)] = 8069,
  [SMALL_STATE(175)] = 8101,
  [SMALL_STATE(176)] = 8133,
  [SMALL_STATE(177)] = 8165,
  [SMALL_STATE(178)] = 8197,
  [SMALL_STATE(179)] = 8235,
  [SMALL_STATE(180)] = 8267,
  [SMALL_STATE(181)] = 8297,
  [SMALL_STATE(182)] = 8327,
  [SMALL_STATE(183)] = 8357,
  [SMALL_STATE(184)] = 8387,
  [SMALL_STATE(185)] = 8417,
  [SMALL_STATE(186)] = 8447,
  [SMALL_STATE(187)] = 8477,
  [SMALL_STATE(188)] = 8507,
  [SMALL_STATE(189)] = 8522,
  [SMALL_STATE(190)] = 8537,
  [SMALL_STATE(191)] = 8552,
  [SMALL_STATE(192)] = 8567,
  [SMALL_STATE(193)] = 8582,
  [SMALL_STATE(194)] = 8597,
  [SMALL_STATE(195)] = 8613,
  [SMALL_STATE(196)] = 8629,
  [SMALL_STATE(197)] = 8647,
  [SMALL_STATE(198)] = 8659,
  [SMALL_STATE(199)] = 8671,
  [SMALL_STATE(200)] = 8679,
  [SMALL_STATE(201)] = 8690,
  [SMALL_STATE(202)] = 8699,
  [SMALL_STATE(203)] = 8708,
  [SMALL_STATE(204)] = 8719,
  [SMALL_STATE(205)] = 8732,
  [SMALL_STATE(206)] = 8743,
  [SMALL_STATE(207)] = 8754,
  [SMALL_STATE(208)] = 8765,
  [SMALL_STATE(209)] = 8774,
  [SMALL_STATE(210)] = 8784,
  [SMALL_STATE(211)] = 8794,
  [SMALL_STATE(212)] = 8804,
  [SMALL_STATE(213)] = 8814,
  [SMALL_STATE(214)] = 8824,
  [SMALL_STATE(215)] = 8834,
  [SMALL_STATE(216)] = 8844,
  [SMALL_STATE(217)] = 8854,
  [SMALL_STATE(218)] = 8864,
  [SMALL_STATE(219)] = 8874,
  [SMALL_STATE(220)] = 8882,
  [SMALL_STATE(221)] = 8892,
  [SMALL_STATE(222)] = 8902,
  [SMALL_STATE(223)] = 8912,
  [SMALL_STATE(224)] = 8922,
  [SMALL_STATE(225)] = 8932,
  [SMALL_STATE(226)] = 8942,
  [SMALL_STATE(227)] = 8952,
  [SMALL_STATE(228)] = 8962,
  [SMALL_STATE(229)] = 8972,
  [SMALL_STATE(230)] = 8982,
  [SMALL_STATE(231)] = 8992,
  [SMALL_STATE(232)] = 9002,
  [SMALL_STATE(233)] = 9012,
  [SMALL_STATE(234)] = 9022,
  [SMALL_STATE(235)] = 9032,
  [SMALL_STATE(236)] = 9042,
  [SMALL_STATE(237)] = 9052,
  [SMALL_STATE(238)] = 9062,
  [SMALL_STATE(239)] = 9072,
  [SMALL_STATE(240)] = 9079,
  [SMALL_STATE(241)] = 9086,
  [SMALL_STATE(242)] = 9093,
  [SMALL_STATE(243)] = 9100,
  [SMALL_STATE(244)] = 9107,
  [SMALL_STATE(245)] = 9112,
  [SMALL_STATE(246)] = 9119,
  [SMALL_STATE(247)] = 9126,
  [SMALL_STATE(248)] = 9133,
  [SMALL_STATE(249)] = 9140,
  [SMALL_STATE(250)] = 9147,
  [SMALL_STATE(251)] = 9152,
  [SMALL_STATE(252)] = 9159,
  [SMALL_STATE(253)] = 9166,
  [SMALL_STATE(254)] = 9171,
  [SMALL_STATE(255)] = 9178,
  [SMALL_STATE(256)] = 9185,
  [SMALL_STATE(257)] = 9192,
  [SMALL_STATE(258)] = 9199,
  [SMALL_STATE(259)] = 9204,
  [SMALL_STATE(260)] = 9211,
  [SMALL_STATE(261)] = 9218,
  [SMALL_STATE(262)] = 9225,
  [SMALL_STATE(263)] = 9232,
  [SMALL_STATE(264)] = 9239,
  [SMALL_STATE(265)] = 9246,
  [SMALL_STATE(266)] = 9251,
  [SMALL_STATE(267)] = 9258,
  [SMALL_STATE(268)] = 9263,
  [SMALL_STATE(269)] = 9270,
  [SMALL_STATE(270)] = 9277,
  [SMALL_STATE(271)] = 9284,
  [SMALL_STATE(272)] = 9291,
  [SMALL_STATE(273)] = 9298,
  [SMALL_STATE(274)] = 9305,
  [SMALL_STATE(275)] = 9312,
  [SMALL_STATE(276)] = 9319,
  [SMALL_STATE(277)] = 9326,
  [SMALL_STATE(278)] = 9331,
  [SMALL_STATE(279)] = 9338,
  [SMALL_STATE(280)] = 9342,
  [SMALL_STATE(281)] = 9346,
  [SMALL_STATE(282)] = 9350,
  [SMALL_STATE(283)] = 9354,
  [SMALL_STATE(284)] = 9358,
  [SMALL_STATE(285)] = 9362,
  [SMALL_STATE(286)] = 9366,
  [SMALL_STATE(287)] = 9370,
  [SMALL_STATE(288)] = 9374,
  [SMALL_STATE(289)] = 9378,
  [SMALL_STATE(290)] = 9382,
  [SMALL_STATE(291)] = 9386,
  [SMALL_STATE(292)] = 9390,
  [SMALL_STATE(293)] = 9394,
  [SMALL_STATE(294)] = 9398,
  [SMALL_STATE(295)] = 9402,
  [SMALL_STATE(296)] = 9406,
  [SMALL_STATE(297)] = 9410,
  [SMALL_STATE(298)] = 9414,
  [SMALL_STATE(299)] = 9418,
  [SMALL_STATE(300)] = 9422,
  [SMALL_STATE(301)] = 9426,
  [SMALL_STATE(302)] = 9430,
  [SMALL_STATE(303)] = 9434,
  [SMALL_STATE(304)] = 9438,
  [SMALL_STATE(305)] = 9442,
  [SMALL_STATE(306)] = 9446,
  [SMALL_STATE(307)] = 9450,
  [SMALL_STATE(308)] = 9454,
  [SMALL_STATE(309)] = 9458,
  [SMALL_STATE(310)] = 9462,
  [SMALL_STATE(311)] = 9466,
  [SMALL_STATE(312)] = 9470,
  [SMALL_STATE(313)] = 9474,
  [SMALL_STATE(314)] = 9478,
  [SMALL_STATE(315)] = 9482,
  [SMALL_STATE(316)] = 9486,
  [SMALL_STATE(317)] = 9490,
  [SMALL_STATE(318)] = 9494,
  [SMALL_STATE(319)] = 9498,
  [SMALL_STATE(320)] = 9502,
  [SMALL_STATE(321)] = 9506,
  [SMALL_STATE(322)] = 9510,
  [SMALL_STATE(323)] = 9514,
  [SMALL_STATE(324)] = 9518,
  [SMALL_STATE(325)] = 9522,
  [SMALL_STATE(326)] = 9526,
  [SMALL_STATE(327)] = 9530,
  [SMALL_STATE(328)] = 9534,
  [SMALL_STATE(329)] = 9538,
  [SMALL_STATE(330)] = 9542,
  [SMALL_STATE(331)] = 9546,
  [SMALL_STATE(332)] = 9550,
  [SMALL_STATE(333)] = 9554,
  [SMALL_STATE(334)] = 9558,
  [SMALL_STATE(335)] = 9562,
  [SMALL_STATE(336)] = 9566,
  [SMALL_STATE(337)] = 9570,
  [SMALL_STATE(338)] = 9574,
  [SMALL_STATE(339)] = 9578,
  [SMALL_STATE(340)] = 9582,
  [SMALL_STATE(341)] = 9586,
  [SMALL_STATE(342)] = 9590,
  [SMALL_STATE(343)] = 9594,
  [SMALL_STATE(344)] = 9598,
  [SMALL_STATE(345)] = 9602,
  [SMALL_STATE(346)] = 9606,
  [SMALL_STATE(347)] = 9610,
  [SMALL_STATE(348)] = 9614,
  [SMALL_STATE(349)] = 9618,
  [SMALL_STATE(350)] = 9622,
  [SMALL_STATE(351)] = 9626,
  [SMALL_STATE(352)] = 9630,
  [SMALL_STATE(353)] = 9634,
  [SMALL_STATE(354)] = 9638,
  [SMALL_STATE(355)] = 9642,
  [SMALL_STATE(356)] = 9646,
  [SMALL_STATE(357)] = 9650,
  [SMALL_STATE(358)] = 9654,
  [SMALL_STATE(359)] = 9658,
  [SMALL_STATE(360)] = 9662,
  [SMALL_STATE(361)] = 9666,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(249),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(274),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(198),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(208),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(159),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(335),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(260),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(165),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(159),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(190),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(109),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(196),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(258),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(323),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(312),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(290),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(199),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(137),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(136),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(133),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(273),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(271),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(259),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(261),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(164),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(164),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(276),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(285),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(284),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2), SHIFT_REPEAT(283),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(249),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(274),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(198),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(208),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(159),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(335),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(260),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(165),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(159),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(190),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(109),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(196),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(258),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(323),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(312),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(290),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(199),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(137),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(136),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(133),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(273),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(271),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(259),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(261),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(164),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(164),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(276),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(285),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(284),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(283),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mutable_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(268),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_suffix, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_suffix, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_block, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_block, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_function, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_function, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immutable, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immutable, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_expression, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_expression, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(73),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(73),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_condition, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_condition, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 7),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mutable, 6),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mutable, 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(242),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_block, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_block, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_if, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_if, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_block_repeat1, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 1),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mutable_repeat1, 2), SHIFT_REPEAT(248),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(82),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_repeat1, 2), SHIFT_REPEAT(82),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(191),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2), SHIFT_REPEAT(50),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__functional_expression_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(207),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(203),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(252),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(237),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(241),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [863] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_this, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_super, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
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
