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
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym__return = 1,
  sym__break = 2,
  sym__continue = 3,
  sym__local = 4,
  sym__exposed = 5,
  sym__get = 6,
  sym__set = 7,
  sym__query = 8,
  sym__orderBy = 9,
  sym__letter = 10,
  aux_sym__name_token1 = 11,
  aux_sym__classic_name_token1 = 12,
  anon_sym_SEMI = 13,
  anon_sym_COLON = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_DOT = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_LT_GT = 20,
  sym_attribute = 21,
  sym_variable = 22,
  anon_sym_QMARK = 23,
  aux_sym_time_token1 = 24,
  anon_sym_BANG = 25,
  aux_sym_date_token1 = 26,
  anon_sym_DASH = 27,
  sym__hex_literal = 28,
  sym__dec_literal = 29,
  aux_sym__num_literal_token1 = 30,
  aux_sym__exp_literal_token1 = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_BSLASHr = 33,
  anon_sym_BSLASHn = 34,
  anon_sym_BSLASH_DQUOTE = 35,
  anon_sym_BSLASHt = 36,
  anon_sym_BSLASH_BSLASH = 37,
  aux_sym_string_token1 = 38,
  sym_class_extends = 39,
  aux_sym_class_constructor_token1 = 40,
  sym__var = 41,
  sym__property = 42,
  sym__alias = 43,
  sym__declare = 44,
  sym__function = 45,
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
  sym_source = 61,
  sym__statement = 62,
  sym__token = 63,
  sym_value = 64,
  sym_constant = 65,
  sym__computed = 66,
  sym__scope = 67,
  sym__name = 68,
  sym__classic_name = 69,
  sym_function_name = 70,
  sym__function_argument = 71,
  sym_function_arguments = 72,
  sym_function_result = 73,
  sym_alias_name = 74,
  sym_class = 75,
  sym_local_variable = 76,
  sym_interprocess_variable = 77,
  sym_time = 78,
  sym_date = 79,
  sym__num_literal = 80,
  sym__exp_literal = 81,
  sym_number = 82,
  sym_string = 83,
  sym_function_block = 84,
  sym_declare_block = 85,
  sym_class_constructor = 86,
  sym__declaration_argument = 87,
  sym_declaration_block = 88,
  sym_var = 89,
  sym_property = 90,
  sym_alias = 91,
  sym_declare = 92,
  sym_function = 93,
  sym__class_store = 94,
  sym__class = 95,
  sym__basic_type = 96,
  aux_sym_source_repeat1 = 97,
  aux_sym__function_argument_repeat1 = 98,
  aux_sym_function_arguments_repeat1 = 99,
  aux_sym_alias_name_repeat1 = 100,
  aux_sym_string_repeat1 = 101,
  aux_sym_declaration_block_repeat1 = 102,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__return] = "_return",
  [sym__break] = "_break",
  [sym__continue] = "_continue",
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
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LT_GT] = "<>",
  [sym_attribute] = "attribute",
  [sym_variable] = "variable",
  [anon_sym_QMARK] = "\?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_BANG] = "!",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [sym__hex_literal] = "_hex_literal",
  [sym__dec_literal] = "_dec_literal",
  [aux_sym__num_literal_token1] = "_num_literal_token1",
  [aux_sym__exp_literal_token1] = "_exp_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token1] = "string_token1",
  [sym_class_extends] = "class_extends",
  [aux_sym_class_constructor_token1] = "class_constructor_token1",
  [sym__var] = "_var",
  [sym__property] = "_property",
  [sym__alias] = "_alias",
  [sym__declare] = "_declare",
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
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym__token] = "_token",
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
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_function_block] = "function_block",
  [sym_declare_block] = "declare_block",
  [sym_class_constructor] = "class_constructor",
  [sym__declaration_argument] = "_declaration_argument",
  [sym_declaration_block] = "declaration_block",
  [sym_var] = "var",
  [sym_property] = "property",
  [sym_alias] = "alias",
  [sym_declare] = "declare",
  [sym_function] = "function",
  [sym__class_store] = "_class_store",
  [sym__class] = "_class",
  [sym__basic_type] = "_basic_type",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym_alias_name_repeat1] = "alias_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_declaration_block_repeat1] = "declaration_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__return] = sym__return,
  [sym__break] = sym__break,
  [sym__continue] = sym__continue,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_attribute] = sym_attribute,
  [sym_variable] = sym_variable,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__hex_literal] = sym__hex_literal,
  [sym__dec_literal] = sym__dec_literal,
  [aux_sym__num_literal_token1] = aux_sym__num_literal_token1,
  [aux_sym__exp_literal_token1] = aux_sym__exp_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_class_extends] = sym_class_extends,
  [aux_sym_class_constructor_token1] = aux_sym_class_constructor_token1,
  [sym__var] = sym__var,
  [sym__property] = sym__property,
  [sym__alias] = sym__alias,
  [sym__declare] = sym__declare,
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
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym__token] = sym__token,
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
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_function_block] = sym_function_block,
  [sym_declare_block] = sym_declare_block,
  [sym_class_constructor] = sym_class_constructor,
  [sym__declaration_argument] = sym__declaration_argument,
  [sym_declaration_block] = sym_declaration_block,
  [sym_var] = sym_var,
  [sym_property] = sym_property,
  [sym_alias] = sym_alias,
  [sym_declare] = sym_declare,
  [sym_function] = sym_function,
  [sym__class_store] = sym__class_store,
  [sym__class] = sym__class,
  [sym__basic_type] = sym__basic_type,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym_alias_name_repeat1] = aux_sym_alias_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_declaration_block_repeat1] = aux_sym_declaration_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_DOT] = {
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
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
  [sym__dec_literal] = {
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
  [sym_class_extends] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_constructor_token1] = {
    .visible = false,
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
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
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
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
  [sym_class_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_block] = {
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
  [aux_sym_alias_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_block_repeat1] = {
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

static inline bool sym__letter_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(147);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '0') ADVANCE(326);
      if (lookahead == '4') ADVANCE(330);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '0') ADVANCE(326);
      if (lookahead == '4') ADVANCE(330);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(176);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '0') ADVANCE(326);
      if (lookahead == '4') ADVANCE(330);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '4') ADVANCE(331);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(220);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '4') ADVANCE(331);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(290);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(301);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(306);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(352);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 133:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 144:
      if (eof) ADVANCE(147);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '4') ADVANCE(331);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(144)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 145:
      if (eof) ADVANCE(147);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '4') ADVANCE(331);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 146:
      if (eof) ADVANCE(147);
      if (lookahead == '!') ADVANCE(317);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(308);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '4') ADVANCE(331);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__return);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__break);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__continue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__local);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__exposed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'b') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(299);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (aux_sym__classic_name_token1_character_set_1(lookahead)) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_attribute);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(299);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(306);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class_extends);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_class_constructor_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__var);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__declare);
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
  [4] = {.lex_state = 144},
  [5] = {.lex_state = 144},
  [6] = {.lex_state = 145},
  [7] = {.lex_state = 145},
  [8] = {.lex_state = 145},
  [9] = {.lex_state = 145},
  [10] = {.lex_state = 146},
  [11] = {.lex_state = 145},
  [12] = {.lex_state = 145},
  [13] = {.lex_state = 145},
  [14] = {.lex_state = 145},
  [15] = {.lex_state = 145},
  [16] = {.lex_state = 145},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 145},
  [19] = {.lex_state = 145},
  [20] = {.lex_state = 145},
  [21] = {.lex_state = 145},
  [22] = {.lex_state = 145},
  [23] = {.lex_state = 145},
  [24] = {.lex_state = 146},
  [25] = {.lex_state = 145},
  [26] = {.lex_state = 145},
  [27] = {.lex_state = 145},
  [28] = {.lex_state = 145},
  [29] = {.lex_state = 145},
  [30] = {.lex_state = 145},
  [31] = {.lex_state = 145},
  [32] = {.lex_state = 145},
  [33] = {.lex_state = 145},
  [34] = {.lex_state = 145},
  [35] = {.lex_state = 145},
  [36] = {.lex_state = 145},
  [37] = {.lex_state = 145},
  [38] = {.lex_state = 145},
  [39] = {.lex_state = 145},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 145},
  [42] = {.lex_state = 145},
  [43] = {.lex_state = 145},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 145},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 137},
  [52] = {.lex_state = 137},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 138},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 138},
  [69] = {.lex_state = 145},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 145},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 138},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 138},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 144},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 145},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 137},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 144},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 144},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 144},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__return] = ACTIONS(1),
    [sym__break] = ACTIONS(1),
    [sym__continue] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [sym__dec_literal] = ACTIONS(1),
    [aux_sym__num_literal_token1] = ACTIONS(1),
    [aux_sym__exp_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym_class_extends] = ACTIONS(1),
    [aux_sym_class_constructor_token1] = ACTIONS(1),
    [sym__var] = ACTIONS(1),
    [sym__property] = ACTIONS(1),
    [sym__alias] = ACTIONS(1),
    [sym__declare] = ACTIONS(1),
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
    [sym__basic_type_variant] = ACTIONS(1),
    [sym__basic_type_object] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(97),
    [sym__statement] = STATE(2),
    [sym__token] = STATE(2),
    [sym_value] = STATE(2),
    [sym_constant] = STATE(40),
    [sym__scope] = STATE(71),
    [sym_function_name] = STATE(72),
    [sym_alias_name] = STATE(2),
    [sym_class] = STATE(40),
    [sym_local_variable] = STATE(19),
    [sym_interprocess_variable] = STATE(40),
    [sym_time] = STATE(30),
    [sym_date] = STATE(30),
    [sym__num_literal] = STATE(36),
    [sym__exp_literal] = STATE(36),
    [sym_number] = STATE(30),
    [sym_string] = STATE(30),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym__declaration_argument] = STATE(57),
    [sym_declaration_block] = STATE(2),
    [sym_var] = STATE(2),
    [sym_property] = STATE(2),
    [sym_alias] = STATE(10),
    [sym_declare] = STATE(15),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(8),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym_attribute] = ACTIONS(13),
    [sym_variable] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [sym__hex_literal] = ACTIONS(19),
    [sym__dec_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(21),
    [aux_sym__exp_literal_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_class_extends] = ACTIONS(25),
    [aux_sym_class_constructor_token1] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [sym__basic_type_text] = ACTIONS(41),
    [sym__basic_type_date] = ACTIONS(41),
    [sym__basic_type_time] = ACTIONS(41),
    [sym__basic_type_boolean] = ACTIONS(41),
    [sym__basic_type_integer] = ACTIONS(41),
    [sym__basic_type_real] = ACTIONS(41),
    [sym__basic_type_pointer] = ACTIONS(41),
    [sym__basic_type_picture] = ACTIONS(41),
    [sym__basic_type_blob] = ACTIONS(41),
    [sym__basic_type_collection] = ACTIONS(41),
    [sym__basic_type_variant] = ACTIONS(41),
    [sym__basic_type_object] = ACTIONS(41),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__token] = STATE(3),
    [sym_value] = STATE(3),
    [sym_constant] = STATE(40),
    [sym__scope] = STATE(71),
    [sym_function_name] = STATE(72),
    [sym_alias_name] = STATE(3),
    [sym_class] = STATE(40),
    [sym_local_variable] = STATE(19),
    [sym_interprocess_variable] = STATE(40),
    [sym_time] = STATE(30),
    [sym_date] = STATE(30),
    [sym__num_literal] = STATE(36),
    [sym__exp_literal] = STATE(36),
    [sym_number] = STATE(30),
    [sym_string] = STATE(30),
    [sym_function_block] = STATE(3),
    [sym_declare_block] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym__declaration_argument] = STATE(57),
    [sym_declaration_block] = STATE(3),
    [sym_var] = STATE(3),
    [sym_property] = STATE(3),
    [sym_alias] = STATE(10),
    [sym_declare] = STATE(15),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(8),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym_attribute] = ACTIONS(13),
    [sym_variable] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [sym__hex_literal] = ACTIONS(19),
    [sym__dec_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(21),
    [aux_sym__exp_literal_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_class_extends] = ACTIONS(45),
    [aux_sym_class_constructor_token1] = ACTIONS(27),
    [sym__var] = ACTIONS(29),
    [sym__property] = ACTIONS(31),
    [sym__alias] = ACTIONS(33),
    [sym__declare] = ACTIONS(35),
    [sym__function] = ACTIONS(37),
    [sym__class_store_4d] = ACTIONS(39),
    [sym__class_store_ds] = ACTIONS(39),
    [sym__class_store_cs] = ACTIONS(39),
    [sym__basic_type_text] = ACTIONS(41),
    [sym__basic_type_date] = ACTIONS(41),
    [sym__basic_type_time] = ACTIONS(41),
    [sym__basic_type_boolean] = ACTIONS(41),
    [sym__basic_type_integer] = ACTIONS(41),
    [sym__basic_type_real] = ACTIONS(41),
    [sym__basic_type_pointer] = ACTIONS(41),
    [sym__basic_type_picture] = ACTIONS(41),
    [sym__basic_type_blob] = ACTIONS(41),
    [sym__basic_type_collection] = ACTIONS(41),
    [sym__basic_type_variant] = ACTIONS(41),
    [sym__basic_type_object] = ACTIONS(41),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__token] = STATE(3),
    [sym_value] = STATE(3),
    [sym_constant] = STATE(40),
    [sym__scope] = STATE(71),
    [sym_function_name] = STATE(72),
    [sym_alias_name] = STATE(3),
    [sym_class] = STATE(40),
    [sym_local_variable] = STATE(19),
    [sym_interprocess_variable] = STATE(40),
    [sym_time] = STATE(30),
    [sym_date] = STATE(30),
    [sym__num_literal] = STATE(36),
    [sym__exp_literal] = STATE(36),
    [sym_number] = STATE(30),
    [sym_string] = STATE(30),
    [sym_function_block] = STATE(3),
    [sym_declare_block] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym__declaration_argument] = STATE(57),
    [sym_declaration_block] = STATE(3),
    [sym_var] = STATE(3),
    [sym_property] = STATE(3),
    [sym_alias] = STATE(10),
    [sym_declare] = STATE(15),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(8),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__local] = ACTIONS(49),
    [sym__exposed] = ACTIONS(52),
    [anon_sym_DOLLAR] = ACTIONS(55),
    [anon_sym_LT_GT] = ACTIONS(58),
    [sym_attribute] = ACTIONS(61),
    [sym_variable] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(67),
    [sym__hex_literal] = ACTIONS(70),
    [sym__dec_literal] = ACTIONS(73),
    [aux_sym__num_literal_token1] = ACTIONS(73),
    [aux_sym__exp_literal_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_class_extends] = ACTIONS(79),
    [aux_sym_class_constructor_token1] = ACTIONS(82),
    [sym__var] = ACTIONS(85),
    [sym__property] = ACTIONS(88),
    [sym__alias] = ACTIONS(91),
    [sym__declare] = ACTIONS(94),
    [sym__function] = ACTIONS(97),
    [sym__class_store_4d] = ACTIONS(100),
    [sym__class_store_ds] = ACTIONS(100),
    [sym__class_store_cs] = ACTIONS(100),
    [sym__basic_type_text] = ACTIONS(103),
    [sym__basic_type_date] = ACTIONS(103),
    [sym__basic_type_time] = ACTIONS(103),
    [sym__basic_type_boolean] = ACTIONS(103),
    [sym__basic_type_integer] = ACTIONS(103),
    [sym__basic_type_real] = ACTIONS(103),
    [sym__basic_type_pointer] = ACTIONS(103),
    [sym__basic_type_picture] = ACTIONS(103),
    [sym__basic_type_blob] = ACTIONS(103),
    [sym__basic_type_collection] = ACTIONS(103),
    [sym__basic_type_variant] = ACTIONS(103),
    [sym__basic_type_object] = ACTIONS(103),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(112), 1,
      aux_sym__name_token1,
    STATE(68), 1,
      sym__computed,
    STATE(83), 1,
      sym__name,
    ACTIONS(110), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
    ACTIONS(106), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__declare,
      sym__class_store_4d,
    ACTIONS(108), 24,
      sym__local,
      sym__exposed,
      sym_attribute,
      sym_variable,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
      sym__property,
      sym__alias,
      sym__function,
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
  [56] = 2,
    ACTIONS(114), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__declare,
      sym__class_store_4d,
    ACTIONS(116), 29,
      sym__local,
      sym__exposed,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
      sym_attribute,
      sym_variable,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
      sym__property,
      sym__alias,
      sym__function,
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
  [102] = 4,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(123), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(118), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [151] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(129), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(125), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [200] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(133), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(131), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [249] = 2,
    ACTIONS(123), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(118), 36,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [293] = 4,
    ACTIONS(135), 1,
      aux_sym__name_token1,
    STATE(75), 1,
      sym__name,
    ACTIONS(106), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__declare,
      sym__class_store_4d,
    ACTIONS(108), 24,
      sym__local,
      sym__exposed,
      sym_attribute,
      sym_variable,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
      sym__property,
      sym__alias,
      sym__function,
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
  [340] = 2,
    ACTIONS(139), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(137), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [383] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(143), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(141), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [430] = 4,
    ACTIONS(147), 1,
      anon_sym_DASH_GT,
    STATE(39), 1,
      sym_function_result,
    ACTIONS(149), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(145), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [477] = 4,
    ACTIONS(147), 1,
      anon_sym_DASH_GT,
    STATE(37), 1,
      sym_function_result,
    ACTIONS(153), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(151), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [524] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_arguments,
    ACTIONS(108), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(106), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [571] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(159), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(157), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [618] = 2,
    ACTIONS(163), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(161), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [661] = 2,
    ACTIONS(167), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(165), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [704] = 3,
    ACTIONS(171), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(173), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(169), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [749] = 2,
    ACTIONS(177), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(175), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [792] = 2,
    ACTIONS(181), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(179), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [834] = 2,
    ACTIONS(185), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(183), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [876] = 2,
    ACTIONS(189), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(187), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [918] = 2,
    ACTIONS(191), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__declare,
      sym__class_store_4d,
    ACTIONS(193), 25,
      sym__local,
      sym__exposed,
      aux_sym__name_token1,
      sym_attribute,
      sym_variable,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
      sym__property,
      sym__alias,
      sym__function,
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
  [960] = 2,
    ACTIONS(197), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(195), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1002] = 2,
    ACTIONS(201), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(199), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1043] = 2,
    ACTIONS(205), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(203), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1084] = 2,
    ACTIONS(209), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(207), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1125] = 2,
    ACTIONS(213), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(211), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1166] = 2,
    ACTIONS(217), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(215), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1207] = 2,
    ACTIONS(221), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(219), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1248] = 2,
    ACTIONS(225), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(223), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1289] = 2,
    ACTIONS(229), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(227), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1330] = 2,
    ACTIONS(233), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(231), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1371] = 2,
    ACTIONS(237), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(235), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1412] = 2,
    ACTIONS(241), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(239), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1453] = 2,
    ACTIONS(245), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(243), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1494] = 2,
    ACTIONS(249), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(247), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1535] = 2,
    ACTIONS(253), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(251), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1576] = 2,
    ACTIONS(173), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(169), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1617] = 2,
    ACTIONS(257), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(255), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
      sym_variable,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym__hex_literal,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
      sym__property,
      sym__alias,
      sym__declare,
      sym__function,
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
  [1658] = 5,
    STATE(8), 1,
      sym__class_store,
    STATE(11), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(41), 12,
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
  [1688] = 5,
    STATE(8), 1,
      sym__class_store,
    STATE(38), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(41), 12,
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
  [1718] = 5,
    STATE(8), 1,
      sym__class_store,
    STATE(17), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(41), 12,
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
  [1748] = 5,
    STATE(8), 1,
      sym__class_store,
    STATE(31), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(39), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(41), 12,
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
  [1778] = 3,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_repeat1,
    ACTIONS(261), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1793] = 3,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1808] = 3,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(269), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1823] = 4,
    ACTIONS(274), 1,
      aux_sym__name_token1,
    STATE(73), 1,
      sym__computed,
    STATE(87), 1,
      sym__name,
    ACTIONS(272), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1839] = 1,
    ACTIONS(116), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [1847] = 2,
    ACTIONS(276), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(20), 2,
      sym__name,
      sym__classic_name,
  [1856] = 2,
    ACTIONS(278), 2,
      aux_sym__name_token1,
      aux_sym__classic_name_token1,
    STATE(26), 2,
      sym__name,
      sym__classic_name,
  [1865] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym__function_argument,
    STATE(59), 1,
      sym_local_variable,
  [1878] = 3,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_function_arguments_repeat1,
  [1888] = 3,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_local_variable,
    STATE(67), 1,
      sym__function_argument,
  [1898] = 3,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(289), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym__function_argument_repeat1,
  [1908] = 3,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym_declaration_block_repeat1,
  [1918] = 3,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_function_arguments_repeat1,
  [1928] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(62), 1,
      aux_sym__function_argument_repeat1,
  [1938] = 3,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym__function_argument,
    STATE(59), 1,
      sym_local_variable,
  [1948] = 3,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_function_arguments_repeat1,
  [1958] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym__function_argument_repeat1,
  [1968] = 2,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(76), 2,
      sym_local_variable,
      sym__declaration_argument,
  [1976] = 3,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_declaration_block_repeat1,
  [1986] = 3,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_declaration_block_repeat1,
  [1996] = 2,
    ACTIONS(315), 1,
      aux_sym__name_token1,
    STATE(9), 1,
      sym__name,
  [2003] = 1,
    ACTIONS(304), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2008] = 2,
    ACTIONS(317), 1,
      aux_sym__name_token1,
    STATE(87), 1,
      sym__name,
  [2015] = 2,
    ACTIONS(319), 1,
      sym__local,
    ACTIONS(321), 1,
      sym__function,
  [2022] = 2,
    ACTIONS(323), 1,
      aux_sym_time_token1,
    ACTIONS(325), 1,
      aux_sym_date_token1,
  [2029] = 2,
    ACTIONS(327), 1,
      sym__function,
    STATE(49), 1,
      sym_function,
  [2036] = 2,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_function_arguments,
  [2043] = 2,
    ACTIONS(329), 1,
      aux_sym__name_token1,
    STATE(95), 1,
      sym__name,
  [2050] = 1,
    ACTIONS(289), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2055] = 2,
    ACTIONS(331), 1,
      aux_sym__name_token1,
    STATE(12), 1,
      sym__name,
  [2062] = 1,
    ACTIONS(313), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2067] = 2,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_local_variable,
  [2074] = 2,
    ACTIONS(319), 1,
      sym__exposed,
    ACTIONS(321), 1,
      sym__function,
  [2081] = 1,
    ACTIONS(333), 1,
      aux_sym_time_token1,
  [2085] = 1,
    ACTIONS(335), 1,
      anon_sym_DASH,
  [2089] = 1,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [2093] = 1,
    ACTIONS(339), 1,
      sym__function,
  [2097] = 1,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
  [2101] = 1,
    ACTIONS(343), 1,
      aux_sym_date_token1,
  [2105] = 1,
    ACTIONS(343), 1,
      aux_sym_time_token1,
  [2109] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [2113] = 1,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [2117] = 1,
    ACTIONS(349), 1,
      aux_sym_time_token1,
  [2121] = 1,
    ACTIONS(351), 1,
      aux_sym_time_token1,
  [2125] = 1,
    ACTIONS(353), 1,
      anon_sym_DASH,
  [2129] = 1,
    ACTIONS(355), 1,
      aux_sym_time_token1,
  [2133] = 1,
    ACTIONS(357), 1,
      aux_sym_time_token1,
  [2137] = 1,
    ACTIONS(359), 1,
      anon_sym_QMARK,
  [2141] = 1,
    ACTIONS(361), 1,
      anon_sym_BANG,
  [2145] = 1,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
  [2149] = 1,
    ACTIONS(365), 1,
      anon_sym_DASH,
  [2153] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [2157] = 1,
    ACTIONS(369), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 571,
  [SMALL_STATE(17)] = 618,
  [SMALL_STATE(18)] = 661,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 749,
  [SMALL_STATE(21)] = 792,
  [SMALL_STATE(22)] = 834,
  [SMALL_STATE(23)] = 876,
  [SMALL_STATE(24)] = 918,
  [SMALL_STATE(25)] = 960,
  [SMALL_STATE(26)] = 1002,
  [SMALL_STATE(27)] = 1043,
  [SMALL_STATE(28)] = 1084,
  [SMALL_STATE(29)] = 1125,
  [SMALL_STATE(30)] = 1166,
  [SMALL_STATE(31)] = 1207,
  [SMALL_STATE(32)] = 1248,
  [SMALL_STATE(33)] = 1289,
  [SMALL_STATE(34)] = 1330,
  [SMALL_STATE(35)] = 1371,
  [SMALL_STATE(36)] = 1412,
  [SMALL_STATE(37)] = 1453,
  [SMALL_STATE(38)] = 1494,
  [SMALL_STATE(39)] = 1535,
  [SMALL_STATE(40)] = 1576,
  [SMALL_STATE(41)] = 1617,
  [SMALL_STATE(42)] = 1658,
  [SMALL_STATE(43)] = 1688,
  [SMALL_STATE(44)] = 1718,
  [SMALL_STATE(45)] = 1748,
  [SMALL_STATE(46)] = 1778,
  [SMALL_STATE(47)] = 1793,
  [SMALL_STATE(48)] = 1808,
  [SMALL_STATE(49)] = 1823,
  [SMALL_STATE(50)] = 1839,
  [SMALL_STATE(51)] = 1847,
  [SMALL_STATE(52)] = 1856,
  [SMALL_STATE(53)] = 1865,
  [SMALL_STATE(54)] = 1878,
  [SMALL_STATE(55)] = 1888,
  [SMALL_STATE(56)] = 1898,
  [SMALL_STATE(57)] = 1908,
  [SMALL_STATE(58)] = 1918,
  [SMALL_STATE(59)] = 1928,
  [SMALL_STATE(60)] = 1938,
  [SMALL_STATE(61)] = 1948,
  [SMALL_STATE(62)] = 1958,
  [SMALL_STATE(63)] = 1968,
  [SMALL_STATE(64)] = 1976,
  [SMALL_STATE(65)] = 1986,
  [SMALL_STATE(66)] = 1996,
  [SMALL_STATE(67)] = 2003,
  [SMALL_STATE(68)] = 2008,
  [SMALL_STATE(69)] = 2015,
  [SMALL_STATE(70)] = 2022,
  [SMALL_STATE(71)] = 2029,
  [SMALL_STATE(72)] = 2036,
  [SMALL_STATE(73)] = 2043,
  [SMALL_STATE(74)] = 2050,
  [SMALL_STATE(75)] = 2055,
  [SMALL_STATE(76)] = 2062,
  [SMALL_STATE(77)] = 2067,
  [SMALL_STATE(78)] = 2074,
  [SMALL_STATE(79)] = 2081,
  [SMALL_STATE(80)] = 2085,
  [SMALL_STATE(81)] = 2089,
  [SMALL_STATE(82)] = 2093,
  [SMALL_STATE(83)] = 2097,
  [SMALL_STATE(84)] = 2101,
  [SMALL_STATE(85)] = 2105,
  [SMALL_STATE(86)] = 2109,
  [SMALL_STATE(87)] = 2113,
  [SMALL_STATE(88)] = 2117,
  [SMALL_STATE(89)] = 2121,
  [SMALL_STATE(90)] = 2125,
  [SMALL_STATE(91)] = 2129,
  [SMALL_STATE(92)] = 2133,
  [SMALL_STATE(93)] = 2137,
  [SMALL_STATE(94)] = 2141,
  [SMALL_STATE(95)] = 2145,
  [SMALL_STATE(96)] = 2149,
  [SMALL_STATE(97)] = 2153,
  [SMALL_STATE(98)] = 2157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(78),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(69),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(89),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(70),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(46),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_name_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_name_repeat1, 2), SHIFT_REPEAT(66),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alias_name_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_argument, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(55),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(63),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [367] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
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
