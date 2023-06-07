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
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_QMARK = 1,
  aux_sym_time_token1 = 2,
  anon_sym_COLON = 3,
  anon_sym_BANG = 4,
  aux_sym_date_token1 = 5,
  anon_sym_DASH = 6,
  anon_sym_BANG00_DASH00_DASH00_BANG = 7,
  sym__hex_literal = 8,
  aux_sym__dec_literal_token1 = 9,
  aux_sym__num_literal_token1 = 10,
  aux_sym__exp_literal_token1 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_BSLASHr = 13,
  anon_sym_BSLASHn = 14,
  anon_sym_BSLASH_DQUOTE = 15,
  anon_sym_BSLASHt = 16,
  anon_sym_BSLASH_BSLASH = 17,
  aux_sym_string_token1 = 18,
  anon_sym_LPAREN_RPAREN = 19,
  anon_sym_LPAREN = 20,
  anon_sym_SEMI = 21,
  anon_sym_RPAREN = 22,
  sym_command_suffix = 23,
  sym__name = 24,
  anon_sym_DOT = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_LT_GT = 31,
  anon_sym_LBRACE_RBRACE = 32,
  anon_sym_LBRACK_RBRACK = 33,
  sym__local = 34,
  sym__exposed = 35,
  sym__function = 36,
  sym__class_store_4d = 37,
  sym__class_store_ds = 38,
  sym__class_store_cs = 39,
  sym__basic_type_text = 40,
  sym__basic_type_date = 41,
  sym__basic_type_time = 42,
  sym__basic_type_boolean = 43,
  sym__basic_type_integer = 44,
  sym__basic_type_real = 45,
  sym__basic_type_pointer = 46,
  sym__basic_type_picture = 47,
  sym__basic_type_blob = 48,
  sym__basic_type_collection = 49,
  sym__basic_type_variant = 50,
  sym__basic_type_object = 51,
  anon_sym_DASH_GT = 52,
  sym__declare = 53,
  sym__alias = 54,
  sym__class_extends = 55,
  sym__class_constructor = 56,
  sym__var = 57,
  sym__property = 58,
  aux_sym__classic_compiler_blob_token1 = 59,
  aux_sym__classic_compiler_boolean_token1 = 60,
  aux_sym__classic_compiler_collection_token1 = 61,
  aux_sym__classic_compiler_date_token1 = 62,
  aux_sym__classic_compiler_longint_token1 = 63,
  aux_sym__classic_compiler_object_token1 = 64,
  aux_sym__classic_compiler_picture_token1 = 65,
  aux_sym__classic_compiler_pointer_token1 = 66,
  aux_sym__classic_compiler_real_token1 = 67,
  aux_sym__classic_compiler_text_token1 = 68,
  aux_sym__classic_compiler_time_token1 = 69,
  aux_sym__classic_compiler_variant_token1 = 70,
  aux_sym__classic_array_blob_token1 = 71,
  aux_sym__classic_array_boolean_token1 = 72,
  aux_sym__classic_array_date_token1 = 73,
  aux_sym__classic_array_integer_token1 = 74,
  aux_sym__classic_array_longint_token1 = 75,
  aux_sym__classic_array_object_token1 = 76,
  aux_sym__classic_array_picture_token1 = 77,
  aux_sym__classic_array_pointer_token1 = 78,
  aux_sym__classic_array_real_token1 = 79,
  aux_sym__classic_array_text_token1 = 80,
  aux_sym__classic_array_time_token1 = 81,
  sym__begin_sql_e = 82,
  sym__begin_sql_f = 83,
  sym__end_sql_e = 84,
  sym__end_sql_f = 85,
  aux_sym_sql_injection_block_token1 = 86,
  anon_sym_PLUS = 87,
  anon_sym_STAR = 88,
  anon_sym_SLASH = 89,
  anon_sym_AMP_AMP = 90,
  anon_sym_PIPE_PIPE = 91,
  anon_sym_AMP = 92,
  anon_sym_PIPE = 93,
  anon_sym_CARET = 94,
  anon_sym_TILDE_PIPE = 95,
  anon_sym_LT = 96,
  anon_sym_GT = 97,
  anon_sym_EQ = 98,
  anon_sym_POUND = 99,
  anon_sym_LT_LT = 100,
  anon_sym_GT_GT = 101,
  anon_sym_QMARK_QMARK = 102,
  anon_sym_QMARK_PLUS = 103,
  anon_sym_QMARK_DASH = 104,
  anon_sym_PLUS_EQ = 105,
  anon_sym_DASH_EQ = 106,
  anon_sym_STAR_EQ = 107,
  anon_sym_SLASH_EQ = 108,
  anon_sym_COLON_EQ = 109,
  anon_sym_SLASH_STAR = 110,
  aux_sym_comment_block_token1 = 111,
  anon_sym_SLASH_SLASH = 112,
  aux_sym_comment_token1 = 113,
  sym_classic_command = 114,
  sym_source = 115,
  sym__statement = 116,
  sym_time = 117,
  sym_date = 118,
  sym__dec_literal = 119,
  sym__num_literal = 120,
  sym__exp_literal = 121,
  sym_number = 122,
  sym_string = 123,
  sym_constant = 124,
  sym_expression_argument = 125,
  sym_classsic_command_expression = 126,
  sym__node = 127,
  sym_local_variable_name = 128,
  sym_local_variable = 129,
  sym_interprocess_variable_name = 130,
  sym_interprocess_variable = 131,
  sym_numeric_parameter_name = 132,
  sym_numeric_parameter = 133,
  sym_class_name = 134,
  sym_class_instance = 135,
  sym_ternary_block = 136,
  sym__object_literal_block = 137,
  sym__collection_literal_block = 138,
  sym_literal_block = 139,
  sym_value = 140,
  sym__scope = 141,
  sym__class_store = 142,
  sym__basic_type = 143,
  sym_class = 144,
  sym_function = 145,
  sym_function_name = 146,
  sym__function_argument = 147,
  sym_function_arguments = 148,
  sym_function_result = 149,
  sym_function_block = 150,
  sym_declare = 151,
  sym_declare_block = 152,
  sym_alias = 153,
  sym_alias_name = 154,
  sym_alias_block = 155,
  sym_class_extends = 156,
  sym_class_constructor = 157,
  sym_var = 158,
  sym_var_declaration_block = 159,
  sym_property = 160,
  sym_property_declaration_block = 161,
  sym__classic_compiler_blob = 162,
  sym__classic_compiler_boolean = 163,
  sym__classic_compiler_collection = 164,
  sym__classic_compiler_date = 165,
  sym__classic_compiler_longint = 166,
  sym__classic_compiler_object = 167,
  sym__classic_compiler_picture = 168,
  sym__classic_compiler_pointer = 169,
  sym__classic_compiler_real = 170,
  sym__classic_compiler_text = 171,
  sym__classic_compiler_time = 172,
  sym__classic_compiler_variant = 173,
  sym_classic_compiler = 174,
  sym_classic_compiler_block = 175,
  sym__classic_array_blob = 176,
  sym__classic_array_boolean = 177,
  sym__classic_array_date = 178,
  sym__classic_array_integer = 179,
  sym__classic_array_longint = 180,
  sym__classic_array_object = 181,
  sym__classic_array_picture = 182,
  sym__classic_array_pointer = 183,
  sym__classic_array_real = 184,
  sym__classic_array_text = 185,
  sym__classic_array_time = 186,
  sym_classic_array = 187,
  sym_classic_array_block = 188,
  sym_begin_sql = 189,
  sym_end_sql = 190,
  sym_sql_injection_block = 191,
  sym__binary_operator = 192,
  sym_comment_block = 193,
  sym_comment = 194,
  aux_sym_source_repeat1 = 195,
  aux_sym_string_repeat1 = 196,
  aux_sym_expression_argument_repeat1 = 197,
  aux_sym_local_variable_repeat1 = 198,
  aux_sym_class_repeat1 = 199,
  aux_sym_function_name_repeat1 = 200,
  aux_sym__function_argument_repeat1 = 201,
  aux_sym_function_arguments_repeat1 = 202,
  aux_sym_var_declaration_block_repeat1 = 203,
  aux_sym_property_declaration_block_repeat1 = 204,
  aux_sym_classic_compiler_block_repeat1 = 205,
  aux_sym_sql_injection_block_repeat1 = 206,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_QMARK] = "\?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG00_DASH00_DASH00_BANG] = "!00-00-00!",
  [sym__hex_literal] = "_hex_literal",
  [aux_sym__dec_literal_token1] = "_dec_literal_token1",
  [aux_sym__num_literal_token1] = "_num_literal_token1",
  [aux_sym__exp_literal_token1] = "_exp_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [sym_command_suffix] = "command_suffix",
  [sym__name] = "_name",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym__local] = "_local",
  [sym__exposed] = "_exposed",
  [sym__function] = "_function",
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
  [anon_sym_DASH_GT] = "->",
  [sym__declare] = "_declare",
  [sym__alias] = "_alias",
  [sym__class_extends] = "_class_extends",
  [sym__class_constructor] = "_class_constructor",
  [sym__var] = "_var",
  [sym__property] = "_property",
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
  [sym__begin_sql_e] = "_begin_sql_e",
  [sym__begin_sql_f] = "_begin_sql_f",
  [sym__end_sql_e] = "_end_sql_e",
  [sym__end_sql_f] = "_end_sql_f",
  [aux_sym_sql_injection_block_token1] = "sql_injection_block_token1",
  [anon_sym_PLUS] = "+",
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
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_block_token1] = "comment_block_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_classic_command] = "classic_command",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_expression_argument] = "expression_argument",
  [sym_classsic_command_expression] = "classsic_command_expression",
  [sym__node] = "_node",
  [sym_local_variable_name] = "local_variable_name",
  [sym_local_variable] = "local_variable",
  [sym_interprocess_variable_name] = "interprocess_variable_name",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_numeric_parameter_name] = "numeric_parameter_name",
  [sym_numeric_parameter] = "numeric_parameter",
  [sym_class_name] = "class_name",
  [sym_class_instance] = "class_instance",
  [sym_ternary_block] = "ternary_block",
  [sym__object_literal_block] = "_object_literal_block",
  [sym__collection_literal_block] = "_collection_literal_block",
  [sym_literal_block] = "literal_block",
  [sym_value] = "value",
  [sym__scope] = "_scope",
  [sym__class_store] = "_class_store",
  [sym__basic_type] = "_basic_type",
  [sym_class] = "class",
  [sym_function] = "function",
  [sym_function_name] = "function_name",
  [sym__function_argument] = "_function_argument",
  [sym_function_arguments] = "function_arguments",
  [sym_function_result] = "function_result",
  [sym_function_block] = "function_block",
  [sym_declare] = "declare",
  [sym_declare_block] = "declare_block",
  [sym_alias] = "alias",
  [sym_alias_name] = "alias_name",
  [sym_alias_block] = "alias_block",
  [sym_class_extends] = "class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_var] = "var",
  [sym_var_declaration_block] = "var_declaration_block",
  [sym_property] = "property",
  [sym_property_declaration_block] = "property_declaration_block",
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
  [sym_classic_compiler_block] = "classic_compiler_block",
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
  [sym_classic_array_block] = "classic_array_block",
  [sym_begin_sql] = "begin_sql",
  [sym_end_sql] = "end_sql",
  [sym_sql_injection_block] = "sql_injection_block",
  [sym__binary_operator] = "_binary_operator",
  [sym_comment_block] = "comment_block",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_expression_argument_repeat1] = "expression_argument_repeat1",
  [aux_sym_local_variable_repeat1] = "local_variable_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_function_name_repeat1] = "function_name_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym_var_declaration_block_repeat1] = "var_declaration_block_repeat1",
  [aux_sym_property_declaration_block_repeat1] = "property_declaration_block_repeat1",
  [aux_sym_classic_compiler_block_repeat1] = "classic_compiler_block_repeat1",
  [aux_sym_sql_injection_block_repeat1] = "sql_injection_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG00_DASH00_DASH00_BANG] = anon_sym_BANG00_DASH00_DASH00_BANG,
  [sym__hex_literal] = sym__hex_literal,
  [aux_sym__dec_literal_token1] = aux_sym__dec_literal_token1,
  [aux_sym__num_literal_token1] = aux_sym__num_literal_token1,
  [aux_sym__exp_literal_token1] = aux_sym__exp_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_command_suffix] = sym_command_suffix,
  [sym__name] = sym__name,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym__local] = sym__local,
  [sym__exposed] = sym__exposed,
  [sym__function] = sym__function,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__declare] = sym__declare,
  [sym__alias] = sym__alias,
  [sym__class_extends] = sym__class_extends,
  [sym__class_constructor] = sym__class_constructor,
  [sym__var] = sym__var,
  [sym__property] = sym__property,
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
  [sym__begin_sql_e] = sym__begin_sql_e,
  [sym__begin_sql_f] = sym__begin_sql_f,
  [sym__end_sql_e] = sym__end_sql_e,
  [sym__end_sql_f] = sym__end_sql_f,
  [aux_sym_sql_injection_block_token1] = aux_sym_sql_injection_block_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_block_token1] = aux_sym_comment_block_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_classic_command] = sym_classic_command,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__dec_literal] = sym__dec_literal,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_expression_argument] = sym_expression_argument,
  [sym_classsic_command_expression] = sym_classsic_command_expression,
  [sym__node] = sym__node,
  [sym_local_variable_name] = sym_local_variable_name,
  [sym_local_variable] = sym_local_variable,
  [sym_interprocess_variable_name] = sym_interprocess_variable_name,
  [sym_interprocess_variable] = sym_interprocess_variable,
  [sym_numeric_parameter_name] = sym_numeric_parameter_name,
  [sym_numeric_parameter] = sym_numeric_parameter,
  [sym_class_name] = sym_class_name,
  [sym_class_instance] = sym_class_instance,
  [sym_ternary_block] = sym_ternary_block,
  [sym__object_literal_block] = sym__object_literal_block,
  [sym__collection_literal_block] = sym__collection_literal_block,
  [sym_literal_block] = sym_literal_block,
  [sym_value] = sym_value,
  [sym__scope] = sym__scope,
  [sym__class_store] = sym__class_store,
  [sym__basic_type] = sym__basic_type,
  [sym_class] = sym_class,
  [sym_function] = sym_function,
  [sym_function_name] = sym_function_name,
  [sym__function_argument] = sym__function_argument,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_result] = sym_function_result,
  [sym_function_block] = sym_function_block,
  [sym_declare] = sym_declare,
  [sym_declare_block] = sym_declare_block,
  [sym_alias] = sym_alias,
  [sym_alias_name] = sym_alias_name,
  [sym_alias_block] = sym_alias_block,
  [sym_class_extends] = sym_class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_var] = sym_var,
  [sym_var_declaration_block] = sym_var_declaration_block,
  [sym_property] = sym_property,
  [sym_property_declaration_block] = sym_property_declaration_block,
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
  [sym_classic_compiler_block] = sym_classic_compiler_block,
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
  [sym_classic_array_block] = sym_classic_array_block,
  [sym_begin_sql] = sym_begin_sql,
  [sym_end_sql] = sym_end_sql,
  [sym_sql_injection_block] = sym_sql_injection_block,
  [sym__binary_operator] = sym__binary_operator,
  [sym_comment_block] = sym_comment_block,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_expression_argument_repeat1] = aux_sym_expression_argument_repeat1,
  [aux_sym_local_variable_repeat1] = aux_sym_local_variable_repeat1,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_function_name_repeat1] = aux_sym_function_name_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym_var_declaration_block_repeat1] = aux_sym_var_declaration_block_repeat1,
  [aux_sym_property_declaration_block_repeat1] = aux_sym_property_declaration_block_repeat1,
  [aux_sym_classic_compiler_block_repeat1] = aux_sym_classic_compiler_block_repeat1,
  [aux_sym_sql_injection_block_repeat1] = aux_sym_sql_injection_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [anon_sym_BANG00_DASH00_DASH00_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__dec_literal_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_command_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
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
  [sym__function] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__declare] = {
    .visible = false,
    .named = true,
  },
  [sym__alias] = {
    .visible = false,
    .named = true,
  },
  [sym__class_extends] = {
    .visible = false,
    .named = true,
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
  [aux_sym_sql_injection_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_classic_command] = {
    .visible = true,
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
  [sym_expression_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_classsic_command_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_local_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interprocess_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_block] = {
    .visible = true,
    .named = true,
  },
  [sym__object_literal_block] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_literal_block] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_block] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [sym__class_store] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_type] = {
    .visible = false,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
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
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_block] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
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
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_declaration_block] = {
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
  [sym_classic_compiler_block] = {
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
  [sym_classic_array_block] = {
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
  [sym_sql_injection_block] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_name_repeat1] = {
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
  [aux_sym_var_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classic_compiler_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_injection_block_repeat1] = {
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

static inline bool sym__name_character_set_1(int32_t c) {
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

static inline bool sym__name_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(291);
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(432);
      if (lookahead == '$') ADVANCE(344);
      if (lookahead == '&') ADVANCE(423);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(419);
      if (lookahead == '0') ADVANCE(310);
      if (lookahead == '4') ADVANCE(314);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead == '^') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(424);
      if (lookahead == '}') ADVANCE(343);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '$') ADVANCE(344);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == ':') ADVANCE(296);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '?') ADVANCE(292);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (sym__name_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(308);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '#') ADVANCE(431);
      if (lookahead == '&') ADVANCE(423);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead == '4') ADVANCE(78);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(56);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead == '^') ADVANCE(425);
      if (lookahead == '{') ADVANCE(341);
      if (lookahead == '|') ADVANCE(424);
      if (lookahead == '}') ADVANCE(343);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(431);
      if (lookahead == '&') ADVANCE(423);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(332);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(420);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == ';') ADVANCE(331);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead == '^') ADVANCE(425);
      if (lookahead == '{') ADVANCE(341);
      if (lookahead == '|') ADVANCE(424);
      if (lookahead == '}') ADVANCE(343);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (sym__name_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(445);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(444);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(442);
      if (lookahead == 'C') ADVANCE(284);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(345);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(284);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(373);
      END_STATE();
    case 62:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 144:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(117);
      END_STATE();
    case 145:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 211:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(149);
      END_STATE();
    case 212:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(150);
      END_STATE();
    case 213:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(151);
      END_STATE();
    case 214:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(382);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(7);
      END_STATE();
    case 270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 272:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 275:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 276:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 277:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 278:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 279:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 280:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 281:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 282:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 289:
      if (eof) ADVANCE(291);
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(432);
      if (lookahead == '$') ADVANCE(344);
      if (lookahead == '&') ADVANCE(423);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(419);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(428);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == '?') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '^') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(424);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 290:
      if (eof) ADVANCE(291);
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(344);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '?') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '?') ADVANCE(435);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(442);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(442);
      if (lookahead == 'C') ADVANCE(284);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '0') ADVANCE(20);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(439);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BANG00_DASH00_DASH00_BANG);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(328);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_suffix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (sym__name_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (sym__name_character_set_1(lookahead)) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__class_extends);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__class_constructor);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__var);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__classic_compiler_blob_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__classic_compiler_boolean_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__classic_compiler_collection_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__classic_compiler_date_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__classic_compiler_longint_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__classic_compiler_object_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__classic_compiler_picture_token1);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__classic_compiler_pointer_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__classic_compiler_real_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__classic_compiler_text_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__classic_compiler_time_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__classic_compiler_variant_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__classic_array_blob_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__classic_array_boolean_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__classic_array_date_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__classic_array_integer_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__classic_array_longint_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__classic_array_object_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__classic_array_picture_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__classic_array_pointer_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__classic_array_real_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__classic_array_text_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__classic_array_time_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__begin_sql_e);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__begin_sql_f);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__end_sql_e);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__end_sql_e);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__end_sql_f);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__end_sql_f);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sql_injection_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(438);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(440);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(445);
      if (lookahead == '=') ADVANCE(441);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(441);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(421);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(422);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TILDE_PIPE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(433);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '>') ADVANCE(345);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_QMARK_PLUS);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_comment_block_token1);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(16);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 290, .external_lex_state = 1},
  [2] = {.lex_state = 290, .external_lex_state = 1},
  [3] = {.lex_state = 290, .external_lex_state = 1},
  [4] = {.lex_state = 289, .external_lex_state = 1},
  [5] = {.lex_state = 289, .external_lex_state = 1},
  [6] = {.lex_state = 289, .external_lex_state = 1},
  [7] = {.lex_state = 289, .external_lex_state = 1},
  [8] = {.lex_state = 289, .external_lex_state = 1},
  [9] = {.lex_state = 289, .external_lex_state = 1},
  [10] = {.lex_state = 289, .external_lex_state = 1},
  [11] = {.lex_state = 289, .external_lex_state = 1},
  [12] = {.lex_state = 289, .external_lex_state = 1},
  [13] = {.lex_state = 289, .external_lex_state = 1},
  [14] = {.lex_state = 289, .external_lex_state = 1},
  [15] = {.lex_state = 289, .external_lex_state = 1},
  [16] = {.lex_state = 289, .external_lex_state = 1},
  [17] = {.lex_state = 289, .external_lex_state = 1},
  [18] = {.lex_state = 289, .external_lex_state = 1},
  [19] = {.lex_state = 289, .external_lex_state = 1},
  [20] = {.lex_state = 289, .external_lex_state = 1},
  [21] = {.lex_state = 289, .external_lex_state = 1},
  [22] = {.lex_state = 289, .external_lex_state = 1},
  [23] = {.lex_state = 289, .external_lex_state = 1},
  [24] = {.lex_state = 289, .external_lex_state = 1},
  [25] = {.lex_state = 289, .external_lex_state = 1},
  [26] = {.lex_state = 289, .external_lex_state = 1},
  [27] = {.lex_state = 289, .external_lex_state = 1},
  [28] = {.lex_state = 289, .external_lex_state = 1},
  [29] = {.lex_state = 289, .external_lex_state = 1},
  [30] = {.lex_state = 289, .external_lex_state = 1},
  [31] = {.lex_state = 289, .external_lex_state = 1},
  [32] = {.lex_state = 289, .external_lex_state = 1},
  [33] = {.lex_state = 289, .external_lex_state = 1},
  [34] = {.lex_state = 289, .external_lex_state = 1},
  [35] = {.lex_state = 289, .external_lex_state = 1},
  [36] = {.lex_state = 289, .external_lex_state = 1},
  [37] = {.lex_state = 289, .external_lex_state = 1},
  [38] = {.lex_state = 289, .external_lex_state = 1},
  [39] = {.lex_state = 289, .external_lex_state = 1},
  [40] = {.lex_state = 289, .external_lex_state = 1},
  [41] = {.lex_state = 289, .external_lex_state = 1},
  [42] = {.lex_state = 289, .external_lex_state = 1},
  [43] = {.lex_state = 290, .external_lex_state = 1},
  [44] = {.lex_state = 290, .external_lex_state = 1},
  [45] = {.lex_state = 290, .external_lex_state = 1},
  [46] = {.lex_state = 290, .external_lex_state = 1},
  [47] = {.lex_state = 290, .external_lex_state = 1},
  [48] = {.lex_state = 290, .external_lex_state = 1},
  [49] = {.lex_state = 290, .external_lex_state = 1},
  [50] = {.lex_state = 290, .external_lex_state = 1},
  [51] = {.lex_state = 290, .external_lex_state = 1},
  [52] = {.lex_state = 290, .external_lex_state = 1},
  [53] = {.lex_state = 290, .external_lex_state = 1},
  [54] = {.lex_state = 290, .external_lex_state = 1},
  [55] = {.lex_state = 290, .external_lex_state = 1},
  [56] = {.lex_state = 290, .external_lex_state = 1},
  [57] = {.lex_state = 290, .external_lex_state = 1},
  [58] = {.lex_state = 290, .external_lex_state = 1},
  [59] = {.lex_state = 290, .external_lex_state = 1},
  [60] = {.lex_state = 290, .external_lex_state = 1},
  [61] = {.lex_state = 290, .external_lex_state = 1},
  [62] = {.lex_state = 290, .external_lex_state = 1},
  [63] = {.lex_state = 290, .external_lex_state = 1},
  [64] = {.lex_state = 290, .external_lex_state = 1},
  [65] = {.lex_state = 290, .external_lex_state = 1},
  [66] = {.lex_state = 290, .external_lex_state = 1},
  [67] = {.lex_state = 290, .external_lex_state = 1},
  [68] = {.lex_state = 290, .external_lex_state = 1},
  [69] = {.lex_state = 290, .external_lex_state = 1},
  [70] = {.lex_state = 290, .external_lex_state = 1},
  [71] = {.lex_state = 290, .external_lex_state = 1},
  [72] = {.lex_state = 290, .external_lex_state = 1},
  [73] = {.lex_state = 290, .external_lex_state = 1},
  [74] = {.lex_state = 290, .external_lex_state = 1},
  [75] = {.lex_state = 290, .external_lex_state = 1},
  [76] = {.lex_state = 290, .external_lex_state = 1},
  [77] = {.lex_state = 290, .external_lex_state = 1},
  [78] = {.lex_state = 8, .external_lex_state = 1},
  [79] = {.lex_state = 8, .external_lex_state = 1},
  [80] = {.lex_state = 290, .external_lex_state = 1},
  [81] = {.lex_state = 290, .external_lex_state = 1},
  [82] = {.lex_state = 290, .external_lex_state = 1},
  [83] = {.lex_state = 290, .external_lex_state = 1},
  [84] = {.lex_state = 290, .external_lex_state = 1},
  [85] = {.lex_state = 290, .external_lex_state = 1},
  [86] = {.lex_state = 290, .external_lex_state = 1},
  [87] = {.lex_state = 290, .external_lex_state = 1},
  [88] = {.lex_state = 290, .external_lex_state = 1},
  [89] = {.lex_state = 290, .external_lex_state = 1},
  [90] = {.lex_state = 290, .external_lex_state = 1},
  [91] = {.lex_state = 290, .external_lex_state = 1},
  [92] = {.lex_state = 290, .external_lex_state = 1},
  [93] = {.lex_state = 290, .external_lex_state = 1},
  [94] = {.lex_state = 290, .external_lex_state = 1},
  [95] = {.lex_state = 290, .external_lex_state = 1},
  [96] = {.lex_state = 290, .external_lex_state = 1},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 290},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 290},
  [212] = {.lex_state = 290},
  [213] = {.lex_state = 290},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 290},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 290},
  [224] = {.lex_state = 290},
  [225] = {.lex_state = 290},
  [226] = {.lex_state = 290},
  [227] = {.lex_state = 290},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 290},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 290},
  [233] = {.lex_state = 290},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 290},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 290},
  [238] = {.lex_state = 290},
  [239] = {.lex_state = 290},
  [240] = {.lex_state = 290},
  [241] = {.lex_state = 290},
  [242] = {.lex_state = 290},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 290},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 290},
  [247] = {.lex_state = 290},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 290},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 290},
  [253] = {.lex_state = 290},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 289},
  [258] = {.lex_state = 289},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 290},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 290},
  [267] = {.lex_state = 290},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 290},
  [272] = {.lex_state = 290},
  [273] = {.lex_state = 290},
  [274] = {.lex_state = 290},
  [275] = {.lex_state = 290},
  [276] = {.lex_state = 290},
  [277] = {.lex_state = 290},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 290},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 290},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 290},
  [285] = {.lex_state = 290},
  [286] = {.lex_state = 290},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 290},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 290},
  [291] = {.lex_state = 290},
  [292] = {.lex_state = 290},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 282},
  [295] = {.lex_state = 290},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 290},
  [299] = {.lex_state = 290},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 290},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 290},
  [305] = {.lex_state = 290},
  [306] = {.lex_state = 290},
  [307] = {.lex_state = 15},
  [308] = {.lex_state = 290},
  [309] = {.lex_state = 290},
  [310] = {.lex_state = 446},
  [311] = {.lex_state = 290},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 289},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 289},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 282},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 8},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 289},
  [326] = {.lex_state = 289},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 10},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 8},
  [332] = {.lex_state = 289},
  [333] = {.lex_state = 289},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 0},
};

