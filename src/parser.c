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
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  sym__hex_literal = 46,
  sym__dec_literal = 47,
  aux_sym__num_literal_token1 = 48,
  aux_sym__exp_literal_token1 = 49,
  anon_sym_DQUOTE = 50,
  anon_sym_BSLASHr = 51,
  anon_sym_BSLASHn = 52,
  anon_sym_BSLASH_DQUOTE = 53,
  anon_sym_BSLASHt = 54,
  anon_sym_BSLASH_BSLASH = 55,
  aux_sym_string_token1 = 56,
  sym_class_extends = 57,
  anon_sym_ = 58,
  aux_sym_class_constructor_token1 = 59,
  sym_source = 60,
  sym__token = 61,
  sym_keyword = 62,
  sym_constant = 63,
  sym_value = 64,
  sym__computed = 65,
  sym__scope = 66,
  sym__name = 67,
  sym__attribute_name = 68,
  sym_alias = 69,
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
  sym__num_literal = 86,
  sym__exp_literal = 87,
  sym_number = 88,
  sym_string = 89,
  sym__class_extends = 90,
  sym_class_constructor = 91,
  sym_class_constructor_block = 92,
  sym__declaration_argument = 93,
  sym_declaration_block = 94,
  sym_attribute_path = 95,
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
  [sym_alias] = "alias",
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
  [sym__num_literal] = "_num_literal",
  [sym__exp_literal] = "_exp_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym__class_extends] = "_class_extends",
  [sym_class_constructor] = "class_constructor",
  [sym_class_constructor_block] = "class_constructor_block",
  [sym__declaration_argument] = "_declaration_argument",
  [sym_declaration_block] = "declaration_block",
  [sym_attribute_path] = "attribute_path",
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
  [sym_alias] = sym_alias,
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
  [sym__num_literal] = sym__num_literal,
  [sym__exp_literal] = sym__exp_literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym__class_extends] = sym__class_extends,
  [sym_class_constructor] = sym_class_constructor,
  [sym_class_constructor_block] = sym_class_constructor_block,
  [sym__declaration_argument] = sym__declaration_argument,
  [sym_declaration_block] = sym_declaration_block,
  [sym_attribute_path] = sym_attribute_path,
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
  [sym_alias] = {
    .visible = true,
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
  [sym_attribute_path] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '4') ADVANCE(374);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '4') ADVANCE(374);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '4') ADVANCE(374);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ':') ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(331);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(355);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(3);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(4);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 138:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 144:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 157:
      if (eof) ADVANCE(162);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(185);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 158:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(234);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(234);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_property);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_property);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__return);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__break);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__continue);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__declare);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alias);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__function);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__local);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__exposed);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(185);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '!') ADVANCE(361);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '>') ADVANCE(336);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '>') ADVANCE(355);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '>') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '-') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__alnum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(336);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__dec_literal);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      if (lookahead == ',' ||
          lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__exp_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(384);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_class_extends);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(185);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_class_constructor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 158},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 158},
  [9] = {.lex_state = 158},
  [10] = {.lex_state = 161},
  [11] = {.lex_state = 158},
  [12] = {.lex_state = 158},
  [13] = {.lex_state = 158},
  [14] = {.lex_state = 158},
  [15] = {.lex_state = 158},
  [16] = {.lex_state = 158},
  [17] = {.lex_state = 158},
  [18] = {.lex_state = 159},
  [19] = {.lex_state = 159},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 158},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 159},
  [24] = {.lex_state = 158},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 159},
  [27] = {.lex_state = 158},
  [28] = {.lex_state = 159},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 158},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 158},
  [40] = {.lex_state = 158},
  [41] = {.lex_state = 158},
  [42] = {.lex_state = 158},
  [43] = {.lex_state = 158},
  [44] = {.lex_state = 158},
  [45] = {.lex_state = 158},
  [46] = {.lex_state = 158},
  [47] = {.lex_state = 158},
  [48] = {.lex_state = 158},
  [49] = {.lex_state = 158},
  [50] = {.lex_state = 158},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 158},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 158},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 150},
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
  [92] = {.lex_state = 150},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 150},
  [95] = {.lex_state = 150},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 150},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 150},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 150},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 150},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 151},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 150},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 150},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
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
  },
  [1] = {
    [sym_source] = STATE(116),
    [sym__token] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_constant] = STATE(31),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(122),
    [sym__name] = STATE(11),
    [sym__attribute_name] = STATE(5),
    [sym_alias] = STATE(22),
    [sym_function] = STATE(32),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(20),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(39),
    [sym__basic_type] = STATE(39),
    [sym_class] = STATE(31),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(31),
    [sym_time] = STATE(38),
    [sym_date] = STATE(38),
    [sym__num_literal] = STATE(51),
    [sym__exp_literal] = STATE(51),
    [sym_number] = STATE(38),
    [sym_string] = STATE(38),
    [sym__class_extends] = STATE(36),
    [sym_class_constructor] = STATE(30),
    [sym_class_constructor_block] = STATE(2),
    [sym__declaration_argument] = STATE(88),
    [sym_declaration_block] = STATE(2),
    [sym_attribute_path] = STATE(31),
    [sym_alias_block] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(5),
    [sym__declare] = ACTIONS(7),
    [sym__alias] = ACTIONS(9),
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
    [sym__hex_literal] = ACTIONS(31),
    [sym__dec_literal] = ACTIONS(31),
    [aux_sym__num_literal_token1] = ACTIONS(31),
    [aux_sym__exp_literal_token1] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_class_extends] = ACTIONS(35),
    [aux_sym_class_constructor_token1] = ACTIONS(37),
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(31),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(122),
    [sym__name] = STATE(11),
    [sym__attribute_name] = STATE(5),
    [sym_alias] = STATE(22),
    [sym_function] = STATE(32),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(20),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(39),
    [sym__basic_type] = STATE(39),
    [sym_class] = STATE(31),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(31),
    [sym_time] = STATE(38),
    [sym_date] = STATE(38),
    [sym__num_literal] = STATE(51),
    [sym__exp_literal] = STATE(51),
    [sym_number] = STATE(38),
    [sym_string] = STATE(38),
    [sym__class_extends] = STATE(36),
    [sym_class_constructor] = STATE(30),
    [sym_class_constructor_block] = STATE(3),
    [sym__declaration_argument] = STATE(88),
    [sym_declaration_block] = STATE(3),
    [sym_attribute_path] = STATE(31),
    [sym_alias_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_var] = ACTIONS(5),
    [sym_property] = ACTIONS(5),
    [sym__declare] = ACTIONS(7),
    [sym__alias] = ACTIONS(9),
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
    [sym__hex_literal] = ACTIONS(31),
    [sym__dec_literal] = ACTIONS(31),
    [aux_sym__num_literal_token1] = ACTIONS(31),
    [aux_sym__exp_literal_token1] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_class_extends] = ACTIONS(35),
    [aux_sym_class_constructor_token1] = ACTIONS(37),
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_constant] = STATE(31),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(122),
    [sym__name] = STATE(11),
    [sym__attribute_name] = STATE(5),
    [sym_alias] = STATE(22),
    [sym_function] = STATE(32),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(20),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(9),
    [sym__class] = STATE(39),
    [sym__basic_type] = STATE(39),
    [sym_class] = STATE(31),
    [sym_local_variable] = STATE(14),
    [sym_process_variable] = STATE(14),
    [sym_interprocess_variable] = STATE(31),
    [sym_time] = STATE(38),
    [sym_date] = STATE(38),
    [sym__num_literal] = STATE(51),
    [sym__exp_literal] = STATE(51),
    [sym_number] = STATE(38),
    [sym_string] = STATE(38),
    [sym__class_extends] = STATE(36),
    [sym_class_constructor] = STATE(30),
    [sym_class_constructor_block] = STATE(3),
    [sym__declaration_argument] = STATE(88),
    [sym_declaration_block] = STATE(3),
    [sym_attribute_path] = STATE(31),
    [sym_alias_block] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_var] = ACTIONS(43),
    [sym_property] = ACTIONS(43),
    [sym__declare] = ACTIONS(46),
    [sym__alias] = ACTIONS(49),
    [sym__function] = ACTIONS(52),
    [sym__local] = ACTIONS(55),
    [sym__exposed] = ACTIONS(58),
    [sym__letter] = ACTIONS(61),
    [sym__class_store_4d] = ACTIONS(64),
    [sym__class_store_ds] = ACTIONS(64),
    [sym__class_store_cs] = ACTIONS(64),
    [sym__basic_type_text] = ACTIONS(67),
    [sym__basic_type_date] = ACTIONS(67),
    [sym__basic_type_time] = ACTIONS(67),
    [sym__basic_type_boolean] = ACTIONS(67),
    [sym__basic_type_integer] = ACTIONS(67),
    [sym__basic_type_real] = ACTIONS(67),
    [sym__basic_type_pointer] = ACTIONS(67),
    [sym__basic_type_picture] = ACTIONS(67),
    [sym__basic_type_blob] = ACTIONS(67),
    [sym__basic_type_collection] = ACTIONS(67),
    [sym__basic_type_variant] = ACTIONS(67),
    [sym__basic_type_object] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_LT_GT] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__hex_literal] = ACTIONS(82),
    [sym__dec_literal] = ACTIONS(82),
    [aux_sym__num_literal_token1] = ACTIONS(82),
    [aux_sym__exp_literal_token1] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_class_extends] = ACTIONS(88),
    [aux_sym_class_constructor_token1] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym__alnum,
    ACTIONS(100), 1,
      sym__alnumsp,
    ACTIONS(102), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(96), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [52] = 6,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__class_repeat1,
    STATE(19), 1,
      sym__function_arguments,
    ACTIONS(106), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [104] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__alnumsp,
    ACTIONS(112), 1,
      sym__alnum,
    ACTIONS(96), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [152] = 3,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(116), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [198] = 4,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__class_repeat1,
    ACTIONS(106), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [244] = 4,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym__class_repeat1,
    ACTIONS(122), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [290] = 3,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      sym__alnum,
    ACTIONS(102), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [334] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [376] = 4,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__class_repeat1,
    ACTIONS(134), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [422] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [464] = 3,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
    ACTIONS(142), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [508] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [550] = 4,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__class_repeat1,
    ACTIONS(152), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [596] = 4,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym__class_repeat1,
    ACTIONS(156), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [642] = 4,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    STATE(42), 1,
      sym__function_result,
    ACTIONS(163), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [688] = 4,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym__function_result,
    ACTIONS(169), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [734] = 4,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym__function_arguments,
    ACTIONS(173), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [780] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 36,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [822] = 3,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym__attribute_name,
    ACTIONS(173), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [865] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [906] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [947] = 3,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_,
    ACTIONS(173), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [990] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1031] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1072] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1113] = 2,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 35,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
      sym__function,
      sym__local,
      sym__exposed,
      sym__letter,
      anon_sym_LPAREN,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1154] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1194] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1234] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1274] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1314] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1354] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1394] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1434] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1474] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1514] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1554] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1594] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1634] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1674] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1714] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1754] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1794] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1834] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1874] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1914] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1954] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [1994] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2034] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2074] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2114] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2154] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 34,
      sym_var,
      sym_property,
      sym__declare,
      sym__alias,
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
      sym__hex_literal,
      sym__dec_literal,
      aux_sym__num_literal_token1,
      aux_sym__exp_literal_token1,
      anon_sym_DQUOTE,
      sym_class_extends,
      aux_sym_class_constructor_token1,
  [2194] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(41), 1,
      sym_class,
    STATE(39), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(287), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(289), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [2224] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(52), 1,
      sym_class,
    STATE(39), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(287), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(289), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [2254] = 5,
    STATE(71), 1,
      sym__class_store,
    STATE(105), 1,
      sym_class,
    STATE(109), 2,
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
  [2284] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(46), 1,
      sym_class,
    STATE(39), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(287), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(289), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [2314] = 5,
    STATE(71), 1,
      sym__class_store,
    STATE(102), 1,
      sym_class,
    STATE(109), 2,
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
  [2344] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(55), 1,
      sym_class,
    STATE(39), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(287), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(289), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [2374] = 5,
    STATE(9), 1,
      sym__class_store,
    STATE(49), 1,
      sym_class,
    STATE(39), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(287), 3,
      sym__class_store_4d,
      sym__class_store_ds,
      sym__class_store_cs,
    ACTIONS(289), 12,
      sym__basic_type_text,
      sym__basic_type_date,
      sym__basic_type_time,
      sym__basic_type_boolean,
      sym__basic_type_integer,
      sym__basic_type_real,
      sym__basic_type_pointer,
      sym__basic_type_picture,
      sym__basic_type_blob,
      sym__basic_type_collection,
      sym__basic_type_variant,
      sym__basic_type_object,
  [2404] = 3,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2419] = 3,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(302), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2434] = 3,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(306), 6,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token1,
  [2449] = 4,
    ACTIONS(310), 1,
      sym__letter,
    STATE(34), 1,
      sym__attribute_name,
    STATE(94), 1,
      sym__computed,
    ACTIONS(308), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2465] = 4,
    ACTIONS(310), 1,
      sym__letter,
    STATE(47), 1,
      sym__attribute_name,
    STATE(103), 1,
      sym__computed,
    ACTIONS(312), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [2481] = 4,
    ACTIONS(314), 1,
      sym__letter,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym__name,
    STATE(108), 3,
      sym_local_variable,
      sym_process_variable,
      sym__declaration_argument,
  [2496] = 2,
    ACTIONS(318), 1,
      sym__alnum,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2505] = 3,
    ACTIONS(320), 1,
      sym__alnum,
    ACTIONS(322), 1,
      sym__alnumsp,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2516] = 3,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym__class_repeat1,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2527] = 3,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym__class_repeat1,
    ACTIONS(150), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2538] = 3,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym__class_repeat1,
    ACTIONS(154), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2549] = 4,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_local_variable,
    STATE(86), 1,
      sym__function_argument,
  [2562] = 3,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_local_variable,
    STATE(99), 1,
      sym__function_argument,
  [2572] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(335), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2582] = 3,
    ACTIONS(337), 1,
      sym__letter,
    STATE(8), 1,
      sym__attribute_name,
    STATE(43), 1,
      sym_attribute_path,
  [2592] = 3,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym__function_argument,
    STATE(79), 1,
      sym_local_variable,
  [2602] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym__function_argument_repeat1,
  [2612] = 3,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_declaration_block_repeat1,
  [2622] = 3,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2632] = 1,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2638] = 3,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_declaration_block_repeat1,
  [2648] = 3,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym__function_arguments_repeat1,
  [2658] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym__function_argument_repeat1,
  [2668] = 3,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym__function_arguments_repeat1,
  [2678] = 1,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2684] = 3,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_declaration_block_repeat1,
  [2694] = 3,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym__function_argument_repeat1,
  [2704] = 3,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym__function_arguments_repeat1,
  [2714] = 2,
    ACTIONS(372), 1,
      sym__function,
    ACTIONS(374), 1,
      sym__local,
  [2721] = 2,
    ACTIONS(376), 1,
      sym__letter,
    STATE(87), 1,
      sym__attribute_name,
  [2728] = 2,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_local_variable,
  [2735] = 2,
    ACTIONS(337), 1,
      sym__letter,
    STATE(47), 1,
      sym__attribute_name,
  [2742] = 2,
    ACTIONS(337), 1,
      sym__letter,
    STATE(24), 1,
      sym__attribute_name,
  [2749] = 1,
    ACTIONS(114), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2754] = 1,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2759] = 2,
    ACTIONS(378), 1,
      sym__letter,
    STATE(40), 1,
      sym__name,
  [2766] = 1,
    ACTIONS(358), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2771] = 2,
    ACTIONS(378), 1,
      sym__letter,
    STATE(13), 1,
      sym__name,
  [2778] = 1,
    ACTIONS(348), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2783] = 1,
    ACTIONS(271), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2788] = 2,
    ACTIONS(337), 1,
      sym__letter,
    STATE(35), 1,
      sym__attribute_name,
  [2795] = 2,
    ACTIONS(372), 1,
      sym__function,
    ACTIONS(374), 1,
      sym__exposed,
  [2802] = 1,
    ACTIONS(247), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2807] = 2,
    ACTIONS(380), 1,
      aux_sym_time_token1,
    ACTIONS(382), 1,
      aux_sym_date_token1,
  [2814] = 1,
    ACTIONS(128), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2819] = 1,
    ACTIONS(353), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2824] = 1,
    ACTIONS(219), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2829] = 2,
    ACTIONS(384), 1,
      sym__letter,
    STATE(111), 1,
      sym__name,
  [2836] = 1,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2841] = 1,
    ACTIONS(386), 1,
      anon_sym_DASH,
  [2845] = 1,
    ACTIONS(388), 1,
      anon_sym_QMARK,
  [2849] = 1,
    ACTIONS(390), 1,
      aux_sym_time_token1,
  [2853] = 1,
    ACTIONS(392), 1,
      anon_sym_BANG,
  [2857] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [2861] = 1,
    ACTIONS(396), 1,
      aux_sym_time_token1,
  [2865] = 1,
    ACTIONS(185), 1,
      sym__letter,
  [2869] = 1,
    ACTIONS(398), 1,
      aux_sym_time_token1,
  [2873] = 1,
    ACTIONS(398), 1,
      aux_sym_date_token1,
  [2877] = 1,
    ACTIONS(400), 1,
      aux_sym_time_token1,
  [2881] = 1,
    ACTIONS(402), 1,
      sym__function,
  [2885] = 1,
    ACTIONS(404), 1,
      sym__function,
  [2889] = 1,
    ACTIONS(406), 1,
      sym__letter,
  [2893] = 1,
    ACTIONS(408), 1,
      anon_sym_DASH,
  [2897] = 1,
    ACTIONS(410), 1,
      anon_sym_DASH,
  [2901] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [2905] = 1,
    ACTIONS(414), 1,
      anon_sym_COLON,
  [2909] = 1,
    ACTIONS(416), 1,
      aux_sym_time_token1,
  [2913] = 1,
    ACTIONS(418), 1,
      sym__letter,
  [2917] = 1,
    ACTIONS(420), 1,
      anon_sym_DASH,
  [2921] = 1,
    ACTIONS(422), 1,
      aux_sym_time_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 550,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 642,
  [SMALL_STATE(19)] = 688,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 822,
  [SMALL_STATE(23)] = 865,
  [SMALL_STATE(24)] = 906,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 990,
  [SMALL_STATE(27)] = 1031,
  [SMALL_STATE(28)] = 1072,
  [SMALL_STATE(29)] = 1113,
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
  [SMALL_STATE(57)] = 2224,
  [SMALL_STATE(58)] = 2254,
  [SMALL_STATE(59)] = 2284,
  [SMALL_STATE(60)] = 2314,
  [SMALL_STATE(61)] = 2344,
  [SMALL_STATE(62)] = 2374,
  [SMALL_STATE(63)] = 2404,
  [SMALL_STATE(64)] = 2419,
  [SMALL_STATE(65)] = 2434,
  [SMALL_STATE(66)] = 2449,
  [SMALL_STATE(67)] = 2465,
  [SMALL_STATE(68)] = 2481,
  [SMALL_STATE(69)] = 2496,
  [SMALL_STATE(70)] = 2505,
  [SMALL_STATE(71)] = 2516,
  [SMALL_STATE(72)] = 2527,
  [SMALL_STATE(73)] = 2538,
  [SMALL_STATE(74)] = 2549,
  [SMALL_STATE(75)] = 2562,
  [SMALL_STATE(76)] = 2572,
  [SMALL_STATE(77)] = 2582,
  [SMALL_STATE(78)] = 2592,
  [SMALL_STATE(79)] = 2602,
  [SMALL_STATE(80)] = 2612,
  [SMALL_STATE(81)] = 2622,
  [SMALL_STATE(82)] = 2632,
  [SMALL_STATE(83)] = 2638,
  [SMALL_STATE(84)] = 2648,
  [SMALL_STATE(85)] = 2658,
  [SMALL_STATE(86)] = 2668,
  [SMALL_STATE(87)] = 2678,
  [SMALL_STATE(88)] = 2684,
  [SMALL_STATE(89)] = 2694,
  [SMALL_STATE(90)] = 2704,
  [SMALL_STATE(91)] = 2714,
  [SMALL_STATE(92)] = 2721,
  [SMALL_STATE(93)] = 2728,
  [SMALL_STATE(94)] = 2735,
  [SMALL_STATE(95)] = 2742,
  [SMALL_STATE(96)] = 2749,
  [SMALL_STATE(97)] = 2754,
  [SMALL_STATE(98)] = 2759,
  [SMALL_STATE(99)] = 2766,
  [SMALL_STATE(100)] = 2771,
  [SMALL_STATE(101)] = 2778,
  [SMALL_STATE(102)] = 2783,
  [SMALL_STATE(103)] = 2788,
  [SMALL_STATE(104)] = 2795,
  [SMALL_STATE(105)] = 2802,
  [SMALL_STATE(106)] = 2807,
  [SMALL_STATE(107)] = 2814,
  [SMALL_STATE(108)] = 2819,
  [SMALL_STATE(109)] = 2824,
  [SMALL_STATE(110)] = 2829,
  [SMALL_STATE(111)] = 2836,
  [SMALL_STATE(112)] = 2841,
  [SMALL_STATE(113)] = 2845,
  [SMALL_STATE(114)] = 2849,
  [SMALL_STATE(115)] = 2853,
  [SMALL_STATE(116)] = 2857,
  [SMALL_STATE(117)] = 2861,
  [SMALL_STATE(118)] = 2865,
  [SMALL_STATE(119)] = 2869,
  [SMALL_STATE(120)] = 2873,
  [SMALL_STATE(121)] = 2877,
  [SMALL_STATE(122)] = 2881,
  [SMALL_STATE(123)] = 2885,
  [SMALL_STATE(124)] = 2889,
  [SMALL_STATE(125)] = 2893,
  [SMALL_STATE(126)] = 2897,
  [SMALL_STATE(127)] = 2901,
  [SMALL_STATE(128)] = 2905,
  [SMALL_STATE(129)] = 2909,
  [SMALL_STATE(130)] = 2913,
  [SMALL_STATE(131)] = 2917,
  [SMALL_STATE(132)] = 2921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(104),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(91),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(100),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(98),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(114),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(106),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(64),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_path, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_path, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_variable, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_variable, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_path, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_path, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_argument, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(95),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor_block, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor_block, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_block, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_block, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_result, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_result, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_block, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_constructor, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_constructor, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 7),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_extends, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_extends, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(92),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(93),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(68),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2), SHIFT_REPEAT(75),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
