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
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_var = 1,
  sym_property = 2,
  sym__return = 3,
  sym__break = 4,
  sym__continue = 5,
  sym__declare = 6,
  sym__alias = 7,
  sym__function = 8,
  sym__local = 9,
  sym__exposed = 10,
  sym__get = 11,
  sym__set = 12,
  sym__query = 13,
  sym__orderBy = 14,
  sym__letter = 15,
  sym__alnum = 16,
  sym__alnumsp = 17,
  anon_sym_SEMI = 18,
  anon_sym_COLON = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DASH_GT = 22,
  sym__class_store_4d = 23,
  sym__class_store_ds = 24,
  sym__class_store_cs = 25,
  anon_sym_DOT = 26,
  sym__basic_type_text = 27,
  sym__basic_type_date = 28,
  sym__basic_type_time = 29,
  sym__basic_type_boolean = 30,
  sym__basic_type_integer = 31,
  sym__basic_type_real = 32,
  sym__basic_type_pointer = 33,
  sym__basic_type_picture = 34,
  sym__basic_type_blob = 35,
  sym__basic_type_collection = 36,
  sym__basic_type_variant = 37,
  sym__basic_type_object = 38,
  anon_sym_DOLLAR = 39,
  anon_sym_LT_GT = 40,
  anon_sym_QMARK = 41,
  aux_sym_time_token1 = 42,
  anon_sym_BANG = 43,
  aux_sym_date_token1 = 44,
  anon_sym_DASH = 45,
  aux_sym__hex_literal_token1 = 46,
  aux_sym__hex_literal_token2 = 47,
  sym__dec_literal = 48,
  aux_sym__num_literal_token1 = 49,
  aux_sym__exp_literal_token1 = 50,
  anon_sym_DQUOTE = 51,
  anon_sym_BSLASHr = 52,
  anon_sym_BSLASHn = 53,
  anon_sym_BSLASH_DQUOTE = 54,
  anon_sym_BSLASHt = 55,
  anon_sym_BSLASH_BSLASH = 56,
  aux_sym_string_token1 = 57,
  sym_class_extends = 58,
  anon_sym_ = 59,
  aux_sym_class_constructor_token1 = 60,
  sym_source = 61,
  sym__token = 62,
  sym_keyword = 63,
  sym_constant = 64,
  sym_value = 65,
  sym__computed = 66,
  sym__scope = 67,
  sym__name = 68,
  sym__attribute_name = 69,
  sym_function = 70,
  sym__function_argument = 71,
  sym__function_arguments = 72,
  sym__function_result = 73,
  sym_function_block = 74,
  sym_declare = 75,
  sym_declare_block = 76,
  sym__class_store = 77,
  sym__class = 78,
  sym__basic_type = 79,
  sym_class = 80,
  sym_local_variable = 81,
  sym_process_variable = 82,
  sym_interprocess_variable = 83,
  sym_time = 84,
  sym_date = 85,
  sym__hex_literal = 86,
  sym__num_literal = 87,
  sym__exp_literal = 88,
  sym_number = 89,
  sym_string = 90,
  sym__class_extends = 91,
  sym_class_constructor = 92,
  sym_class_constructor_block = 93,
  sym__declaration_argument = 94,
  sym_declaration_block = 95,
  aux_sym_source_repeat1 = 96,
  aux_sym__function_argument_repeat1 = 97,
  aux_sym__function_arguments_repeat1 = 98,
  aux_sym__class_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  aux_sym_declaration_block_repeat1 = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_var] = "var",
  [sym_property] = "property",
  [sym__return] = "_return",
  [sym__break] = "_break",
  [sym__continue] = "_continue",
  [sym__declare] = "_declare",
  [sym__alias] = "_alias",
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
  [anon_sym_] = " ",
  [aux_sym_class_constructor_token1] = "class_constructor_token1",
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
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym__class_extends] = "_class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_class_constructor_block] = "class_constructor_block",
  [sym__declaration_argument] = "_declaration_argument",
  [sym_declaration_block] = "declaration_block",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
  [aux_sym__class_repeat1] = "_class_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_declaration_block_repeat1] = "declaration_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_var] = sym_var,
  [sym_property] = sym_property,
  [sym__return] = sym__return,
  [sym__break] = sym__break,
  [sym__continue] = sym__continue,
  [sym__declare] = sym__declare,
  [sym__alias] = sym__alias,
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
  [anon_sym_] = anon_sym_,
  [aux_sym_class_constructor_token1] = aux_sym_class_constructor_token1,
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
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym__class_extends] = sym__class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_class_constructor_block] = sym_class_constructor_block,
  [sym__declaration_argument] = sym__declaration_argument,
  [sym_declaration_block] = sym_declaration_block,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
  [aux_sym__class_repeat1] = aux_sym__class_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_declaration_block_repeat1] = aux_sym_declaration_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym__declare] = {
    .visible = false,
    .named = true,
  },
  [sym__alias] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_constructor_token1] = {
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
  [sym__class_extends] = {
    .visible = false,
    .named = true,
  },
  [sym_class_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_class_constructor_block] = {
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

static inline bool sym__letter_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(213);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(514);
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(503);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == '4') ADVANCE(537);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(514);
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(503);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == '4') ADVANCE(537);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(514);
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(503);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == '4') ADVANCE(537);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '?') ADVANCE(508);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '>') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '>') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(272);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(272);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '!') ADVANCE(515);
      if (lookahead == '"') ADVANCE(543);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(504);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == '4') ADVANCE(357);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(271);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '!') ADVANCE(517);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '0') ADVANCE(531);
      if (lookahead == '4') ADVANCE(538);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(336);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(457);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(26);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(517);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '0') ADVANCE(531);
      if (lookahead == '4') ADVANCE(538);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(516);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(505);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == '4') ADVANCE(413);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '?') ADVANCE(510);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(305);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(204);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(542);
      if (lookahead == '\\') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '.') ADVANCE(490);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(208);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '.') ADVANCE(490);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(208);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(483);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(507);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(507);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(343);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(343);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 56:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(499);
      END_STATE();
    case 59:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(302);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 60:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(295);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(221);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 152:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 153:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 186:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 187:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 188:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 190:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 191:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 193:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 194:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 195:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(324);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 196:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 197:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 198:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 199:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 207:
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 208:
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 209:
      if (eof) ADVANCE(213);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '!') ADVANCE(517);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '0') ADVANCE(531);
      if (lookahead == '4') ADVANCE(538);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 210:
      if (eof) ADVANCE(213);
      if (lookahead == '!') ADVANCE(517);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '$') ADVANCE(506);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == '0') ADVANCE(531);
      if (lookahead == '4') ADVANCE(538);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 211:
      if (eof) ADVANCE(213);
      if (lookahead == '!') ADVANCE(515);
      if (lookahead == '"') ADVANCE(543);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(504);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '4') ADVANCE(529);
      if (lookahead == ':') ADVANCE(477);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 212:
      if (eof) ADVANCE(213);
      if (lookahead == '!') ADVANCE(516);
      if (lookahead == '"') ADVANCE(544);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(505);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == '4') ADVANCE(539);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '?') ADVANCE(510);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(204);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(407);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_property);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_property);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_property);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__declare);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__declare);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__function);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__function);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__local);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__local);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__exposed);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__exposed);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(272);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(272);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(366);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(359);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(381);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(391);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(240);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(343);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(343);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(302);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(448);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(422);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(100);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(437);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(324);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(447);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__letter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__letter);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__letter);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(65);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(399);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(365);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(385);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(218);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(475);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(458);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(455);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(429);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(449);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(343);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(421);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(419);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(219);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__alnum);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '!') ADVANCE(515);
      if (lookahead == '"') ADVANCE(543);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(504);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == '4') ADVANCE(357);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(26);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(20);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(464);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(472);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(468);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(471);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(459);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(470);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__alnumsp);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(455);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(483);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(343);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == ' ') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(272);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(343);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(551);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_class_extends);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_class_constructor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 210},
  [2] = {.lex_state = 210},
  [3] = {.lex_state = 210},
  [4] = {.lex_state = 211},
  [5] = {.lex_state = 210},
  [6] = {.lex_state = 211},
  [7] = {.lex_state = 210},
  [8] = {.lex_state = 210},
  [9] = {.lex_state = 210},
  [10] = {.lex_state = 212},
  [11] = {.lex_state = 210},
  [12] = {.lex_state = 210},
  [13] = {.lex_state = 210},
  [14] = {.lex_state = 210},
  [15] = {.lex_state = 210},
  [16] = {.lex_state = 210},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 210},
  [19] = {.lex_state = 210},
  [20] = {.lex_state = 210},
  [21] = {.lex_state = 210},
  [22] = {.lex_state = 210},
  [23] = {.lex_state = 209},
  [24] = {.lex_state = 210},
  [25] = {.lex_state = 210},
  [26] = {.lex_state = 210},
  [27] = {.lex_state = 210},
  [28] = {.lex_state = 210},
  [29] = {.lex_state = 210},
  [30] = {.lex_state = 210},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 210},
  [33] = {.lex_state = 210},
  [34] = {.lex_state = 210},
  [35] = {.lex_state = 210},
  [36] = {.lex_state = 210},
  [37] = {.lex_state = 210},
  [38] = {.lex_state = 210},
  [39] = {.lex_state = 210},
  [40] = {.lex_state = 210},
  [41] = {.lex_state = 210},
  [42] = {.lex_state = 210},
  [43] = {.lex_state = 210},
  [44] = {.lex_state = 210},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 210},
  [47] = {.lex_state = 210},
  [48] = {.lex_state = 210},
  [49] = {.lex_state = 210},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 210},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 25},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
    [sym_property] = ACTIONS(1),
    [sym__return] = ACTIONS(1),
    [sym__break] = ACTIONS(1),
    [sym__continue] = ACTIONS(1),
    [sym__declare] = ACTIONS(1),
    [sym__alias] = ACTIONS(1),
    [sym__function] = ACTIONS(1),
    [sym__local] = ACTIONS(1),
    [sym__exposed] = ACTIONS(1),
    [sym__get] = ACTIONS(1),
    [sym__set] = ACTIONS(1),
    [sym__query] = ACTIONS(1),
    [sym__orderBy] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source] = STATE(107),
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(41),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(115),
    [sym__name] = STATE(18),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(35),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(8),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(19),
    [sym__class] = STATE(44),
    [sym__basic_type] = STATE(44),
    [sym_class] = STATE(41),
    [sym_local_variable] = STATE(20),
    [sym_process_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(41),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__hex_literal] = STATE(42),
    [sym__num_literal] = STATE(42),
    [sym__exp_literal] = STATE(42),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym__class_extends] = STATE(30),
    [sym_class_constructor] = STATE(31),
    [sym_class_constructor_block] = STATE(3),
    [sym__declaration_argument] = STATE(84),
    [sym_declaration_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(7),
    [sym__declare] = ACTIONS(9),
    [sym__function] = ACTIONS(11),
    [sym__local] = ACTIONS(13),
    [sym__exposed] = ACTIONS(15),
    [sym__letter] = ACTIONS(17),
    [sym__class_store_4d] = ACTIONS(19),
    [sym__class_store_ds] = ACTIONS(19),
    [sym__class_store_cs] = ACTIONS(19),
    [sym__basic_type_text] = ACTIONS(21),
    [sym__basic_type_date] = ACTIONS(21),
    [sym__basic_type_time] = ACTIONS(21),
    [sym__basic_type_boolean] = ACTIONS(21),
    [sym__basic_type_integer] = ACTIONS(21),
    [sym__basic_type_real] = ACTIONS(21),
    [sym__basic_type_pointer] = ACTIONS(21),
    [sym__basic_type_picture] = ACTIONS(21),
    [sym__basic_type_blob] = ACTIONS(21),
    [sym__basic_type_collection] = ACTIONS(21),
    [sym__basic_type_variant] = ACTIONS(21),
    [sym__basic_type_object] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__hex_literal_token1] = ACTIONS(31),
    [sym__dec_literal] = ACTIONS(33),
    [aux_sym__num_literal_token1] = ACTIONS(33),
    [aux_sym__exp_literal_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_class_extends] = ACTIONS(39),
    [aux_sym_class_constructor_token1] = ACTIONS(41),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(41),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(115),
    [sym__name] = STATE(18),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(35),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(8),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(19),
    [sym__class] = STATE(44),
    [sym__basic_type] = STATE(44),
    [sym_class] = STATE(41),
    [sym_local_variable] = STATE(20),
    [sym_process_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(41),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__hex_literal] = STATE(42),
    [sym__num_literal] = STATE(42),
    [sym__exp_literal] = STATE(42),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym__class_extends] = STATE(30),
    [sym_class_constructor] = STATE(31),
    [sym_class_constructor_block] = STATE(2),
    [sym__declaration_argument] = STATE(84),
    [sym_declaration_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_var] = ACTIONS(45),
    [sym_property] = ACTIONS(48),
    [sym__declare] = ACTIONS(51),
    [sym__function] = ACTIONS(54),
    [sym__local] = ACTIONS(57),
    [sym__exposed] = ACTIONS(60),
    [sym__letter] = ACTIONS(63),
    [sym__class_store_4d] = ACTIONS(66),
    [sym__class_store_ds] = ACTIONS(66),
    [sym__class_store_cs] = ACTIONS(66),
    [sym__basic_type_text] = ACTIONS(69),
    [sym__basic_type_date] = ACTIONS(69),
    [sym__basic_type_time] = ACTIONS(69),
    [sym__basic_type_boolean] = ACTIONS(69),
    [sym__basic_type_integer] = ACTIONS(69),
    [sym__basic_type_real] = ACTIONS(69),
    [sym__basic_type_pointer] = ACTIONS(69),
    [sym__basic_type_picture] = ACTIONS(69),
    [sym__basic_type_blob] = ACTIONS(69),
    [sym__basic_type_collection] = ACTIONS(69),
    [sym__basic_type_variant] = ACTIONS(69),
    [sym__basic_type_object] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_LT_GT] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(81),
    [aux_sym__hex_literal_token1] = ACTIONS(84),
    [sym__dec_literal] = ACTIONS(87),
    [aux_sym__num_literal_token1] = ACTIONS(87),
    [aux_sym__exp_literal_token1] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_class_extends] = ACTIONS(96),
    [aux_sym_class_constructor_token1] = ACTIONS(99),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(41),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(115),
    [sym__name] = STATE(18),
    [sym__attribute_name] = STATE(5),
    [sym_function] = STATE(35),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(8),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(19),
    [sym__class] = STATE(44),
    [sym__basic_type] = STATE(44),
    [sym_class] = STATE(41),
    [sym_local_variable] = STATE(20),
    [sym_process_variable] = STATE(20),
    [sym_interprocess_variable] = STATE(41),
    [sym_time] = STATE(29),
    [sym_date] = STATE(29),
    [sym__hex_literal] = STATE(42),
    [sym__num_literal] = STATE(42),
    [sym__exp_literal] = STATE(42),
    [sym_number] = STATE(29),
    [sym_string] = STATE(29),
    [sym__class_extends] = STATE(30),
    [sym_class_constructor] = STATE(31),
    [sym_class_constructor_block] = STATE(2),
    [sym__declaration_argument] = STATE(84),
    [sym_declaration_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(7),
    [sym__declare] = ACTIONS(9),
    [sym__function] = ACTIONS(11),
    [sym__local] = ACTIONS(13),
    [sym__exposed] = ACTIONS(15),
    [sym__letter] = ACTIONS(17),
    [sym__class_store_4d] = ACTIONS(19),
    [sym__class_store_ds] = ACTIONS(19),
    [sym__class_store_cs] = ACTIONS(19),
    [sym__basic_type_text] = ACTIONS(21),
    [sym__basic_type_date] = ACTIONS(21),
    [sym__basic_type_time] = ACTIONS(21),
    [sym__basic_type_boolean] = ACTIONS(21),
    [sym__basic_type_integer] = ACTIONS(21),
    [sym__basic_type_real] = ACTIONS(21),
    [sym__basic_type_pointer] = ACTIONS(21),
    [sym__basic_type_picture] = ACTIONS(21),
    [sym__basic_type_blob] = ACTIONS(21),
    [sym__basic_type_collection] = ACTIONS(21),
    [sym__basic_type_variant] = ACTIONS(21),
    [sym__basic_type_object] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [aux_sym__hex_literal_token1] = ACTIONS(31),
    [sym__dec_literal] = ACTIONS(33),
    [aux_sym__num_literal_token1] = ACTIONS(33),
    [aux_sym__exp_literal_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_class_extends] = ACTIONS(39),
    [aux_sym_class_constructor_token1] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__alnum,
    ACTIONS(110), 1,
      sym__alnumsp,
    ACTIONS(112), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(106), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [51] = 6,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
    STATE(15), 1,
      sym__function_arguments,
    STATE(51), 1,
      sym__function_result,
    ACTIONS(116), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(114), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [102] = 4,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__alnumsp,
    ACTIONS(122), 1,
      sym__alnum,
    ACTIONS(106), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [149] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    ACTIONS(126), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(124), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [196] = 6,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
    STATE(13), 1,
      sym__function_arguments,
    STATE(53), 1,
      sym__function_result,
    ACTIONS(134), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [247] = 2,
    ACTIONS(126), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(124), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [288] = 3,
    ACTIONS(138), 1,
      sym__alnum,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
    ACTIONS(112), 30,
      sym_var,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
  [331] = 2,
    ACTIONS(142), 13,
      sym_var,
      sym__letter,
      anon_sym_LPAREN,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(140), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [372] = 2,
    ACTIONS(146), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(144), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [413] = 4,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
    STATE(45), 1,
      sym__function_result,
    ACTIONS(150), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(148), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [458] = 4,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__class_repeat1,
    ACTIONS(154), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(152), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [503] = 4,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
    STATE(47), 1,
      sym__function_result,
    ACTIONS(160), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(158), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [548] = 4,
    ACTIONS(166), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__class_repeat1,
    ACTIONS(164), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(162), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [593] = 2,
    ACTIONS(171), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(169), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [634] = 2,
    ACTIONS(175), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(173), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_SEMI,
      anon_sym_COLON,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [675] = 4,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__class_repeat1,
    ACTIONS(179), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(177), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [720] = 3,
    ACTIONS(185), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(183), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(181), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [763] = 2,
    ACTIONS(128), 13,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(130), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [803] = 2,
    ACTIONS(189), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(187), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [843] = 3,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(134), 33,
      sym_var,
      sym_property,
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
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [885] = 2,
    ACTIONS(164), 13,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(162), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [925] = 2,
    ACTIONS(195), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(193), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [965] = 2,
    ACTIONS(199), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(197), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
      anon_sym_DASH_GT,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1005] = 2,
    ACTIONS(203), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(201), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1044] = 2,
    ACTIONS(207), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(205), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1083] = 2,
    ACTIONS(211), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(209), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1122] = 2,
    ACTIONS(215), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(213), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1161] = 2,
    ACTIONS(134), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1200] = 2,
    ACTIONS(219), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(217), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1239] = 2,
    ACTIONS(223), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(221), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1278] = 2,
    ACTIONS(227), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(225), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1317] = 2,
    ACTIONS(134), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1356] = 2,
    ACTIONS(231), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(229), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1395] = 2,
    ACTIONS(235), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(233), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1434] = 2,
    ACTIONS(239), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(237), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1473] = 2,
    ACTIONS(243), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(241), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1512] = 2,
    ACTIONS(247), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(245), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1551] = 2,
    ACTIONS(183), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(181), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1590] = 2,
    ACTIONS(251), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(249), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1629] = 2,
    ACTIONS(255), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(253), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1668] = 2,
    ACTIONS(259), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(257), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1707] = 2,
    ACTIONS(263), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(261), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1746] = 2,
    ACTIONS(267), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(265), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1785] = 2,
    ACTIONS(271), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(269), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1824] = 2,
    ACTIONS(275), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(273), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1863] = 2,
    ACTIONS(279), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(277), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1902] = 2,
    ACTIONS(283), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(281), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1941] = 2,
    ACTIONS(160), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(158), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1980] = 2,
    ACTIONS(287), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(285), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2019] = 2,
    ACTIONS(150), 12,
      sym_var,
      sym__letter,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym__hex_literal_token1,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      anon_sym_DQUOTE,
    ACTIONS(148), 22,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym__function,
      sym__local,
      sym__exposed,
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
      anon_sym_LT_GT,
      aux_sym__exp_literal_token1,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2058] = 5,
    STATE(19), 1,
      sym__class_store,
    STATE(46), 1,
      sym_class,
    STATE(44), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(289), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(21), 12,
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
  [2088] = 5,
    STATE(67), 1,
      sym__class_store,
    STATE(89), 1,
      sym_class,
    STATE(104), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(291), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(293), 12,
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
  [2118] = 5,
    STATE(19), 1,
      sym__class_store,
    STATE(32), 1,
      sym_class,
    STATE(44), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(289), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(21), 12,
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
  [2148] = 5,
    STATE(19), 1,
      sym__class_store,
    STATE(40), 1,
      sym_class,
    STATE(44), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(289), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(21), 12,
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
  [2178] = 5,
    STATE(19), 1,
      sym__class_store,
    STATE(33), 1,
      sym_class,
    STATE(44), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(289), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(21), 12,
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
  [2208] = 5,
    STATE(67), 1,
      sym__class_store,
    STATE(101), 1,
      sym_class,
    STATE(104), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(291), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(293), 12,
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
  [2238] = 5,
    STATE(19), 1,
      sym__class_store,
    STATE(38), 1,
      sym_class,
    STATE(44), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(289), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(21), 12,
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
  [2268] = 3,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2283] = 3,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(302), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2298] = 3,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(306), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2313] = 4,
    ACTIONS(310), 1,
      sym__letter,
    STATE(34), 1,
      sym__attribute_name,
    STATE(98), 1,
      sym__computed,
    ACTIONS(308), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2329] = 4,
    ACTIONS(310), 1,
      sym__letter,
    STATE(27), 1,
      sym__attribute_name,
    STATE(88), 1,
      sym__computed,
    ACTIONS(312), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2345] = 4,
    ACTIONS(314), 1,
      sym__letter,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      sym__name,
    STATE(103), 3,
      sym_local_variable,
      sym_process_variable,
      sym__declaration_argument,
  [2360] = 3,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym__class_repeat1,
    ACTIONS(177), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2371] = 3,
    ACTIONS(110), 1,
      sym__alnumsp,
    ACTIONS(122), 1,
      sym__alnum,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2382] = 3,
    ACTIONS(320), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym__class_repeat1,
    ACTIONS(162), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2393] = 3,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      sym__alnum,
    ACTIONS(112), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2404] = 3,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym__class_repeat1,
    ACTIONS(152), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2415] = 4,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym__function_argument,
    STATE(76), 1,
      sym_local_variable,
  [2428] = 1,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2434] = 3,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym__function_argument,
    STATE(80), 1,
      sym_local_variable,
  [2444] = 3,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__function_arguments_repeat1,
  [2454] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(335), 1,
      anon_sym_COLON,
    STATE(86), 1,
      aux_sym__function_argument_repeat1,
  [2464] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(337), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2474] = 1,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2480] = 3,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_declaration_block_repeat1,
  [2490] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym__function_argument_repeat1,
  [2500] = 3,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2510] = 3,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_declaration_block_repeat1,
  [2520] = 3,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym__function_arguments_repeat1,
  [2530] = 3,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(79), 1,
      aux_sym_declaration_block_repeat1,
  [2540] = 3,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym__function_arguments_repeat1,
  [2550] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2560] = 3,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_local_variable,
    STATE(97), 1,
      sym__function_argument,
  [2570] = 2,
    ACTIONS(366), 1,
      sym__letter,
    STATE(34), 1,
      sym__attribute_name,
  [2577] = 1,
    ACTIONS(237), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2582] = 2,
    ACTIONS(368), 1,
      sym__function,
    ACTIONS(370), 1,
      sym__exposed,
  [2589] = 2,
    ACTIONS(368), 1,
      sym__function,
    ACTIONS(370), 1,
      sym__local,
  [2596] = 2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym_local_variable,
  [2603] = 2,
    ACTIONS(372), 1,
      sym__letter,
    STATE(17), 1,
      sym__name,
  [2610] = 2,
    ACTIONS(314), 1,
      sym__letter,
    STATE(17), 1,
      sym__name,
  [2617] = 2,
    ACTIONS(372), 1,
      sym__letter,
    STATE(39), 1,
      sym__name,
  [2624] = 2,
    ACTIONS(374), 1,
      aux_sym_time_token1,
    ACTIONS(376), 1,
      aux_sym_date_token1,
  [2631] = 1,
    ACTIONS(358), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2636] = 2,
    ACTIONS(366), 1,
      sym__letter,
    STATE(36), 1,
      sym__attribute_name,
  [2643] = 2,
    ACTIONS(366), 1,
      sym__letter,
    STATE(24), 1,
      sym__attribute_name,
  [2650] = 1,
    ACTIONS(348), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2655] = 1,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2660] = 2,
    ACTIONS(378), 1,
      sym__letter,
    STATE(73), 1,
      sym__attribute_name,
  [2667] = 1,
    ACTIONS(353), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2672] = 1,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2677] = 1,
    ACTIONS(380), 1,
      aux_sym_time_token1,
  [2681] = 1,
    ACTIONS(382), 1,
      anon_sym_BANG,
  [2685] = 1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
  [2689] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [2693] = 1,
    ACTIONS(388), 1,
      anon_sym_DASH,
  [2697] = 1,
    ACTIONS(390), 1,
      sym__letter,
  [2701] = 1,
    ACTIONS(392), 1,
      anon_sym_QMARK,
  [2705] = 1,
    ACTIONS(394), 1,
      aux_sym_time_token1,
  [2709] = 1,
    ACTIONS(396), 1,
      anon_sym_COLON,
  [2713] = 1,
    ACTIONS(398), 1,
      anon_sym_DASH,
  [2717] = 1,
    ACTIONS(400), 1,
      sym__function,
  [2721] = 1,
    ACTIONS(402), 1,
      anon_sym_DASH,
  [2725] = 1,
    ACTIONS(404), 1,
      aux_sym_time_token1,
  [2729] = 1,
    ACTIONS(406), 1,
      aux_sym__hex_literal_token2,
  [2733] = 1,
    ACTIONS(408), 1,
      anon_sym_DASH,
  [2737] = 1,
    ACTIONS(410), 1,
      aux_sym_time_token1,
  [2741] = 1,
    ACTIONS(412), 1,
      aux_sym_time_token1,
  [2745] = 1,
    ACTIONS(412), 1,
      aux_sym_date_token1,
  [2749] = 1,
    ACTIONS(414), 1,
      aux_sym_time_token1,
  [2753] = 1,
    ACTIONS(416), 1,
      sym__function,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 372,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 675,
  [SMALL_STATE(20)] = 720,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 843,
  [SMALL_STATE(24)] = 885,
  [SMALL_STATE(25)] = 925,
  [SMALL_STATE(26)] = 965,
  [SMALL_STATE(27)] = 1005,
  [SMALL_STATE(28)] = 1044,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1122,
  [SMALL_STATE(31)] = 1161,
  [SMALL_STATE(32)] = 1200,
  [SMALL_STATE(33)] = 1239,
  [SMALL_STATE(34)] = 1278,
  [SMALL_STATE(35)] = 1317,
  [SMALL_STATE(36)] = 1356,
  [SMALL_STATE(37)] = 1395,
  [SMALL_STATE(38)] = 1434,
  [SMALL_STATE(39)] = 1473,
  [SMALL_STATE(40)] = 1512,
  [SMALL_STATE(41)] = 1551,
  [SMALL_STATE(42)] = 1590,
  [SMALL_STATE(43)] = 1629,
  [SMALL_STATE(44)] = 1668,
  [SMALL_STATE(45)] = 1707,
  [SMALL_STATE(46)] = 1746,
  [SMALL_STATE(47)] = 1785,
  [SMALL_STATE(48)] = 1824,
  [SMALL_STATE(49)] = 1863,
  [SMALL_STATE(50)] = 1902,
  [SMALL_STATE(51)] = 1941,
  [SMALL_STATE(52)] = 1980,
  [SMALL_STATE(53)] = 2019,
  [SMALL_STATE(54)] = 2058,
  [SMALL_STATE(55)] = 2088,
  [SMALL_STATE(56)] = 2118,
  [SMALL_STATE(57)] = 2148,
  [SMALL_STATE(58)] = 2178,
  [SMALL_STATE(59)] = 2208,
  [SMALL_STATE(60)] = 2238,
  [SMALL_STATE(61)] = 2268,
  [SMALL_STATE(62)] = 2283,
  [SMALL_STATE(63)] = 2298,
  [SMALL_STATE(64)] = 2313,
  [SMALL_STATE(65)] = 2329,
  [SMALL_STATE(66)] = 2345,
  [SMALL_STATE(67)] = 2360,
  [SMALL_STATE(68)] = 2371,
  [SMALL_STATE(69)] = 2382,
  [SMALL_STATE(70)] = 2393,
  [SMALL_STATE(71)] = 2404,
  [SMALL_STATE(72)] = 2415,
  [SMALL_STATE(73)] = 2428,
  [SMALL_STATE(74)] = 2434,
  [SMALL_STATE(75)] = 2444,
  [SMALL_STATE(76)] = 2454,
  [SMALL_STATE(77)] = 2464,
  [SMALL_STATE(78)] = 2474,
  [SMALL_STATE(79)] = 2480,
  [SMALL_STATE(80)] = 2490,
  [SMALL_STATE(81)] = 2500,
  [SMALL_STATE(82)] = 2510,
  [SMALL_STATE(83)] = 2520,
  [SMALL_STATE(84)] = 2530,
  [SMALL_STATE(85)] = 2540,
  [SMALL_STATE(86)] = 2550,
  [SMALL_STATE(87)] = 2560,
  [SMALL_STATE(88)] = 2570,
  [SMALL_STATE(89)] = 2577,
  [SMALL_STATE(90)] = 2582,
  [SMALL_STATE(91)] = 2589,
  [SMALL_STATE(92)] = 2596,
  [SMALL_STATE(93)] = 2603,
  [SMALL_STATE(94)] = 2610,
  [SMALL_STATE(95)] = 2617,
  [SMALL_STATE(96)] = 2624,
  [SMALL_STATE(97)] = 2631,
  [SMALL_STATE(98)] = 2636,
  [SMALL_STATE(99)] = 2643,
  [SMALL_STATE(100)] = 2650,
  [SMALL_STATE(101)] = 2655,
  [SMALL_STATE(102)] = 2660,
  [SMALL_STATE(103)] = 2667,
  [SMALL_STATE(104)] = 2672,
  [SMALL_STATE(105)] = 2677,
  [SMALL_STATE(106)] = 2681,
  [SMALL_STATE(107)] = 2685,
  [SMALL_STATE(108)] = 2689,
  [SMALL_STATE(109)] = 2693,
  [SMALL_STATE(110)] = 2697,
  [SMALL_STATE(111)] = 2701,
  [SMALL_STATE(112)] = 2705,
  [SMALL_STATE(113)] = 2709,
  [SMALL_STATE(114)] = 2713,
  [SMALL_STATE(115)] = 2717,
  [SMALL_STATE(116)] = 2721,
  [SMALL_STATE(117)] = 2725,
  [SMALL_STATE(118)] = 2729,
  [SMALL_STATE(119)] = 2733,
  [SMALL_STATE(120)] = 2737,
  [SMALL_STATE(121)] = 2741,
  [SMALL_STATE(122)] = 2745,
  [SMALL_STATE(123)] = 2749,
  [SMALL_STATE(124)] = 2753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(90),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(91),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(93),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(95),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(120),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(96),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(118),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(99),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_variable, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_variable, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_argument, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor_block, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor_block, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex_literal, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex_literal, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_extends, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_extends, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_result, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_result, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(61),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(102),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(66),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [384] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
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