enum {
  ts_external_token_classic_command = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_classic_command] = sym_classic_command,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_classic_command] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [aux_sym__dec_literal_token1] = ACTIONS(1),
    [aux_sym__num_literal_token1] = ACTIONS(1),
    [aux_sym__exp_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_command_suffix] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [sym__local] = ACTIONS(1),
    [sym__exposed] = ACTIONS(1),
    [sym__function] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__declare] = ACTIONS(1),
    [sym__alias] = ACTIONS(1),
    [sym__class_extends] = ACTIONS(1),
    [sym__class_constructor] = ACTIONS(1),
    [sym__var] = ACTIONS(1),
    [sym__property] = ACTIONS(1),
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
    [sym__begin_sql_e] = ACTIONS(1),
    [sym__begin_sql_f] = ACTIONS(1),
    [sym__end_sql_e] = ACTIONS(1),
    [sym__end_sql_f] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_classic_command] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(319),
    [sym__statement] = STATE(3),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym_constant] = STATE(36),
    [sym_classsic_command_expression] = STATE(36),
    [sym_local_variable_name] = STATE(8),
    [sym_local_variable] = STATE(36),
    [sym_interprocess_variable_name] = STATE(9),
    [sym_interprocess_variable] = STATE(36),
    [sym_numeric_parameter_name] = STATE(10),
    [sym_numeric_parameter] = STATE(36),
    [sym_class_name] = STATE(11),
    [sym_class_instance] = STATE(36),
    [sym_ternary_block] = STATE(36),
    [sym__object_literal_block] = STATE(34),
    [sym__collection_literal_block] = STATE(34),
    [sym_literal_block] = STATE(36),
    [sym_value] = STATE(27),
    [sym__scope] = STATE(221),
    [sym__class_store] = STATE(18),
    [sym_function] = STATE(201),
    [sym_function_name] = STATE(249),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(252),
    [sym_declare_block] = STATE(3),
    [sym_alias] = STATE(283),
    [sym_alias_name] = STATE(278),
    [sym_alias_block] = STATE(3),
    [sym_class_extends] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym_var] = STATE(168),
    [sym_var_declaration_block] = STATE(3),
    [sym_property] = STATE(269),
    [sym_property_declaration_block] = STATE(3),
    [sym__classic_compiler_blob] = STATE(267),
    [sym__classic_compiler_boolean] = STATE(267),
    [sym__classic_compiler_collection] = STATE(267),
    [sym__classic_compiler_date] = STATE(267),
    [sym__classic_compiler_longint] = STATE(267),
    [sym__classic_compiler_object] = STATE(267),
    [sym__classic_compiler_picture] = STATE(267),
    [sym__classic_compiler_pointer] = STATE(267),
    [sym__classic_compiler_real] = STATE(267),
    [sym__classic_compiler_text] = STATE(267),
    [sym__classic_compiler_time] = STATE(267),
    [sym__classic_compiler_variant] = STATE(267),
    [sym_classic_compiler] = STATE(266),
    [sym_classic_compiler_block] = STATE(3),
    [sym__classic_array_blob] = STATE(262),
    [sym__classic_array_boolean] = STATE(262),
    [sym__classic_array_date] = STATE(262),
    [sym__classic_array_integer] = STATE(262),
    [sym__classic_array_longint] = STATE(262),
    [sym__classic_array_object] = STATE(262),
    [sym__classic_array_picture] = STATE(262),
    [sym__classic_array_pointer] = STATE(262),
    [sym__classic_array_real] = STATE(262),
    [sym__classic_array_text] = STATE(262),
    [sym__classic_array_time] = STATE(262),
    [sym_classic_array] = STATE(253),
    [sym_classic_array_block] = STATE(3),
    [sym_begin_sql] = STATE(167),
    [sym_sql_injection_block] = STATE(3),
    [sym_comment_block] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(9),
    [sym__hex_literal] = ACTIONS(11),
    [aux_sym__dec_literal_token1] = ACTIONS(13),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(25),
    [sym__local] = ACTIONS(27),
    [sym__exposed] = ACTIONS(29),
    [sym__function] = ACTIONS(31),
    [sym__class_store_4d] = ACTIONS(33),
    [sym__class_store_ds] = ACTIONS(33),
    [sym__class_store_cs] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__alias] = ACTIONS(37),
    [sym__class_extends] = ACTIONS(39),
    [sym__class_constructor] = ACTIONS(41),
    [sym__var] = ACTIONS(43),
    [sym__property] = ACTIONS(45),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(63),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(65),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(67),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(69),
    [aux_sym__classic_array_blob_token1] = ACTIONS(71),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(73),
    [aux_sym__classic_array_date_token1] = ACTIONS(75),
    [aux_sym__classic_array_integer_token1] = ACTIONS(77),
    [aux_sym__classic_array_longint_token1] = ACTIONS(79),
    [aux_sym__classic_array_object_token1] = ACTIONS(81),
    [aux_sym__classic_array_picture_token1] = ACTIONS(83),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(85),
    [aux_sym__classic_array_real_token1] = ACTIONS(87),
    [aux_sym__classic_array_text_token1] = ACTIONS(89),
    [aux_sym__classic_array_time_token1] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_SLASH_SLASH] = ACTIONS(97),
    [sym_classic_command] = ACTIONS(99),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym_constant] = STATE(36),
    [sym_classsic_command_expression] = STATE(36),
    [sym_local_variable_name] = STATE(8),
    [sym_local_variable] = STATE(36),
    [sym_interprocess_variable_name] = STATE(9),
    [sym_interprocess_variable] = STATE(36),
    [sym_numeric_parameter_name] = STATE(10),
    [sym_numeric_parameter] = STATE(36),
    [sym_class_name] = STATE(11),
    [sym_class_instance] = STATE(36),
    [sym_ternary_block] = STATE(36),
    [sym__object_literal_block] = STATE(34),
    [sym__collection_literal_block] = STATE(34),
    [sym_literal_block] = STATE(36),
    [sym_value] = STATE(27),
    [sym__scope] = STATE(221),
    [sym__class_store] = STATE(18),
    [sym_function] = STATE(201),
    [sym_function_name] = STATE(249),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(252),
    [sym_declare_block] = STATE(2),
    [sym_alias] = STATE(283),
    [sym_alias_name] = STATE(278),
    [sym_alias_block] = STATE(2),
    [sym_class_extends] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym_var] = STATE(168),
    [sym_var_declaration_block] = STATE(2),
    [sym_property] = STATE(269),
    [sym_property_declaration_block] = STATE(2),
    [sym__classic_compiler_blob] = STATE(267),
    [sym__classic_compiler_boolean] = STATE(267),
    [sym__classic_compiler_collection] = STATE(267),
    [sym__classic_compiler_date] = STATE(267),
    [sym__classic_compiler_longint] = STATE(267),
    [sym__classic_compiler_object] = STATE(267),
    [sym__classic_compiler_picture] = STATE(267),
    [sym__classic_compiler_pointer] = STATE(267),
    [sym__classic_compiler_real] = STATE(267),
    [sym__classic_compiler_text] = STATE(267),
    [sym__classic_compiler_time] = STATE(267),
    [sym__classic_compiler_variant] = STATE(267),
    [sym_classic_compiler] = STATE(266),
    [sym_classic_compiler_block] = STATE(2),
    [sym__classic_array_blob] = STATE(262),
    [sym__classic_array_boolean] = STATE(262),
    [sym__classic_array_date] = STATE(262),
    [sym__classic_array_integer] = STATE(262),
    [sym__classic_array_longint] = STATE(262),
    [sym__classic_array_object] = STATE(262),
    [sym__classic_array_picture] = STATE(262),
    [sym__classic_array_pointer] = STATE(262),
    [sym__classic_array_real] = STATE(262),
    [sym__classic_array_text] = STATE(262),
    [sym__classic_array_time] = STATE(262),
    [sym_classic_array] = STATE(253),
    [sym_classic_array_block] = STATE(2),
    [sym_begin_sql] = STATE(167),
    [sym_sql_injection_block] = STATE(2),
    [sym_comment_block] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(109),
    [sym__hex_literal] = ACTIONS(112),
    [aux_sym__dec_literal_token1] = ACTIONS(115),
    [aux_sym__num_literal_token1] = ACTIONS(115),
    [aux_sym__exp_literal_token1] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(130),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(133),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(133),
    [sym__local] = ACTIONS(136),
    [sym__exposed] = ACTIONS(139),
    [sym__function] = ACTIONS(142),
    [sym__class_store_4d] = ACTIONS(145),
    [sym__class_store_ds] = ACTIONS(145),
    [sym__class_store_cs] = ACTIONS(145),
    [sym__declare] = ACTIONS(148),
    [sym__alias] = ACTIONS(151),
    [sym__class_extends] = ACTIONS(154),
    [sym__class_constructor] = ACTIONS(157),
    [sym__var] = ACTIONS(160),
    [sym__property] = ACTIONS(163),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(166),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(169),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(172),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(175),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(178),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(181),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(184),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(187),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(190),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(193),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(196),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(199),
    [aux_sym__classic_array_blob_token1] = ACTIONS(202),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(205),
    [aux_sym__classic_array_date_token1] = ACTIONS(208),
    [aux_sym__classic_array_integer_token1] = ACTIONS(211),
    [aux_sym__classic_array_longint_token1] = ACTIONS(214),
    [aux_sym__classic_array_object_token1] = ACTIONS(217),
    [aux_sym__classic_array_picture_token1] = ACTIONS(220),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(223),
    [aux_sym__classic_array_real_token1] = ACTIONS(226),
    [aux_sym__classic_array_text_token1] = ACTIONS(229),
    [aux_sym__classic_array_time_token1] = ACTIONS(232),
    [sym__begin_sql_e] = ACTIONS(235),
    [sym__begin_sql_f] = ACTIONS(235),
    [anon_sym_SLASH_STAR] = ACTIONS(238),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [sym_classic_command] = ACTIONS(244),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym_constant] = STATE(36),
    [sym_classsic_command_expression] = STATE(36),
    [sym_local_variable_name] = STATE(8),
    [sym_local_variable] = STATE(36),
    [sym_interprocess_variable_name] = STATE(9),
    [sym_interprocess_variable] = STATE(36),
    [sym_numeric_parameter_name] = STATE(10),
    [sym_numeric_parameter] = STATE(36),
    [sym_class_name] = STATE(11),
    [sym_class_instance] = STATE(36),
    [sym_ternary_block] = STATE(36),
    [sym__object_literal_block] = STATE(34),
    [sym__collection_literal_block] = STATE(34),
    [sym_literal_block] = STATE(36),
    [sym_value] = STATE(27),
    [sym__scope] = STATE(221),
    [sym__class_store] = STATE(18),
    [sym_function] = STATE(201),
    [sym_function_name] = STATE(249),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(252),
    [sym_declare_block] = STATE(2),
    [sym_alias] = STATE(283),
    [sym_alias_name] = STATE(278),
    [sym_alias_block] = STATE(2),
    [sym_class_extends] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym_var] = STATE(168),
    [sym_var_declaration_block] = STATE(2),
    [sym_property] = STATE(269),
    [sym_property_declaration_block] = STATE(2),
    [sym__classic_compiler_blob] = STATE(267),
    [sym__classic_compiler_boolean] = STATE(267),
    [sym__classic_compiler_collection] = STATE(267),
    [sym__classic_compiler_date] = STATE(267),
    [sym__classic_compiler_longint] = STATE(267),
    [sym__classic_compiler_object] = STATE(267),
    [sym__classic_compiler_picture] = STATE(267),
    [sym__classic_compiler_pointer] = STATE(267),
    [sym__classic_compiler_real] = STATE(267),
    [sym__classic_compiler_text] = STATE(267),
    [sym__classic_compiler_time] = STATE(267),
    [sym__classic_compiler_variant] = STATE(267),
    [sym_classic_compiler] = STATE(266),
    [sym_classic_compiler_block] = STATE(2),
    [sym__classic_array_blob] = STATE(262),
    [sym__classic_array_boolean] = STATE(262),
    [sym__classic_array_date] = STATE(262),
    [sym__classic_array_integer] = STATE(262),
    [sym__classic_array_longint] = STATE(262),
    [sym__classic_array_object] = STATE(262),
    [sym__classic_array_picture] = STATE(262),
    [sym__classic_array_pointer] = STATE(262),
    [sym__classic_array_real] = STATE(262),
    [sym__classic_array_text] = STATE(262),
    [sym__classic_array_time] = STATE(262),
    [sym_classic_array] = STATE(253),
    [sym_classic_array_block] = STATE(2),
    [sym_begin_sql] = STATE(167),
    [sym_sql_injection_block] = STATE(2),
    [sym_comment_block] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(9),
    [sym__hex_literal] = ACTIONS(11),
    [aux_sym__dec_literal_token1] = ACTIONS(13),
    [aux_sym__num_literal_token1] = ACTIONS(13),
    [aux_sym__exp_literal_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(25),
    [sym__local] = ACTIONS(27),
    [sym__exposed] = ACTIONS(29),
    [sym__function] = ACTIONS(31),
    [sym__class_store_4d] = ACTIONS(33),
    [sym__class_store_ds] = ACTIONS(33),
    [sym__class_store_cs] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__alias] = ACTIONS(37),
    [sym__class_extends] = ACTIONS(39),
    [sym__class_constructor] = ACTIONS(41),
    [sym__var] = ACTIONS(43),
    [sym__property] = ACTIONS(45),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(47),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(49),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(51),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(53),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(55),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(57),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(59),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(61),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(63),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(65),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(67),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(69),
    [aux_sym__classic_array_blob_token1] = ACTIONS(71),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(73),
    [aux_sym__classic_array_date_token1] = ACTIONS(75),
    [aux_sym__classic_array_integer_token1] = ACTIONS(77),
    [aux_sym__classic_array_longint_token1] = ACTIONS(79),
    [aux_sym__classic_array_object_token1] = ACTIONS(81),
    [aux_sym__classic_array_picture_token1] = ACTIONS(83),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(85),
    [aux_sym__classic_array_real_token1] = ACTIONS(87),
    [aux_sym__classic_array_text_token1] = ACTIONS(89),
    [aux_sym__classic_array_time_token1] = ACTIONS(91),
    [sym__begin_sql_e] = ACTIONS(93),
    [sym__begin_sql_f] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_SLASH_SLASH] = ACTIONS(97),
    [sym_classic_command] = ACTIONS(99),
  },
  [4] = {
    [sym_expression_argument] = STATE(12),
    [sym__node] = STATE(12),
    [aux_sym_local_variable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_QMARK] = ACTIONS(251),
    [anon_sym_BANG] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(249),
    [sym__hex_literal] = ACTIONS(249),
    [aux_sym__dec_literal_token1] = ACTIONS(251),
    [aux_sym__num_literal_token1] = ACTIONS(251),
    [aux_sym__exp_literal_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_LT_GT] = ACTIONS(249),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(249),
    [sym__local] = ACTIONS(249),
    [sym__exposed] = ACTIONS(249),
    [sym__function] = ACTIONS(249),
    [sym__class_store_4d] = ACTIONS(249),
    [sym__class_store_ds] = ACTIONS(249),
    [sym__class_store_cs] = ACTIONS(249),
    [sym__declare] = ACTIONS(249),
    [sym__alias] = ACTIONS(249),
    [sym__class_extends] = ACTIONS(249),
    [sym__class_constructor] = ACTIONS(249),
    [sym__var] = ACTIONS(249),
    [sym__property] = ACTIONS(249),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(249),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(249),
    [aux_sym__classic_array_blob_token1] = ACTIONS(249),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(249),
    [aux_sym__classic_array_date_token1] = ACTIONS(249),
    [aux_sym__classic_array_integer_token1] = ACTIONS(249),
    [aux_sym__classic_array_longint_token1] = ACTIONS(249),
    [aux_sym__classic_array_object_token1] = ACTIONS(249),
    [aux_sym__classic_array_picture_token1] = ACTIONS(249),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(249),
    [aux_sym__classic_array_real_token1] = ACTIONS(249),
    [aux_sym__classic_array_text_token1] = ACTIONS(249),
    [aux_sym__classic_array_time_token1] = ACTIONS(249),
    [sym__begin_sql_e] = ACTIONS(249),
    [sym__begin_sql_f] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_TILDE_PIPE] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_QMARK_QMARK] = ACTIONS(249),
    [anon_sym_QMARK_PLUS] = ACTIONS(249),
    [anon_sym_QMARK_DASH] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_COLON_EQ] = ACTIONS(249),
    [anon_sym_SLASH_STAR] = ACTIONS(249),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [sym_classic_command] = ACTIONS(249),
  },
  [5] = {
    [sym_expression_argument] = STATE(12),
    [sym__node] = STATE(12),
    [aux_sym_local_variable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(265),
    [sym__hex_literal] = ACTIONS(265),
    [aux_sym__dec_literal_token1] = ACTIONS(267),
    [aux_sym__num_literal_token1] = ACTIONS(267),
    [aux_sym__exp_literal_token1] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_LT_GT] = ACTIONS(265),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(265),
    [sym__local] = ACTIONS(265),
    [sym__exposed] = ACTIONS(265),
    [sym__function] = ACTIONS(265),
    [sym__class_store_4d] = ACTIONS(265),
    [sym__class_store_ds] = ACTIONS(265),
    [sym__class_store_cs] = ACTIONS(265),
    [sym__declare] = ACTIONS(265),
    [sym__alias] = ACTIONS(265),
    [sym__class_extends] = ACTIONS(265),
    [sym__class_constructor] = ACTIONS(265),
    [sym__var] = ACTIONS(265),
    [sym__property] = ACTIONS(265),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(265),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(265),
    [aux_sym__classic_array_blob_token1] = ACTIONS(265),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(265),
    [aux_sym__classic_array_date_token1] = ACTIONS(265),
    [aux_sym__classic_array_integer_token1] = ACTIONS(265),
    [aux_sym__classic_array_longint_token1] = ACTIONS(265),
    [aux_sym__classic_array_object_token1] = ACTIONS(265),
    [aux_sym__classic_array_picture_token1] = ACTIONS(265),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(265),
    [aux_sym__classic_array_real_token1] = ACTIONS(265),
    [aux_sym__classic_array_text_token1] = ACTIONS(265),
    [aux_sym__classic_array_time_token1] = ACTIONS(265),
    [sym__begin_sql_e] = ACTIONS(265),
    [sym__begin_sql_f] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(267),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_TILDE_PIPE] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_QMARK_QMARK] = ACTIONS(265),
    [anon_sym_QMARK_PLUS] = ACTIONS(265),
    [anon_sym_QMARK_DASH] = ACTIONS(265),
    [anon_sym_PLUS_EQ] = ACTIONS(265),
    [anon_sym_DASH_EQ] = ACTIONS(265),
    [anon_sym_STAR_EQ] = ACTIONS(265),
    [anon_sym_SLASH_EQ] = ACTIONS(265),
    [anon_sym_COLON_EQ] = ACTIONS(265),
    [anon_sym_SLASH_STAR] = ACTIONS(265),
    [anon_sym_SLASH_SLASH] = ACTIONS(265),
    [sym_classic_command] = ACTIONS(265),
  },
  [6] = {
    [sym_expression_argument] = STATE(12),
    [sym__node] = STATE(12),
    [aux_sym_local_variable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(273),
    [sym__hex_literal] = ACTIONS(273),
    [aux_sym__dec_literal_token1] = ACTIONS(275),
    [aux_sym__num_literal_token1] = ACTIONS(275),
    [aux_sym__exp_literal_token1] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_LT_GT] = ACTIONS(273),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(273),
    [sym__local] = ACTIONS(273),
    [sym__exposed] = ACTIONS(273),
    [sym__function] = ACTIONS(273),
    [sym__class_store_4d] = ACTIONS(273),
    [sym__class_store_ds] = ACTIONS(273),
    [sym__class_store_cs] = ACTIONS(273),
    [sym__declare] = ACTIONS(273),
    [sym__alias] = ACTIONS(273),
    [sym__class_extends] = ACTIONS(273),
    [sym__class_constructor] = ACTIONS(273),
    [sym__var] = ACTIONS(273),
    [sym__property] = ACTIONS(273),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(273),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(273),
    [aux_sym__classic_array_blob_token1] = ACTIONS(273),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(273),
    [aux_sym__classic_array_date_token1] = ACTIONS(273),
    [aux_sym__classic_array_integer_token1] = ACTIONS(273),
    [aux_sym__classic_array_longint_token1] = ACTIONS(273),
    [aux_sym__classic_array_object_token1] = ACTIONS(273),
    [aux_sym__classic_array_picture_token1] = ACTIONS(273),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(273),
    [aux_sym__classic_array_real_token1] = ACTIONS(273),
    [aux_sym__classic_array_text_token1] = ACTIONS(273),
    [aux_sym__classic_array_time_token1] = ACTIONS(273),
    [sym__begin_sql_e] = ACTIONS(273),
    [sym__begin_sql_f] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_TILDE_PIPE] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_QMARK_QMARK] = ACTIONS(273),
    [anon_sym_QMARK_PLUS] = ACTIONS(273),
    [anon_sym_QMARK_DASH] = ACTIONS(273),
    [anon_sym_PLUS_EQ] = ACTIONS(273),
    [anon_sym_DASH_EQ] = ACTIONS(273),
    [anon_sym_STAR_EQ] = ACTIONS(273),
    [anon_sym_SLASH_EQ] = ACTIONS(273),
    [anon_sym_COLON_EQ] = ACTIONS(273),
    [anon_sym_SLASH_STAR] = ACTIONS(273),
    [anon_sym_SLASH_SLASH] = ACTIONS(273),
    [sym_classic_command] = ACTIONS(273),
  },
  [7] = {
    [sym_expression_argument] = STATE(12),
    [sym__node] = STATE(12),
    [aux_sym_local_variable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(283),
    [sym__hex_literal] = ACTIONS(283),
    [aux_sym__dec_literal_token1] = ACTIONS(285),
    [aux_sym__num_literal_token1] = ACTIONS(285),
    [aux_sym__exp_literal_token1] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_LT_GT] = ACTIONS(283),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(283),
    [sym__local] = ACTIONS(283),
    [sym__exposed] = ACTIONS(283),
    [sym__function] = ACTIONS(283),
    [sym__class_store_4d] = ACTIONS(283),
    [sym__class_store_ds] = ACTIONS(283),
    [sym__class_store_cs] = ACTIONS(283),
    [sym__declare] = ACTIONS(283),
    [sym__alias] = ACTIONS(283),
    [sym__class_extends] = ACTIONS(283),
    [sym__class_constructor] = ACTIONS(283),
    [sym__var] = ACTIONS(283),
    [sym__property] = ACTIONS(283),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(283),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(283),
    [aux_sym__classic_array_blob_token1] = ACTIONS(283),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(283),
    [aux_sym__classic_array_date_token1] = ACTIONS(283),
    [aux_sym__classic_array_integer_token1] = ACTIONS(283),
    [aux_sym__classic_array_longint_token1] = ACTIONS(283),
    [aux_sym__classic_array_object_token1] = ACTIONS(283),
    [aux_sym__classic_array_picture_token1] = ACTIONS(283),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(283),
    [aux_sym__classic_array_real_token1] = ACTIONS(283),
    [aux_sym__classic_array_text_token1] = ACTIONS(283),
    [aux_sym__classic_array_time_token1] = ACTIONS(283),
    [sym__begin_sql_e] = ACTIONS(283),
    [sym__begin_sql_f] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(283),
    [anon_sym_PIPE_PIPE] = ACTIONS(283),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(283),
    [anon_sym_TILDE_PIPE] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_GT_GT] = ACTIONS(283),
    [anon_sym_QMARK_QMARK] = ACTIONS(283),
    [anon_sym_QMARK_PLUS] = ACTIONS(283),
    [anon_sym_QMARK_DASH] = ACTIONS(283),
    [anon_sym_PLUS_EQ] = ACTIONS(283),
    [anon_sym_DASH_EQ] = ACTIONS(283),
    [anon_sym_STAR_EQ] = ACTIONS(283),
    [anon_sym_SLASH_EQ] = ACTIONS(283),
    [anon_sym_COLON_EQ] = ACTIONS(283),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [anon_sym_SLASH_SLASH] = ACTIONS(283),
    [sym_classic_command] = ACTIONS(283),
  },
  [8] = {
    [sym_expression_argument] = STATE(7),
    [sym__node] = STATE(7),
    [aux_sym_local_variable_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(293),
    [sym__hex_literal] = ACTIONS(293),
    [aux_sym__dec_literal_token1] = ACTIONS(295),
    [aux_sym__num_literal_token1] = ACTIONS(295),
    [aux_sym__exp_literal_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_LT_GT] = ACTIONS(293),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(293),
    [sym__local] = ACTIONS(293),
    [sym__exposed] = ACTIONS(293),
    [sym__function] = ACTIONS(293),
    [sym__class_store_4d] = ACTIONS(293),
    [sym__class_store_ds] = ACTIONS(293),
    [sym__class_store_cs] = ACTIONS(293),
    [sym__declare] = ACTIONS(293),
    [sym__alias] = ACTIONS(293),
    [sym__class_extends] = ACTIONS(293),
    [sym__class_constructor] = ACTIONS(293),
    [sym__var] = ACTIONS(293),
    [sym__property] = ACTIONS(293),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(293),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(293),
    [aux_sym__classic_array_blob_token1] = ACTIONS(293),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(293),
    [aux_sym__classic_array_date_token1] = ACTIONS(293),
    [aux_sym__classic_array_integer_token1] = ACTIONS(293),
    [aux_sym__classic_array_longint_token1] = ACTIONS(293),
    [aux_sym__classic_array_object_token1] = ACTIONS(293),
    [aux_sym__classic_array_picture_token1] = ACTIONS(293),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(293),
    [aux_sym__classic_array_real_token1] = ACTIONS(293),
    [aux_sym__classic_array_text_token1] = ACTIONS(293),
    [aux_sym__classic_array_time_token1] = ACTIONS(293),
    [sym__begin_sql_e] = ACTIONS(293),
    [sym__begin_sql_f] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_TILDE_PIPE] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_QMARK_QMARK] = ACTIONS(293),
    [anon_sym_QMARK_PLUS] = ACTIONS(293),
    [anon_sym_QMARK_DASH] = ACTIONS(293),
    [anon_sym_PLUS_EQ] = ACTIONS(293),
    [anon_sym_DASH_EQ] = ACTIONS(293),
    [anon_sym_STAR_EQ] = ACTIONS(293),
    [anon_sym_SLASH_EQ] = ACTIONS(293),
    [anon_sym_COLON_EQ] = ACTIONS(293),
    [anon_sym_SLASH_STAR] = ACTIONS(293),
    [anon_sym_SLASH_SLASH] = ACTIONS(293),
    [sym_classic_command] = ACTIONS(293),
  },
  [9] = {
    [sym_expression_argument] = STATE(6),
    [sym__node] = STATE(6),
    [aux_sym_local_variable_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_QMARK] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(303),
    [sym__hex_literal] = ACTIONS(303),
    [aux_sym__dec_literal_token1] = ACTIONS(305),
    [aux_sym__num_literal_token1] = ACTIONS(305),
    [aux_sym__exp_literal_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_LT_GT] = ACTIONS(303),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(303),
    [sym__local] = ACTIONS(303),
    [sym__exposed] = ACTIONS(303),
    [sym__function] = ACTIONS(303),
    [sym__class_store_4d] = ACTIONS(303),
    [sym__class_store_ds] = ACTIONS(303),
    [sym__class_store_cs] = ACTIONS(303),
    [sym__declare] = ACTIONS(303),
    [sym__alias] = ACTIONS(303),
    [sym__class_extends] = ACTIONS(303),
    [sym__class_constructor] = ACTIONS(303),
    [sym__var] = ACTIONS(303),
    [sym__property] = ACTIONS(303),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(303),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(303),
    [aux_sym__classic_array_blob_token1] = ACTIONS(303),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(303),
    [aux_sym__classic_array_date_token1] = ACTIONS(303),
    [aux_sym__classic_array_integer_token1] = ACTIONS(303),
    [aux_sym__classic_array_longint_token1] = ACTIONS(303),
    [aux_sym__classic_array_object_token1] = ACTIONS(303),
    [aux_sym__classic_array_picture_token1] = ACTIONS(303),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(303),
    [aux_sym__classic_array_real_token1] = ACTIONS(303),
    [aux_sym__classic_array_text_token1] = ACTIONS(303),
    [aux_sym__classic_array_time_token1] = ACTIONS(303),
    [sym__begin_sql_e] = ACTIONS(303),
    [sym__begin_sql_f] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_TILDE_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_QMARK_QMARK] = ACTIONS(303),
    [anon_sym_QMARK_PLUS] = ACTIONS(303),
    [anon_sym_QMARK_DASH] = ACTIONS(303),
    [anon_sym_PLUS_EQ] = ACTIONS(303),
    [anon_sym_DASH_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [anon_sym_COLON_EQ] = ACTIONS(303),
    [anon_sym_SLASH_STAR] = ACTIONS(303),
    [anon_sym_SLASH_SLASH] = ACTIONS(303),
    [sym_classic_command] = ACTIONS(303),
  },
  [10] = {
    [sym_expression_argument] = STATE(5),
    [sym__node] = STATE(5),
    [aux_sym_local_variable_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(313),
    [sym__hex_literal] = ACTIONS(313),
    [aux_sym__dec_literal_token1] = ACTIONS(315),
    [aux_sym__num_literal_token1] = ACTIONS(315),
    [aux_sym__exp_literal_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_LT_GT] = ACTIONS(313),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(313),
    [sym__local] = ACTIONS(313),
    [sym__exposed] = ACTIONS(313),
    [sym__function] = ACTIONS(313),
    [sym__class_store_4d] = ACTIONS(313),
    [sym__class_store_ds] = ACTIONS(313),
    [sym__class_store_cs] = ACTIONS(313),
    [sym__declare] = ACTIONS(313),
    [sym__alias] = ACTIONS(313),
    [sym__class_extends] = ACTIONS(313),
    [sym__class_constructor] = ACTIONS(313),
    [sym__var] = ACTIONS(313),
    [sym__property] = ACTIONS(313),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(313),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(313),
    [aux_sym__classic_array_blob_token1] = ACTIONS(313),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(313),
    [aux_sym__classic_array_date_token1] = ACTIONS(313),
    [aux_sym__classic_array_integer_token1] = ACTIONS(313),
    [aux_sym__classic_array_longint_token1] = ACTIONS(313),
    [aux_sym__classic_array_object_token1] = ACTIONS(313),
    [aux_sym__classic_array_picture_token1] = ACTIONS(313),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(313),
    [aux_sym__classic_array_real_token1] = ACTIONS(313),
    [aux_sym__classic_array_text_token1] = ACTIONS(313),
    [aux_sym__classic_array_time_token1] = ACTIONS(313),
    [sym__begin_sql_e] = ACTIONS(313),
    [sym__begin_sql_f] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_TILDE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK_QMARK] = ACTIONS(313),
    [anon_sym_QMARK_PLUS] = ACTIONS(313),
    [anon_sym_QMARK_DASH] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_COLON_EQ] = ACTIONS(313),
    [anon_sym_SLASH_STAR] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(313),
    [sym_classic_command] = ACTIONS(313),
  },
  [11] = {
    [sym_expression_argument] = STATE(4),
    [sym__node] = STATE(4),
    [aux_sym_local_variable_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(317),
    [sym__hex_literal] = ACTIONS(317),
    [aux_sym__dec_literal_token1] = ACTIONS(319),
    [aux_sym__num_literal_token1] = ACTIONS(319),
    [aux_sym__exp_literal_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_LT_GT] = ACTIONS(317),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(317),
    [sym__local] = ACTIONS(317),
    [sym__exposed] = ACTIONS(317),
    [sym__function] = ACTIONS(317),
    [sym__class_store_4d] = ACTIONS(317),
    [sym__class_store_ds] = ACTIONS(317),
    [sym__class_store_cs] = ACTIONS(317),
    [sym__declare] = ACTIONS(317),
    [sym__alias] = ACTIONS(317),
    [sym__class_extends] = ACTIONS(317),
    [sym__class_constructor] = ACTIONS(317),
    [sym__var] = ACTIONS(317),
    [sym__property] = ACTIONS(317),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(317),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(317),
    [aux_sym__classic_array_blob_token1] = ACTIONS(317),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(317),
    [aux_sym__classic_array_date_token1] = ACTIONS(317),
    [aux_sym__classic_array_integer_token1] = ACTIONS(317),
    [aux_sym__classic_array_longint_token1] = ACTIONS(317),
    [aux_sym__classic_array_object_token1] = ACTIONS(317),
    [aux_sym__classic_array_picture_token1] = ACTIONS(317),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(317),
    [aux_sym__classic_array_real_token1] = ACTIONS(317),
    [aux_sym__classic_array_text_token1] = ACTIONS(317),
    [aux_sym__classic_array_time_token1] = ACTIONS(317),
    [sym__begin_sql_e] = ACTIONS(317),
    [sym__begin_sql_f] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_TILDE_PIPE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [anon_sym_QMARK_QMARK] = ACTIONS(317),
    [anon_sym_QMARK_PLUS] = ACTIONS(317),
    [anon_sym_QMARK_DASH] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(317),
    [anon_sym_DASH_EQ] = ACTIONS(317),
    [anon_sym_STAR_EQ] = ACTIONS(317),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [anon_sym_COLON_EQ] = ACTIONS(317),
    [anon_sym_SLASH_STAR] = ACTIONS(317),
    [anon_sym_SLASH_SLASH] = ACTIONS(317),
    [sym_classic_command] = ACTIONS(317),
  },
  [12] = {
    [sym_expression_argument] = STATE(12),
    [sym__node] = STATE(12),
    [aux_sym_local_variable_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_QMARK] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(327),
    [sym__hex_literal] = ACTIONS(327),
    [aux_sym__dec_literal_token1] = ACTIONS(329),
    [aux_sym__num_literal_token1] = ACTIONS(329),
    [aux_sym__exp_literal_token1] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_LT_GT] = ACTIONS(327),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(327),
    [sym__local] = ACTIONS(327),
    [sym__exposed] = ACTIONS(327),
    [sym__function] = ACTIONS(327),
    [sym__class_store_4d] = ACTIONS(327),
    [sym__class_store_ds] = ACTIONS(327),
    [sym__class_store_cs] = ACTIONS(327),
    [sym__declare] = ACTIONS(327),
    [sym__alias] = ACTIONS(327),
    [sym__class_extends] = ACTIONS(327),
    [sym__class_constructor] = ACTIONS(327),
    [sym__var] = ACTIONS(327),
    [sym__property] = ACTIONS(327),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(327),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(327),
    [aux_sym__classic_array_blob_token1] = ACTIONS(327),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(327),
    [aux_sym__classic_array_date_token1] = ACTIONS(327),
    [aux_sym__classic_array_integer_token1] = ACTIONS(327),
    [aux_sym__classic_array_longint_token1] = ACTIONS(327),
    [aux_sym__classic_array_object_token1] = ACTIONS(327),
    [aux_sym__classic_array_picture_token1] = ACTIONS(327),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(327),
    [aux_sym__classic_array_real_token1] = ACTIONS(327),
    [aux_sym__classic_array_text_token1] = ACTIONS(327),
    [aux_sym__classic_array_time_token1] = ACTIONS(327),
    [sym__begin_sql_e] = ACTIONS(327),
    [sym__begin_sql_f] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(327),
    [anon_sym_TILDE_PIPE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_QMARK_QMARK] = ACTIONS(327),
    [anon_sym_QMARK_PLUS] = ACTIONS(327),
    [anon_sym_QMARK_DASH] = ACTIONS(327),
    [anon_sym_PLUS_EQ] = ACTIONS(327),
    [anon_sym_DASH_EQ] = ACTIONS(327),
    [anon_sym_STAR_EQ] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(327),
    [anon_sym_COLON_EQ] = ACTIONS(327),
    [anon_sym_SLASH_STAR] = ACTIONS(327),
    [anon_sym_SLASH_SLASH] = ACTIONS(327),
    [sym_classic_command] = ACTIONS(327),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(346),
    [sym__hex_literal] = ACTIONS(346),
    [aux_sym__dec_literal_token1] = ACTIONS(348),
    [aux_sym__num_literal_token1] = ACTIONS(348),
    [aux_sym__exp_literal_token1] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(348),
    [sym_command_suffix] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_LT_GT] = ACTIONS(346),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(346),
    [sym__local] = ACTIONS(346),
    [sym__exposed] = ACTIONS(346),
    [sym__function] = ACTIONS(346),
    [sym__class_store_4d] = ACTIONS(346),
    [sym__class_store_ds] = ACTIONS(346),
    [sym__class_store_cs] = ACTIONS(346),
    [sym__declare] = ACTIONS(346),
    [sym__alias] = ACTIONS(346),
    [sym__class_extends] = ACTIONS(346),
    [sym__class_constructor] = ACTIONS(346),
    [sym__var] = ACTIONS(346),
    [sym__property] = ACTIONS(346),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(346),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(346),
    [aux_sym__classic_array_blob_token1] = ACTIONS(346),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(346),
    [aux_sym__classic_array_date_token1] = ACTIONS(346),
    [aux_sym__classic_array_integer_token1] = ACTIONS(346),
    [aux_sym__classic_array_longint_token1] = ACTIONS(346),
    [aux_sym__classic_array_object_token1] = ACTIONS(346),
    [aux_sym__classic_array_picture_token1] = ACTIONS(346),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(346),
    [aux_sym__classic_array_real_token1] = ACTIONS(346),
    [aux_sym__classic_array_text_token1] = ACTIONS(346),
    [aux_sym__classic_array_time_token1] = ACTIONS(346),
    [sym__begin_sql_e] = ACTIONS(346),
    [sym__begin_sql_f] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(348),
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
    [anon_sym_COLON_EQ] = ACTIONS(346),
    [anon_sym_SLASH_STAR] = ACTIONS(346),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [sym_classic_command] = ACTIONS(346),
  },
  [14] = {
    [sym_expression_argument] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(352),
    [sym__hex_literal] = ACTIONS(352),
    [aux_sym__dec_literal_token1] = ACTIONS(354),
    [aux_sym__num_literal_token1] = ACTIONS(354),
    [aux_sym__exp_literal_token1] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [sym_command_suffix] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_DOLLAR] = ACTIONS(352),
    [anon_sym_LT_GT] = ACTIONS(352),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(352),
    [sym__local] = ACTIONS(352),
    [sym__exposed] = ACTIONS(352),
    [sym__function] = ACTIONS(352),
    [sym__class_store_4d] = ACTIONS(352),
    [sym__class_store_ds] = ACTIONS(352),
    [sym__class_store_cs] = ACTIONS(352),
    [sym__declare] = ACTIONS(352),
    [sym__alias] = ACTIONS(352),
    [sym__class_extends] = ACTIONS(352),
    [sym__class_constructor] = ACTIONS(352),
    [sym__var] = ACTIONS(352),
    [sym__property] = ACTIONS(352),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(352),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(352),
    [aux_sym__classic_array_blob_token1] = ACTIONS(352),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(352),
    [aux_sym__classic_array_date_token1] = ACTIONS(352),
    [aux_sym__classic_array_integer_token1] = ACTIONS(352),
    [aux_sym__classic_array_longint_token1] = ACTIONS(352),
    [aux_sym__classic_array_object_token1] = ACTIONS(352),
    [aux_sym__classic_array_picture_token1] = ACTIONS(352),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(352),
    [aux_sym__classic_array_real_token1] = ACTIONS(352),
    [aux_sym__classic_array_text_token1] = ACTIONS(352),
    [aux_sym__classic_array_time_token1] = ACTIONS(352),
    [sym__begin_sql_e] = ACTIONS(352),
    [sym__begin_sql_f] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(354),
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
    [anon_sym_COLON_EQ] = ACTIONS(352),
    [anon_sym_SLASH_STAR] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [sym_classic_command] = ACTIONS(352),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(360),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(358),
    [sym__hex_literal] = ACTIONS(358),
    [aux_sym__dec_literal_token1] = ACTIONS(360),
    [aux_sym__num_literal_token1] = ACTIONS(360),
    [aux_sym__exp_literal_token1] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_LT_GT] = ACTIONS(358),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(358),
    [sym__local] = ACTIONS(358),
    [sym__exposed] = ACTIONS(358),
    [sym__function] = ACTIONS(358),
    [sym__class_store_4d] = ACTIONS(358),
    [sym__class_store_ds] = ACTIONS(358),
    [sym__class_store_cs] = ACTIONS(358),
    [sym__declare] = ACTIONS(358),
    [sym__alias] = ACTIONS(358),
    [sym__class_extends] = ACTIONS(358),
    [sym__class_constructor] = ACTIONS(358),
    [sym__var] = ACTIONS(358),
    [sym__property] = ACTIONS(358),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(358),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(358),
    [aux_sym__classic_array_blob_token1] = ACTIONS(358),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(358),
    [aux_sym__classic_array_date_token1] = ACTIONS(358),
    [aux_sym__classic_array_integer_token1] = ACTIONS(358),
    [aux_sym__classic_array_longint_token1] = ACTIONS(358),
    [aux_sym__classic_array_object_token1] = ACTIONS(358),
    [aux_sym__classic_array_picture_token1] = ACTIONS(358),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(358),
    [aux_sym__classic_array_real_token1] = ACTIONS(358),
    [aux_sym__classic_array_text_token1] = ACTIONS(358),
    [aux_sym__classic_array_time_token1] = ACTIONS(358),
    [sym__begin_sql_e] = ACTIONS(358),
    [sym__begin_sql_f] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_TILDE_PIPE] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(358),
    [anon_sym_QMARK_QMARK] = ACTIONS(358),
    [anon_sym_QMARK_PLUS] = ACTIONS(358),
    [anon_sym_QMARK_DASH] = ACTIONS(358),
    [anon_sym_PLUS_EQ] = ACTIONS(358),
    [anon_sym_DASH_EQ] = ACTIONS(358),
    [anon_sym_STAR_EQ] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [anon_sym_COLON_EQ] = ACTIONS(358),
    [anon_sym_SLASH_STAR] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(358),
    [sym_classic_command] = ACTIONS(358),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(362),
    [sym__hex_literal] = ACTIONS(362),
    [aux_sym__dec_literal_token1] = ACTIONS(364),
    [aux_sym__num_literal_token1] = ACTIONS(364),
    [aux_sym__exp_literal_token1] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_LT_GT] = ACTIONS(362),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(362),
    [sym__local] = ACTIONS(362),
    [sym__exposed] = ACTIONS(362),
    [sym__function] = ACTIONS(362),
    [sym__class_store_4d] = ACTIONS(362),
    [sym__class_store_ds] = ACTIONS(362),
    [sym__class_store_cs] = ACTIONS(362),
    [sym__declare] = ACTIONS(362),
    [sym__alias] = ACTIONS(362),
    [sym__class_extends] = ACTIONS(362),
    [sym__class_constructor] = ACTIONS(362),
    [sym__var] = ACTIONS(362),
    [sym__property] = ACTIONS(362),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(362),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(362),
    [aux_sym__classic_array_blob_token1] = ACTIONS(362),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(362),
    [aux_sym__classic_array_date_token1] = ACTIONS(362),
    [aux_sym__classic_array_integer_token1] = ACTIONS(362),
    [aux_sym__classic_array_longint_token1] = ACTIONS(362),
    [aux_sym__classic_array_object_token1] = ACTIONS(362),
    [aux_sym__classic_array_picture_token1] = ACTIONS(362),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(362),
    [aux_sym__classic_array_real_token1] = ACTIONS(362),
    [aux_sym__classic_array_text_token1] = ACTIONS(362),
    [aux_sym__classic_array_time_token1] = ACTIONS(362),
    [sym__begin_sql_e] = ACTIONS(362),
    [sym__begin_sql_f] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
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
    [anon_sym_COLON_EQ] = ACTIONS(362),
    [anon_sym_SLASH_STAR] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(362),
    [sym_classic_command] = ACTIONS(362),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(366),
    [sym__hex_literal] = ACTIONS(366),
    [aux_sym__dec_literal_token1] = ACTIONS(368),
    [aux_sym__num_literal_token1] = ACTIONS(368),
    [aux_sym__exp_literal_token1] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(366),
    [anon_sym_LT_GT] = ACTIONS(366),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(366),
    [sym__local] = ACTIONS(366),
    [sym__exposed] = ACTIONS(366),
    [sym__function] = ACTIONS(366),
    [sym__class_store_4d] = ACTIONS(366),
    [sym__class_store_ds] = ACTIONS(366),
    [sym__class_store_cs] = ACTIONS(366),
    [sym__declare] = ACTIONS(366),
    [sym__alias] = ACTIONS(366),
    [sym__class_extends] = ACTIONS(366),
    [sym__class_constructor] = ACTIONS(366),
    [sym__var] = ACTIONS(366),
    [sym__property] = ACTIONS(366),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(366),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(366),
    [aux_sym__classic_array_blob_token1] = ACTIONS(366),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(366),
    [aux_sym__classic_array_date_token1] = ACTIONS(366),
    [aux_sym__classic_array_integer_token1] = ACTIONS(366),
    [aux_sym__classic_array_longint_token1] = ACTIONS(366),
    [aux_sym__classic_array_object_token1] = ACTIONS(366),
    [aux_sym__classic_array_picture_token1] = ACTIONS(366),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(366),
    [aux_sym__classic_array_real_token1] = ACTIONS(366),
    [aux_sym__classic_array_text_token1] = ACTIONS(366),
    [aux_sym__classic_array_time_token1] = ACTIONS(366),
    [sym__begin_sql_e] = ACTIONS(366),
    [sym__begin_sql_f] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_AMP_AMP] = ACTIONS(366),
    [anon_sym_PIPE_PIPE] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(366),
    [anon_sym_TILDE_PIPE] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(366),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_LT_LT] = ACTIONS(366),
    [anon_sym_GT_GT] = ACTIONS(366),
    [anon_sym_QMARK_QMARK] = ACTIONS(366),
    [anon_sym_QMARK_PLUS] = ACTIONS(366),
    [anon_sym_QMARK_DASH] = ACTIONS(366),
    [anon_sym_PLUS_EQ] = ACTIONS(366),
    [anon_sym_DASH_EQ] = ACTIONS(366),
    [anon_sym_STAR_EQ] = ACTIONS(366),
    [anon_sym_SLASH_EQ] = ACTIONS(366),
    [anon_sym_COLON_EQ] = ACTIONS(366),
    [anon_sym_SLASH_STAR] = ACTIONS(366),
    [anon_sym_SLASH_SLASH] = ACTIONS(366),
    [sym_classic_command] = ACTIONS(366),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(370),
    [sym__hex_literal] = ACTIONS(370),
    [aux_sym__dec_literal_token1] = ACTIONS(372),
    [aux_sym__num_literal_token1] = ACTIONS(372),
    [aux_sym__exp_literal_token1] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_LT_GT] = ACTIONS(370),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(370),
    [sym__local] = ACTIONS(370),
    [sym__exposed] = ACTIONS(370),
    [sym__function] = ACTIONS(370),
    [sym__class_store_4d] = ACTIONS(370),
    [sym__class_store_ds] = ACTIONS(370),
    [sym__class_store_cs] = ACTIONS(370),
    [sym__declare] = ACTIONS(370),
    [sym__alias] = ACTIONS(370),
    [sym__class_extends] = ACTIONS(370),
    [sym__class_constructor] = ACTIONS(370),
    [sym__var] = ACTIONS(370),
    [sym__property] = ACTIONS(370),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(370),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(370),
    [aux_sym__classic_array_blob_token1] = ACTIONS(370),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(370),
    [aux_sym__classic_array_date_token1] = ACTIONS(370),
    [aux_sym__classic_array_integer_token1] = ACTIONS(370),
    [aux_sym__classic_array_longint_token1] = ACTIONS(370),
    [aux_sym__classic_array_object_token1] = ACTIONS(370),
    [aux_sym__classic_array_picture_token1] = ACTIONS(370),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(370),
    [aux_sym__classic_array_real_token1] = ACTIONS(370),
    [aux_sym__classic_array_text_token1] = ACTIONS(370),
    [aux_sym__classic_array_time_token1] = ACTIONS(370),
    [sym__begin_sql_e] = ACTIONS(370),
    [sym__begin_sql_f] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(372),
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
    [anon_sym_COLON_EQ] = ACTIONS(370),
    [anon_sym_SLASH_STAR] = ACTIONS(370),
    [anon_sym_SLASH_SLASH] = ACTIONS(370),
    [sym_classic_command] = ACTIONS(370),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_QMARK] = ACTIONS(376),
    [anon_sym_BANG] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(374),
    [sym__hex_literal] = ACTIONS(374),
    [aux_sym__dec_literal_token1] = ACTIONS(376),
    [aux_sym__num_literal_token1] = ACTIONS(376),
    [aux_sym__exp_literal_token1] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(374),
    [anon_sym_LT_GT] = ACTIONS(374),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(374),
    [sym__local] = ACTIONS(374),
    [sym__exposed] = ACTIONS(374),
    [sym__function] = ACTIONS(374),
    [sym__class_store_4d] = ACTIONS(374),
    [sym__class_store_ds] = ACTIONS(374),
    [sym__class_store_cs] = ACTIONS(374),
    [sym__declare] = ACTIONS(374),
    [sym__alias] = ACTIONS(374),
    [sym__class_extends] = ACTIONS(374),
    [sym__class_constructor] = ACTIONS(374),
    [sym__var] = ACTIONS(374),
    [sym__property] = ACTIONS(374),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(374),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(374),
    [aux_sym__classic_array_blob_token1] = ACTIONS(374),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(374),
    [aux_sym__classic_array_date_token1] = ACTIONS(374),
    [aux_sym__classic_array_integer_token1] = ACTIONS(374),
    [aux_sym__classic_array_longint_token1] = ACTIONS(374),
    [aux_sym__classic_array_object_token1] = ACTIONS(374),
    [aux_sym__classic_array_picture_token1] = ACTIONS(374),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(374),
    [aux_sym__classic_array_real_token1] = ACTIONS(374),
    [aux_sym__classic_array_text_token1] = ACTIONS(374),
    [aux_sym__classic_array_time_token1] = ACTIONS(374),
    [sym__begin_sql_e] = ACTIONS(374),
    [sym__begin_sql_f] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(376),
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
    [anon_sym_COLON_EQ] = ACTIONS(374),
    [anon_sym_SLASH_STAR] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(374),
    [sym_classic_command] = ACTIONS(374),
  },
  [20] = {
    [sym_expression_argument] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(378),
    [sym__hex_literal] = ACTIONS(378),
    [aux_sym__dec_literal_token1] = ACTIONS(380),
    [aux_sym__num_literal_token1] = ACTIONS(380),
    [aux_sym__exp_literal_token1] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_LT_GT] = ACTIONS(378),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(378),
    [sym__local] = ACTIONS(378),
    [sym__exposed] = ACTIONS(378),
    [sym__function] = ACTIONS(378),
    [sym__class_store_4d] = ACTIONS(378),
    [sym__class_store_ds] = ACTIONS(378),
    [sym__class_store_cs] = ACTIONS(378),
    [sym__declare] = ACTIONS(378),
    [sym__alias] = ACTIONS(378),
    [sym__class_extends] = ACTIONS(378),
    [sym__class_constructor] = ACTIONS(378),
    [sym__var] = ACTIONS(378),
    [sym__property] = ACTIONS(378),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(378),
    [aux_sym__classic_array_blob_token1] = ACTIONS(378),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(378),
    [aux_sym__classic_array_date_token1] = ACTIONS(378),
    [aux_sym__classic_array_integer_token1] = ACTIONS(378),
    [aux_sym__classic_array_longint_token1] = ACTIONS(378),
    [aux_sym__classic_array_object_token1] = ACTIONS(378),
    [aux_sym__classic_array_picture_token1] = ACTIONS(378),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(378),
    [aux_sym__classic_array_real_token1] = ACTIONS(378),
    [aux_sym__classic_array_text_token1] = ACTIONS(378),
    [aux_sym__classic_array_time_token1] = ACTIONS(378),
    [sym__begin_sql_e] = ACTIONS(378),
    [sym__begin_sql_f] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(380),
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
    [anon_sym_COLON_EQ] = ACTIONS(378),
    [anon_sym_SLASH_STAR] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [sym_classic_command] = ACTIONS(378),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(382),
    [sym__hex_literal] = ACTIONS(382),
    [aux_sym__dec_literal_token1] = ACTIONS(384),
    [aux_sym__num_literal_token1] = ACTIONS(384),
    [aux_sym__exp_literal_token1] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [anon_sym_LT_GT] = ACTIONS(382),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(382),
    [sym__local] = ACTIONS(382),
    [sym__exposed] = ACTIONS(382),
    [sym__function] = ACTIONS(382),
    [sym__class_store_4d] = ACTIONS(382),
    [sym__class_store_ds] = ACTIONS(382),
    [sym__class_store_cs] = ACTIONS(382),
    [sym__declare] = ACTIONS(382),
    [sym__alias] = ACTIONS(382),
    [sym__class_extends] = ACTIONS(382),
    [sym__class_constructor] = ACTIONS(382),
    [sym__var] = ACTIONS(382),
    [sym__property] = ACTIONS(382),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(382),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(382),
    [aux_sym__classic_array_blob_token1] = ACTIONS(382),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(382),
    [aux_sym__classic_array_date_token1] = ACTIONS(382),
    [aux_sym__classic_array_integer_token1] = ACTIONS(382),
    [aux_sym__classic_array_longint_token1] = ACTIONS(382),
    [aux_sym__classic_array_object_token1] = ACTIONS(382),
    [aux_sym__classic_array_picture_token1] = ACTIONS(382),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(382),
    [aux_sym__classic_array_real_token1] = ACTIONS(382),
    [aux_sym__classic_array_text_token1] = ACTIONS(382),
    [aux_sym__classic_array_time_token1] = ACTIONS(382),
    [sym__begin_sql_e] = ACTIONS(382),
    [sym__begin_sql_f] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(384),
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
    [anon_sym_COLON_EQ] = ACTIONS(382),
    [anon_sym_SLASH_STAR] = ACTIONS(382),
    [anon_sym_SLASH_SLASH] = ACTIONS(382),
    [sym_classic_command] = ACTIONS(382),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(386),
    [sym__hex_literal] = ACTIONS(386),
    [aux_sym__dec_literal_token1] = ACTIONS(388),
    [aux_sym__num_literal_token1] = ACTIONS(388),
    [aux_sym__exp_literal_token1] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_LT_GT] = ACTIONS(386),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(386),
    [sym__local] = ACTIONS(386),
    [sym__exposed] = ACTIONS(386),
    [sym__function] = ACTIONS(386),
    [sym__class_store_4d] = ACTIONS(386),
    [sym__class_store_ds] = ACTIONS(386),
    [sym__class_store_cs] = ACTIONS(386),
    [sym__declare] = ACTIONS(386),
    [sym__alias] = ACTIONS(386),
    [sym__class_extends] = ACTIONS(386),
    [sym__class_constructor] = ACTIONS(386),
    [sym__var] = ACTIONS(386),
    [sym__property] = ACTIONS(386),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(386),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(386),
    [aux_sym__classic_array_blob_token1] = ACTIONS(386),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(386),
    [aux_sym__classic_array_date_token1] = ACTIONS(386),
    [aux_sym__classic_array_integer_token1] = ACTIONS(386),
    [aux_sym__classic_array_longint_token1] = ACTIONS(386),
    [aux_sym__classic_array_object_token1] = ACTIONS(386),
    [aux_sym__classic_array_picture_token1] = ACTIONS(386),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(386),
    [aux_sym__classic_array_real_token1] = ACTIONS(386),
    [aux_sym__classic_array_text_token1] = ACTIONS(386),
    [aux_sym__classic_array_time_token1] = ACTIONS(386),
    [sym__begin_sql_e] = ACTIONS(386),
    [sym__begin_sql_f] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(388),
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
    [anon_sym_COLON_EQ] = ACTIONS(386),
    [anon_sym_SLASH_STAR] = ACTIONS(386),
    [anon_sym_SLASH_SLASH] = ACTIONS(386),
    [sym_classic_command] = ACTIONS(386),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(392),
    [anon_sym_BANG] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(390),
    [sym__hex_literal] = ACTIONS(390),
    [aux_sym__dec_literal_token1] = ACTIONS(392),
    [aux_sym__num_literal_token1] = ACTIONS(392),
    [aux_sym__exp_literal_token1] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [anon_sym_LT_GT] = ACTIONS(390),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(390),
    [sym__local] = ACTIONS(390),
    [sym__exposed] = ACTIONS(390),
    [sym__function] = ACTIONS(390),
    [sym__class_store_4d] = ACTIONS(390),
    [sym__class_store_ds] = ACTIONS(390),
    [sym__class_store_cs] = ACTIONS(390),
    [sym__declare] = ACTIONS(390),
    [sym__alias] = ACTIONS(390),
    [sym__class_extends] = ACTIONS(390),
    [sym__class_constructor] = ACTIONS(390),
    [sym__var] = ACTIONS(390),
    [sym__property] = ACTIONS(390),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(390),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(390),
    [aux_sym__classic_array_blob_token1] = ACTIONS(390),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(390),
    [aux_sym__classic_array_date_token1] = ACTIONS(390),
    [aux_sym__classic_array_integer_token1] = ACTIONS(390),
    [aux_sym__classic_array_longint_token1] = ACTIONS(390),
    [aux_sym__classic_array_object_token1] = ACTIONS(390),
    [aux_sym__classic_array_picture_token1] = ACTIONS(390),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(390),
    [aux_sym__classic_array_real_token1] = ACTIONS(390),
    [aux_sym__classic_array_text_token1] = ACTIONS(390),
    [aux_sym__classic_array_time_token1] = ACTIONS(390),
    [sym__begin_sql_e] = ACTIONS(390),
    [sym__begin_sql_f] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(392),
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
    [anon_sym_COLON_EQ] = ACTIONS(390),
    [anon_sym_SLASH_STAR] = ACTIONS(390),
    [anon_sym_SLASH_SLASH] = ACTIONS(390),
    [sym_classic_command] = ACTIONS(390),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(394),
    [sym__hex_literal] = ACTIONS(394),
    [aux_sym__dec_literal_token1] = ACTIONS(396),
    [aux_sym__num_literal_token1] = ACTIONS(396),
    [aux_sym__exp_literal_token1] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(394),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [anon_sym_LT_GT] = ACTIONS(394),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(394),
    [sym__local] = ACTIONS(394),
    [sym__exposed] = ACTIONS(394),
    [sym__function] = ACTIONS(394),
    [sym__class_store_4d] = ACTIONS(394),
    [sym__class_store_ds] = ACTIONS(394),
    [sym__class_store_cs] = ACTIONS(394),
    [sym__declare] = ACTIONS(394),
    [sym__alias] = ACTIONS(394),
    [sym__class_extends] = ACTIONS(394),
    [sym__class_constructor] = ACTIONS(394),
    [sym__var] = ACTIONS(394),
    [sym__property] = ACTIONS(394),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(394),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(394),
    [aux_sym__classic_array_blob_token1] = ACTIONS(394),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(394),
    [aux_sym__classic_array_date_token1] = ACTIONS(394),
    [aux_sym__classic_array_integer_token1] = ACTIONS(394),
    [aux_sym__classic_array_longint_token1] = ACTIONS(394),
    [aux_sym__classic_array_object_token1] = ACTIONS(394),
    [aux_sym__classic_array_picture_token1] = ACTIONS(394),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(394),
    [aux_sym__classic_array_real_token1] = ACTIONS(394),
    [aux_sym__classic_array_text_token1] = ACTIONS(394),
    [aux_sym__classic_array_time_token1] = ACTIONS(394),
    [sym__begin_sql_e] = ACTIONS(394),
    [sym__begin_sql_f] = ACTIONS(394),
    [anon_sym_PLUS] = ACTIONS(396),
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
    [anon_sym_COLON_EQ] = ACTIONS(394),
    [anon_sym_SLASH_STAR] = ACTIONS(394),
    [anon_sym_SLASH_SLASH] = ACTIONS(394),
    [sym_classic_command] = ACTIONS(394),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(400),
    [anon_sym_BANG] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(398),
    [sym__hex_literal] = ACTIONS(398),
    [aux_sym__dec_literal_token1] = ACTIONS(400),
    [aux_sym__num_literal_token1] = ACTIONS(400),
    [aux_sym__exp_literal_token1] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_LT_GT] = ACTIONS(398),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(398),
    [sym__local] = ACTIONS(398),
    [sym__exposed] = ACTIONS(398),
    [sym__function] = ACTIONS(398),
    [sym__class_store_4d] = ACTIONS(398),
    [sym__class_store_ds] = ACTIONS(398),
    [sym__class_store_cs] = ACTIONS(398),
    [sym__declare] = ACTIONS(398),
    [sym__alias] = ACTIONS(398),
    [sym__class_extends] = ACTIONS(398),
    [sym__class_constructor] = ACTIONS(398),
    [sym__var] = ACTIONS(398),
    [sym__property] = ACTIONS(398),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(398),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(398),
    [aux_sym__classic_array_blob_token1] = ACTIONS(398),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(398),
    [aux_sym__classic_array_date_token1] = ACTIONS(398),
    [aux_sym__classic_array_integer_token1] = ACTIONS(398),
    [aux_sym__classic_array_longint_token1] = ACTIONS(398),
    [aux_sym__classic_array_object_token1] = ACTIONS(398),
    [aux_sym__classic_array_picture_token1] = ACTIONS(398),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(398),
    [aux_sym__classic_array_real_token1] = ACTIONS(398),
    [aux_sym__classic_array_text_token1] = ACTIONS(398),
    [aux_sym__classic_array_time_token1] = ACTIONS(398),
    [sym__begin_sql_e] = ACTIONS(398),
    [sym__begin_sql_f] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(400),
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
    [anon_sym_COLON_EQ] = ACTIONS(398),
    [anon_sym_SLASH_STAR] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(398),
    [sym_classic_command] = ACTIONS(398),
  },
  [26] = {
    [sym__binary_operator] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(402),
    [sym__hex_literal] = ACTIONS(402),
    [aux_sym__dec_literal_token1] = ACTIONS(406),
    [aux_sym__num_literal_token1] = ACTIONS(406),
    [aux_sym__exp_literal_token1] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [anon_sym_LT_GT] = ACTIONS(402),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(402),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(402),
    [sym__local] = ACTIONS(402),
    [sym__exposed] = ACTIONS(402),
    [sym__function] = ACTIONS(402),
    [sym__class_store_4d] = ACTIONS(402),
    [sym__class_store_ds] = ACTIONS(402),
    [sym__class_store_cs] = ACTIONS(402),
    [sym__declare] = ACTIONS(402),
    [sym__alias] = ACTIONS(402),
    [sym__class_extends] = ACTIONS(402),
    [sym__class_constructor] = ACTIONS(402),
    [sym__var] = ACTIONS(402),
    [sym__property] = ACTIONS(402),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(402),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(402),
    [aux_sym__classic_array_blob_token1] = ACTIONS(402),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(402),
    [aux_sym__classic_array_date_token1] = ACTIONS(402),
    [aux_sym__classic_array_integer_token1] = ACTIONS(402),
    [aux_sym__classic_array_longint_token1] = ACTIONS(402),
    [aux_sym__classic_array_object_token1] = ACTIONS(402),
    [aux_sym__classic_array_picture_token1] = ACTIONS(402),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(402),
    [aux_sym__classic_array_real_token1] = ACTIONS(402),
    [aux_sym__classic_array_text_token1] = ACTIONS(402),
    [aux_sym__classic_array_time_token1] = ACTIONS(402),
    [sym__begin_sql_e] = ACTIONS(402),
    [sym__begin_sql_f] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_CARET] = ACTIONS(410),
    [anon_sym_TILDE_PIPE] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_GT_GT] = ACTIONS(410),
    [anon_sym_QMARK_QMARK] = ACTIONS(410),
    [anon_sym_QMARK_PLUS] = ACTIONS(410),
    [anon_sym_QMARK_DASH] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(410),
    [anon_sym_DASH_EQ] = ACTIONS(410),
    [anon_sym_STAR_EQ] = ACTIONS(410),
    [anon_sym_SLASH_EQ] = ACTIONS(410),
    [anon_sym_COLON_EQ] = ACTIONS(410),
    [anon_sym_SLASH_STAR] = ACTIONS(402),
    [anon_sym_SLASH_SLASH] = ACTIONS(402),
    [sym_classic_command] = ACTIONS(402),
  },
  [27] = {
    [sym__binary_operator] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(412),
    [sym__hex_literal] = ACTIONS(412),
    [aux_sym__dec_literal_token1] = ACTIONS(417),
    [aux_sym__num_literal_token1] = ACTIONS(417),
    [aux_sym__exp_literal_token1] = ACTIONS(412),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [anon_sym_LT_GT] = ACTIONS(412),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(412),
    [sym__local] = ACTIONS(412),
    [sym__exposed] = ACTIONS(412),
    [sym__function] = ACTIONS(412),
    [sym__class_store_4d] = ACTIONS(412),
    [sym__class_store_ds] = ACTIONS(412),
    [sym__class_store_cs] = ACTIONS(412),
    [sym__declare] = ACTIONS(412),
    [sym__alias] = ACTIONS(412),
    [sym__class_extends] = ACTIONS(412),
    [sym__class_constructor] = ACTIONS(412),
    [sym__var] = ACTIONS(412),
    [sym__property] = ACTIONS(412),
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
    [sym__begin_sql_e] = ACTIONS(412),
    [sym__begin_sql_f] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_CARET] = ACTIONS(410),
    [anon_sym_TILDE_PIPE] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_GT_GT] = ACTIONS(410),
    [anon_sym_QMARK_QMARK] = ACTIONS(410),
    [anon_sym_QMARK_PLUS] = ACTIONS(410),
    [anon_sym_QMARK_DASH] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(410),
    [anon_sym_DASH_EQ] = ACTIONS(410),
    [anon_sym_STAR_EQ] = ACTIONS(410),
    [anon_sym_SLASH_EQ] = ACTIONS(410),
    [anon_sym_COLON_EQ] = ACTIONS(410),
    [anon_sym_SLASH_STAR] = ACTIONS(412),
    [anon_sym_SLASH_SLASH] = ACTIONS(412),
    [sym_classic_command] = ACTIONS(412),
  },
  [28] = {
    [sym__binary_operator] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(419),
    [sym__hex_literal] = ACTIONS(419),
    [aux_sym__dec_literal_token1] = ACTIONS(421),
    [aux_sym__num_literal_token1] = ACTIONS(421),
    [aux_sym__exp_literal_token1] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_LT_GT] = ACTIONS(419),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(419),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(419),
    [sym__local] = ACTIONS(419),
    [sym__exposed] = ACTIONS(419),
    [sym__function] = ACTIONS(419),
    [sym__class_store_4d] = ACTIONS(419),
    [sym__class_store_ds] = ACTIONS(419),
    [sym__class_store_cs] = ACTIONS(419),
    [sym__declare] = ACTIONS(419),
    [sym__alias] = ACTIONS(419),
    [sym__class_extends] = ACTIONS(419),
    [sym__class_constructor] = ACTIONS(419),
    [sym__var] = ACTIONS(419),
    [sym__property] = ACTIONS(419),
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
    [sym__begin_sql_e] = ACTIONS(419),
    [sym__begin_sql_f] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
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
    [anon_sym_COLON_EQ] = ACTIONS(419),
    [anon_sym_SLASH_STAR] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [sym_classic_command] = ACTIONS(419),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_BANG] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(423),
    [sym__hex_literal] = ACTIONS(423),
    [aux_sym__dec_literal_token1] = ACTIONS(425),
    [aux_sym__num_literal_token1] = ACTIONS(425),
    [aux_sym__exp_literal_token1] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_LT_GT] = ACTIONS(423),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(423),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(423),
    [sym__local] = ACTIONS(423),
    [sym__exposed] = ACTIONS(423),
    [sym__function] = ACTIONS(423),
    [sym__class_store_4d] = ACTIONS(423),
    [sym__class_store_ds] = ACTIONS(423),
    [sym__class_store_cs] = ACTIONS(423),
    [sym__declare] = ACTIONS(423),
    [sym__alias] = ACTIONS(423),
    [sym__class_extends] = ACTIONS(423),
    [sym__class_constructor] = ACTIONS(423),
    [sym__var] = ACTIONS(423),
    [sym__property] = ACTIONS(423),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(423),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(423),
    [aux_sym__classic_array_blob_token1] = ACTIONS(423),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(423),
    [aux_sym__classic_array_date_token1] = ACTIONS(423),
    [aux_sym__classic_array_integer_token1] = ACTIONS(423),
    [aux_sym__classic_array_longint_token1] = ACTIONS(423),
    [aux_sym__classic_array_object_token1] = ACTIONS(423),
    [aux_sym__classic_array_picture_token1] = ACTIONS(423),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(423),
    [aux_sym__classic_array_real_token1] = ACTIONS(423),
    [aux_sym__classic_array_text_token1] = ACTIONS(423),
    [aux_sym__classic_array_time_token1] = ACTIONS(423),
    [sym__begin_sql_e] = ACTIONS(423),
    [sym__begin_sql_f] = ACTIONS(423),
    [anon_sym_PLUS] = ACTIONS(425),
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_SLASH] = ACTIONS(425),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_CARET] = ACTIONS(423),
    [anon_sym_TILDE_PIPE] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_EQ] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(425),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_QMARK_QMARK] = ACTIONS(423),
    [anon_sym_QMARK_PLUS] = ACTIONS(423),
    [anon_sym_QMARK_DASH] = ACTIONS(423),
    [anon_sym_PLUS_EQ] = ACTIONS(423),
    [anon_sym_DASH_EQ] = ACTIONS(423),
    [anon_sym_STAR_EQ] = ACTIONS(423),
    [anon_sym_SLASH_EQ] = ACTIONS(423),
    [anon_sym_COLON_EQ] = ACTIONS(423),
    [anon_sym_SLASH_STAR] = ACTIONS(423),
    [anon_sym_SLASH_SLASH] = ACTIONS(423),
    [sym_classic_command] = ACTIONS(423),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_QMARK] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(429),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(427),
    [sym__hex_literal] = ACTIONS(427),
    [aux_sym__dec_literal_token1] = ACTIONS(429),
    [aux_sym__num_literal_token1] = ACTIONS(429),
    [aux_sym__exp_literal_token1] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_DOLLAR] = ACTIONS(427),
    [anon_sym_LT_GT] = ACTIONS(427),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(427),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(427),
    [sym__local] = ACTIONS(427),
    [sym__exposed] = ACTIONS(427),
    [sym__function] = ACTIONS(427),
    [sym__class_store_4d] = ACTIONS(427),
    [sym__class_store_ds] = ACTIONS(427),
    [sym__class_store_cs] = ACTIONS(427),
    [sym__declare] = ACTIONS(427),
    [sym__alias] = ACTIONS(427),
    [sym__class_extends] = ACTIONS(427),
    [sym__class_constructor] = ACTIONS(427),
    [sym__var] = ACTIONS(427),
    [sym__property] = ACTIONS(427),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(427),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(427),
    [aux_sym__classic_array_blob_token1] = ACTIONS(427),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(427),
    [aux_sym__classic_array_date_token1] = ACTIONS(427),
    [aux_sym__classic_array_integer_token1] = ACTIONS(427),
    [aux_sym__classic_array_longint_token1] = ACTIONS(427),
    [aux_sym__classic_array_object_token1] = ACTIONS(427),
    [aux_sym__classic_array_picture_token1] = ACTIONS(427),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(427),
    [aux_sym__classic_array_real_token1] = ACTIONS(427),
    [aux_sym__classic_array_text_token1] = ACTIONS(427),
    [aux_sym__classic_array_time_token1] = ACTIONS(427),
    [sym__begin_sql_e] = ACTIONS(427),
    [sym__begin_sql_f] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_PIPE_PIPE] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(427),
    [anon_sym_TILDE_PIPE] = ACTIONS(427),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_GT_GT] = ACTIONS(427),
    [anon_sym_QMARK_QMARK] = ACTIONS(427),
    [anon_sym_QMARK_PLUS] = ACTIONS(427),
    [anon_sym_QMARK_DASH] = ACTIONS(427),
    [anon_sym_PLUS_EQ] = ACTIONS(427),
    [anon_sym_DASH_EQ] = ACTIONS(427),
    [anon_sym_STAR_EQ] = ACTIONS(427),
    [anon_sym_SLASH_EQ] = ACTIONS(427),
    [anon_sym_COLON_EQ] = ACTIONS(427),
    [anon_sym_SLASH_STAR] = ACTIONS(427),
    [anon_sym_SLASH_SLASH] = ACTIONS(427),
    [sym_classic_command] = ACTIONS(427),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(431),
    [sym__hex_literal] = ACTIONS(431),
    [aux_sym__dec_literal_token1] = ACTIONS(433),
    [aux_sym__num_literal_token1] = ACTIONS(433),
    [aux_sym__exp_literal_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_DOLLAR] = ACTIONS(431),
    [anon_sym_LT_GT] = ACTIONS(431),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(431),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(431),
    [sym__local] = ACTIONS(431),
    [sym__exposed] = ACTIONS(431),
    [sym__function] = ACTIONS(431),
    [sym__class_store_4d] = ACTIONS(431),
    [sym__class_store_ds] = ACTIONS(431),
    [sym__class_store_cs] = ACTIONS(431),
    [sym__declare] = ACTIONS(431),
    [sym__alias] = ACTIONS(431),
    [sym__class_extends] = ACTIONS(431),
    [sym__class_constructor] = ACTIONS(431),
    [sym__var] = ACTIONS(431),
    [sym__property] = ACTIONS(431),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(431),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(431),
    [aux_sym__classic_array_blob_token1] = ACTIONS(431),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(431),
    [aux_sym__classic_array_date_token1] = ACTIONS(431),
    [aux_sym__classic_array_integer_token1] = ACTIONS(431),
    [aux_sym__classic_array_longint_token1] = ACTIONS(431),
    [aux_sym__classic_array_object_token1] = ACTIONS(431),
    [aux_sym__classic_array_picture_token1] = ACTIONS(431),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(431),
    [aux_sym__classic_array_real_token1] = ACTIONS(431),
    [aux_sym__classic_array_text_token1] = ACTIONS(431),
    [aux_sym__classic_array_time_token1] = ACTIONS(431),
    [sym__begin_sql_e] = ACTIONS(431),
    [sym__begin_sql_f] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [anon_sym_AMP] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_CARET] = ACTIONS(431),
    [anon_sym_TILDE_PIPE] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_LT_LT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_QMARK_QMARK] = ACTIONS(431),
    [anon_sym_QMARK_PLUS] = ACTIONS(431),
    [anon_sym_QMARK_DASH] = ACTIONS(431),
    [anon_sym_PLUS_EQ] = ACTIONS(431),
    [anon_sym_DASH_EQ] = ACTIONS(431),
    [anon_sym_STAR_EQ] = ACTIONS(431),
    [anon_sym_SLASH_EQ] = ACTIONS(431),
    [anon_sym_COLON_EQ] = ACTIONS(431),
    [anon_sym_SLASH_STAR] = ACTIONS(431),
    [anon_sym_SLASH_SLASH] = ACTIONS(431),
    [sym_classic_command] = ACTIONS(431),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(435),
    [sym__hex_literal] = ACTIONS(435),
    [aux_sym__dec_literal_token1] = ACTIONS(437),
    [aux_sym__num_literal_token1] = ACTIONS(437),
    [aux_sym__exp_literal_token1] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(435),
    [anon_sym_LT_GT] = ACTIONS(435),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(435),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(435),
    [sym__local] = ACTIONS(435),
    [sym__exposed] = ACTIONS(435),
    [sym__function] = ACTIONS(435),
    [sym__class_store_4d] = ACTIONS(435),
    [sym__class_store_ds] = ACTIONS(435),
    [sym__class_store_cs] = ACTIONS(435),
    [sym__declare] = ACTIONS(435),
    [sym__alias] = ACTIONS(435),
    [sym__class_extends] = ACTIONS(435),
    [sym__class_constructor] = ACTIONS(435),
    [sym__var] = ACTIONS(435),
    [sym__property] = ACTIONS(435),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(435),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(435),
    [aux_sym__classic_array_blob_token1] = ACTIONS(435),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(435),
    [aux_sym__classic_array_date_token1] = ACTIONS(435),
    [aux_sym__classic_array_integer_token1] = ACTIONS(435),
    [aux_sym__classic_array_longint_token1] = ACTIONS(435),
    [aux_sym__classic_array_object_token1] = ACTIONS(435),
    [aux_sym__classic_array_picture_token1] = ACTIONS(435),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(435),
    [aux_sym__classic_array_real_token1] = ACTIONS(435),
    [aux_sym__classic_array_text_token1] = ACTIONS(435),
    [aux_sym__classic_array_time_token1] = ACTIONS(435),
    [sym__begin_sql_e] = ACTIONS(435),
    [sym__begin_sql_f] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(437),
    [anon_sym_STAR] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_CARET] = ACTIONS(435),
    [anon_sym_TILDE_PIPE] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_LT_LT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_QMARK_QMARK] = ACTIONS(435),
    [anon_sym_QMARK_PLUS] = ACTIONS(435),
    [anon_sym_QMARK_DASH] = ACTIONS(435),
    [anon_sym_PLUS_EQ] = ACTIONS(435),
    [anon_sym_DASH_EQ] = ACTIONS(435),
    [anon_sym_STAR_EQ] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(435),
    [anon_sym_COLON_EQ] = ACTIONS(435),
    [anon_sym_SLASH_STAR] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(435),
    [sym_classic_command] = ACTIONS(435),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_QMARK] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(439),
    [sym__hex_literal] = ACTIONS(439),
    [aux_sym__dec_literal_token1] = ACTIONS(441),
    [aux_sym__num_literal_token1] = ACTIONS(441),
    [aux_sym__exp_literal_token1] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_LT_GT] = ACTIONS(439),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(439),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(439),
    [sym__local] = ACTIONS(439),
    [sym__exposed] = ACTIONS(439),
    [sym__function] = ACTIONS(439),
    [sym__class_store_4d] = ACTIONS(439),
    [sym__class_store_ds] = ACTIONS(439),
    [sym__class_store_cs] = ACTIONS(439),
    [sym__declare] = ACTIONS(439),
    [sym__alias] = ACTIONS(439),
    [sym__class_extends] = ACTIONS(439),
    [sym__class_constructor] = ACTIONS(439),
    [sym__var] = ACTIONS(439),
    [sym__property] = ACTIONS(439),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(439),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(439),
    [aux_sym__classic_array_blob_token1] = ACTIONS(439),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(439),
    [aux_sym__classic_array_date_token1] = ACTIONS(439),
    [aux_sym__classic_array_integer_token1] = ACTIONS(439),
    [aux_sym__classic_array_longint_token1] = ACTIONS(439),
    [aux_sym__classic_array_object_token1] = ACTIONS(439),
    [aux_sym__classic_array_picture_token1] = ACTIONS(439),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(439),
    [aux_sym__classic_array_real_token1] = ACTIONS(439),
    [aux_sym__classic_array_text_token1] = ACTIONS(439),
    [aux_sym__classic_array_time_token1] = ACTIONS(439),
    [sym__begin_sql_e] = ACTIONS(439),
    [sym__begin_sql_f] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_TILDE_PIPE] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(441),
    [anon_sym_LT_LT] = ACTIONS(439),
    [anon_sym_GT_GT] = ACTIONS(439),
    [anon_sym_QMARK_QMARK] = ACTIONS(439),
    [anon_sym_QMARK_PLUS] = ACTIONS(439),
    [anon_sym_QMARK_DASH] = ACTIONS(439),
    [anon_sym_PLUS_EQ] = ACTIONS(439),
    [anon_sym_DASH_EQ] = ACTIONS(439),
    [anon_sym_STAR_EQ] = ACTIONS(439),
    [anon_sym_SLASH_EQ] = ACTIONS(439),
    [anon_sym_COLON_EQ] = ACTIONS(439),
    [anon_sym_SLASH_STAR] = ACTIONS(439),
    [anon_sym_SLASH_SLASH] = ACTIONS(439),
    [sym_classic_command] = ACTIONS(439),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(445),
    [anon_sym_BANG] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(443),
    [sym__hex_literal] = ACTIONS(443),
    [aux_sym__dec_literal_token1] = ACTIONS(445),
    [aux_sym__num_literal_token1] = ACTIONS(445),
    [aux_sym__exp_literal_token1] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_LT_GT] = ACTIONS(443),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(443),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(443),
    [sym__local] = ACTIONS(443),
    [sym__exposed] = ACTIONS(443),
    [sym__function] = ACTIONS(443),
    [sym__class_store_4d] = ACTIONS(443),
    [sym__class_store_ds] = ACTIONS(443),
    [sym__class_store_cs] = ACTIONS(443),
    [sym__declare] = ACTIONS(443),
    [sym__alias] = ACTIONS(443),
    [sym__class_extends] = ACTIONS(443),
    [sym__class_constructor] = ACTIONS(443),
    [sym__var] = ACTIONS(443),
    [sym__property] = ACTIONS(443),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(443),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(443),
    [aux_sym__classic_array_blob_token1] = ACTIONS(443),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(443),
    [aux_sym__classic_array_date_token1] = ACTIONS(443),
    [aux_sym__classic_array_integer_token1] = ACTIONS(443),
    [aux_sym__classic_array_longint_token1] = ACTIONS(443),
    [aux_sym__classic_array_object_token1] = ACTIONS(443),
    [aux_sym__classic_array_picture_token1] = ACTIONS(443),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(443),
    [aux_sym__classic_array_real_token1] = ACTIONS(443),
    [aux_sym__classic_array_text_token1] = ACTIONS(443),
    [aux_sym__classic_array_time_token1] = ACTIONS(443),
    [sym__begin_sql_e] = ACTIONS(443),
    [sym__begin_sql_f] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_TILDE_PIPE] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(445),
    [anon_sym_LT_LT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(443),
    [anon_sym_QMARK_QMARK] = ACTIONS(443),
    [anon_sym_QMARK_PLUS] = ACTIONS(443),
    [anon_sym_QMARK_DASH] = ACTIONS(443),
    [anon_sym_PLUS_EQ] = ACTIONS(443),
    [anon_sym_DASH_EQ] = ACTIONS(443),
    [anon_sym_STAR_EQ] = ACTIONS(443),
    [anon_sym_SLASH_EQ] = ACTIONS(443),
    [anon_sym_COLON_EQ] = ACTIONS(443),
    [anon_sym_SLASH_STAR] = ACTIONS(443),
    [anon_sym_SLASH_SLASH] = ACTIONS(443),
    [sym_classic_command] = ACTIONS(443),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_BANG] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(447),
    [sym__hex_literal] = ACTIONS(447),
    [aux_sym__dec_literal_token1] = ACTIONS(449),
    [aux_sym__num_literal_token1] = ACTIONS(449),
    [aux_sym__exp_literal_token1] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_LT_GT] = ACTIONS(447),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(447),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(447),
    [sym__local] = ACTIONS(447),
    [sym__exposed] = ACTIONS(447),
    [sym__function] = ACTIONS(447),
    [sym__class_store_4d] = ACTIONS(447),
    [sym__class_store_ds] = ACTIONS(447),
    [sym__class_store_cs] = ACTIONS(447),
    [sym__declare] = ACTIONS(447),
    [sym__alias] = ACTIONS(447),
    [sym__class_extends] = ACTIONS(447),
    [sym__class_constructor] = ACTIONS(447),
    [sym__var] = ACTIONS(447),
    [sym__property] = ACTIONS(447),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(447),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(447),
    [aux_sym__classic_array_blob_token1] = ACTIONS(447),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(447),
    [aux_sym__classic_array_date_token1] = ACTIONS(447),
    [aux_sym__classic_array_integer_token1] = ACTIONS(447),
    [aux_sym__classic_array_longint_token1] = ACTIONS(447),
    [aux_sym__classic_array_object_token1] = ACTIONS(447),
    [aux_sym__classic_array_picture_token1] = ACTIONS(447),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(447),
    [aux_sym__classic_array_real_token1] = ACTIONS(447),
    [aux_sym__classic_array_text_token1] = ACTIONS(447),
    [aux_sym__classic_array_time_token1] = ACTIONS(447),
    [sym__begin_sql_e] = ACTIONS(447),
    [sym__begin_sql_f] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_CARET] = ACTIONS(447),
    [anon_sym_TILDE_PIPE] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(449),
    [anon_sym_LT_LT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(447),
    [anon_sym_QMARK_QMARK] = ACTIONS(447),
    [anon_sym_QMARK_PLUS] = ACTIONS(447),
    [anon_sym_QMARK_DASH] = ACTIONS(447),
    [anon_sym_PLUS_EQ] = ACTIONS(447),
    [anon_sym_DASH_EQ] = ACTIONS(447),
    [anon_sym_STAR_EQ] = ACTIONS(447),
    [anon_sym_SLASH_EQ] = ACTIONS(447),
    [anon_sym_COLON_EQ] = ACTIONS(447),
    [anon_sym_SLASH_STAR] = ACTIONS(447),
    [anon_sym_SLASH_SLASH] = ACTIONS(447),
    [sym_classic_command] = ACTIONS(447),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_QMARK] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(451),
    [sym__hex_literal] = ACTIONS(451),
    [aux_sym__dec_literal_token1] = ACTIONS(453),
    [aux_sym__num_literal_token1] = ACTIONS(453),
    [aux_sym__exp_literal_token1] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(451),
    [anon_sym_LT_GT] = ACTIONS(451),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(451),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(451),
    [sym__local] = ACTIONS(451),
    [sym__exposed] = ACTIONS(451),
    [sym__function] = ACTIONS(451),
    [sym__class_store_4d] = ACTIONS(451),
    [sym__class_store_ds] = ACTIONS(451),
    [sym__class_store_cs] = ACTIONS(451),
    [sym__declare] = ACTIONS(451),
    [sym__alias] = ACTIONS(451),
    [sym__class_extends] = ACTIONS(451),
    [sym__class_constructor] = ACTIONS(451),
    [sym__var] = ACTIONS(451),
    [sym__property] = ACTIONS(451),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(451),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(451),
    [aux_sym__classic_array_blob_token1] = ACTIONS(451),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(451),
    [aux_sym__classic_array_date_token1] = ACTIONS(451),
    [aux_sym__classic_array_integer_token1] = ACTIONS(451),
    [aux_sym__classic_array_longint_token1] = ACTIONS(451),
    [aux_sym__classic_array_object_token1] = ACTIONS(451),
    [aux_sym__classic_array_picture_token1] = ACTIONS(451),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(451),
    [aux_sym__classic_array_real_token1] = ACTIONS(451),
    [aux_sym__classic_array_text_token1] = ACTIONS(451),
    [aux_sym__classic_array_time_token1] = ACTIONS(451),
    [sym__begin_sql_e] = ACTIONS(451),
    [sym__begin_sql_f] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(451),
    [anon_sym_PIPE_PIPE] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_CARET] = ACTIONS(451),
    [anon_sym_TILDE_PIPE] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_GT_GT] = ACTIONS(451),
    [anon_sym_QMARK_QMARK] = ACTIONS(451),
    [anon_sym_QMARK_PLUS] = ACTIONS(451),
    [anon_sym_QMARK_DASH] = ACTIONS(451),
    [anon_sym_PLUS_EQ] = ACTIONS(451),
    [anon_sym_DASH_EQ] = ACTIONS(451),
    [anon_sym_STAR_EQ] = ACTIONS(451),
    [anon_sym_SLASH_EQ] = ACTIONS(451),
    [anon_sym_COLON_EQ] = ACTIONS(451),
    [anon_sym_SLASH_STAR] = ACTIONS(451),
    [anon_sym_SLASH_SLASH] = ACTIONS(451),
    [sym_classic_command] = ACTIONS(451),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(455),
    [sym__hex_literal] = ACTIONS(455),
    [aux_sym__dec_literal_token1] = ACTIONS(457),
    [aux_sym__num_literal_token1] = ACTIONS(457),
    [aux_sym__exp_literal_token1] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_LT_GT] = ACTIONS(455),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(455),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(455),
    [sym__local] = ACTIONS(455),
    [sym__exposed] = ACTIONS(455),
    [sym__function] = ACTIONS(455),
    [sym__class_store_4d] = ACTIONS(455),
    [sym__class_store_ds] = ACTIONS(455),
    [sym__class_store_cs] = ACTIONS(455),
    [sym__declare] = ACTIONS(455),
    [sym__alias] = ACTIONS(455),
    [sym__class_extends] = ACTIONS(455),
    [sym__class_constructor] = ACTIONS(455),
    [sym__var] = ACTIONS(455),
    [sym__property] = ACTIONS(455),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(455),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(455),
    [aux_sym__classic_array_blob_token1] = ACTIONS(455),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(455),
    [aux_sym__classic_array_date_token1] = ACTIONS(455),
    [aux_sym__classic_array_integer_token1] = ACTIONS(455),
    [aux_sym__classic_array_longint_token1] = ACTIONS(455),
    [aux_sym__classic_array_object_token1] = ACTIONS(455),
    [aux_sym__classic_array_picture_token1] = ACTIONS(455),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(455),
    [aux_sym__classic_array_real_token1] = ACTIONS(455),
    [aux_sym__classic_array_text_token1] = ACTIONS(455),
    [aux_sym__classic_array_time_token1] = ACTIONS(455),
    [sym__begin_sql_e] = ACTIONS(455),
    [sym__begin_sql_f] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(455),
    [anon_sym_TILDE_PIPE] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_QMARK_QMARK] = ACTIONS(455),
    [anon_sym_QMARK_PLUS] = ACTIONS(455),
    [anon_sym_QMARK_DASH] = ACTIONS(455),
    [anon_sym_PLUS_EQ] = ACTIONS(455),
    [anon_sym_DASH_EQ] = ACTIONS(455),
    [anon_sym_STAR_EQ] = ACTIONS(455),
    [anon_sym_SLASH_EQ] = ACTIONS(455),
    [anon_sym_COLON_EQ] = ACTIONS(455),
    [anon_sym_SLASH_STAR] = ACTIONS(455),
    [anon_sym_SLASH_SLASH] = ACTIONS(455),
    [sym_classic_command] = ACTIONS(455),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(459),
    [sym__hex_literal] = ACTIONS(459),
    [aux_sym__dec_literal_token1] = ACTIONS(461),
    [aux_sym__num_literal_token1] = ACTIONS(461),
    [aux_sym__exp_literal_token1] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_LT_GT] = ACTIONS(459),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(459),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(459),
    [sym__local] = ACTIONS(459),
    [sym__exposed] = ACTIONS(459),
    [sym__function] = ACTIONS(459),
    [sym__class_store_4d] = ACTIONS(459),
    [sym__class_store_ds] = ACTIONS(459),
    [sym__class_store_cs] = ACTIONS(459),
    [sym__declare] = ACTIONS(459),
    [sym__alias] = ACTIONS(459),
    [sym__class_extends] = ACTIONS(459),
    [sym__class_constructor] = ACTIONS(459),
    [sym__var] = ACTIONS(459),
    [sym__property] = ACTIONS(459),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(459),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(459),
    [aux_sym__classic_array_blob_token1] = ACTIONS(459),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(459),
    [aux_sym__classic_array_date_token1] = ACTIONS(459),
    [aux_sym__classic_array_integer_token1] = ACTIONS(459),
    [aux_sym__classic_array_longint_token1] = ACTIONS(459),
    [aux_sym__classic_array_object_token1] = ACTIONS(459),
    [aux_sym__classic_array_picture_token1] = ACTIONS(459),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(459),
    [aux_sym__classic_array_real_token1] = ACTIONS(459),
    [aux_sym__classic_array_text_token1] = ACTIONS(459),
    [aux_sym__classic_array_time_token1] = ACTIONS(459),
    [sym__begin_sql_e] = ACTIONS(459),
    [sym__begin_sql_f] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(459),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(459),
    [anon_sym_TILDE_PIPE] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_LT_LT] = ACTIONS(459),
    [anon_sym_GT_GT] = ACTIONS(459),
    [anon_sym_QMARK_QMARK] = ACTIONS(459),
    [anon_sym_QMARK_PLUS] = ACTIONS(459),
    [anon_sym_QMARK_DASH] = ACTIONS(459),
    [anon_sym_PLUS_EQ] = ACTIONS(459),
    [anon_sym_DASH_EQ] = ACTIONS(459),
    [anon_sym_STAR_EQ] = ACTIONS(459),
    [anon_sym_SLASH_EQ] = ACTIONS(459),
    [anon_sym_COLON_EQ] = ACTIONS(459),
    [anon_sym_SLASH_STAR] = ACTIONS(459),
    [anon_sym_SLASH_SLASH] = ACTIONS(459),
    [sym_classic_command] = ACTIONS(459),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(465),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(463),
    [sym__hex_literal] = ACTIONS(463),
    [aux_sym__dec_literal_token1] = ACTIONS(465),
    [aux_sym__num_literal_token1] = ACTIONS(465),
    [aux_sym__exp_literal_token1] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(463),
    [anon_sym_LT_GT] = ACTIONS(463),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(463),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(463),
    [sym__local] = ACTIONS(463),
    [sym__exposed] = ACTIONS(463),
    [sym__function] = ACTIONS(463),
    [sym__class_store_4d] = ACTIONS(463),
    [sym__class_store_ds] = ACTIONS(463),
    [sym__class_store_cs] = ACTIONS(463),
    [sym__declare] = ACTIONS(463),
    [sym__alias] = ACTIONS(463),
    [sym__class_extends] = ACTIONS(463),
    [sym__class_constructor] = ACTIONS(463),
    [sym__var] = ACTIONS(463),
    [sym__property] = ACTIONS(463),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(463),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(463),
    [aux_sym__classic_array_blob_token1] = ACTIONS(463),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(463),
    [aux_sym__classic_array_date_token1] = ACTIONS(463),
    [aux_sym__classic_array_integer_token1] = ACTIONS(463),
    [aux_sym__classic_array_longint_token1] = ACTIONS(463),
    [aux_sym__classic_array_object_token1] = ACTIONS(463),
    [aux_sym__classic_array_picture_token1] = ACTIONS(463),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(463),
    [aux_sym__classic_array_real_token1] = ACTIONS(463),
    [aux_sym__classic_array_text_token1] = ACTIONS(463),
    [aux_sym__classic_array_time_token1] = ACTIONS(463),
    [sym__begin_sql_e] = ACTIONS(463),
    [sym__begin_sql_f] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_CARET] = ACTIONS(463),
    [anon_sym_TILDE_PIPE] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_EQ] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_QMARK_QMARK] = ACTIONS(463),
    [anon_sym_QMARK_PLUS] = ACTIONS(463),
    [anon_sym_QMARK_DASH] = ACTIONS(463),
    [anon_sym_PLUS_EQ] = ACTIONS(463),
    [anon_sym_DASH_EQ] = ACTIONS(463),
    [anon_sym_STAR_EQ] = ACTIONS(463),
    [anon_sym_SLASH_EQ] = ACTIONS(463),
    [anon_sym_COLON_EQ] = ACTIONS(463),
    [anon_sym_SLASH_STAR] = ACTIONS(463),
    [anon_sym_SLASH_SLASH] = ACTIONS(463),
    [sym_classic_command] = ACTIONS(463),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(467),
    [sym__hex_literal] = ACTIONS(467),
    [aux_sym__dec_literal_token1] = ACTIONS(469),
    [aux_sym__num_literal_token1] = ACTIONS(469),
    [aux_sym__exp_literal_token1] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(467),
    [anon_sym_LT_GT] = ACTIONS(467),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(467),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(467),
    [sym__local] = ACTIONS(467),
    [sym__exposed] = ACTIONS(467),
    [sym__function] = ACTIONS(467),
    [sym__class_store_4d] = ACTIONS(467),
    [sym__class_store_ds] = ACTIONS(467),
    [sym__class_store_cs] = ACTIONS(467),
    [sym__declare] = ACTIONS(467),
    [sym__alias] = ACTIONS(467),
    [sym__class_extends] = ACTIONS(467),
    [sym__class_constructor] = ACTIONS(467),
    [sym__var] = ACTIONS(467),
    [sym__property] = ACTIONS(467),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(467),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(467),
    [aux_sym__classic_array_blob_token1] = ACTIONS(467),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(467),
    [aux_sym__classic_array_date_token1] = ACTIONS(467),
    [aux_sym__classic_array_integer_token1] = ACTIONS(467),
    [aux_sym__classic_array_longint_token1] = ACTIONS(467),
    [aux_sym__classic_array_object_token1] = ACTIONS(467),
    [aux_sym__classic_array_picture_token1] = ACTIONS(467),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(467),
    [aux_sym__classic_array_real_token1] = ACTIONS(467),
    [aux_sym__classic_array_text_token1] = ACTIONS(467),
    [aux_sym__classic_array_time_token1] = ACTIONS(467),
    [sym__begin_sql_e] = ACTIONS(467),
    [sym__begin_sql_f] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_CARET] = ACTIONS(467),
    [anon_sym_TILDE_PIPE] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(469),
    [anon_sym_LT_LT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_QMARK_QMARK] = ACTIONS(467),
    [anon_sym_QMARK_PLUS] = ACTIONS(467),
    [anon_sym_QMARK_DASH] = ACTIONS(467),
    [anon_sym_PLUS_EQ] = ACTIONS(467),
    [anon_sym_DASH_EQ] = ACTIONS(467),
    [anon_sym_STAR_EQ] = ACTIONS(467),
    [anon_sym_SLASH_EQ] = ACTIONS(467),
    [anon_sym_COLON_EQ] = ACTIONS(467),
    [anon_sym_SLASH_STAR] = ACTIONS(467),
    [anon_sym_SLASH_SLASH] = ACTIONS(467),
    [sym_classic_command] = ACTIONS(467),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(471),
    [sym__hex_literal] = ACTIONS(471),
    [aux_sym__dec_literal_token1] = ACTIONS(473),
    [aux_sym__num_literal_token1] = ACTIONS(473),
    [aux_sym__exp_literal_token1] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_LT_GT] = ACTIONS(471),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(471),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(471),
    [sym__local] = ACTIONS(471),
    [sym__exposed] = ACTIONS(471),
    [sym__function] = ACTIONS(471),
    [sym__class_store_4d] = ACTIONS(471),
    [sym__class_store_ds] = ACTIONS(471),
    [sym__class_store_cs] = ACTIONS(471),
    [sym__declare] = ACTIONS(471),
    [sym__alias] = ACTIONS(471),
    [sym__class_extends] = ACTIONS(471),
    [sym__class_constructor] = ACTIONS(471),
    [sym__var] = ACTIONS(471),
    [sym__property] = ACTIONS(471),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(471),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(471),
    [aux_sym__classic_array_blob_token1] = ACTIONS(471),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(471),
    [aux_sym__classic_array_date_token1] = ACTIONS(471),
    [aux_sym__classic_array_integer_token1] = ACTIONS(471),
    [aux_sym__classic_array_longint_token1] = ACTIONS(471),
    [aux_sym__classic_array_object_token1] = ACTIONS(471),
    [aux_sym__classic_array_picture_token1] = ACTIONS(471),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(471),
    [aux_sym__classic_array_real_token1] = ACTIONS(471),
    [aux_sym__classic_array_text_token1] = ACTIONS(471),
    [aux_sym__classic_array_time_token1] = ACTIONS(471),
    [sym__begin_sql_e] = ACTIONS(471),
    [sym__begin_sql_f] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_CARET] = ACTIONS(471),
    [anon_sym_TILDE_PIPE] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(473),
    [anon_sym_LT_LT] = ACTIONS(471),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_QMARK_QMARK] = ACTIONS(471),
    [anon_sym_QMARK_PLUS] = ACTIONS(471),
    [anon_sym_QMARK_DASH] = ACTIONS(471),
    [anon_sym_PLUS_EQ] = ACTIONS(471),
    [anon_sym_DASH_EQ] = ACTIONS(471),
    [anon_sym_STAR_EQ] = ACTIONS(471),
    [anon_sym_SLASH_EQ] = ACTIONS(471),
    [anon_sym_COLON_EQ] = ACTIONS(471),
    [anon_sym_SLASH_STAR] = ACTIONS(471),
    [anon_sym_SLASH_SLASH] = ACTIONS(471),
    [sym_classic_command] = ACTIONS(471),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_BANG00_DASH00_DASH00_BANG] = ACTIONS(378),
    [sym__hex_literal] = ACTIONS(378),
    [aux_sym__dec_literal_token1] = ACTIONS(380),
    [aux_sym__num_literal_token1] = ACTIONS(380),
    [aux_sym__exp_literal_token1] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_LT_GT] = ACTIONS(378),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(378),
    [sym__local] = ACTIONS(378),
    [sym__exposed] = ACTIONS(378),
    [sym__function] = ACTIONS(378),
    [sym__class_store_4d] = ACTIONS(378),
    [sym__class_store_ds] = ACTIONS(378),
    [sym__class_store_cs] = ACTIONS(378),
    [sym__declare] = ACTIONS(378),
    [sym__alias] = ACTIONS(378),
    [sym__class_extends] = ACTIONS(378),
    [sym__class_constructor] = ACTIONS(378),
    [sym__var] = ACTIONS(378),
    [sym__property] = ACTIONS(378),
    [aux_sym__classic_compiler_blob_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_boolean_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_collection_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_date_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_longint_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_object_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_picture_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_pointer_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_real_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_text_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_time_token1] = ACTIONS(378),
    [aux_sym__classic_compiler_variant_token1] = ACTIONS(378),
    [aux_sym__classic_array_blob_token1] = ACTIONS(378),
    [aux_sym__classic_array_boolean_token1] = ACTIONS(378),
    [aux_sym__classic_array_date_token1] = ACTIONS(378),
    [aux_sym__classic_array_integer_token1] = ACTIONS(378),
    [aux_sym__classic_array_longint_token1] = ACTIONS(378),
    [aux_sym__classic_array_object_token1] = ACTIONS(378),
    [aux_sym__classic_array_picture_token1] = ACTIONS(378),
    [aux_sym__classic_array_pointer_token1] = ACTIONS(378),
    [aux_sym__classic_array_real_token1] = ACTIONS(378),
    [aux_sym__classic_array_text_token1] = ACTIONS(378),
    [aux_sym__classic_array_time_token1] = ACTIONS(378),
    [sym__begin_sql_e] = ACTIONS(378),
    [sym__begin_sql_f] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(380),
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
    [anon_sym_COLON_EQ] = ACTIONS(378),
    [anon_sym_SLASH_STAR] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [sym_classic_command] = ACTIONS(378),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(475), 1,
      sym_command_suffix,
    ACTIONS(348), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(346), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [64] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_class_repeat1,
    ACTIONS(479), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(477), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [130] = 4,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_class_repeat1,
    ACTIONS(485), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(483), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [196] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_class_repeat1,
    ACTIONS(492), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(490), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [262] = 4,
    ACTIONS(498), 1,
      anon_sym_DASH_GT,
    STATE(62), 1,
      sym_function_result,
    ACTIONS(496), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(494), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [328] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_class_repeat1,
    ACTIONS(502), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(500), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [394] = 4,
    ACTIONS(498), 1,
      anon_sym_DASH_GT,
    STATE(61), 1,
      sym_function_result,
    ACTIONS(506), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(504), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [460] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_class_repeat1,
    ACTIONS(510), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(508), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [526] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_class_repeat1,
    ACTIONS(514), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(512), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [592] = 4,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_class_repeat1,
    ACTIONS(518), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(516), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [658] = 2,
    ACTIONS(360), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(358), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [719] = 2,
    ACTIONS(522), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(520), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DASH_GT,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [780] = 2,
    ACTIONS(526), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(524), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DASH_GT,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [841] = 2,
    ACTIONS(485), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(483), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [902] = 2,
    ACTIONS(530), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(528), 51,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DASH_GT,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [963] = 2,
    ACTIONS(534), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(532), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1023] = 2,
    ACTIONS(538), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(536), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1083] = 2,
    ACTIONS(542), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(540), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1143] = 2,
    ACTIONS(546), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(544), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1203] = 2,
    ACTIONS(550), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(548), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1263] = 2,
    ACTIONS(554), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(552), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1323] = 2,
    ACTIONS(479), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(477), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1383] = 2,
    ACTIONS(558), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(556), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1443] = 2,
    ACTIONS(562), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(560), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1503] = 2,
    ACTIONS(566), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(564), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1563] = 2,
    ACTIONS(570), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(568), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1623] = 2,
    ACTIONS(574), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(572), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1683] = 2,
    ACTIONS(578), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(576), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1743] = 2,
    ACTIONS(582), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(580), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1803] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(584), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1863] = 2,
    ACTIONS(590), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(588), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1923] = 2,
    ACTIONS(594), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(592), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [1983] = 2,
    ACTIONS(598), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(596), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [2043] = 2,
    ACTIONS(602), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(600), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [2103] = 2,
    ACTIONS(606), 5,
      anon_sym_BANG,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(604), 50,
      sym_classic_command,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_BANG00_DASH00_DASH00_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__local,
      sym__exposed,
      sym__function,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      sym__declare,
      sym__alias,
      sym__class_extends,
      sym__class_constructor,
      sym__var,
      sym__property,
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
      sym__begin_sql_e,
      sym__begin_sql_f,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [2163] = 26,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      sym__name,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(632), 1,
      sym__class_store_4d,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(147), 1,
      sym_value,
    STATE(151), 1,
      sym_local_variable,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(634), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 7,
      sym_constant,
      sym_classsic_command_expression,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2258] = 26,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(632), 1,
      sym__class_store_4d,
    ACTIONS(636), 1,
      sym_classic_command,
    ACTIONS(638), 1,
      sym__name,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(140), 1,
      sym_value,
    STATE(141), 1,
      sym_local_variable,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(634), 2,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 7,
      sym_constant,
      sym_classsic_command_expression,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2353] = 23,
    ACTIONS(5), 1,
      anon_sym_QMARK,
    ACTIONS(7), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_LT_GT,
    ACTIONS(99), 1,
      sym_classic_command,
    STATE(8), 1,
      sym_local_variable_name,
    STATE(9), 1,
      sym_interprocess_variable_name,
    STATE(10), 1,
      sym_numeric_parameter_name,
    STATE(11), 1,
      sym_class_name,
    STATE(18), 1,
      sym__class_store,
    STATE(28), 1,
      sym_value,
    ACTIONS(11), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(13), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(25), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(34), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(33), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(32), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(29), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(36), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2441] = 23,
    ACTIONS(5), 1,
      anon_sym_QMARK,
    ACTIONS(7), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_LT_GT,
    ACTIONS(99), 1,
      sym_classic_command,
    STATE(8), 1,
      sym_local_variable_name,
    STATE(9), 1,
      sym_interprocess_variable_name,
    STATE(10), 1,
      sym_numeric_parameter_name,
    STATE(11), 1,
      sym_class_name,
    STATE(18), 1,
      sym__class_store,
    STATE(26), 1,
      sym_value,
    ACTIONS(11), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(13), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(25), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(34), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(33), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(32), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(29), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(36), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2529] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(145), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2617] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(136), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2705] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(139), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2793] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(146), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2881] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(150), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [2969] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(138), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3057] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(135), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3145] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(137), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3233] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(142), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3321] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(148), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3409] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(149), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3497] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(143), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3585] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(119), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3673] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(120), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3761] = 23,
    ACTIONS(608), 1,
      anon_sym_QMARK,
    ACTIONS(610), 1,
      anon_sym_BANG,
    ACTIONS(612), 1,
      anon_sym_BANG00_DASH00_DASH00_BANG,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      anon_sym_LT_GT,
    ACTIONS(636), 1,
      sym_classic_command,
    STATE(97), 1,
      sym_interprocess_variable_name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(100), 1,
      sym_numeric_parameter_name,
    STATE(101), 1,
      sym_class_name,
    STATE(108), 1,
      sym__class_store,
    STATE(144), 1,
      sym_value,
    ACTIONS(614), 2,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
    ACTIONS(616), 2,
      aux_sym__dec_literal_token1,
      aux_sym__num_literal_token1,
    ACTIONS(630), 2,
      anon_sym_LBRACE_RBRACE,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 2,
      sym__object_literal_block,
      sym__collection_literal_block,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    STATE(124), 3,
      sym__dec_literal,
      sym__num_literal,
      sym__exp_literal,
    STATE(125), 4,
      sym_time,
      sym_date,
      sym_number,
      sym_string,
    STATE(126), 8,
      sym_constant,
      sym_classsic_command_expression,
      sym_local_variable,
      sym_interprocess_variable,
      sym_numeric_parameter,
      sym_class_instance,
      sym_ternary_block,
      sym_literal_block,
  [3849] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(103), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(305), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [3904] = 8,
    ACTIONS(650), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(329), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [3959] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(102), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(295), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4014] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(104), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(315), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4069] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(105), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(319), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4124] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(285), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4179] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(275), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4234] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(267), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4289] = 8,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_expression_argument,
      sym__node,
      aux_sym_local_variable_repeat1,
    ACTIONS(251), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4344] = 3,
    ACTIONS(665), 1,
      sym_command_suffix,
    ACTIONS(348), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(346), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4387] = 2,
    ACTIONS(384), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(382), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4427] = 2,
    ACTIONS(372), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4467] = 2,
    ACTIONS(388), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4507] = 2,
    ACTIONS(392), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(390), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4547] = 2,
    ACTIONS(376), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(374), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4587] = 2,
    ACTIONS(368), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(366), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4627] = 2,
    ACTIONS(400), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4667] = 2,
    ACTIONS(360), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(358), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4707] = 2,
    ACTIONS(396), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(394), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4747] = 2,
    ACTIONS(364), 11,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(362), 24,
      anon_sym_LPAREN_RPAREN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4787] = 6,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(667), 1,
      sym_command_suffix,
    STATE(133), 1,
      sym_expression_argument,
    ACTIONS(354), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4834] = 5,
    ACTIONS(640), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_expression_argument,
    ACTIONS(380), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(378), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4878] = 3,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(421), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4916] = 6,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(402), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [4960] = 2,
    ACTIONS(449), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(447), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [4995] = 2,
    ACTIONS(473), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5030] = 2,
    ACTIONS(429), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(427), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5065] = 2,
    ACTIONS(437), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(435), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5100] = 2,
    ACTIONS(425), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5135] = 2,
    ACTIONS(453), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(451), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5170] = 2,
    ACTIONS(445), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5205] = 2,
    ACTIONS(441), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5240] = 2,
    ACTIONS(469), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(467), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5275] = 2,
    ACTIONS(461), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(459), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5310] = 2,
    ACTIONS(433), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(431), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5345] = 2,
    ACTIONS(465), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5380] = 2,
    ACTIONS(380), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(378), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5415] = 2,
    ACTIONS(457), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
      anon_sym_COLON_EQ,
  [5450] = 7,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym__binary_operator,
    STATE(187), 1,
      aux_sym_expression_argument_repeat1,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5494] = 7,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__binary_operator,
    STATE(192), 1,
      aux_sym_expression_argument_repeat1,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5538] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(681), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5578] = 7,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__binary_operator,
    STATE(186), 1,
      aux_sym_expression_argument_repeat1,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5622] = 7,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym__binary_operator,
    STATE(191), 1,
      aux_sym_expression_argument_repeat1,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5666] = 6,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5707] = 4,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 9,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(451), 16,
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
      anon_sym_COLON_EQ,
  [5743] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5781] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5819] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(695), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5857] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5895] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5933] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [5971] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [6009] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [6047] = 5,
    ACTIONS(669), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym__binary_operator,
    ACTIONS(671), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 16,
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
      anon_sym_COLON_EQ,
  [6085] = 3,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 9,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(451), 16,
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
      anon_sym_COLON_EQ,
  [6118] = 5,
    STATE(174), 1,
      sym__class_store,
    STATE(218), 1,
      sym_class,
    STATE(220), 1,
      sym__basic_type,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(705), 12,
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
  [6147] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(59), 1,
      sym_class,
    STATE(64), 1,
      sym__basic_type,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6176] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(58), 1,
      sym_class,
    STATE(64), 1,
      sym__basic_type,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6205] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(64), 1,
      sym__basic_type,
    STATE(71), 1,
      sym_class,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6234] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(64), 1,
      sym__basic_type,
    STATE(73), 1,
      sym_class,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6263] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(64), 1,
      sym__basic_type,
    STATE(72), 1,
      sym_class,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6292] = 5,
    STATE(174), 1,
      sym__class_store,
    STATE(220), 1,
      sym__basic_type,
    STATE(236), 1,
      sym_class,
    ACTIONS(632), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(705), 12,
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
  [6321] = 5,
    STATE(44), 1,
      sym__class_store,
    STATE(64), 1,
      sym__basic_type,
    STATE(70), 1,
      sym_class,
    ACTIONS(707), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(709), 12,
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
  [6350] = 3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_string_repeat1,
    ACTIONS(713), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6365] = 3,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_string_repeat1,
    ACTIONS(713), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6380] = 3,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(719), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6395] = 3,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat1,
    ACTIONS(723), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6410] = 3,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_string_repeat1,
    ACTIONS(727), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [6425] = 4,
    ACTIONS(732), 1,
      aux_sym_sql_injection_block_token1,
    STATE(68), 1,
      sym_end_sql,
    STATE(178), 1,
      aux_sym_sql_injection_block_repeat1,
    ACTIONS(730), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6439] = 5,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(181), 1,
      sym__function_argument,
    STATE(185), 1,
      sym_local_variable,
  [6455] = 4,
    ACTIONS(738), 1,
      aux_sym_sql_injection_block_token1,
    STATE(75), 1,
      sym_end_sql,
    STATE(165), 1,
      aux_sym_sql_injection_block_repeat1,
    ACTIONS(730), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6469] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    ACTIONS(740), 1,
      sym__name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(189), 1,
      sym_local_variable,
  [6482] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(185), 1,
      sym_local_variable,
    STATE(222), 1,
      sym__function_argument,
  [6495] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym__name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(335), 1,
      sym_local_variable,
  [6508] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym__function_argument,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(184), 1,
      sym_local_variable,
  [6521] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    ACTIONS(744), 1,
      sym__name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(183), 1,
      sym_local_variable,
  [6534] = 3,
    ACTIONS(746), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_class_repeat1,
    ACTIONS(483), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6545] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_class_repeat1,
    ACTIONS(477), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6556] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    ACTIONS(751), 1,
      sym__name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(210), 1,
      sym_local_variable,
  [6569] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_class_repeat1,
    ACTIONS(516), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6580] = 4,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    ACTIONS(753), 1,
      sym__name,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(228), 1,
      sym_local_variable,
  [6593] = 3,
    ACTIONS(757), 1,
      aux_sym_sql_injection_block_token1,
    STATE(178), 1,
      aux_sym_sql_injection_block_repeat1,
    ACTIONS(755), 2,
      sym__end_sql_e,
      sym__end_sql_f,
  [6604] = 3,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      aux_sym_expression_argument_repeat1,
    ACTIONS(681), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6615] = 3,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(765), 1,
      sym__name,
    STATE(180), 1,
      aux_sym_function_name_repeat1,
  [6625] = 3,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_function_arguments_repeat1,
  [6635] = 3,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(774), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_property_declaration_block_repeat1,
  [6645] = 3,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6655] = 3,
    ACTIONS(780), 1,
      anon_sym_COLON,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym__function_argument_repeat1,
  [6665] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_COLON,
    STATE(197), 1,
      aux_sym__function_argument_repeat1,
  [6675] = 3,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_expression_argument_repeat1,
  [6685] = 3,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_expression_argument_repeat1,
  [6695] = 3,
    ACTIONS(774), 1,
      anon_sym_SEMI,
    ACTIONS(790), 1,
      anon_sym_COLON,
    STATE(182), 1,
      aux_sym_property_declaration_block_repeat1,
  [6705] = 3,
    ACTIONS(792), 1,
      anon_sym_COLON,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym_var_declaration_block_repeat1,
  [6715] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      anon_sym_COLON,
    STATE(206), 1,
      aux_sym__function_argument_repeat1,
  [6725] = 3,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_expression_argument_repeat1,
  [6735] = 3,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_expression_argument_repeat1,
  [6745] = 1,
    ACTIONS(802), 3,
      sym__end_sql_e,
      sym__end_sql_f,
      aux_sym_sql_injection_block_token1,
  [6751] = 3,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym__name,
    STATE(180), 1,
      aux_sym_function_name_repeat1,
  [6761] = 3,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym__name,
    STATE(198), 1,
      aux_sym_function_name_repeat1,
  [6771] = 3,
    ACTIONS(736), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym_local_variable_name,
    STATE(219), 1,
      sym_local_variable,
  [6781] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      anon_sym_COLON,
    STATE(206), 1,
      aux_sym__function_argument_repeat1,
  [6791] = 3,
    ACTIONS(806), 1,
      sym__name,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      aux_sym_function_name_repeat1,
  [6801] = 3,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_function_arguments_repeat1,
  [6811] = 1,
    ACTIONS(483), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [6817] = 3,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym__name,
    STATE(194), 1,
      aux_sym_function_name_repeat1,
  [6827] = 3,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    ACTIONS(820), 1,
      anon_sym_COLON,
    STATE(205), 1,
      aux_sym_var_declaration_block_repeat1,
  [6837] = 3,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6847] = 3,
    ACTIONS(827), 1,
      anon_sym_SEMI,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_function_arguments_repeat1,
  [6857] = 3,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      aux_sym_var_declaration_block_repeat1,
  [6867] = 3,
    ACTIONS(837), 1,
      anon_sym_COLON,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym__function_argument_repeat1,
  [6877] = 3,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_classic_compiler_block_repeat1,
  [6887] = 3,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      aux_sym_property_declaration_block_repeat1,
  [6897] = 2,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      sym_command_suffix,
  [6904] = 1,
    ACTIONS(832), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [6909] = 2,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      sym_command_suffix,
  [6916] = 2,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      sym_command_suffix,
  [6923] = 2,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
    ACTIONS(863), 1,
      sym_command_suffix,
  [6930] = 2,
    ACTIONS(865), 1,
      sym__local,
    ACTIONS(867), 1,
      sym__function,
  [6937] = 1,
    ACTIONS(869), 2,
      anon_sym_LPAREN,
      sym__name,
  [6942] = 2,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 1,
      sym_command_suffix,
  [6949] = 2,
    ACTIONS(875), 1,
      aux_sym_time_token1,
    ACTIONS(877), 1,
      aux_sym_date_token1,
  [6956] = 1,
    ACTIONS(580), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6961] = 1,
    ACTIONS(837), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [6966] = 1,
    ACTIONS(477), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6971] = 2,
    ACTIONS(31), 1,
      sym__function,
    STATE(195), 1,
      sym_function,
  [6978] = 1,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [6983] = 2,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(881), 1,
      sym_command_suffix,
  [6990] = 2,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      sym_command_suffix,
  [6997] = 2,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      sym_command_suffix,
  [7004] = 2,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      sym_command_suffix,
  [7011] = 2,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_command_suffix,
  [7018] = 1,
    ACTIONS(825), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7023] = 2,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_command_suffix,
  [7030] = 1,
    ACTIONS(844), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [7035] = 2,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [7042] = 2,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      sym_command_suffix,
  [7049] = 2,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_command_suffix,
  [7056] = 1,
    ACTIONS(911), 2,
      sym__name,
      sym__class_store_4d,
  [7061] = 2,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      sym_command_suffix,
  [7068] = 1,
    ACTIONS(584), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [7073] = 2,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_command_suffix,
  [7080] = 2,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
    ACTIONS(923), 1,
      sym_command_suffix,
  [7087] = 2,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      sym_command_suffix,
  [7094] = 2,
    ACTIONS(929), 1,
      anon_sym_LPAREN,
    ACTIONS(931), 1,
      sym_command_suffix,
  [7101] = 2,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      sym_command_suffix,
  [7108] = 2,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_command_suffix,
  [7115] = 1,
    ACTIONS(941), 2,
      sym__name,
      anon_sym_DOLLAR,
  [7120] = 2,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
    ACTIONS(945), 1,
      sym_command_suffix,
  [7127] = 2,
    ACTIONS(947), 1,
      aux_sym__dec_literal_token1,
    ACTIONS(949), 1,
      sym__name,
  [7134] = 2,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      sym_command_suffix,
  [7141] = 2,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_command_suffix,
  [7148] = 2,
    ACTIONS(865), 1,
      sym__exposed,
    ACTIONS(867), 1,
      sym__function,
  [7155] = 2,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_function_arguments,
  [7162] = 2,
    ACTIONS(961), 1,
      aux_sym__dec_literal_token1,
    ACTIONS(963), 1,
      sym__name,
  [7169] = 2,
    ACTIONS(965), 1,
      aux_sym_time_token1,
    ACTIONS(967), 1,
      aux_sym_date_token1,
  [7176] = 2,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_function_arguments,
  [7183] = 1,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
  [7187] = 1,
    ACTIONS(971), 1,
      aux_sym_time_token1,
  [7191] = 1,
    ACTIONS(973), 1,
      aux_sym_time_token1,
  [7195] = 1,
    ACTIONS(975), 1,
      aux_sym_time_token1,
  [7199] = 1,
    ACTIONS(977), 1,
      anon_sym_DASH,
  [7203] = 1,
    ACTIONS(979), 1,
      anon_sym_DASH,
  [7207] = 1,
    ACTIONS(981), 1,
      sym__name,
  [7211] = 1,
    ACTIONS(983), 1,
      anon_sym_COLON,
  [7215] = 1,
    ACTIONS(985), 1,
      sym__name,
  [7219] = 1,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
  [7223] = 1,
    ACTIONS(949), 1,
      sym__name,
  [7227] = 1,
    ACTIONS(989), 1,
      sym__name,
  [7231] = 1,
    ACTIONS(991), 1,
      sym__name,
  [7235] = 1,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
  [7239] = 1,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
  [7243] = 1,
    ACTIONS(997), 1,
      sym__name,
  [7247] = 1,
    ACTIONS(999), 1,
      sym__name,
  [7251] = 1,
    ACTIONS(1001), 1,
      anon_sym_SLASH,
  [7255] = 1,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
  [7259] = 1,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [7263] = 1,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
  [7267] = 1,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
  [7271] = 1,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
  [7275] = 1,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
  [7279] = 1,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [7283] = 1,
    ACTIONS(1017), 1,
      sym__name,
  [7287] = 1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [7291] = 1,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [7295] = 1,
    ACTIONS(1021), 1,
      anon_sym_BANG,
  [7299] = 1,
    ACTIONS(1023), 1,
      anon_sym_QMARK,
  [7303] = 1,
    ACTIONS(1025), 1,
      sym__name,
  [7307] = 1,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
  [7311] = 1,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [7315] = 1,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
  [7319] = 1,
    ACTIONS(1033), 1,
      sym__name,
  [7323] = 1,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [7327] = 1,
    ACTIONS(1037), 1,
      anon_sym_COLON,
  [7331] = 1,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
  [7335] = 1,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
  [7339] = 1,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
  [7343] = 1,
    ACTIONS(1045), 1,
      aux_sym_time_token1,
  [7347] = 1,
    ACTIONS(1045), 1,
      aux_sym_date_token1,
  [7351] = 1,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
  [7355] = 1,
    ACTIONS(1049), 1,
      aux_sym_time_token1,
  [7359] = 1,
    ACTIONS(1051), 1,
      sym__name,
  [7363] = 1,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
  [7367] = 1,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
  [7371] = 1,
    ACTIONS(1057), 1,
      sym__name,
  [7375] = 1,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
  [7379] = 1,
    ACTIONS(1061), 1,
      aux_sym_time_token1,
  [7383] = 1,
    ACTIONS(1063), 1,
      sym__name,
  [7387] = 1,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
  [7391] = 1,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
  [7395] = 1,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
  [7399] = 1,
    ACTIONS(1071), 1,
      aux_sym_comment_block_token1,
  [7403] = 1,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
  [7407] = 1,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
  [7411] = 1,
    ACTIONS(1077), 1,
      aux_sym_comment_token1,
  [7415] = 1,
    ACTIONS(1079), 1,
      anon_sym_QMARK,
  [7419] = 1,
    ACTIONS(1081), 1,
      anon_sym_BANG,
  [7423] = 1,
    ACTIONS(1083), 1,
      anon_sym_DASH,
  [7427] = 1,
    ACTIONS(1085), 1,
      sym__name,
  [7431] = 1,
    ACTIONS(1087), 1,
      anon_sym_DASH,
  [7435] = 1,
    ACTIONS(1089), 1,
      sym__name,
  [7439] = 1,
    ACTIONS(1091), 1,
      sym__function,
  [7443] = 1,
    ACTIONS(1093), 1,
      anon_sym_COLON,
  [7447] = 1,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
  [7451] = 1,
    ACTIONS(1097), 1,
      aux_sym_time_token1,
  [7455] = 1,
    ACTIONS(1099), 1,
      aux_sym_date_token1,
  [7459] = 1,
    ACTIONS(1099), 1,
      aux_sym_time_token1,
  [7463] = 1,
    ACTIONS(1101), 1,
      anon_sym_COLON,
  [7467] = 1,
    ACTIONS(1103), 1,
      anon_sym_COLON,
  [7471] = 1,
    ACTIONS(1105), 1,
      anon_sym_DASH,
  [7475] = 1,
    ACTIONS(1107), 1,
      anon_sym_DASH,
  [7479] = 1,
    ACTIONS(1109), 1,
      sym__name,
  [7483] = 1,
    ACTIONS(1111), 1,
      aux_sym_time_token1,
  [7487] = 1,
    ACTIONS(1113), 1,
      aux_sym_time_token1,
  [7491] = 1,
    ACTIONS(1115), 1,
      aux_sym_time_token1,
  [7495] = 1,
    ACTIONS(1117), 1,
      anon_sym_COLON,
  [7499] = 1,
    ACTIONS(1119), 1,
      anon_sym_DASH,
  [7503] = 1,
    ACTIONS(1121), 1,
      anon_sym_DASH,
  [7507] = 1,
    ACTIONS(1123), 1,
      aux_sym_time_token1,
  [7511] = 1,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 64,
  [SMALL_STATE(45)] = 130,
  [SMALL_STATE(46)] = 196,
  [SMALL_STATE(47)] = 262,
  [SMALL_STATE(48)] = 328,
  [SMALL_STATE(49)] = 394,
  [SMALL_STATE(50)] = 460,
  [SMALL_STATE(51)] = 526,
  [SMALL_STATE(52)] = 592,
  [SMALL_STATE(53)] = 658,
  [SMALL_STATE(54)] = 719,
  [SMALL_STATE(55)] = 780,
  [SMALL_STATE(56)] = 841,
  [SMALL_STATE(57)] = 902,
  [SMALL_STATE(58)] = 963,
  [SMALL_STATE(59)] = 1023,
  [SMALL_STATE(60)] = 1083,
  [SMALL_STATE(61)] = 1143,
  [SMALL_STATE(62)] = 1203,
  [SMALL_STATE(63)] = 1263,
  [SMALL_STATE(64)] = 1323,
  [SMALL_STATE(65)] = 1383,
  [SMALL_STATE(66)] = 1443,
  [SMALL_STATE(67)] = 1503,
  [SMALL_STATE(68)] = 1563,
  [SMALL_STATE(69)] = 1623,
  [SMALL_STATE(70)] = 1683,
  [SMALL_STATE(71)] = 1743,
  [SMALL_STATE(72)] = 1803,
  [SMALL_STATE(73)] = 1863,
  [SMALL_STATE(74)] = 1923,
  [SMALL_STATE(75)] = 1983,
  [SMALL_STATE(76)] = 2043,
  [SMALL_STATE(77)] = 2103,
  [SMALL_STATE(78)] = 2163,
  [SMALL_STATE(79)] = 2258,
  [SMALL_STATE(80)] = 2353,
  [SMALL_STATE(81)] = 2441,
  [SMALL_STATE(82)] = 2529,
  [SMALL_STATE(83)] = 2617,
  [SMALL_STATE(84)] = 2705,
  [SMALL_STATE(85)] = 2793,
  [SMALL_STATE(86)] = 2881,
  [SMALL_STATE(87)] = 2969,
  [SMALL_STATE(88)] = 3057,
  [SMALL_STATE(89)] = 3145,
  [SMALL_STATE(90)] = 3233,
  [SMALL_STATE(91)] = 3321,
  [SMALL_STATE(92)] = 3409,
  [SMALL_STATE(93)] = 3497,
  [SMALL_STATE(94)] = 3585,
  [SMALL_STATE(95)] = 3673,
  [SMALL_STATE(96)] = 3761,
  [SMALL_STATE(97)] = 3849,
  [SMALL_STATE(98)] = 3904,
  [SMALL_STATE(99)] = 3959,
  [SMALL_STATE(100)] = 4014,
  [SMALL_STATE(101)] = 4069,
  [SMALL_STATE(102)] = 4124,
  [SMALL_STATE(103)] = 4179,
  [SMALL_STATE(104)] = 4234,
  [SMALL_STATE(105)] = 4289,
  [SMALL_STATE(106)] = 4344,
  [SMALL_STATE(107)] = 4387,
  [SMALL_STATE(108)] = 4427,
  [SMALL_STATE(109)] = 4467,
  [SMALL_STATE(110)] = 4507,
  [SMALL_STATE(111)] = 4547,
  [SMALL_STATE(112)] = 4587,
  [SMALL_STATE(113)] = 4627,
  [SMALL_STATE(114)] = 4667,
  [SMALL_STATE(115)] = 4707,
  [SMALL_STATE(116)] = 4747,
  [SMALL_STATE(117)] = 4787,
  [SMALL_STATE(118)] = 4834,
  [SMALL_STATE(119)] = 4878,
  [SMALL_STATE(120)] = 4916,
  [SMALL_STATE(121)] = 4960,
  [SMALL_STATE(122)] = 4995,
  [SMALL_STATE(123)] = 5030,
  [SMALL_STATE(124)] = 5065,
  [SMALL_STATE(125)] = 5100,
  [SMALL_STATE(126)] = 5135,
  [SMALL_STATE(127)] = 5170,
  [SMALL_STATE(128)] = 5205,
  [SMALL_STATE(129)] = 5240,
  [SMALL_STATE(130)] = 5275,
  [SMALL_STATE(131)] = 5310,
  [SMALL_STATE(132)] = 5345,
  [SMALL_STATE(133)] = 5380,
  [SMALL_STATE(134)] = 5415,
  [SMALL_STATE(135)] = 5450,
  [SMALL_STATE(136)] = 5494,
  [SMALL_STATE(137)] = 5538,
  [SMALL_STATE(138)] = 5578,
  [SMALL_STATE(139)] = 5622,
  [SMALL_STATE(140)] = 5666,
  [SMALL_STATE(141)] = 5707,
  [SMALL_STATE(142)] = 5743,
  [SMALL_STATE(143)] = 5781,
  [SMALL_STATE(144)] = 5819,
  [SMALL_STATE(145)] = 5857,
  [SMALL_STATE(146)] = 5895,
  [SMALL_STATE(147)] = 5933,
  [SMALL_STATE(148)] = 5971,
  [SMALL_STATE(149)] = 6009,
  [SMALL_STATE(150)] = 6047,
  [SMALL_STATE(151)] = 6085,
  [SMALL_STATE(152)] = 6118,
  [SMALL_STATE(153)] = 6147,
  [SMALL_STATE(154)] = 6176,
  [SMALL_STATE(155)] = 6205,
  [SMALL_STATE(156)] = 6234,
  [SMALL_STATE(157)] = 6263,
  [SMALL_STATE(158)] = 6292,
  [SMALL_STATE(159)] = 6321,
  [SMALL_STATE(160)] = 6350,
  [SMALL_STATE(161)] = 6365,
  [SMALL_STATE(162)] = 6380,
  [SMALL_STATE(163)] = 6395,
  [SMALL_STATE(164)] = 6410,
  [SMALL_STATE(165)] = 6425,
  [SMALL_STATE(166)] = 6439,
  [SMALL_STATE(167)] = 6455,
  [SMALL_STATE(168)] = 6469,
  [SMALL_STATE(169)] = 6482,
  [SMALL_STATE(170)] = 6495,
  [SMALL_STATE(171)] = 6508,
  [SMALL_STATE(172)] = 6521,
  [SMALL_STATE(173)] = 6534,
  [SMALL_STATE(174)] = 6545,
  [SMALL_STATE(175)] = 6556,
  [SMALL_STATE(176)] = 6569,
  [SMALL_STATE(177)] = 6580,
  [SMALL_STATE(178)] = 6593,
  [SMALL_STATE(179)] = 6604,
  [SMALL_STATE(180)] = 6615,
  [SMALL_STATE(181)] = 6625,
  [SMALL_STATE(182)] = 6635,
  [SMALL_STATE(183)] = 6645,
  [SMALL_STATE(184)] = 6655,
  [SMALL_STATE(185)] = 6665,
  [SMALL_STATE(186)] = 6675,
  [SMALL_STATE(187)] = 6685,
  [SMALL_STATE(188)] = 6695,
  [SMALL_STATE(189)] = 6705,
  [SMALL_STATE(190)] = 6715,
  [SMALL_STATE(191)] = 6725,
  [SMALL_STATE(192)] = 6735,
  [SMALL_STATE(193)] = 6745,
  [SMALL_STATE(194)] = 6751,
  [SMALL_STATE(195)] = 6761,
  [SMALL_STATE(196)] = 6771,
  [SMALL_STATE(197)] = 6781,
  [SMALL_STATE(198)] = 6791,
  [SMALL_STATE(199)] = 6801,
  [SMALL_STATE(200)] = 6811,
  [SMALL_STATE(201)] = 6817,
  [SMALL_STATE(202)] = 6827,
  [SMALL_STATE(203)] = 6837,
  [SMALL_STATE(204)] = 6847,
  [SMALL_STATE(205)] = 6857,
  [SMALL_STATE(206)] = 6867,
  [SMALL_STATE(207)] = 6877,
  [SMALL_STATE(208)] = 6887,
  [SMALL_STATE(209)] = 6897,
  [SMALL_STATE(210)] = 6904,
  [SMALL_STATE(211)] = 6909,
  [SMALL_STATE(212)] = 6916,
  [SMALL_STATE(213)] = 6923,
  [SMALL_STATE(214)] = 6930,
  [SMALL_STATE(215)] = 6937,
  [SMALL_STATE(216)] = 6942,
  [SMALL_STATE(217)] = 6949,
  [SMALL_STATE(218)] = 6956,
  [SMALL_STATE(219)] = 6961,
  [SMALL_STATE(220)] = 6966,
  [SMALL_STATE(221)] = 6971,
  [SMALL_STATE(222)] = 6978,
  [SMALL_STATE(223)] = 6983,
  [SMALL_STATE(224)] = 6990,
  [SMALL_STATE(225)] = 6997,
  [SMALL_STATE(226)] = 7004,
  [SMALL_STATE(227)] = 7011,
  [SMALL_STATE(228)] = 7018,
  [SMALL_STATE(229)] = 7023,
  [SMALL_STATE(230)] = 7030,
  [SMALL_STATE(231)] = 7035,
  [SMALL_STATE(232)] = 7042,
  [SMALL_STATE(233)] = 7049,
  [SMALL_STATE(234)] = 7056,
  [SMALL_STATE(235)] = 7061,
  [SMALL_STATE(236)] = 7068,
  [SMALL_STATE(237)] = 7073,
  [SMALL_STATE(238)] = 7080,
  [SMALL_STATE(239)] = 7087,
  [SMALL_STATE(240)] = 7094,
  [SMALL_STATE(241)] = 7101,
  [SMALL_STATE(242)] = 7108,
  [SMALL_STATE(243)] = 7115,
  [SMALL_STATE(244)] = 7120,
  [SMALL_STATE(245)] = 7127,
  [SMALL_STATE(246)] = 7134,
  [SMALL_STATE(247)] = 7141,
  [SMALL_STATE(248)] = 7148,
  [SMALL_STATE(249)] = 7155,
  [SMALL_STATE(250)] = 7162,
  [SMALL_STATE(251)] = 7169,
  [SMALL_STATE(252)] = 7176,
  [SMALL_STATE(253)] = 7183,
  [SMALL_STATE(254)] = 7187,
  [SMALL_STATE(255)] = 7191,
  [SMALL_STATE(256)] = 7195,
  [SMALL_STATE(257)] = 7199,
  [SMALL_STATE(258)] = 7203,
  [SMALL_STATE(259)] = 7207,
  [SMALL_STATE(260)] = 7211,
  [SMALL_STATE(261)] = 7215,
  [SMALL_STATE(262)] = 7219,
  [SMALL_STATE(263)] = 7223,
  [SMALL_STATE(264)] = 7227,
  [SMALL_STATE(265)] = 7231,
  [SMALL_STATE(266)] = 7235,
  [SMALL_STATE(267)] = 7239,
  [SMALL_STATE(268)] = 7243,
  [SMALL_STATE(269)] = 7247,
  [SMALL_STATE(270)] = 7251,
  [SMALL_STATE(271)] = 7255,
  [SMALL_STATE(272)] = 7259,
  [SMALL_STATE(273)] = 7263,
  [SMALL_STATE(274)] = 7267,
  [SMALL_STATE(275)] = 7271,
  [SMALL_STATE(276)] = 7275,
  [SMALL_STATE(277)] = 7279,
  [SMALL_STATE(278)] = 7283,
  [SMALL_STATE(279)] = 7287,
  [SMALL_STATE(280)] = 7291,
  [SMALL_STATE(281)] = 7295,
  [SMALL_STATE(282)] = 7299,
  [SMALL_STATE(283)] = 7303,
  [SMALL_STATE(284)] = 7307,
  [SMALL_STATE(285)] = 7311,
  [SMALL_STATE(286)] = 7315,
  [SMALL_STATE(287)] = 7319,
  [SMALL_STATE(288)] = 7323,
  [SMALL_STATE(289)] = 7327,
  [SMALL_STATE(290)] = 7331,
  [SMALL_STATE(291)] = 7335,
  [SMALL_STATE(292)] = 7339,
  [SMALL_STATE(293)] = 7343,
  [SMALL_STATE(294)] = 7347,
  [SMALL_STATE(295)] = 7351,
  [SMALL_STATE(296)] = 7355,
  [SMALL_STATE(297)] = 7359,
  [SMALL_STATE(298)] = 7363,
  [SMALL_STATE(299)] = 7367,
  [SMALL_STATE(300)] = 7371,
  [SMALL_STATE(301)] = 7375,
  [SMALL_STATE(302)] = 7379,
  [SMALL_STATE(303)] = 7383,
  [SMALL_STATE(304)] = 7387,
  [SMALL_STATE(305)] = 7391,
  [SMALL_STATE(306)] = 7395,
  [SMALL_STATE(307)] = 7399,
  [SMALL_STATE(308)] = 7403,
  [SMALL_STATE(309)] = 7407,
  [SMALL_STATE(310)] = 7411,
  [SMALL_STATE(311)] = 7415,
  [SMALL_STATE(312)] = 7419,
  [SMALL_STATE(313)] = 7423,
  [SMALL_STATE(314)] = 7427,
  [SMALL_STATE(315)] = 7431,
  [SMALL_STATE(316)] = 7435,
  [SMALL_STATE(317)] = 7439,
  [SMALL_STATE(318)] = 7443,
  [SMALL_STATE(319)] = 7447,
  [SMALL_STATE(320)] = 7451,
  [SMALL_STATE(321)] = 7455,
  [SMALL_STATE(322)] = 7459,
  [SMALL_STATE(323)] = 7463,
  [SMALL_STATE(324)] = 7467,
  [SMALL_STATE(325)] = 7471,
  [SMALL_STATE(326)] = 7475,
  [SMALL_STATE(327)] = 7479,
  [SMALL_STATE(328)] = 7483,
  [SMALL_STATE(329)] = 7487,
  [SMALL_STATE(330)] = 7491,
  [SMALL_STATE(331)] = 7495,
  [SMALL_STATE(332)] = 7499,
  [SMALL_STATE(333)] = 7503,
  [SMALL_STATE(334)] = 7507,
  [SMALL_STATE(335)] = 7511,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(302),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(251),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(163),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(87),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(316),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(250),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(314),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(248),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(214),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(215),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(290),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(287),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(234),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(63),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(243),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(261),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(244),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(240),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(239),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(238),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(237),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(229),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(227),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(226),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(225),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(223),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(209),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(216),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(213),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(212),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(211),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(224),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(232),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(235),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(241),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(242),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(233),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(246),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(247),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(193),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(307),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(310),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_instance, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_instance, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_instance, 2), SHIFT(91),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_instance, 2), SHIFT(92),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interprocess_variable, 2), SHIFT(91),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interprocess_variable, 2), SHIFT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_local_variable, 2), SHIFT(91),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_local_variable, 2), SHIFT(92),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_local_variable, 1), SHIFT(91),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_local_variable, 1), SHIFT(92),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 1),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interprocess_variable, 1), SHIFT(91),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interprocess_variable, 1), SHIFT(92),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_instance, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_instance, 1),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_instance, 1), SHIFT(91),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_class_instance, 1), SHIFT(92),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variable_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(19),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(88),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(268),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(91),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(92),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classsic_command_expression, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classsic_command_expression, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_store, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_store, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_argument, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_argument, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classsic_command_expression, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classsic_command_expression, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_parameter_name, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_parameter_name, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_name, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_name, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable_name, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable_name, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_argument, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1), SHIFT(86),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_block, 5),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_block, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classsic_command_expression, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classsic_command_expression, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_block, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_block, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_literal_block, 5),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_literal_block, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_literal_block, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_literal_block, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_literal_block, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_literal_block, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(264),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_extends, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_extends, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 5),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 8),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 8),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_block, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_sql, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_sql, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_injection_block, 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_injection_block, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_block, 5),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_block, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_declaration_block, 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_declaration_block, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array_block, 6),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_array_block, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_injection_block, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_injection_block, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler_block, 5),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classic_compiler_block, 5),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(111),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(84),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(300),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(85),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variable_repeat1, 2), SHIFT_REPEAT(93),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_argument_repeat1, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(164),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(303),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_injection_block_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sql_injection_block_repeat1, 2), SHIFT_REPEAT(178),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_argument_repeat1, 2), SHIFT_REPEAT(89),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_name_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_name_repeat1, 2), SHIFT_REPEAT(180),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_sql, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2), SHIFT_REPEAT(177),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classic_compiler_block_repeat1, 2),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(169),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_block_repeat1, 2), SHIFT_REPEAT(175),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(196),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_declaration_block_repeat1, 2), SHIFT_REPEAT(259),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_time, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_date, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_boolean, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_blob, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_variant, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_text, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_integer, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_real, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_pointer, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_picture, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_object, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_longint, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_real, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_object, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_date, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_collection, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_boolean, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_picture, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_pointer, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_blob, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_text, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_time, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_array, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classic_compiler, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_time, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_text, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_real, 2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_pointer, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_picture, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_object, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_longint, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_integer, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_date, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_boolean, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_array_blob, 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_variant, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_time, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_text, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_real, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_pointer, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_picture, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_object, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_longint, 2),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_date, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_collection, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_boolean, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classic_compiler_blob, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1095] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fourd_external_scanner_create(void);
void tree_sitter_fourd_external_scanner_destroy(void *);
bool tree_sitter_fourd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fourd_external_scanner_serialize(void *, char *);
void tree_sitter_fourd_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fourd_external_scanner_create,
      tree_sitter_fourd_external_scanner_destroy,
      tree_sitter_fourd_external_scanner_scan,
      tree_sitter_fourd_external_scanner_serialize,
      tree_sitter_fourd_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
