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
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 103
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
  sym_alias = 7,
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
  sym_alias_block = 96,
  aux_sym_source_repeat1 = 97,
  aux_sym__function_argument_repeat1 = 98,
  aux_sym__function_arguments_repeat1 = 99,
  aux_sym__class_repeat1 = 100,
  aux_sym_string_repeat1 = 101,
  aux_sym_declaration_block_repeat1 = 102,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_var] = "var",
  [sym_property] = "property",
  [sym__return] = "_return",
  [sym__break] = "_break",
  [sym__continue] = "_continue",
  [sym__declare] = "_declare",
  [sym_alias] = "alias",
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
  [sym_alias_block] = "alias_block",
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
  [sym_alias] = sym_alias,
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
  [sym_alias_block] = sym_alias_block,
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
  [sym_alias] = {
    .visible = true,
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
  [sym_alias_block] = {
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

static inline bool sym__letter_character_set_3(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(179);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(382);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(382);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '$') ADVANCE(405);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(382);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '0') ADVANCE(427);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(235);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(235);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(274);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '\\') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(446);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(376);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(384);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(408);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(408);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(201);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(401);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 161:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 162:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 163:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 164:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 166:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 167:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 172:
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 173:
      if (eof) ADVANCE(179);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(172);
      END_STATE();
    case 174:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(406);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 175:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 176:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(375);
      END_STATE();
    case 177:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == ';') ADVANCE(377);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(375);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_property);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_property);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__declare);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__function);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__local);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__exposed);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(253);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(257);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__letter);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__letter);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(375);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(375);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '$') ADVANCE(407);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '4') ADVANCE(303);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(238);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(375);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '-') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '>') ADVANCE(385);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '>') ADVANCE(409);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(373);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (sym__letter_character_set_3(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__alnum);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(386);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (sym__letter_character_set_2(lookahead)) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(376);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(444);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_class_extends);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_class_constructor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 175},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 177},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 174},
  [11] = {.lex_state = 176},
  [12] = {.lex_state = 174},
  [13] = {.lex_state = 174},
  [14] = {.lex_state = 174},
  [15] = {.lex_state = 174},
  [16] = {.lex_state = 174},
  [17] = {.lex_state = 174},
  [18] = {.lex_state = 174},
  [19] = {.lex_state = 174},
  [20] = {.lex_state = 174},
  [21] = {.lex_state = 174},
  [22] = {.lex_state = 178},
  [23] = {.lex_state = 174},
  [24] = {.lex_state = 174},
  [25] = {.lex_state = 174},
  [26] = {.lex_state = 174},
  [27] = {.lex_state = 173},
  [28] = {.lex_state = 173},
  [29] = {.lex_state = 174},
  [30] = {.lex_state = 174},
  [31] = {.lex_state = 174},
  [32] = {.lex_state = 174},
  [33] = {.lex_state = 174},
  [34] = {.lex_state = 174},
  [35] = {.lex_state = 174},
  [36] = {.lex_state = 174},
  [37] = {.lex_state = 174},
  [38] = {.lex_state = 174},
  [39] = {.lex_state = 174},
  [40] = {.lex_state = 174},
  [41] = {.lex_state = 174},
  [42] = {.lex_state = 174},
  [43] = {.lex_state = 174},
  [44] = {.lex_state = 174},
  [45] = {.lex_state = 174},
  [46] = {.lex_state = 174},
  [47] = {.lex_state = 174},
  [48] = {.lex_state = 174},
  [49] = {.lex_state = 174},
  [50] = {.lex_state = 174},
  [51] = {.lex_state = 174},
  [52] = {.lex_state = 174},
  [53] = {.lex_state = 174},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 174},
  [56] = {.lex_state = 174},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 16},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 14},
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
    [sym_alias] = ACTIONS(1),
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
    [sym_source] = STATE(122),
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(33),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(121),
    [sym__name] = STATE(13),
    [sym__attribute_name] = STATE(8),
    [sym_function] = STATE(52),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(7),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(12),
    [sym__class] = STATE(35),
    [sym__basic_type] = STATE(35),
    [sym_class] = STATE(33),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(33),
    [sym_time] = STATE(36),
    [sym_date] = STATE(36),
    [sym__hex_literal] = STATE(50),
    [sym__num_literal] = STATE(50),
    [sym__exp_literal] = STATE(50),
    [sym_number] = STATE(36),
    [sym_string] = STATE(36),
    [sym__class_extends] = STATE(37),
    [sym_class_constructor] = STATE(38),
    [sym_class_constructor_block] = STATE(3),
    [sym__declaration_argument] = STATE(81),
    [sym_declaration_block] = STATE(3),
    [sym_alias_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(7),
    [sym__declare] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [sym__function] = ACTIONS(13),
    [sym__local] = ACTIONS(15),
    [sym__exposed] = ACTIONS(17),
    [sym__letter] = ACTIONS(19),
    [sym__class_store_4d] = ACTIONS(21),
    [sym__class_store_ds] = ACTIONS(21),
    [sym__class_store_cs] = ACTIONS(21),
    [sym__basic_type_text] = ACTIONS(23),
    [sym__basic_type_date] = ACTIONS(23),
    [sym__basic_type_time] = ACTIONS(23),
    [sym__basic_type_boolean] = ACTIONS(23),
    [sym__basic_type_integer] = ACTIONS(23),
    [sym__basic_type_real] = ACTIONS(23),
    [sym__basic_type_pointer] = ACTIONS(23),
    [sym__basic_type_picture] = ACTIONS(23),
    [sym__basic_type_blob] = ACTIONS(23),
    [sym__basic_type_collection] = ACTIONS(23),
    [sym__basic_type_variant] = ACTIONS(23),
    [sym__basic_type_object] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [aux_sym__hex_literal_token1] = ACTIONS(33),
    [sym__dec_literal] = ACTIONS(35),
    [aux_sym__num_literal_token1] = ACTIONS(35),
    [aux_sym__exp_literal_token1] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_class_extends] = ACTIONS(41),
    [aux_sym_class_constructor_token1] = ACTIONS(43),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(33),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(121),
    [sym__name] = STATE(13),
    [sym__attribute_name] = STATE(8),
    [sym_function] = STATE(52),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(7),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(12),
    [sym__class] = STATE(35),
    [sym__basic_type] = STATE(35),
    [sym_class] = STATE(33),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(33),
    [sym_time] = STATE(36),
    [sym_date] = STATE(36),
    [sym__hex_literal] = STATE(50),
    [sym__num_literal] = STATE(50),
    [sym__exp_literal] = STATE(50),
    [sym_number] = STATE(36),
    [sym_string] = STATE(36),
    [sym__class_extends] = STATE(37),
    [sym_class_constructor] = STATE(38),
    [sym_class_constructor_block] = STATE(2),
    [sym__declaration_argument] = STATE(81),
    [sym_declaration_block] = STATE(2),
    [sym_alias_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_var] = ACTIONS(47),
    [sym_property] = ACTIONS(50),
    [sym__declare] = ACTIONS(53),
    [sym_alias] = ACTIONS(56),
    [sym__function] = ACTIONS(59),
    [sym__local] = ACTIONS(62),
    [sym__exposed] = ACTIONS(65),
    [sym__letter] = ACTIONS(68),
    [sym__class_store_4d] = ACTIONS(71),
    [sym__class_store_ds] = ACTIONS(71),
    [sym__class_store_cs] = ACTIONS(71),
    [sym__basic_type_text] = ACTIONS(74),
    [sym__basic_type_date] = ACTIONS(74),
    [sym__basic_type_time] = ACTIONS(74),
    [sym__basic_type_boolean] = ACTIONS(74),
    [sym__basic_type_integer] = ACTIONS(74),
    [sym__basic_type_real] = ACTIONS(74),
    [sym__basic_type_pointer] = ACTIONS(74),
    [sym__basic_type_picture] = ACTIONS(74),
    [sym__basic_type_blob] = ACTIONS(74),
    [sym__basic_type_collection] = ACTIONS(74),
    [sym__basic_type_variant] = ACTIONS(74),
    [sym__basic_type_object] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(86),
    [aux_sym__hex_literal_token1] = ACTIONS(89),
    [sym__dec_literal] = ACTIONS(92),
    [aux_sym__num_literal_token1] = ACTIONS(92),
    [aux_sym__exp_literal_token1] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_class_extends] = ACTIONS(101),
    [aux_sym_class_constructor_token1] = ACTIONS(104),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(33),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(121),
    [sym__name] = STATE(13),
    [sym__attribute_name] = STATE(8),
    [sym_function] = STATE(52),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(7),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(12),
    [sym__class] = STATE(35),
    [sym__basic_type] = STATE(35),
    [sym_class] = STATE(33),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(33),
    [sym_time] = STATE(36),
    [sym_date] = STATE(36),
    [sym__hex_literal] = STATE(50),
    [sym__num_literal] = STATE(50),
    [sym__exp_literal] = STATE(50),
    [sym_number] = STATE(36),
    [sym_string] = STATE(36),
    [sym__class_extends] = STATE(37),
    [sym_class_constructor] = STATE(38),
    [sym_class_constructor_block] = STATE(2),
    [sym__declaration_argument] = STATE(81),
    [sym_declaration_block] = STATE(2),
    [sym_alias_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(7),
    [sym__declare] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [sym__function] = ACTIONS(13),
    [sym__local] = ACTIONS(15),
    [sym__exposed] = ACTIONS(17),
    [sym__letter] = ACTIONS(19),
    [sym__class_store_4d] = ACTIONS(21),
    [sym__class_store_ds] = ACTIONS(21),
    [sym__class_store_cs] = ACTIONS(21),
    [sym__basic_type_text] = ACTIONS(23),
    [sym__basic_type_date] = ACTIONS(23),
    [sym__basic_type_time] = ACTIONS(23),
    [sym__basic_type_boolean] = ACTIONS(23),
    [sym__basic_type_integer] = ACTIONS(23),
    [sym__basic_type_real] = ACTIONS(23),
    [sym__basic_type_pointer] = ACTIONS(23),
    [sym__basic_type_picture] = ACTIONS(23),
    [sym__basic_type_blob] = ACTIONS(23),
    [sym__basic_type_collection] = ACTIONS(23),
    [sym__basic_type_variant] = ACTIONS(23),
    [sym__basic_type_object] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [aux_sym__hex_literal_token1] = ACTIONS(33),
    [sym__dec_literal] = ACTIONS(35),
    [aux_sym__num_literal_token1] = ACTIONS(35),
    [aux_sym__exp_literal_token1] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_class_extends] = ACTIONS(41),
    [aux_sym_class_constructor_token1] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__alnum,
    ACTIONS(115), 1,
      sym__alnumsp,
    ACTIONS(117), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(111), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [52] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_DASH_GT,
    ACTIONS(121), 12,
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
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [100] = 4,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym__alnumsp,
    ACTIONS(127), 1,
      sym__alnum,
    ACTIONS(111), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [148] = 6,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    STATE(17), 1,
      sym__function_arguments,
    STATE(56), 1,
      sym__function_result,
    ACTIONS(131), 12,
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
    ACTIONS(129), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [200] = 6,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      sym__function_arguments,
    STATE(55), 1,
      sym__function_result,
    ACTIONS(139), 12,
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
    ACTIONS(137), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [252] = 2,
    ACTIONS(121), 12,
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
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [294] = 2,
    ACTIONS(143), 12,
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
    ACTIONS(141), 25,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [336] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym__alnum,
    ACTIONS(117), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [380] = 4,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__class_repeat1,
    ACTIONS(151), 12,
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
    ACTIONS(149), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [426] = 2,
    ACTIONS(157), 12,
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
    ACTIONS(155), 25,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [468] = 3,
    ACTIONS(163), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(161), 12,
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
    ACTIONS(159), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [512] = 2,
    ACTIONS(167), 12,
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
    ACTIONS(165), 25,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [554] = 4,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__class_repeat1,
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
    ACTIONS(169), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [600] = 4,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    STATE(41), 1,
      sym__function_result,
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
    ACTIONS(173), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [646] = 4,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
    ACTIONS(177), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [692] = 2,
    ACTIONS(186), 13,
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
    ACTIONS(184), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [734] = 4,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    STATE(49), 1,
      sym__function_result,
    ACTIONS(190), 12,
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
    ACTIONS(188), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [780] = 2,
    ACTIONS(123), 13,
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
    ACTIONS(125), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [821] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym__alnum,
    ACTIONS(117), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [864] = 2,
    ACTIONS(194), 12,
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
    ACTIONS(192), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [905] = 2,
    ACTIONS(179), 13,
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
    ACTIONS(177), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [946] = 2,
    ACTIONS(198), 12,
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
    ACTIONS(196), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [987] = 2,
    ACTIONS(202), 12,
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
    ACTIONS(200), 24,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1028] = 3,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_,
    ACTIONS(131), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1071] = 3,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(131), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1114] = 2,
    ACTIONS(210), 12,
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
    ACTIONS(208), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1154] = 2,
    ACTIONS(214), 12,
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
    ACTIONS(212), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1194] = 2,
    ACTIONS(218), 12,
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
    ACTIONS(216), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1234] = 2,
    ACTIONS(222), 12,
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
    ACTIONS(220), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1274] = 2,
    ACTIONS(161), 12,
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
    ACTIONS(159), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1314] = 2,
    ACTIONS(226), 12,
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
    ACTIONS(224), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1354] = 2,
    ACTIONS(230), 12,
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
    ACTIONS(228), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1394] = 2,
    ACTIONS(234), 12,
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
    ACTIONS(232), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
    ACTIONS(238), 12,
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
    ACTIONS(236), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1474] = 2,
    ACTIONS(131), 12,
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
    ACTIONS(129), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1514] = 2,
    ACTIONS(242), 12,
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
    ACTIONS(240), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1554] = 2,
    ACTIONS(246), 12,
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
    ACTIONS(244), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1594] = 2,
    ACTIONS(250), 12,
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
    ACTIONS(248), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1634] = 2,
    ACTIONS(254), 12,
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
    ACTIONS(252), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1674] = 2,
    ACTIONS(258), 12,
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
    ACTIONS(256), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1714] = 2,
    ACTIONS(262), 12,
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
    ACTIONS(260), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1754] = 2,
    ACTIONS(266), 12,
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
    ACTIONS(264), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1794] = 2,
    ACTIONS(270), 12,
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
    ACTIONS(268), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1834] = 2,
    ACTIONS(274), 12,
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
    ACTIONS(272), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1874] = 2,
    ACTIONS(278), 12,
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
    ACTIONS(276), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1914] = 2,
    ACTIONS(282), 12,
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
    ACTIONS(280), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1954] = 2,
    ACTIONS(286), 12,
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
    ACTIONS(284), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [1994] = 2,
    ACTIONS(290), 12,
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
    ACTIONS(288), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2034] = 2,
    ACTIONS(131), 12,
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
    ACTIONS(129), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2074] = 2,
    ACTIONS(294), 12,
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
    ACTIONS(292), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2114] = 2,
    ACTIONS(298), 12,
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
    ACTIONS(296), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2154] = 2,
    ACTIONS(190), 12,
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
    ACTIONS(188), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2194] = 2,
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
    ACTIONS(173), 23,
      ts_builtin_sym_end,
      sym_property,
      sym__declare,
      sym_alias,
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
  [2234] = 5,
    STATE(12), 1,
      sym__class_store,
    STATE(34), 1,
      sym_class,
    STATE(35), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(300), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(23), 12,
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
  [2264] = 5,
    STATE(73), 1,
      sym__class_store,
    STATE(104), 1,
      sym_class,
    STATE(107), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(302), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(304), 12,
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
  [2294] = 5,
    STATE(12), 1,
      sym__class_store,
    STATE(43), 1,
      sym_class,
    STATE(35), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(300), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(23), 12,
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
  [2324] = 5,
    STATE(12), 1,
      sym__class_store,
    STATE(40), 1,
      sym_class,
    STATE(35), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(300), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(23), 12,
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
  [2354] = 5,
    STATE(73), 1,
      sym__class_store,
    STATE(108), 1,
      sym_class,
    STATE(107), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(302), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(304), 12,
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
  [2384] = 5,
    STATE(12), 1,
      sym__class_store,
    STATE(53), 1,
      sym_class,
    STATE(35), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(300), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(23), 12,
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
  [2414] = 5,
    STATE(12), 1,
      sym__class_store,
    STATE(32), 1,
      sym_class,
    STATE(35), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(300), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(23), 12,
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
  [2444] = 3,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(308), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2459] = 3,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(313), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2474] = 3,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(317), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2489] = 4,
    ACTIONS(321), 1,
      sym__letter,
    STATE(48), 1,
      sym__attribute_name,
    STATE(93), 1,
      sym__computed,
    ACTIONS(319), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2505] = 4,
    ACTIONS(321), 1,
      sym__letter,
    STATE(42), 1,
      sym__attribute_name,
    STATE(106), 1,
      sym__computed,
    ACTIONS(323), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2521] = 4,
    ACTIONS(325), 1,
      sym__letter,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(13), 1,
      sym__name,
    STATE(105), 3,
      sym_local_variable,
      sym_process_variable,
      sym__declaration_argument,
  [2536] = 3,
    ACTIONS(329), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym__class_repeat1,
    ACTIONS(177), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2547] = 2,
    ACTIONS(332), 1,
      sym__alnum,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2556] = 4,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym__function_argument,
    STATE(78), 1,
      sym_local_variable,
  [2569] = 3,
    ACTIONS(338), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym__class_repeat1,
    ACTIONS(149), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2580] = 3,
    ACTIONS(115), 1,
      sym__alnumsp,
    ACTIONS(127), 1,
      sym__alnum,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2591] = 3,
    ACTIONS(338), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym__class_repeat1,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2602] = 3,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym__function_arguments_repeat1,
  [2612] = 3,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym__function_argument_repeat1,
  [2622] = 3,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym__function_argument_repeat1,
  [2632] = 3,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym__function_argument_repeat1,
  [2642] = 3,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_COLON,
    STATE(79), 1,
      aux_sym__function_argument_repeat1,
  [2652] = 3,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(88), 1,
      aux_sym_declaration_block_repeat1,
  [2662] = 1,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2668] = 1,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2674] = 3,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym__function_argument_repeat1,
  [2684] = 3,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(85), 1,
      aux_sym_declaration_block_repeat1,
  [2694] = 3,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym__function_argument,
    STATE(80), 1,
      sym_local_variable,
  [2704] = 3,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym__function_arguments_repeat1,
  [2714] = 3,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_COLON,
    STATE(85), 1,
      aux_sym_declaration_block_repeat1,
  [2724] = 3,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym__function_arguments_repeat1,
  [2734] = 3,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_local_variable,
    STATE(101), 1,
      sym__function_argument,
  [2744] = 1,
    ACTIONS(361), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2749] = 2,
    ACTIONS(377), 1,
      sym__letter,
    STATE(51), 1,
      sym__attribute_name,
  [2756] = 2,
    ACTIONS(377), 1,
      sym__letter,
    STATE(47), 1,
      sym__attribute_name,
  [2763] = 2,
    ACTIONS(379), 1,
      sym__function,
    ACTIONS(381), 1,
      sym__exposed,
  [2770] = 2,
    ACTIONS(379), 1,
      sym__function,
    ACTIONS(381), 1,
      sym__local,
  [2777] = 2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_local_variable,
  [2784] = 2,
    ACTIONS(383), 1,
      sym__letter,
    STATE(15), 1,
      sym__name,
  [2791] = 2,
    ACTIONS(385), 1,
      sym__letter,
    STATE(82), 1,
      sym__attribute_name,
  [2798] = 2,
    ACTIONS(325), 1,
      sym__letter,
    STATE(15), 1,
      sym__name,
  [2805] = 2,
    ACTIONS(387), 1,
      aux_sym_time_token1,
    ACTIONS(389), 1,
      aux_sym_date_token1,
  [2812] = 1,
    ACTIONS(375), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2817] = 2,
    ACTIONS(391), 1,
      sym__letter,
    STATE(24), 1,
      sym__attribute_name,
  [2824] = 2,
    ACTIONS(383), 1,
      sym__letter,
    STATE(44), 1,
      sym__name,
  [2831] = 1,
    ACTIONS(220), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2836] = 1,
    ACTIONS(366), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2841] = 2,
    ACTIONS(377), 1,
      sym__letter,
    STATE(48), 1,
      sym__attribute_name,
  [2848] = 1,
    ACTIONS(228), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2853] = 1,
    ACTIONS(244), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2858] = 1,
    ACTIONS(393), 1,
      anon_sym_BANG,
  [2862] = 1,
    ACTIONS(395), 1,
      anon_sym_DASH,
  [2866] = 1,
    ACTIONS(397), 1,
      anon_sym_DASH,
  [2870] = 1,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [2874] = 1,
    ACTIONS(401), 1,
      anon_sym_QMARK,
  [2878] = 1,
    ACTIONS(403), 1,
      sym__letter,
  [2882] = 1,
    ACTIONS(405), 1,
      sym__function,
  [2886] = 1,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [2890] = 1,
    ACTIONS(409), 1,
      aux_sym_time_token1,
  [2894] = 1,
    ACTIONS(411), 1,
      aux_sym_time_token1,
  [2898] = 1,
    ACTIONS(413), 1,
      anon_sym_DASH,
  [2902] = 1,
    ACTIONS(415), 1,
      aux_sym_time_token1,
  [2906] = 1,
    ACTIONS(417), 1,
      sym__function,
  [2910] = 1,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
  [2914] = 1,
    ACTIONS(421), 1,
      aux_sym__hex_literal_token2,
  [2918] = 1,
    ACTIONS(423), 1,
      aux_sym_time_token1,
  [2922] = 1,
    ACTIONS(423), 1,
      aux_sym_date_token1,
  [2926] = 1,
    ACTIONS(425), 1,
      aux_sym_time_token1,
  [2930] = 1,
    ACTIONS(427), 1,
      aux_sym_time_token1,
  [2934] = 1,
    ACTIONS(429), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 294,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 512,
  [SMALL_STATE(16)] = 554,
  [SMALL_STATE(17)] = 600,
  [SMALL_STATE(18)] = 646,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 864,
  [SMALL_STATE(24)] = 905,
  [SMALL_STATE(25)] = 946,
  [SMALL_STATE(26)] = 987,
  [SMALL_STATE(27)] = 1028,
  [SMALL_STATE(28)] = 1071,
  [SMALL_STATE(29)] = 1114,
  [SMALL_STATE(30)] = 1154,
  [SMALL_STATE(31)] = 1194,
  [SMALL_STATE(32)] = 1234,
  [SMALL_STATE(33)] = 1274,
  [SMALL_STATE(34)] = 1314,
  [SMALL_STATE(35)] = 1354,
  [SMALL_STATE(36)] = 1394,
  [SMALL_STATE(37)] = 1434,
  [SMALL_STATE(38)] = 1474,
  [SMALL_STATE(39)] = 1514,
  [SMALL_STATE(40)] = 1554,
  [SMALL_STATE(41)] = 1594,
  [SMALL_STATE(42)] = 1634,
  [SMALL_STATE(43)] = 1674,
  [SMALL_STATE(44)] = 1714,
  [SMALL_STATE(45)] = 1754,
  [SMALL_STATE(46)] = 1794,
  [SMALL_STATE(47)] = 1834,
  [SMALL_STATE(48)] = 1874,
  [SMALL_STATE(49)] = 1914,
  [SMALL_STATE(50)] = 1954,
  [SMALL_STATE(51)] = 1994,
  [SMALL_STATE(52)] = 2034,
  [SMALL_STATE(53)] = 2074,
  [SMALL_STATE(54)] = 2114,
  [SMALL_STATE(55)] = 2154,
  [SMALL_STATE(56)] = 2194,
  [SMALL_STATE(57)] = 2234,
  [SMALL_STATE(58)] = 2264,
  [SMALL_STATE(59)] = 2294,
  [SMALL_STATE(60)] = 2324,
  [SMALL_STATE(61)] = 2354,
  [SMALL_STATE(62)] = 2384,
  [SMALL_STATE(63)] = 2414,
  [SMALL_STATE(64)] = 2444,
  [SMALL_STATE(65)] = 2459,
  [SMALL_STATE(66)] = 2474,
  [SMALL_STATE(67)] = 2489,
  [SMALL_STATE(68)] = 2505,
  [SMALL_STATE(69)] = 2521,
  [SMALL_STATE(70)] = 2536,
  [SMALL_STATE(71)] = 2547,
  [SMALL_STATE(72)] = 2556,
  [SMALL_STATE(73)] = 2569,
  [SMALL_STATE(74)] = 2580,
  [SMALL_STATE(75)] = 2591,
  [SMALL_STATE(76)] = 2602,
  [SMALL_STATE(77)] = 2612,
  [SMALL_STATE(78)] = 2622,
  [SMALL_STATE(79)] = 2632,
  [SMALL_STATE(80)] = 2642,
  [SMALL_STATE(81)] = 2652,
  [SMALL_STATE(82)] = 2662,
  [SMALL_STATE(83)] = 2668,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2684,
  [SMALL_STATE(86)] = 2694,
  [SMALL_STATE(87)] = 2704,
  [SMALL_STATE(88)] = 2714,
  [SMALL_STATE(89)] = 2724,
  [SMALL_STATE(90)] = 2734,
  [SMALL_STATE(91)] = 2744,
  [SMALL_STATE(92)] = 2749,
  [SMALL_STATE(93)] = 2756,
  [SMALL_STATE(94)] = 2763,
  [SMALL_STATE(95)] = 2770,
  [SMALL_STATE(96)] = 2777,
  [SMALL_STATE(97)] = 2784,
  [SMALL_STATE(98)] = 2791,
  [SMALL_STATE(99)] = 2798,
  [SMALL_STATE(100)] = 2805,
  [SMALL_STATE(101)] = 2812,
  [SMALL_STATE(102)] = 2817,
  [SMALL_STATE(103)] = 2824,
  [SMALL_STATE(104)] = 2831,
  [SMALL_STATE(105)] = 2836,
  [SMALL_STATE(106)] = 2841,
  [SMALL_STATE(107)] = 2848,
  [SMALL_STATE(108)] = 2853,
  [SMALL_STATE(109)] = 2858,
  [SMALL_STATE(110)] = 2862,
  [SMALL_STATE(111)] = 2866,
  [SMALL_STATE(112)] = 2870,
  [SMALL_STATE(113)] = 2874,
  [SMALL_STATE(114)] = 2878,
  [SMALL_STATE(115)] = 2882,
  [SMALL_STATE(116)] = 2886,
  [SMALL_STATE(117)] = 2890,
  [SMALL_STATE(118)] = 2894,
  [SMALL_STATE(119)] = 2898,
  [SMALL_STATE(120)] = 2902,
  [SMALL_STATE(121)] = 2906,
  [SMALL_STATE(122)] = 2910,
  [SMALL_STATE(123)] = 2914,
  [SMALL_STATE(124)] = 2918,
  [SMALL_STATE(125)] = 2922,
  [SMALL_STATE(126)] = 2926,
  [SMALL_STATE(127)] = 2930,
  [SMALL_STATE(128)] = 2934,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(94),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(95),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(97),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(103),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(120),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(100),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(123),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_variable, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_variable, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_argument, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(102),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex_literal, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex_literal, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor_block, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor_block, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_result, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_result, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_extends, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_extends, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(64),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(98),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(96),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(69),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2), SHIFT_REPEAT(90),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
