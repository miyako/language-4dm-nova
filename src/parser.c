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
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  anon_sym_QMARK = 22,
  aux_sym_time_token1 = 23,
  anon_sym_BANG = 24,
  aux_sym_date_token1 = 25,
  anon_sym_DASH = 26,
  sym__hex_literal = 27,
  sym__dec_literal = 28,
  aux_sym__num_literal_token1 = 29,
  aux_sym__exp_literal_token1 = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_BSLASHr = 32,
  anon_sym_BSLASHn = 33,
  anon_sym_BSLASH_DQUOTE = 34,
  anon_sym_BSLASHt = 35,
  anon_sym_BSLASH_BSLASH = 36,
  aux_sym_string_token1 = 37,
  sym_class_extends = 38,
  aux_sym_class_constructor_token1 = 39,
  sym__var = 40,
  sym__property = 41,
  sym__alias = 42,
  sym__declare = 43,
  sym__function = 44,
  sym__class_store_4d = 45,
  sym__class_store_ds = 46,
  sym__class_store_cs = 47,
  sym__basic_type_text = 48,
  sym__basic_type_date = 49,
  sym__basic_type_time = 50,
  sym__basic_type_boolean = 51,
  sym__basic_type_integer = 52,
  sym__basic_type_real = 53,
  sym__basic_type_pointer = 54,
  sym__basic_type_picture = 55,
  sym__basic_type_blob = 56,
  sym__basic_type_collection = 57,
  sym__basic_type_variant = 58,
  sym__basic_type_object = 59,
  sym_source = 60,
  sym__statement = 61,
  sym__token = 62,
  sym_value = 63,
  sym_constant = 64,
  sym__computed = 65,
  sym__scope = 66,
  sym__name = 67,
  sym__classic_name = 68,
  sym_function_name = 69,
  sym__function_argument = 70,
  sym_function_arguments = 71,
  sym_function_result = 72,
  sym_alias_name = 73,
  sym_class = 74,
  sym_local_variable = 75,
  sym_interprocess_variable = 76,
  sym_time = 77,
  sym_date = 78,
  sym__num_literal = 79,
  sym__exp_literal = 80,
  sym_number = 81,
  sym_string = 82,
  sym_function_block = 83,
  sym_declare_block = 84,
  sym_class_constructor = 85,
  sym__declaration_argument = 86,
  sym_declaration_block = 87,
  sym_var = 88,
  sym_property = 89,
  sym_alias = 90,
  sym_declare = 91,
  sym_function = 92,
  sym__class_store = 93,
  sym__class = 94,
  sym__basic_type = 95,
  aux_sym_source_repeat1 = 96,
  aux_sym__function_argument_repeat1 = 97,
  aux_sym_function_arguments_repeat1 = 98,
  aux_sym_alias_name_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  aux_sym_declaration_block_repeat1 = 101,
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

