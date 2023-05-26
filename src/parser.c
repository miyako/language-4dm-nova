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
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym__declare = 1,
  sym__function = 2,
  sym__local = 3,
  sym__exposed = 4,
  sym__get = 5,
  sym__set = 6,
  sym__query = 7,
  sym__orderBy = 8,
  sym__letter = 9,
  sym__alnum = 10,
  sym__alnumsp = 11,
  anon_sym_SEMI = 12,
  anon_sym_COLON = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_DASH_GT = 16,
  sym__class_store_4d = 17,
  sym__class_store_ds = 18,
  sym__class_store_cs = 19,
  anon_sym_DOT = 20,
  sym__basic_type_text = 21,
  sym__basic_type_date = 22,
  sym__basic_type_time = 23,
  sym__basic_type_boolean = 24,
  sym__basic_type_integer = 25,
  sym__basic_type_real = 26,
  sym__basic_type_pointer = 27,
  sym__basic_type_picture = 28,
  sym__basic_type_blob = 29,
  sym__basic_type_collection = 30,
  sym__basic_type_variant = 31,
  sym__basic_type_object = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_LT_GT = 34,
  anon_sym_QMARK = 35,
  aux_sym_time_token1 = 36,
  anon_sym_BANG = 37,
  aux_sym_date_token1 = 38,
  anon_sym_DASH = 39,
  aux_sym__hex_literal_token1 = 40,
  aux_sym__hex_literal_token2 = 41,
  aux_sym__dec_literal_token1 = 42,
  anon_sym_COMMA = 43,
  aux_sym__exp_literal_token1 = 44,
  aux_sym__exp_literal_token2 = 45,
  anon_sym_DQUOTE = 46,
  anon_sym_BSLASHr = 47,
  anon_sym_BSLASHn = 48,
  anon_sym_BSLASH_DQUOTE = 49,
  anon_sym_BSLASHt = 50,
  anon_sym_BSLASH_BSLASH = 51,
  aux_sym_string_token1 = 52,
  sym_source = 53,
  sym__token = 54,
  sym_keyword = 55,
  sym_constant = 56,
  sym_value = 57,
  sym__computed = 58,
  sym__scope = 59,
  sym__name = 60,
  sym__attribute_name = 61,
  sym_function = 62,
  sym__function_argument = 63,
  sym__function_arguments = 64,
  sym__function_result = 65,
  sym_function_block = 66,
  sym_declare = 67,
  sym_declare_block = 68,
  sym__class_store = 69,
  sym__class = 70,
  sym__basic_type = 71,
  sym_class = 72,
  sym_local_variable = 73,
  sym_process_variable = 74,
  sym_interprocess_variable = 75,
  sym_time = 76,
  sym_date = 77,
  sym__hex_literal = 78,
  sym__dec_literal = 79,
  sym__num_literal = 80,
  sym__exp_literal = 81,
  sym_number = 82,
  sym_string = 83,
  aux_sym_source_repeat1 = 84,
  aux_sym__function_argument_repeat1 = 85,
  aux_sym__function_arguments_repeat1 = 86,
  aux_sym__class_repeat1 = 87,
  aux_sym_string_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__declare] = "_declare",
  [sym__function] = "_function",
  [sym__local] = "_local",
  [sym__exposed] = "_exposed",
  [sym__get] = "_get",
  [sym__set] = "_set",
  [sym__query] = "_query",
  [sym__orderBy] = "_orderBy",
  [sym__letter] = "_letter",
  [sym__alnum] = "_alnum",
  [sym__alnumsp] = "_alnumsp",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym__class_store_4d] = "_class_store_4d",
  [sym__class_store_ds] = "_class_store_ds",
  [sym__class_store_cs] = "_class_store_cs",
  [anon_sym_DOT] = ".",
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
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_QMARK] = "\?",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_BANG] = "!",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [aux_sym__hex_literal_token1] = "_hex_literal_token1",
  [aux_sym__hex_literal_token2] = "_hex_literal_token2",
  [aux_sym__dec_literal_token1] = "_dec_literal_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym__exp_literal_token1] = "_exp_literal_token1",
  [aux_sym__exp_literal_token2] = "_exp_literal_token2",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token1] = "string_token1",
  [sym_source] = "source",
  [sym__token] = "_token",
  [sym_keyword] = "keyword",
  [sym_constant] = "constant",
  [sym_value] = "value",
  [sym__computed] = "_computed",
  [sym__scope] = "_scope",
  [sym__name] = "_name",
  [sym__attribute_name] = "_attribute_name",
  [sym_function] = "function",
  [sym__function_argument] = "_function_argument",
  [sym__function_arguments] = "_function_arguments",
  [sym__function_result] = "_function_result",
  [sym_function_block] = "function_block",
  [sym_declare] = "declare",
  [sym_declare_block] = "declare_block",
  [sym__class_store] = "_class_store",
  [sym__class] = "_class",
  [sym__basic_type] = "_basic_type",
  [sym_class] = "class",
  [sym_local_variable] = "local_variable",
  [sym_process_variable] = "process_variable",
  [sym_interprocess_variable] = "interprocess_variable",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym__hex_literal] = "_hex_literal",
  [sym__dec_literal] = "_dec_literal",
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
  [aux_sym__class_repeat1] = "_class_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__declare] = sym__declare,
  [sym__function] = sym__function,
  [sym__local] = sym__local,
  [sym__exposed] = sym__exposed,
  [sym__get] = sym__get,
  [sym__set] = sym__set,
  [sym__query] = sym__query,
  [sym__orderBy] = sym__orderBy,
  [sym__letter] = sym__letter,
  [sym__alnum] = sym__alnum,
  [sym__alnumsp] = sym__alnumsp,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__class_store_4d] = sym__class_store_4d,
  [sym__class_store_ds] = sym__class_store_ds,
  [sym__class_store_cs] = sym__class_store_cs,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__hex_literal_token1] = aux_sym__hex_literal_token1,
  [aux_sym__hex_literal_token2] = aux_sym__hex_literal_token2,
  [aux_sym__dec_literal_token1] = aux_sym__dec_literal_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__exp_literal_token1] = aux_sym__exp_literal_token1,
  [aux_sym__exp_literal_token2] = aux_sym__exp_literal_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source] = sym_source,
  [sym__token] = sym__token,
  [sym_keyword] = sym_keyword,
  [sym_constant] = sym_constant,
  [sym_value] = sym_value,
  [sym__computed] = sym__computed,
  [sym__scope] = sym__scope,
  [sym__name] = sym__name,
  [sym__attribute_name] = sym__attribute_name,
  [sym_function] = sym_function,
  [sym__function_argument] = sym__function_argument,
  [sym__function_arguments] = sym__function_arguments,
  [sym__function_result] = sym__function_result,
  [sym_function_block] = sym_function_block,
  [sym_declare] = sym_declare,
  [sym_declare_block] = sym_declare_block,
  [sym__class_store] = sym__class_store,
  [sym__class] = sym__class,
  [sym__basic_type] = sym__basic_type,
  [sym_class] = sym_class,
  [sym_local_variable] = sym_local_variable,
  [sym_process_variable] = sym_process_variable,
  [sym_interprocess_variable] = sym_interprocess_variable,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym__hex_literal] = sym__hex_literal,
  [sym__dec_literal] = sym__dec_literal,
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
  [aux_sym__class_repeat1] = aux_sym__class_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym__alnum] = {
    .visible = false,
    .named = true,
  },
  [sym__alnumsp] = {
    .visible = false,
    .named = true,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hex_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dec_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__exp_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exp_literal_token2] = {
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [sym__attribute_name] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__function_argument] = {
    .visible = false,
    .named = true,
  },
  [sym__function_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym__function_result] = {
    .visible = false,
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
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_process_variable] = {
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
  [sym__hex_literal] = {
    .visible = false,
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
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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

static inline bool sym__alnum_character_set_1(int32_t c) {
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

static inline bool sym__alnum_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'B'
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

static inline bool sym__alnumsp_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == ' '
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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
      if (eof) ADVANCE(97);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '4') ADVANCE(311);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '4') ADVANCE(311);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(152);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '4') ADVANCE(311);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(297);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 17:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 80:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 84:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 86:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 94:
      if (eof) ADVANCE(97);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == '4') ADVANCE(166);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(94)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 95:
      if (eof) ADVANCE(97);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '0') ADVANCE(314);
      if (lookahead == '4') ADVANCE(312);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(296);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__function);
      if (lookahead == ' ') ADVANCE(274);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__function);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__local);
      if (lookahead == ' ') ADVANCE(274);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__local);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__exposed);
      if (lookahead == ' ') ADVANCE(274);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__exposed);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(180);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(197);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(274);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(255);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__letter);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(213);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(172);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(202);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(274);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(271);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(230);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(260);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__alnum);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == '4') ADVANCE(166);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(273);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__alnumsp);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__dec_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__exp_literal_token2);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__exp_literal_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(326);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 95},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 95},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 95},
  [19] = {.lex_state = 95},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 96},
  [23] = {.lex_state = 95},
  [24] = {.lex_state = 95},
  [25] = {.lex_state = 95},
  [26] = {.lex_state = 95},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 95},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 95},
  [37] = {.lex_state = 95},
  [38] = {.lex_state = 95},
  [39] = {.lex_state = 95},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 95},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 95},
  [47] = {.lex_state = 95},
  [48] = {.lex_state = 95},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 5},
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
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 89},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 96},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 89},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 91},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 91},
  [104] = {.lex_state = 96},
  [105] = {.lex_state = 96},
  [106] = {.lex_state = 96},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 89},
  [109] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__declare] = ACTIONS(1),
    [sym__function] = ACTIONS(1),
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
    [sym__class_store_4d] = ACTIONS(1),
    [sym__class_store_ds] = ACTIONS(1),
    [sym__class_store_cs] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__hex_literal_token1] = ACTIONS(1),
    [aux_sym__dec_literal_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__exp_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(99),
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(44),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(100),
    [sym__name] = STATE(48),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(45),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(4),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [sym_class] = STATE(44),
    [sym_local_variable] = STATE(44),
    [sym_process_variable] = STATE(44),
    [sym_interprocess_variable] = STATE(44),
    [sym_time] = STATE(31),
    [sym_date] = STATE(31),
    [sym__hex_literal] = STATE(32),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(31),
    [sym_string] = STATE(31),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__declare] = ACTIONS(5),
    [sym__function] = ACTIONS(7),
    [sym__local] = ACTIONS(9),
    [sym__exposed] = ACTIONS(11),
    [sym__letter] = ACTIONS(13),
    [sym__class_store_4d] = ACTIONS(15),
    [sym__class_store_ds] = ACTIONS(15),
    [sym__class_store_cs] = ACTIONS(15),
    [sym__basic_type_text] = ACTIONS(17),
    [sym__basic_type_date] = ACTIONS(17),
    [sym__basic_type_time] = ACTIONS(17),
    [sym__basic_type_boolean] = ACTIONS(17),
    [sym__basic_type_integer] = ACTIONS(17),
    [sym__basic_type_real] = ACTIONS(17),
    [sym__basic_type_pointer] = ACTIONS(17),
    [sym__basic_type_picture] = ACTIONS(17),
    [sym__basic_type_blob] = ACTIONS(17),
    [sym__basic_type_collection] = ACTIONS(17),
    [sym__basic_type_variant] = ACTIONS(17),
    [sym__basic_type_object] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LT_GT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [aux_sym__hex_literal_token1] = ACTIONS(27),
    [aux_sym__dec_literal_token1] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(44),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(100),
    [sym__name] = STATE(48),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(45),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(4),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [sym_class] = STATE(44),
    [sym_local_variable] = STATE(44),
    [sym_process_variable] = STATE(44),
    [sym_interprocess_variable] = STATE(44),
    [sym_time] = STATE(31),
    [sym_date] = STATE(31),
    [sym__hex_literal] = STATE(32),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(31),
    [sym_string] = STATE(31),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__declare] = ACTIONS(5),
    [sym__function] = ACTIONS(7),
    [sym__local] = ACTIONS(9),
    [sym__exposed] = ACTIONS(11),
    [sym__letter] = ACTIONS(13),
    [sym__class_store_4d] = ACTIONS(15),
    [sym__class_store_ds] = ACTIONS(15),
    [sym__class_store_cs] = ACTIONS(15),
    [sym__basic_type_text] = ACTIONS(17),
    [sym__basic_type_date] = ACTIONS(17),
    [sym__basic_type_time] = ACTIONS(17),
    [sym__basic_type_boolean] = ACTIONS(17),
    [sym__basic_type_integer] = ACTIONS(17),
    [sym__basic_type_real] = ACTIONS(17),
    [sym__basic_type_pointer] = ACTIONS(17),
    [sym__basic_type_picture] = ACTIONS(17),
    [sym__basic_type_blob] = ACTIONS(17),
    [sym__basic_type_collection] = ACTIONS(17),
    [sym__basic_type_variant] = ACTIONS(17),
    [sym__basic_type_object] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_LT_GT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [aux_sym__hex_literal_token1] = ACTIONS(27),
    [aux_sym__dec_literal_token1] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(44),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(100),
    [sym__name] = STATE(48),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(45),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(4),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(18),
    [sym__basic_type] = STATE(18),
    [sym_class] = STATE(44),
    [sym_local_variable] = STATE(44),
    [sym_process_variable] = STATE(44),
    [sym_interprocess_variable] = STATE(44),
    [sym_time] = STATE(31),
    [sym_date] = STATE(31),
    [sym__hex_literal] = STATE(32),
    [sym__dec_literal] = STATE(32),
    [sym__num_literal] = STATE(32),
    [sym__exp_literal] = STATE(32),
    [sym_number] = STATE(31),
    [sym_string] = STATE(31),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__declare] = ACTIONS(37),
    [sym__function] = ACTIONS(40),
    [sym__local] = ACTIONS(43),
    [sym__exposed] = ACTIONS(46),
    [sym__letter] = ACTIONS(49),
    [sym__class_store_4d] = ACTIONS(52),
    [sym__class_store_ds] = ACTIONS(52),
    [sym__class_store_cs] = ACTIONS(52),
    [sym__basic_type_text] = ACTIONS(55),
    [sym__basic_type_date] = ACTIONS(55),
    [sym__basic_type_time] = ACTIONS(55),
    [sym__basic_type_boolean] = ACTIONS(55),
    [sym__basic_type_integer] = ACTIONS(55),
    [sym__basic_type_real] = ACTIONS(55),
    [sym__basic_type_pointer] = ACTIONS(55),
    [sym__basic_type_picture] = ACTIONS(55),
    [sym__basic_type_blob] = ACTIONS(55),
    [sym__basic_type_collection] = ACTIONS(55),
    [sym__basic_type_variant] = ACTIONS(55),
    [sym__basic_type_object] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(67),
    [aux_sym__hex_literal_token1] = ACTIONS(70),
    [aux_sym__dec_literal_token1] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(76),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    STATE(17), 1,
      sym__function_arguments,
    STATE(47), 1,
      sym__function_result,
    ACTIONS(81), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(79), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [45] = 6,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    STATE(19), 1,
      sym__function_arguments,
    STATE(46), 1,
      sym__function_result,
    ACTIONS(89), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(87), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [90] = 5,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__alnum,
    ACTIONS(97), 1,
      sym__alnumsp,
    ACTIONS(99), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(93), 27,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      aux_sym__dec_literal_token1,
      anon_sym_DQUOTE,
  [133] = 2,
    ACTIONS(103), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(101), 29,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [169] = 2,
    ACTIONS(107), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(105), 29,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [205] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym__class_repeat1,
    ACTIONS(111), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(109), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [244] = 3,
    ACTIONS(117), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(119), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(115), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [281] = 2,
    ACTIONS(123), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(121), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [316] = 2,
    ACTIONS(127), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(125), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [351] = 2,
    ACTIONS(131), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(129), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [386] = 4,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__class_repeat1,
    ACTIONS(103), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(101), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [425] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__class_repeat1,
    ACTIONS(138), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(136), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [464] = 3,
    ACTIONS(105), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(123), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(121), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [501] = 4,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    STATE(34), 1,
      sym__function_result,
    ACTIONS(142), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(140), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [540] = 2,
    ACTIONS(146), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(144), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [575] = 4,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    STATE(38), 1,
      sym__function_result,
    ACTIONS(150), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(148), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [614] = 4,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym__alnumsp,
    ACTIONS(152), 1,
      sym__alnum,
    ACTIONS(93), 27,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      aux_sym__dec_literal_token1,
      anon_sym_DQUOTE,
  [653] = 2,
    ACTIONS(156), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(154), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [688] = 3,
    ACTIONS(160), 1,
      sym__alnum,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      sym__declare,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(99), 21,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      aux_sym__hex_literal_token1,
      aux_sym__dec_literal_token1,
  [725] = 2,
    ACTIONS(164), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(162), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [760] = 2,
    ACTIONS(168), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(166), 28,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [795] = 2,
    ACTIONS(172), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(170), 27,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [829] = 3,
    ACTIONS(178), 1,
      aux_sym__exp_literal_token1,
    ACTIONS(176), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(174), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [865] = 2,
    ACTIONS(182), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(180), 27,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [899] = 2,
    ACTIONS(186), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(184), 27,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [933] = 2,
    ACTIONS(190), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(188), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [966] = 2,
    ACTIONS(194), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(192), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [999] = 2,
    ACTIONS(198), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(196), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1032] = 2,
    ACTIONS(202), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(200), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1065] = 2,
    ACTIONS(206), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(204), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1098] = 2,
    ACTIONS(210), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(208), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1131] = 2,
    ACTIONS(214), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(212), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1164] = 2,
    ACTIONS(218), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(216), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1197] = 2,
    ACTIONS(222), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(220), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1230] = 2,
    ACTIONS(226), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(224), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1263] = 2,
    ACTIONS(230), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(228), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1296] = 2,
    ACTIONS(234), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(232), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1329] = 2,
    ACTIONS(238), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(236), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1362] = 2,
    ACTIONS(242), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(240), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1395] = 2,
    ACTIONS(246), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(244), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1428] = 2,
    ACTIONS(250), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(248), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1461] = 2,
    ACTIONS(81), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(79), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1494] = 2,
    ACTIONS(150), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(148), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1527] = 2,
    ACTIONS(142), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(140), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1560] = 2,
    ACTIONS(254), 2,
      sym__letter,
      aux_sym__dec_literal_token1,
    ACTIONS(252), 26,
      ts_builtin_sym_end,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      anon_sym_DQUOTE,
  [1593] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(21), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(15), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(17), 12,
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
  [1623] = 5,
    STATE(24), 1,
      sym_class,
    STATE(63), 1,
      sym__class_store,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(256), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(17), 12,
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
  [1653] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(24), 1,
      sym_class,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(15), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(17), 12,
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
  [1683] = 5,
    STATE(21), 1,
      sym_class,
    STATE(63), 1,
      sym__class_store,
    STATE(18), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(256), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(17), 12,
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
  [1713] = 3,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(260), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1728] = 3,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1743] = 3,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(269), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [1758] = 4,
    ACTIONS(273), 1,
      sym__letter,
    STATE(29), 1,
      sym__attribute_name,
    STATE(81), 1,
      sym__computed,
    ACTIONS(271), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1774] = 4,
    ACTIONS(273), 1,
      sym__letter,
    STATE(30), 1,
      sym__attribute_name,
    STATE(83), 1,
      sym__computed,
    ACTIONS(275), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1790] = 3,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__class_repeat1,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1801] = 2,
    ACTIONS(279), 1,
      sym__alnum,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1810] = 3,
    ACTIONS(97), 1,
      sym__alnumsp,
    ACTIONS(152), 1,
      sym__alnum,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1821] = 4,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym__function_argument,
    STATE(68), 1,
      sym_local_variable,
  [1834] = 3,
    ACTIONS(285), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__class_repeat1,
    ACTIONS(101), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1845] = 3,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__class_repeat1,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1856] = 3,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym__function_argument_repeat1,
  [1866] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym__function_argument_repeat1,
  [1876] = 3,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym__function_argument,
    STATE(71), 1,
      sym_local_variable,
  [1886] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym__function_arguments_repeat1,
  [1896] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_COLON,
    STATE(70), 1,
      aux_sym__function_argument_repeat1,
  [1906] = 3,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__function_arguments_repeat1,
  [1916] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym__function_argument_repeat1,
  [1926] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym__function_argument_repeat1,
  [1936] = 3,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_local_variable,
    STATE(86), 1,
      sym__function_argument,
  [1946] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__function_arguments_repeat1,
  [1956] = 1,
    ACTIONS(291), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1961] = 2,
    ACTIONS(314), 1,
      sym__letter,
    STATE(23), 1,
      sym__name,
  [1968] = 2,
    ACTIONS(316), 1,
      sym__letter,
    STATE(23), 1,
      sym__name,
  [1975] = 2,
    ACTIONS(314), 1,
      sym__letter,
    STATE(36), 1,
      sym__name,
  [1982] = 2,
    ACTIONS(318), 1,
      sym__letter,
    STATE(7), 1,
      sym__attribute_name,
  [1989] = 2,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_local_variable,
  [1996] = 2,
    ACTIONS(320), 1,
      sym__letter,
    STATE(7), 1,
      sym__attribute_name,
  [2003] = 2,
    ACTIONS(318), 1,
      sym__letter,
    STATE(30), 1,
      sym__attribute_name,
  [2010] = 2,
    ACTIONS(322), 1,
      sym__function,
    ACTIONS(324), 1,
      sym__exposed,
  [2017] = 2,
    ACTIONS(318), 1,
      sym__letter,
    STATE(33), 1,
      sym__attribute_name,
  [2024] = 2,
    ACTIONS(322), 1,
      sym__function,
    ACTIONS(324), 1,
      sym__local,
  [2031] = 2,
    ACTIONS(326), 1,
      aux_sym_time_token1,
    ACTIONS(328), 1,
      aux_sym_date_token1,
  [2038] = 1,
    ACTIONS(306), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2043] = 1,
    ACTIONS(330), 1,
      aux_sym__hex_literal_token2,
  [2047] = 1,
    ACTIONS(332), 1,
      aux_sym_time_token1,
  [2051] = 1,
    ACTIONS(334), 1,
      aux_sym_time_token1,
  [2055] = 1,
    ACTIONS(336), 1,
      anon_sym_DASH,
  [2059] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [2063] = 1,
    ACTIONS(340), 1,
      aux_sym_time_token1,
  [2067] = 1,
    ACTIONS(342), 1,
      anon_sym_QMARK,
  [2071] = 1,
    ACTIONS(344), 1,
      anon_sym_BANG,
  [2075] = 1,
    ACTIONS(346), 1,
      aux_sym_time_token1,
  [2079] = 1,
    ACTIONS(340), 1,
      aux_sym_date_token1,
  [2083] = 1,
    ACTIONS(348), 1,
      aux_sym_time_token1,
  [2087] = 1,
    ACTIONS(350), 1,
      aux_sym__dec_literal_token1,
  [2091] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [2095] = 1,
    ACTIONS(354), 1,
      sym__function,
  [2099] = 1,
    ACTIONS(356), 1,
      aux_sym_time_token1,
  [2103] = 1,
    ACTIONS(358), 1,
      aux_sym__exp_literal_token2,
  [2107] = 1,
    ACTIONS(360), 1,
      aux_sym__dec_literal_token1,
  [2111] = 1,
    ACTIONS(362), 1,
      anon_sym_DASH,
  [2115] = 1,
    ACTIONS(364), 1,
      anon_sym_DASH,
  [2119] = 1,
    ACTIONS(366), 1,
      anon_sym_DASH,
  [2123] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2127] = 1,
    ACTIONS(370), 1,
      sym__letter,
  [2131] = 1,
    ACTIONS(372), 1,
      sym__function,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 540,
  [SMALL_STATE(19)] = 575,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 653,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 725,
  [SMALL_STATE(24)] = 760,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 899,
  [SMALL_STATE(29)] = 933,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 999,
  [SMALL_STATE(32)] = 1032,
  [SMALL_STATE(33)] = 1065,
  [SMALL_STATE(34)] = 1098,
  [SMALL_STATE(35)] = 1131,
  [SMALL_STATE(36)] = 1164,
  [SMALL_STATE(37)] = 1197,
  [SMALL_STATE(38)] = 1230,
  [SMALL_STATE(39)] = 1263,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1329,
  [SMALL_STATE(42)] = 1362,
  [SMALL_STATE(43)] = 1395,
  [SMALL_STATE(44)] = 1428,
  [SMALL_STATE(45)] = 1461,
  [SMALL_STATE(46)] = 1494,
  [SMALL_STATE(47)] = 1527,
  [SMALL_STATE(48)] = 1560,
  [SMALL_STATE(49)] = 1593,
  [SMALL_STATE(50)] = 1623,
  [SMALL_STATE(51)] = 1653,
  [SMALL_STATE(52)] = 1683,
  [SMALL_STATE(53)] = 1713,
  [SMALL_STATE(54)] = 1728,
  [SMALL_STATE(55)] = 1743,
  [SMALL_STATE(56)] = 1758,
  [SMALL_STATE(57)] = 1774,
  [SMALL_STATE(58)] = 1790,
  [SMALL_STATE(59)] = 1801,
  [SMALL_STATE(60)] = 1810,
  [SMALL_STATE(61)] = 1821,
  [SMALL_STATE(62)] = 1834,
  [SMALL_STATE(63)] = 1845,
  [SMALL_STATE(64)] = 1856,
  [SMALL_STATE(65)] = 1866,
  [SMALL_STATE(66)] = 1876,
  [SMALL_STATE(67)] = 1886,
  [SMALL_STATE(68)] = 1896,
  [SMALL_STATE(69)] = 1906,
  [SMALL_STATE(70)] = 1916,
  [SMALL_STATE(71)] = 1926,
  [SMALL_STATE(72)] = 1936,
  [SMALL_STATE(73)] = 1946,
  [SMALL_STATE(74)] = 1956,
  [SMALL_STATE(75)] = 1961,
  [SMALL_STATE(76)] = 1968,
  [SMALL_STATE(77)] = 1975,
  [SMALL_STATE(78)] = 1982,
  [SMALL_STATE(79)] = 1989,
  [SMALL_STATE(80)] = 1996,
  [SMALL_STATE(81)] = 2003,
  [SMALL_STATE(82)] = 2010,
  [SMALL_STATE(83)] = 2017,
  [SMALL_STATE(84)] = 2024,
  [SMALL_STATE(85)] = 2031,
  [SMALL_STATE(86)] = 2038,
  [SMALL_STATE(87)] = 2043,
  [SMALL_STATE(88)] = 2047,
  [SMALL_STATE(89)] = 2051,
  [SMALL_STATE(90)] = 2055,
  [SMALL_STATE(91)] = 2059,
  [SMALL_STATE(92)] = 2063,
  [SMALL_STATE(93)] = 2067,
  [SMALL_STATE(94)] = 2071,
  [SMALL_STATE(95)] = 2075,
  [SMALL_STATE(96)] = 2079,
  [SMALL_STATE(97)] = 2083,
  [SMALL_STATE(98)] = 2087,
  [SMALL_STATE(99)] = 2091,
  [SMALL_STATE(100)] = 2095,
  [SMALL_STATE(101)] = 2099,
  [SMALL_STATE(102)] = 2103,
  [SMALL_STATE(103)] = 2107,
  [SMALL_STATE(104)] = 2111,
  [SMALL_STATE(105)] = 2115,
  [SMALL_STATE(106)] = 2119,
  [SMALL_STATE(107)] = 2123,
  [SMALL_STATE(108)] = 2127,
  [SMALL_STATE(109)] = 2131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(84),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(75),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(77),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(89),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(85),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(87),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dec_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dec_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(78),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_literal, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num_literal, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_literal, 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp_literal, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_result, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_result, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex_literal, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex_literal, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_variable, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_variable, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(80),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(79),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2), SHIFT_REPEAT(72),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
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
