// tree-sitter-fourd — external scanner
//
// This grammar declares exactly TWO external tokens (see grammar.json):
// untokenized builtin command and constant names. Everything else — keywords,
// suffixes like :C41 / :K8:3 (command_suffix / constant_suffix), literals,
// newline handling — is the grammar's own business. The enum below MUST stay
// in the same order as the `externals` array in the grammar.
//
// The greedy multi-word match marks the end after every prefix that is a
// known builtin; the last mark wins. That is what makes `Current date+1`
// split correctly instead of swallowing `date`.

#include "tree_sitter/parser.h"
#include <string.h>
#include <wctype.h>

#include "builtins.h"  // fourd_builtin_kind(), is_builtin_prefix(), fourd_stricmp()

enum TokenType {
  CLASSIC_COMMAND,   // externals[0] in grammar.json
  CLASSIC_CONSTANT,  // externals[1] in grammar.json
};

static inline void adv(TSLexer *l) { l->advance(l, false); }

bool tree_sitter_fourd_external_scanner_scan(void *payload, TSLexer *l,
                                             const bool *valid_symbols) {
  (void)payload;

  const unsigned char want =
      (valid_symbols[CLASSIC_COMMAND]  ? FOURD_COMMAND  : 0) |
      (valid_symbols[CLASSIC_CONSTANT] ? FOURD_CONSTANT : 0);
  if (!want) return false;

  // The scanner runs before extras are skipped; whitespace (incl. newlines)
  // is an extra in this grammar, so consume it as skipped here.
  while (l->lookahead == ' ' || l->lookahead == '\t' ||
         l->lookahead == '\r' || l->lookahead == '\n')
    l->advance(l, true);

  if (!iswalpha(l->lookahead) && l->lookahead != '_') return false;

  char buf[FOURD_MAX_BUILTIN_LEN];
  int len = 0;
  unsigned char best = 0;

  for (int word = 0; word < FOURD_MAX_BUILTIN_WORDS; word++) {
    if (!iswalpha(l->lookahead) && l->lookahead != '_') break;

    while ((iswalnum(l->lookahead) || l->lookahead == '_') &&
           len < (int)sizeof(buf) - 2) {
      buf[len++] = (char)l->lookahead;
      adv(l);
    }
    buf[len] = '\0';

    unsigned char kind = fourd_builtin_kind(buf) & want;
    if (kind) { l->mark_end(l); best = kind; }

    if (!is_builtin_prefix(buf)) break;   // nothing extends this prefix
    if (l->lookahead != ' ' || len >= (int)sizeof(buf) - 2) break;
    adv(l);
    buf[len++] = ' ';
  }

  if (!best) return false;

  // NOTE: no ':C' stand-down here — in this grammar the suffix is a separate
  // token (command_suffix), so `ALERT:C41` is meant to lex as
  // classic_command `ALERT` + command_suffix `:C41`.
  l->result_symbol = (best & FOURD_COMMAND) ? CLASSIC_COMMAND : CLASSIC_CONSTANT;
  return true;
}

void *tree_sitter_fourd_external_scanner_create(void) { return NULL; }
void  tree_sitter_fourd_external_scanner_destroy(void *p) { (void)p; }
unsigned tree_sitter_fourd_external_scanner_serialize(void *p, char *b) {
  (void)p; (void)b; return 0;
}
void tree_sitter_fourd_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  (void)p; (void)b; (void)n;
}