static inline bool aux_sym__name_token1_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(140);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(170);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(273);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      END_STATE();
    case 29:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 106:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 110:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 111:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 124:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 125:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 127:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 128:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 137:
      if (eof) ADVANCE(140);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(137)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 138:
      if (eof) ADVANCE(140);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == ')') ADVANCE(289);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      if (lookahead == '!') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(292);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__return);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__break);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__continue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__local);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__exposed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__get);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__set);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__query);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__orderBy);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == ' ') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'b') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__name_token1);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__classic_name_token1);
      if (lookahead == ' ') ADVANCE(285);
      if (aux_sym__name_token1_character_set_3(lookahead)) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_attribute);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (aux_sym__name_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(322);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class_extends);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_class_constructor_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__property);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 138},
  [2] = {.lex_state = 138},
  [3] = {.lex_state = 138},
  [4] = {.lex_state = 137},
  [5] = {.lex_state = 137},
  [6] = {.lex_state = 138},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 138},
  [13] = {.lex_state = 138},
  [14] = {.lex_state = 138},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 138},
  [17] = {.lex_state = 139},
  [18] = {.lex_state = 138},
  [19] = {.lex_state = 138},
  [20] = {.lex_state = 138},
  [21] = {.lex_state = 138},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 139},
  [25] = {.lex_state = 138},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 138},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 138},
  [30] = {.lex_state = 138},
  [31] = {.lex_state = 138},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 138},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 138},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 138},
  [38] = {.lex_state = 138},
  [39] = {.lex_state = 138},
  [40] = {.lex_state = 138},
  [41] = {.lex_state = 138},
  [42] = {.lex_state = 138},
  [43] = {.lex_state = 138},
  [44] = {.lex_state = 138},
  [45] = {.lex_state = 138},
  [46] = {.lex_state = 138},
  [47] = {.lex_state = 138},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
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
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 130},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 138},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 131},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 130},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 130},
  [81] = {.lex_state = 131},
  [82] = {.lex_state = 138},
  [83] = {.lex_state = 138},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 130},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 137},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 130},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 137},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 137},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 137},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
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
    [sym_source] = STATE(98),
    [sym__statement] = STATE(3),
    [sym__token] = STATE(3),
    [sym_value] = STATE(3),
    [sym_constant] = STATE(36),
    [sym__scope] = STATE(73),
    [sym_function_name] = STATE(75),
    [sym_alias_name] = STATE(3),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(36),
    [sym_time] = STATE(28),
    [sym_date] = STATE(28),
    [sym__num_literal] = STATE(40),
    [sym__exp_literal] = STATE(40),
    [sym_number] = STATE(28),
    [sym_string] = STATE(28),
    [sym_function_block] = STATE(3),
    [sym_declare_block] = STATE(3),
    [sym_class_constructor] = STATE(3),
    [sym__declaration_argument] = STATE(63),
    [sym_declaration_block] = STATE(3),
    [sym_var] = STATE(3),
    [sym_property] = STATE(3),
    [sym_alias] = STATE(17),
    [sym_declare] = STATE(18),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(15),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym_attribute] = ACTIONS(13),
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
    [sym__statement] = STATE(2),
    [sym__token] = STATE(2),
    [sym_value] = STATE(2),
    [sym_constant] = STATE(36),
    [sym__scope] = STATE(73),
    [sym_function_name] = STATE(75),
    [sym_alias_name] = STATE(2),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(36),
    [sym_time] = STATE(28),
    [sym_date] = STATE(28),
    [sym__num_literal] = STATE(40),
    [sym__exp_literal] = STATE(40),
    [sym_number] = STATE(28),
    [sym_string] = STATE(28),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym__declaration_argument] = STATE(63),
    [sym_declaration_block] = STATE(2),
    [sym_var] = STATE(2),
    [sym_property] = STATE(2),
    [sym_alias] = STATE(17),
    [sym_declare] = STATE(18),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(15),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__local] = ACTIONS(45),
    [sym__exposed] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_LT_GT] = ACTIONS(54),
    [sym_attribute] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(63),
    [sym__hex_literal] = ACTIONS(66),
    [sym__dec_literal] = ACTIONS(69),
    [aux_sym__num_literal_token1] = ACTIONS(69),
    [aux_sym__exp_literal_token1] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_class_extends] = ACTIONS(75),
    [aux_sym_class_constructor_token1] = ACTIONS(78),
    [sym__var] = ACTIONS(81),
    [sym__property] = ACTIONS(84),
    [sym__alias] = ACTIONS(87),
    [sym__declare] = ACTIONS(90),
    [sym__function] = ACTIONS(93),
    [sym__class_store_4d] = ACTIONS(96),
    [sym__class_store_ds] = ACTIONS(96),
    [sym__class_store_cs] = ACTIONS(96),
    [sym__basic_type_text] = ACTIONS(99),
    [sym__basic_type_date] = ACTIONS(99),
    [sym__basic_type_time] = ACTIONS(99),
    [sym__basic_type_boolean] = ACTIONS(99),
    [sym__basic_type_integer] = ACTIONS(99),
    [sym__basic_type_real] = ACTIONS(99),
    [sym__basic_type_pointer] = ACTIONS(99),
    [sym__basic_type_picture] = ACTIONS(99),
    [sym__basic_type_blob] = ACTIONS(99),
    [sym__basic_type_collection] = ACTIONS(99),
    [sym__basic_type_variant] = ACTIONS(99),
    [sym__basic_type_object] = ACTIONS(99),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__token] = STATE(2),
    [sym_value] = STATE(2),
    [sym_constant] = STATE(36),
    [sym__scope] = STATE(73),
    [sym_function_name] = STATE(75),
    [sym_alias_name] = STATE(2),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(36),
    [sym_time] = STATE(28),
    [sym_date] = STATE(28),
    [sym__num_literal] = STATE(40),
    [sym__exp_literal] = STATE(40),
    [sym_number] = STATE(28),
    [sym_string] = STATE(28),
    [sym_function_block] = STATE(2),
    [sym_declare_block] = STATE(2),
    [sym_class_constructor] = STATE(2),
    [sym__declaration_argument] = STATE(63),
    [sym_declaration_block] = STATE(2),
    [sym_var] = STATE(2),
    [sym_property] = STATE(2),
    [sym_alias] = STATE(17),
    [sym_declare] = STATE(18),
    [sym_function] = STATE(4),
    [sym__class_store] = STATE(15),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym__local] = ACTIONS(5),
    [sym__exposed] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(11),
    [sym_attribute] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [sym__hex_literal] = ACTIONS(19),
    [sym__dec_literal] = ACTIONS(21),
    [aux_sym__num_literal_token1] = ACTIONS(21),
    [aux_sym__exp_literal_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_class_extends] = ACTIONS(104),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(112), 1,
      aux_sym__name_token1,
    STATE(78), 1,
      sym__computed,
    STATE(97), 1,
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
    ACTIONS(108), 23,
      sym__local,
      sym__exposed,
      sym_attribute,
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
  [55] = 2,
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
    ACTIONS(116), 28,
      sym__local,
      sym__exposed,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
      sym_attribute,
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
  [100] = 2,
    ACTIONS(120), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(118), 35,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [143] = 4,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(126), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(122), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [189] = 4,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(29), 1,
      sym_function_result,
    ACTIONS(132), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(128), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [235] = 4,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(37), 1,
      sym_function_result,
    ACTIONS(136), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(134), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [281] = 4,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(140), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(138), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [327] = 2,
    ACTIONS(144), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(142), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [369] = 2,
    ACTIONS(148), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(146), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [411] = 4,
    ACTIONS(150), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(120), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(118), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [457] = 2,
    ACTIONS(155), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(153), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [499] = 4,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(159), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(157), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [545] = 4,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(163), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(161), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [591] = 4,
    ACTIONS(165), 1,
      aux_sym__name_token1,
    STATE(79), 1,
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
    ACTIONS(108), 23,
      sym__local,
      sym__exposed,
      sym_attribute,
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
  [637] = 4,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_function_arguments,
    ACTIONS(108), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(106), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [683] = 2,
    ACTIONS(171), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(169), 34,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [725] = 3,
    ACTIONS(175), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(177), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(173), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [769] = 2,
    ACTIONS(181), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(179), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [810] = 2,
    ACTIONS(185), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(183), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [851] = 2,
    ACTIONS(189), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(187), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [892] = 2,
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
    ACTIONS(193), 24,
      sym__local,
      sym__exposed,
      aux_sym__name_token1,
      sym_attribute,
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
  [933] = 2,
    ACTIONS(197), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(195), 33,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [974] = 2,
    ACTIONS(201), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(199), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1014] = 2,
    ACTIONS(205), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(203), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1054] = 2,
    ACTIONS(209), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(207), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1094] = 2,
    ACTIONS(213), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(211), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1134] = 2,
    ACTIONS(217), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(215), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1174] = 2,
    ACTIONS(221), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(219), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1214] = 2,
    ACTIONS(225), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(223), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1254] = 2,
    ACTIONS(229), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(227), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1294] = 2,
    ACTIONS(233), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(231), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1334] = 2,
    ACTIONS(237), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(235), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1374] = 2,
    ACTIONS(177), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(173), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1414] = 2,
    ACTIONS(241), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(239), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1454] = 2,
    ACTIONS(245), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(243), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
    ACTIONS(247), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1534] = 2,
    ACTIONS(253), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(251), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1574] = 2,
    ACTIONS(257), 3,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      sym__var,
    ACTIONS(255), 32,
      ts_builtin_sym_end,
      sym__local,
      sym__exposed,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      sym_attribute,
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
  [1614] = 5,
    STATE(12), 1,
      sym_class,
    STATE(55), 1,
      sym__class_store,
    STATE(14), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(259), 3,
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
  [1644] = 5,
    STATE(15), 1,
      sym__class_store,
    STATE(38), 1,
      sym_class,
    STATE(14), 2,
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
  [1674] = 5,
    STATE(19), 1,
      sym_class,
    STATE(55), 1,
      sym__class_store,
    STATE(14), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(259), 3,
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
  [1704] = 5,
    STATE(15), 1,
      sym__class_store,
    STATE(19), 1,
      sym_class,
    STATE(14), 2,
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
  [1734] = 5,
    STATE(12), 1,
      sym_class,
    STATE(15), 1,
      sym__class_store,
    STATE(14), 2,
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
  [1764] = 5,
    STATE(15), 1,
      sym__class_store,
    STATE(34), 1,
      sym_class,
    STATE(14), 2,
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
  [1794] = 3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(263), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1809] = 3,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(267), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1824] = 3,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(271), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1839] = 4,
    ACTIONS(276), 1,
      aux_sym__name_token1,
    STATE(85), 1,
      sym__computed,
    STATE(95), 1,
      sym__name,
    ACTIONS(274), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1855] = 1,
    ACTIONS(116), 5,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
      aux_sym__name_token1,
  [1863] = 4,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_local_variable,
    STATE(64), 1,
      sym__function_argument,
  [1876] = 3,
    ACTIONS(280), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1887] = 3,
    ACTIONS(280), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(157), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1898] = 3,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_alias_name_repeat1,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1909] = 3,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym__function_argument_repeat1,
  [1919] = 3,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym__function_argument_repeat1,
  [1929] = 3,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym__function_argument_repeat1,
  [1939] = 3,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym__function_argument,
    STATE(66), 1,
      sym_local_variable,
  [1949] = 3,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym__function_argument_repeat1,
  [1959] = 3,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_function_arguments_repeat1,
  [1969] = 3,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(68), 1,
      aux_sym_declaration_block_repeat1,
  [1979] = 3,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_function_arguments_repeat1,
  [1989] = 3,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_declaration_block_repeat1,
  [1999] = 3,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_COLON,
    STATE(61), 1,
      aux_sym__function_argument_repeat1,
  [2009] = 2,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(74), 2,
      sym_local_variable,
      sym__declaration_argument,
  [2017] = 3,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_declaration_block_repeat1,
  [2027] = 3,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_function_arguments_repeat1,
  [2037] = 3,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_local_variable,
    STATE(84), 1,
      sym__function_argument,
  [2047] = 2,
    ACTIONS(322), 1,
      aux_sym__name_token1,
    STATE(6), 1,
      sym__name,
  [2054] = 2,
    ACTIONS(324), 1,
      aux_sym_time_token1,
    ACTIONS(326), 1,
      aux_sym_date_token1,
  [2061] = 2,
    ACTIONS(328), 1,
      sym__function,
    STATE(51), 1,
      sym_function,
  [2068] = 1,
    ACTIONS(314), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2073] = 2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_function_arguments,
  [2080] = 2,
    ACTIONS(330), 1,
      aux_sym__classic_name_token1,
    STATE(32), 1,
      sym__classic_name,
  [2087] = 2,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_local_variable,
  [2094] = 2,
    ACTIONS(332), 1,
      aux_sym__name_token1,
    STATE(95), 1,
      sym__name,
  [2101] = 2,
    ACTIONS(334), 1,
      aux_sym__name_token1,
    STATE(10), 1,
      sym__name,
  [2108] = 2,
    ACTIONS(322), 1,
      aux_sym__name_token1,
    STATE(6), 1,
      sym__name,
  [2115] = 2,
    ACTIONS(336), 1,
      aux_sym__classic_name_token1,
    STATE(11), 1,
      sym__classic_name,
  [2122] = 2,
    ACTIONS(338), 1,
      sym__local,
    ACTIONS(340), 1,
      sym__function,
  [2129] = 2,
    ACTIONS(338), 1,
      sym__exposed,
    ACTIONS(340), 1,
      sym__function,
  [2136] = 1,
    ACTIONS(301), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2141] = 2,
    ACTIONS(342), 1,
      aux_sym__name_token1,
    STATE(99), 1,
      sym__name,
  [2148] = 1,
    ACTIONS(292), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2153] = 1,
    ACTIONS(344), 1,
      anon_sym_DASH,
  [2157] = 1,
    ACTIONS(346), 1,
      aux_sym_time_token1,
  [2161] = 1,
    ACTIONS(346), 1,
      aux_sym_date_token1,
  [2165] = 1,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [2169] = 1,
    ACTIONS(350), 1,
      sym__function,
  [2173] = 1,
    ACTIONS(352), 1,
      anon_sym_DASH,
  [2177] = 1,
    ACTIONS(354), 1,
      anon_sym_QMARK,
  [2181] = 1,
    ACTIONS(356), 1,
      anon_sym_BANG,
  [2185] = 1,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
  [2189] = 1,
    ACTIONS(360), 1,
      aux_sym_time_token1,
  [2193] = 1,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [2197] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [2201] = 1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [2205] = 1,
    ACTIONS(368), 1,
      anon_sym_DASH,
  [2209] = 1,
    ACTIONS(370), 1,
      aux_sym_time_token1,
  [2213] = 1,
    ACTIONS(372), 1,
      anon_sym_DASH,
  [2217] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [2221] = 1,
    ACTIONS(376), 1,
      aux_sym_time_token1,
  [2225] = 1,
    ACTIONS(378), 1,
      aux_sym_time_token1,
  [2229] = 1,
    ACTIONS(380), 1,
      aux_sym_time_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 457,
  [SMALL_STATE(15)] = 499,
  [SMALL_STATE(16)] = 545,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 810,
  [SMALL_STATE(23)] = 851,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 933,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1054,
  [SMALL_STATE(29)] = 1094,
  [SMALL_STATE(30)] = 1134,
  [SMALL_STATE(31)] = 1174,
  [SMALL_STATE(32)] = 1214,
  [SMALL_STATE(33)] = 1254,
  [SMALL_STATE(34)] = 1294,
  [SMALL_STATE(35)] = 1334,
  [SMALL_STATE(36)] = 1374,
  [SMALL_STATE(37)] = 1414,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1494,
  [SMALL_STATE(40)] = 1534,
  [SMALL_STATE(41)] = 1574,
  [SMALL_STATE(42)] = 1614,
  [SMALL_STATE(43)] = 1644,
  [SMALL_STATE(44)] = 1674,
  [SMALL_STATE(45)] = 1704,
  [SMALL_STATE(46)] = 1734,
  [SMALL_STATE(47)] = 1764,
  [SMALL_STATE(48)] = 1794,
  [SMALL_STATE(49)] = 1809,
  [SMALL_STATE(50)] = 1824,
  [SMALL_STATE(51)] = 1839,
  [SMALL_STATE(52)] = 1855,
  [SMALL_STATE(53)] = 1863,
  [SMALL_STATE(54)] = 1876,
  [SMALL_STATE(55)] = 1887,
  [SMALL_STATE(56)] = 1898,
  [SMALL_STATE(57)] = 1909,
  [SMALL_STATE(58)] = 1919,
  [SMALL_STATE(59)] = 1929,
  [SMALL_STATE(60)] = 1939,
  [SMALL_STATE(61)] = 1949,
  [SMALL_STATE(62)] = 1959,
  [SMALL_STATE(63)] = 1969,
  [SMALL_STATE(64)] = 1979,
  [SMALL_STATE(65)] = 1989,
  [SMALL_STATE(66)] = 1999,
  [SMALL_STATE(67)] = 2009,
  [SMALL_STATE(68)] = 2017,
  [SMALL_STATE(69)] = 2027,
  [SMALL_STATE(70)] = 2037,
  [SMALL_STATE(71)] = 2047,
  [SMALL_STATE(72)] = 2054,
  [SMALL_STATE(73)] = 2061,
  [SMALL_STATE(74)] = 2068,
  [SMALL_STATE(75)] = 2073,
  [SMALL_STATE(76)] = 2080,
  [SMALL_STATE(77)] = 2087,
  [SMALL_STATE(78)] = 2094,
  [SMALL_STATE(79)] = 2101,
  [SMALL_STATE(80)] = 2108,
  [SMALL_STATE(81)] = 2115,
  [SMALL_STATE(82)] = 2122,
  [SMALL_STATE(83)] = 2129,
  [SMALL_STATE(84)] = 2136,
  [SMALL_STATE(85)] = 2141,
  [SMALL_STATE(86)] = 2148,
  [SMALL_STATE(87)] = 2153,
  [SMALL_STATE(88)] = 2157,
  [SMALL_STATE(89)] = 2161,
  [SMALL_STATE(90)] = 2165,
  [SMALL_STATE(91)] = 2169,
  [SMALL_STATE(92)] = 2173,
  [SMALL_STATE(93)] = 2177,
  [SMALL_STATE(94)] = 2181,
  [SMALL_STATE(95)] = 2185,
  [SMALL_STATE(96)] = 2189,
  [SMALL_STATE(97)] = 2193,
  [SMALL_STATE(98)] = 2197,
  [SMALL_STATE(99)] = 2201,
  [SMALL_STATE(100)] = 2205,
  [SMALL_STATE(101)] = 2209,
  [SMALL_STATE(102)] = 2213,
  [SMALL_STATE(103)] = 2217,
  [SMALL_STATE(104)] = 2221,
  [SMALL_STATE(105)] = 2225,
  [SMALL_STATE(106)] = 2229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(83),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(101),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(72),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(30),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_name_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alias_name_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_name_repeat1, 2), SHIFT_REPEAT(80),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_argument, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_result, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_result, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_name_repeat1, 2), SHIFT_REPEAT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(77),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(70),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(67),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
