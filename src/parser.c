#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_source = 35,
  sym__token = 36,
  sym_value = 37,
  sym__computed = 38,
  sym__scope = 39,
  sym__name = 40,
  sym__attribute_name = 41,
  sym_function = 42,
  sym__function_argument = 43,
  sym__function_arguments = 44,
  sym__function_result = 45,
  sym_function_block = 46,
  sym_declare = 47,
  sym_declare_block = 48,
  sym__class_store = 49,
  sym__class = 50,
  sym__basic_type = 51,
  sym_class = 52,
  sym_local_variable = 53,
  sym_process_variable = 54,
  sym_interprocess_variable = 55,
  aux_sym_source_repeat1 = 56,
  aux_sym__function_argument_repeat1 = 57,
  aux_sym__function_arguments_repeat1 = 58,
  aux_sym__class_repeat1 = 59,
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
  [sym_source] = "source",
  [sym__token] = "_token",
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
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__function_argument_repeat1] = "_function_argument_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
  [aux_sym__class_repeat1] = "_class_repeat1",
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
  [sym_source] = sym_source,
  [sym__token] = sym__token,
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
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__function_argument_repeat1] = aux_sym__function_argument_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
  [aux_sym__class_repeat1] = aux_sym__class_repeat1,
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
  [sym_source] = {
    .visible = true,
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
      if (eof) ADVANCE(92);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '4') ADVANCE(23);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '4') ADVANCE(23);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '4') ADVANCE(23);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(288);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 15:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 73:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 85:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      if (eof) ADVANCE(92);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '4') ADVANCE(161);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '4') ADVANCE(23);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (sym__letter_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '4') ADVANCE(217);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(150);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__declare);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__function);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__function);
      if (lookahead == ' ') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__function);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__local);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__local);
      if (lookahead == ' ') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__local);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__exposed);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__exposed);
      if (lookahead == ' ') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__exposed);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__get);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__set);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__query);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__orderBy);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == ' ') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(231);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__letter);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__letter);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(167);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(197);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == ' ') ADVANCE(265);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (sym__alnum_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(222);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(223);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__alnum);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(253);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__alnum);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '4') ADVANCE(161);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (sym__letter_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__alnumsp);
      if (lookahead == ' ') ADVANCE(264);
      if (sym__alnum_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__alnumsp);
      if (sym__alnumsp_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__class_store_4d);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__class_store_ds);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__class_store_cs);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__basic_type_text);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__basic_type_date);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__basic_type_time);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__basic_type_boolean);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__basic_type_integer);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__basic_type_real);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__basic_type_pointer);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__basic_type_picture);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__basic_type_blob);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__basic_type_collection);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__basic_type_variant);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__basic_type_object);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 90},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 90},
  [10] = {.lex_state = 90},
  [11] = {.lex_state = 90},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 90},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 90},
  [18] = {.lex_state = 90},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 90},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 90},
  [25] = {.lex_state = 90},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 90},
  [30] = {.lex_state = 90},
  [31] = {.lex_state = 90},
  [32] = {.lex_state = 90},
  [33] = {.lex_state = 90},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 90},
  [37] = {.lex_state = 90},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 88},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 88},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 88},
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
  },
  [1] = {
    [sym_source] = STATE(72),
    [sym__token] = STATE(2),
    [sym_value] = STATE(2),
    [sym__scope] = STATE(73),
    [sym__name] = STATE(35),
    [sym__attribute_name] = STATE(4),
    [sym_function] = STATE(36),
    [sym_function_block] = STATE(2),
    [sym_declare] = STATE(6),
    [sym_declare_block] = STATE(2),
    [sym__class_store] = STATE(13),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(36),
    [sym_process_variable] = STATE(36),
    [sym_interprocess_variable] = STATE(36),
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
  },
  [2] = {
    [sym__token] = STATE(3),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(73),
    [sym__name] = STATE(35),
    [sym__attribute_name] = STATE(4),
    [sym_function] = STATE(36),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(6),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(13),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(36),
    [sym_process_variable] = STATE(36),
    [sym_interprocess_variable] = STATE(36),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
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
  },
  [3] = {
    [sym__token] = STATE(3),
    [sym_value] = STATE(3),
    [sym__scope] = STATE(73),
    [sym__name] = STATE(35),
    [sym__attribute_name] = STATE(4),
    [sym_function] = STATE(36),
    [sym_function_block] = STATE(3),
    [sym_declare] = STATE(6),
    [sym_declare_block] = STATE(3),
    [sym__class_store] = STATE(13),
    [sym__class] = STATE(14),
    [sym__basic_type] = STATE(14),
    [sym_class] = STATE(36),
    [sym_local_variable] = STATE(36),
    [sym_process_variable] = STATE(36),
    [sym_interprocess_variable] = STATE(36),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__declare] = ACTIONS(27),
    [sym__function] = ACTIONS(30),
    [sym__local] = ACTIONS(33),
    [sym__exposed] = ACTIONS(36),
    [sym__letter] = ACTIONS(39),
    [sym__class_store_4d] = ACTIONS(42),
    [sym__class_store_ds] = ACTIONS(42),
    [sym__class_store_cs] = ACTIONS(42),
    [sym__basic_type_text] = ACTIONS(45),
    [sym__basic_type_date] = ACTIONS(45),
    [sym__basic_type_time] = ACTIONS(45),
    [sym__basic_type_boolean] = ACTIONS(45),
    [sym__basic_type_integer] = ACTIONS(45),
    [sym__basic_type_real] = ACTIONS(45),
    [sym__basic_type_pointer] = ACTIONS(45),
    [sym__basic_type_picture] = ACTIONS(45),
    [sym__basic_type_blob] = ACTIONS(45),
    [sym__basic_type_collection] = ACTIONS(45),
    [sym__basic_type_variant] = ACTIONS(45),
    [sym__basic_type_object] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [anon_sym_LT_GT] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(56), 1,
      sym__letter,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    STATE(23), 1,
      sym__function_arguments,
    STATE(32), 1,
      sym__function_result,
    ACTIONS(54), 22,
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
  [40] = 5,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__alnum,
    ACTIONS(68), 1,
      sym__alnumsp,
    ACTIONS(70), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(64), 22,
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
  [78] = 6,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(74), 1,
      sym__letter,
    STATE(11), 1,
      sym__function_arguments,
    STATE(33), 1,
      sym__function_result,
    ACTIONS(72), 22,
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
  [118] = 2,
    ACTIONS(78), 1,
      sym__letter,
    ACTIONS(76), 25,
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
  [149] = 2,
    ACTIONS(82), 1,
      sym__letter,
    ACTIONS(80), 25,
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
  [180] = 2,
    ACTIONS(86), 1,
      sym__letter,
    ACTIONS(84), 24,
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
  [210] = 2,
    ACTIONS(90), 1,
      sym__letter,
    ACTIONS(88), 24,
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
  [240] = 4,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(94), 1,
      sym__letter,
    STATE(29), 1,
      sym__function_result,
    ACTIONS(92), 22,
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
  [274] = 2,
    ACTIONS(98), 1,
      sym__letter,
    ACTIONS(96), 24,
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
  [304] = 4,
    ACTIONS(102), 1,
      sym__letter,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym__class_repeat1,
    ACTIONS(100), 22,
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
  [338] = 2,
    ACTIONS(108), 1,
      sym__letter,
    ACTIONS(106), 24,
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
  [368] = 2,
    ACTIONS(112), 1,
      sym__letter,
    ACTIONS(110), 24,
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
  [398] = 3,
    ACTIONS(116), 1,
      sym__alnum,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      sym__declare,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_LT_GT,
    ACTIONS(70), 19,
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
  [430] = 4,
    ACTIONS(78), 1,
      sym__letter,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym__class_repeat1,
    ACTIONS(76), 22,
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
  [464] = 2,
    ACTIONS(123), 1,
      sym__letter,
    ACTIONS(121), 24,
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
  [494] = 3,
    ACTIONS(90), 1,
      sym__letter,
    ACTIONS(80), 2,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
    ACTIONS(88), 22,
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
  [526] = 4,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      sym__letter,
    STATE(17), 1,
      aux_sym__class_repeat1,
    ACTIONS(125), 22,
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
  [560] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym__alnumsp,
    ACTIONS(129), 1,
      sym__alnum,
    ACTIONS(64), 22,
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
  [594] = 2,
    ACTIONS(133), 1,
      sym__letter,
    ACTIONS(131), 24,
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
  [624] = 4,
    ACTIONS(60), 1,
      anon_sym_DASH_GT,
    ACTIONS(137), 1,
      sym__letter,
    STATE(30), 1,
      sym__function_result,
    ACTIONS(135), 22,
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
  [658] = 2,
    ACTIONS(141), 1,
      sym__letter,
    ACTIONS(139), 23,
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
  [687] = 2,
    ACTIONS(145), 1,
      sym__letter,
    ACTIONS(143), 23,
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
  [716] = 2,
    ACTIONS(149), 1,
      sym__letter,
    ACTIONS(147), 23,
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
  [745] = 2,
    ACTIONS(153), 1,
      sym__letter,
    ACTIONS(151), 22,
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
  [773] = 2,
    ACTIONS(157), 1,
      sym__letter,
    ACTIONS(155), 22,
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
  [801] = 2,
    ACTIONS(161), 1,
      sym__letter,
    ACTIONS(159), 22,
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
  [829] = 2,
    ACTIONS(165), 1,
      sym__letter,
    ACTIONS(163), 22,
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
  [857] = 2,
    ACTIONS(169), 1,
      sym__letter,
    ACTIONS(167), 22,
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
  [885] = 2,
    ACTIONS(137), 1,
      sym__letter,
    ACTIONS(135), 22,
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
  [913] = 2,
    ACTIONS(94), 1,
      sym__letter,
    ACTIONS(92), 22,
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
  [941] = 2,
    ACTIONS(173), 1,
      sym__letter,
    ACTIONS(171), 22,
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
  [969] = 2,
    ACTIONS(177), 1,
      sym__letter,
    ACTIONS(175), 22,
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
  [997] = 2,
    ACTIONS(74), 1,
      sym__letter,
    ACTIONS(72), 22,
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
  [1025] = 2,
    ACTIONS(181), 1,
      sym__letter,
    ACTIONS(179), 22,
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
  [1053] = 5,
    STATE(13), 1,
      sym__class_store,
    STATE(18), 1,
      sym_class,
    STATE(14), 2,
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
  [1083] = 5,
    STATE(9), 1,
      sym_class,
    STATE(13), 1,
      sym__class_store,
    STATE(14), 2,
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
  [1113] = 5,
    STATE(9), 1,
      sym_class,
    STATE(45), 1,
      sym__class_store,
    STATE(14), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(183), 3,
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
  [1143] = 5,
    STATE(18), 1,
      sym_class,
    STATE(45), 1,
      sym__class_store,
    STATE(14), 2,
      sym__class,
      sym__basic_type,
    ACTIONS(183), 3,
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
  [1173] = 4,
    ACTIONS(187), 1,
      sym__letter,
    STATE(27), 1,
      sym__attribute_name,
    STATE(71), 1,
      sym__computed,
    ACTIONS(185), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1189] = 4,
    ACTIONS(187), 1,
      sym__letter,
    STATE(28), 1,
      sym__attribute_name,
    STATE(70), 1,
      sym__computed,
    ACTIONS(189), 4,
      sym__get,
      sym__set,
      sym__query,
      sym__orderBy,
  [1205] = 2,
    ACTIONS(191), 1,
      sym__alnum,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1214] = 3,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym__class_repeat1,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1225] = 3,
    ACTIONS(68), 1,
      sym__alnumsp,
    ACTIONS(129), 1,
      sym__alnum,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1236] = 4,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_local_variable,
    STATE(55), 1,
      sym__function_argument,
  [1249] = 3,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym__class_repeat1,
    ACTIONS(76), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1260] = 3,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym__class_repeat1,
    ACTIONS(125), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1271] = 3,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym__function_argument_repeat1,
  [1281] = 3,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_local_variable,
    STATE(63), 1,
      sym__function_argument,
  [1291] = 3,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym__function_argument,
    STATE(50), 1,
      sym_local_variable,
  [1301] = 3,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym__function_arguments_repeat1,
  [1311] = 3,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym__function_argument_repeat1,
  [1321] = 3,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym__function_arguments_repeat1,
  [1331] = 3,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym__function_argument_repeat1,
  [1341] = 3,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym__function_arguments_repeat1,
  [1351] = 3,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym__function_argument_repeat1,
  [1361] = 3,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym__function_argument_repeat1,
  [1371] = 2,
    ACTIONS(228), 1,
      sym__letter,
    STATE(34), 1,
      sym__name,
  [1378] = 2,
    ACTIONS(230), 1,
      sym__function,
    ACTIONS(232), 1,
      sym__local,
  [1385] = 2,
    ACTIONS(228), 1,
      sym__letter,
    STATE(22), 1,
      sym__name,
  [1392] = 1,
    ACTIONS(219), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1397] = 2,
    ACTIONS(230), 1,
      sym__function,
    ACTIONS(232), 1,
      sym__exposed,
  [1404] = 1,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1409] = 2,
    ACTIONS(234), 1,
      sym__letter,
    STATE(7), 1,
      sym__attribute_name,
  [1416] = 2,
    ACTIONS(236), 1,
      sym__letter,
    STATE(7), 1,
      sym__attribute_name,
  [1423] = 2,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_local_variable,
  [1430] = 2,
    ACTIONS(238), 1,
      sym__letter,
    STATE(22), 1,
      sym__name,
  [1437] = 2,
    ACTIONS(234), 1,
      sym__letter,
    STATE(37), 1,
      sym__attribute_name,
  [1444] = 2,
    ACTIONS(234), 1,
      sym__letter,
    STATE(28), 1,
      sym__attribute_name,
  [1451] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1455] = 1,
    ACTIONS(242), 1,
      sym__function,
  [1459] = 1,
    ACTIONS(244), 1,
      sym__function,
  [1463] = 1,
    ACTIONS(246), 1,
      sym__letter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 274,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 398,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 494,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 560,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 624,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 687,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 773,
  [SMALL_STATE(29)] = 801,
  [SMALL_STATE(30)] = 829,
  [SMALL_STATE(31)] = 857,
  [SMALL_STATE(32)] = 885,
  [SMALL_STATE(33)] = 913,
  [SMALL_STATE(34)] = 941,
  [SMALL_STATE(35)] = 969,
  [SMALL_STATE(36)] = 997,
  [SMALL_STATE(37)] = 1025,
  [SMALL_STATE(38)] = 1053,
  [SMALL_STATE(39)] = 1083,
  [SMALL_STATE(40)] = 1113,
  [SMALL_STATE(41)] = 1143,
  [SMALL_STATE(42)] = 1173,
  [SMALL_STATE(43)] = 1189,
  [SMALL_STATE(44)] = 1205,
  [SMALL_STATE(45)] = 1214,
  [SMALL_STATE(46)] = 1225,
  [SMALL_STATE(47)] = 1236,
  [SMALL_STATE(48)] = 1249,
  [SMALL_STATE(49)] = 1260,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1281,
  [SMALL_STATE(52)] = 1291,
  [SMALL_STATE(53)] = 1301,
  [SMALL_STATE(54)] = 1311,
  [SMALL_STATE(55)] = 1321,
  [SMALL_STATE(56)] = 1331,
  [SMALL_STATE(57)] = 1341,
  [SMALL_STATE(58)] = 1351,
  [SMALL_STATE(59)] = 1361,
  [SMALL_STATE(60)] = 1371,
  [SMALL_STATE(61)] = 1378,
  [SMALL_STATE(62)] = 1385,
  [SMALL_STATE(63)] = 1392,
  [SMALL_STATE(64)] = 1397,
  [SMALL_STATE(65)] = 1404,
  [SMALL_STATE(66)] = 1409,
  [SMALL_STATE(67)] = 1416,
  [SMALL_STATE(68)] = 1423,
  [SMALL_STATE(69)] = 1430,
  [SMALL_STATE(70)] = 1437,
  [SMALL_STATE(71)] = 1444,
  [SMALL_STATE(72)] = 1451,
  [SMALL_STATE(73)] = 1455,
  [SMALL_STATE(74)] = 1459,
  [SMALL_STATE(75)] = 1463,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(64),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_name, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_name, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(66),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_argument, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_argument, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_arguments, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declare_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_result, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_result, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interprocess_variable, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interprocess_variable, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_variable, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_variable, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(67),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2), SHIFT_REPEAT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2), SHIFT_REPEAT(68),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_argument_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scope, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
