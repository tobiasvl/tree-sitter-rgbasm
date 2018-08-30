#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 119
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 1
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym__line_break = 1,
  sym_comment = 2,
  sym_asterisk_comment = 3,
  anon_sym_COLON = 4,
  anon_sym_COLON_COLON = 5,
  sym__label_identifier = 6,
  anon_sym_DOT = 7,
  sym_a = 8,
  sym_af = 9,
  sym_hl = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_sp = 13,
  anon_sym_b = 14,
  anon_sym_B = 15,
  anon_sym_c = 16,
  anon_sym_C = 17,
  anon_sym_d = 18,
  anon_sym_D = 19,
  anon_sym_e = 20,
  anon_sym_E = 21,
  anon_sym_h = 22,
  anon_sym_H = 23,
  anon_sym_l = 24,
  anon_sym_L = 25,
  anon_sym_bc = 26,
  anon_sym_BC = 27,
  anon_sym_de = 28,
  anon_sym_DE = 29,
  anon_sym_HL = 30,
  anon_sym_hl = 31,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH = 32,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH = 33,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH = 34,
  aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH = 35,
  sym_u3 = 36,
  sym_cc = 37,
  anon_sym_nop = 38,
  anon_sym_stop = 39,
  anon_sym_halt = 40,
  anon_sym_ei = 41,
  anon_sym_di = 42,
  anon_sym_reti = 43,
  anon_sym_ccf = 44,
  anon_sym_cpl = 45,
  anon_sym_daa = 46,
  anon_sym_scf = 47,
  anon_sym_rla = 48,
  anon_sym_rlca = 49,
  anon_sym_rra = 50,
  anon_sym_rrca = 51,
  anon_sym_jp = 52,
  anon_sym_COMMA = 53,
  anon_sym_jr = 54,
  anon_sym_ret = 55,
  anon_sym_call = 56,
  anon_sym_rst = 57,
  anon_sym_ld = 58,
  aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH = 59,
  aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH = 60,
  anon_sym_add = 61,
  anon_sym_dec = 62,
  anon_sym_inc = 63,
  anon_sym_swap = 64,
  anon_sym_bit = 65,
  anon_sym_res = 66,
  anon_sym_set = 67,
  anon_sym_rl = 68,
  anon_sym_rlc = 69,
  anon_sym_rr = 70,
  anon_sym_rrc = 71,
  anon_sym_sla = 72,
  anon_sym_sra = 73,
  anon_sym_srl = 74,
  anon_sym_push = 75,
  anon_sym_pop = 76,
  aux_sym_SLASH_LBRACKCc_RBRACK_SLASH = 77,
  anon_sym_SECTION = 78,
  anon_sym_DQUOTE = 79,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH = 80,
  aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH = 81,
  anon_sym_VRAM = 82,
  anon_sym_SRAM = 83,
  aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH = 84,
  anon_sym_OAM = 85,
  anon_sym_HRAM = 86,
  anon_sym_BANK = 87,
  anon_sym_ALIGN = 88,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 89,
  sym_symbol = 90,
  sym_source_file = 91,
  sym__line = 92,
  sym_label_definition = 93,
  sym_label = 94,
  sym__global_label = 95,
  sym__local_label = 96,
  sym__instruction = 97,
  sym_deref_hl = 98,
  sym_r8 = 99,
  sym_r16 = 100,
  sym_n8 = 101,
  sym_n16 = 102,
  sym_mnemonic = 103,
  sym__r8_load = 104,
  sym__a_load = 105,
  sym_section = 106,
  sym_section_name = 107,
  sym_section_type = 108,
  sym_section_addr = 109,
  sym_section_options = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_section_name_repeat1 = 112,
  anon_alias_sym_comment = 113,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__line_break] = "_line_break",
  [sym_comment] = "comment",
  [sym_asterisk_comment] = "asterisk_comment",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym__label_identifier] = "_label_identifier",
  [anon_sym_DOT] = ".",
  [sym_a] = "a",
  [sym_af] = "af",
  [sym_hl] = "hl",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_sp] = "sp",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [anon_sym_c] = "c",
  [anon_sym_C] = "C",
  [anon_sym_d] = "d",
  [anon_sym_D] = "D",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_h] = "h",
  [anon_sym_H] = "H",
  [anon_sym_l] = "l",
  [anon_sym_L] = "L",
  [anon_sym_bc] = "bc",
  [anon_sym_BC] = "BC",
  [anon_sym_de] = "de",
  [anon_sym_DE] = "DE",
  [anon_sym_HL] = "HL",
  [anon_sym_hl] = "hl",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = "/[0-9]{1,3}/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = "/\\$[a-fA-F0-9]{1,2}/",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = "/[0-9]{1,5}/",
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = "/\\$[a-fA-F0-9]{1,4}/",
  [sym_u3] = "u3",
  [sym_cc] = "cc",
  [anon_sym_nop] = "nop",
  [anon_sym_stop] = "stop",
  [anon_sym_halt] = "halt",
  [anon_sym_ei] = "ei",
  [anon_sym_di] = "di",
  [anon_sym_reti] = "reti",
  [anon_sym_ccf] = "ccf",
  [anon_sym_cpl] = "cpl",
  [anon_sym_daa] = "daa",
  [anon_sym_scf] = "scf",
  [anon_sym_rla] = "rla",
  [anon_sym_rlca] = "rlca",
  [anon_sym_rra] = "rra",
  [anon_sym_rrca] = "rrca",
  [anon_sym_jp] = "jp",
  [anon_sym_COMMA] = ",",
  [anon_sym_jr] = "jr",
  [anon_sym_ret] = "ret",
  [anon_sym_call] = "call",
  [anon_sym_rst] = "rst",
  [anon_sym_ld] = "ld",
  [aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH] = "/\\+|-/",
  [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = "/(ad[dc])|(and)|(cp)|(x?or)|(sbc)|(sub)/",
  [anon_sym_add] = "add",
  [anon_sym_dec] = "dec",
  [anon_sym_inc] = "inc",
  [anon_sym_swap] = "swap",
  [anon_sym_bit] = "bit",
  [anon_sym_res] = "res",
  [anon_sym_set] = "set",
  [anon_sym_rl] = "rl",
  [anon_sym_rlc] = "rlc",
  [anon_sym_rr] = "rr",
  [anon_sym_rrc] = "rrc",
  [anon_sym_sla] = "sla",
  [anon_sym_sra] = "sra",
  [anon_sym_srl] = "srl",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [aux_sym_SLASH_LBRACKCc_RBRACK_SLASH] = "/[Cc]/",
  [anon_sym_SECTION] = "SECTION",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = "/[A-Za-z0-9_ ]/",
  [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = "/ROM[0X]/",
  [anon_sym_VRAM] = "VRAM",
  [anon_sym_SRAM] = "SRAM",
  [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = "/WRAM[0X]/",
  [anon_sym_OAM] = "OAM",
  [anon_sym_HRAM] = "HRAM",
  [anon_sym_BANK] = "BANK",
  [anon_sym_ALIGN] = "ALIGN",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
  [sym_symbol] = "symbol",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label_definition] = "label_definition",
  [sym_label] = "label",
  [sym__global_label] = "_global_label",
  [sym__local_label] = "_local_label",
  [sym__instruction] = "_instruction",
  [sym_deref_hl] = "deref_hl",
  [sym_r8] = "r8",
  [sym_r16] = "r16",
  [sym_n8] = "n8",
  [sym_n16] = "n16",
  [sym_mnemonic] = "mnemonic",
  [sym__r8_load] = "_r8_load",
  [sym__a_load] = "_a_load",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_section_type] = "section_type",
  [sym_section_addr] = "section_addr",
  [sym_section_options] = "section_options",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_name_repeat1] = "section_name_repeat1",
  [anon_alias_sym_comment] = "comment",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__label_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_a] = {
    .visible = true,
    .named = true,
  },
  [sym_af] = {
    .visible = true,
    .named = true,
  },
  [sym_hl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_sp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_de] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hl] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_u3] = {
    .visible = true,
    .named = true,
  },
  [sym_cc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_di] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rlca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rrca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ld] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_res] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rlc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKCc_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_VRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SRAM] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_OAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIGN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__global_label] = {
    .visible = false,
    .named = true,
  },
  [sym__local_label] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_deref_hl] = {
    .visible = true,
    .named = true,
  },
  [sym_r8] = {
    .visible = true,
    .named = true,
  },
  [sym_r16] = {
    .visible = true,
    .named = true,
  },
  [sym_n8] = {
    .visible = true,
    .named = true,
  },
  [sym_n16] = {
    .visible = true,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym__r8_load] = {
    .visible = false,
    .named = true,
  },
  [sym__a_load] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_type] = {
    .visible = true,
    .named = true,
  },
  [sym_section_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_section_options] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_comment,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'A')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(21);
      if (lookahead == 'C')
        ADVANCE(26);
      if (lookahead == 'D')
        ADVANCE(27);
      if (lookahead == 'E')
        ADVANCE(29);
      if (lookahead == 'H')
        ADVANCE(30);
      if (lookahead == 'L')
        ADVANCE(35);
      if (lookahead == 'M')
        ADVANCE(36);
      if (lookahead == 'N')
        ADVANCE(41);
      if (lookahead == 'O')
        ADVANCE(42);
      if (lookahead == 'R')
        ADVANCE(45);
      if (lookahead == 'S')
        ADVANCE(48);
      if (lookahead == 'V')
        ADVANCE(58);
      if (lookahead == 'W')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(64);
      if (lookahead == ']')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'd')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'h')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(95);
      if (lookahead == 'j')
        ADVANCE(98);
      if (lookahead == 'l')
        ADVANCE(101);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(106);
      if (lookahead == 'p')
        ADVANCE(107);
      if (lookahead == 'r')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(128);
      if (lookahead == 'x')
        ADVANCE(146);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(148);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'y'))
        ADVANCE(155);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_asterisk_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_a);
      if (lookahead == 'L')
        ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'I')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'G')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'N')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ALIGN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'C')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'N')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'K')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'E')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_H);
      if (lookahead == 'L')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_HL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'A')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'M')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_HRAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'A')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'C')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'R')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'O')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'A')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'M')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_OAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'O')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'M')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == '0' ||
          lookahead == 'X')
        ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'E')
        ADVANCE(49);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'C')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'T')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'I')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'O')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'N')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SECTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'A')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'M')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SRAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'R')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'A')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'M')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_VRAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 62:
      if (lookahead == 'R')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'A')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_a);
      if (lookahead == 'd')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_add);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'd')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'c')
        ADVANCE(71);
      if (lookahead == 'i')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 't')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'a')
        ADVANCE(75);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'p')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'f')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ccf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_cpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'a')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_daa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'c')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_dec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_di);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'i')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ei);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'L')
        ADVANCE(20);
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 't')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_halt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_hl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'c')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 98:
      if (lookahead == 'p')
        ADVANCE(99);
      if (lookahead == 'r')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_jp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_jr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'd')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ld);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 'o')
        ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(20);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'p')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'r')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 107:
      if (lookahead == 'o')
        ADVANCE(108);
      if (lookahead == 'u')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'p')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'h')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_push);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == 'l')
        ADVANCE(118);
      if (lookahead == 'r')
        ADVANCE(122);
      if (lookahead == 's')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_res);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == 'i')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_reti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_rl);
      if (lookahead == 'a')
        ADVANCE(119);
      if (lookahead == 'c')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_rla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_rlc);
      if (lookahead == 'a')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_rlca);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_rr);
      if (lookahead == 'a')
        ADVANCE(123);
      if (lookahead == 'c')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_rra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_rrc);
      if (lookahead == 'a')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_rrca);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 't')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_rst);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 128:
      if (lookahead == 'b')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(136);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(142);
      if (lookahead == 'w')
        ADVANCE(143);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'c')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'f')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_scf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 't')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_sla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 'l')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_sra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_srl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'o')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'p')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'p')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_swap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 146:
      if (lookahead == 'o')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'r')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_cc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 156:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'M')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(159);
      if (lookahead == 'b')
        ADVANCE(160);
      if (lookahead == 'c')
        ADVANCE(161);
      if (lookahead == 'd')
        ADVANCE(162);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == 'h')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(95);
      if (lookahead == 'j')
        ADVANCE(98);
      if (lookahead == 'l')
        ADVANCE(166);
      if (lookahead == 'n')
        ADVANCE(167);
      if (lookahead == 'o')
        ADVANCE(106);
      if (lookahead == 'p')
        ADVANCE(107);
      if (lookahead == 'r')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 'x')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 158:
      if (lookahead == 'E')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 159:
      if (lookahead == 'd')
        ADVANCE(67);
      if (lookahead == 'n')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 161:
      if (lookahead == 'a')
        ADVANCE(75);
      if (lookahead == 'c')
        ADVANCE(78);
      if (lookahead == 'p')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'i')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'c')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 164:
      if (lookahead == 'i')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 165:
      if (lookahead == 'a')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 166:
      if (lookahead == 'd')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 167:
      if (lookahead == 'o')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 168:
      if (lookahead == 'b')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(136);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(142);
      if (lookahead == 'w')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == '$')
        ADVANCE(170);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(173);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(155);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH);
      END_STATE();
    case 179:
      if (lookahead == '$')
        ADVANCE(180);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(155);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'Z' ||
          lookahead == 'c' ||
          lookahead == 'z')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_cc);
      END_STATE();
    case 189:
      if (lookahead == 'A')
        ADVANCE(190);
      if (lookahead == 'B')
        ADVANCE(191);
      if (lookahead == 'C')
        ADVANCE(193);
      if (lookahead == 'D')
        ADVANCE(194);
      if (lookahead == 'E')
        ADVANCE(196);
      if (lookahead == 'H')
        ADVANCE(197);
      if (lookahead == 'L')
        ADVANCE(200);
      if (lookahead == '[')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'b')
        ADVANCE(201);
      if (lookahead == 'c')
        ADVANCE(203);
      if (lookahead == 'd')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(207);
      if (lookahead == 'l')
        ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_a);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'C')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BC);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'E')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_H);
      if (lookahead == 'L')
        ADVANCE(198);
      if (lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_HL);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_hl);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'c')
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bc);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_de);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'L')
        ADVANCE(199);
      if (lookahead == 'l')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_hl);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_sp);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'A')
        ADVANCE(190);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == 'A')
        ADVANCE(190);
      if (lookahead == 'B')
        ADVANCE(214);
      if (lookahead == 'C')
        ADVANCE(193);
      if (lookahead == 'D')
        ADVANCE(215);
      if (lookahead == 'E')
        ADVANCE(196);
      if (lookahead == 'H')
        ADVANCE(216);
      if (lookahead == 'L')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'b')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(203);
      if (lookahead == 'd')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_H);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_u3);
      END_STATE();
    case 222:
      if (lookahead == 'B')
        ADVANCE(223);
      if (lookahead == 'D')
        ADVANCE(224);
      if (lookahead == 'H')
        ADVANCE(225);
      if (lookahead == 'b')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == 'C')
        ADVANCE(192);
      END_STATE();
    case 224:
      if (lookahead == 'E')
        ADVANCE(195);
      END_STATE();
    case 225:
      if (lookahead == 'L')
        ADVANCE(198);
      END_STATE();
    case 226:
      if (lookahead == 'c')
        ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == 'l')
        ADVANCE(208);
      END_STATE();
    case 229:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_af);
      END_STATE();
    case 231:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      END_STATE();
    case 232:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'M')
        ADVANCE(234);
      if (lookahead == 'S')
        ADVANCE(239);
      if (lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'b')
        ADVANCE(251);
      if (lookahead == 'c')
        ADVANCE(254);
      if (lookahead == 'd')
        ADVANCE(262);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'h')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(274);
      if (lookahead == 'j')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(280);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'p')
        ADVANCE(286);
      if (lookahead == 'r')
        ADVANCE(292);
      if (lookahead == 's')
        ADVANCE(307);
      if (lookahead == 'x')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      END_STATE();
    case 234:
      if (lookahead == 'A')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'C')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'R')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'O')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 239:
      if (lookahead == 'E')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'C')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'T')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'I')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'O')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'N')
        ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SECTION);
      END_STATE();
    case 246:
      if (lookahead == 'd')
        ADVANCE(247);
      if (lookahead == 'n')
        ADVANCE(250);
      END_STATE();
    case 247:
      if (lookahead == 'c')
        ADVANCE(248);
      if (lookahead == 'd')
        ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 250:
      if (lookahead == 'd')
        ADVANCE(248);
      END_STATE();
    case 251:
      if (lookahead == 'i')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 't')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 254:
      if (lookahead == 'a')
        ADVANCE(255);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'p')
        ADVANCE(260);
      END_STATE();
    case 255:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'l')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 258:
      if (lookahead == 'f')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ccf);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH);
      if (lookahead == 'l')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_cpl);
      END_STATE();
    case 262:
      if (lookahead == 'a')
        ADVANCE(263);
      if (lookahead == 'e')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_daa);
      END_STATE();
    case 265:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_di);
      END_STATE();
    case 268:
      if (lookahead == 'i')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ei);
      END_STATE();
    case 270:
      if (lookahead == 'a')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'l')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 274:
      if (lookahead == 'n')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'c')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 277:
      if (lookahead == 'p')
        ADVANCE(278);
      if (lookahead == 'r')
        ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_jp);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 280:
      if (lookahead == 'd')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ld);
      END_STATE();
    case 282:
      if (lookahead == 'o')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'p')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 285:
      if (lookahead == 'r')
        ADVANCE(248);
      END_STATE();
    case 286:
      if (lookahead == 'o')
        ADVANCE(287);
      if (lookahead == 'u')
        ADVANCE(289);
      END_STATE();
    case 287:
      if (lookahead == 'p')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 289:
      if (lookahead == 's')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'h')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 292:
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'l')
        ADVANCE(297);
      if (lookahead == 'r')
        ADVANCE(301);
      if (lookahead == 's')
        ADVANCE(305);
      END_STATE();
    case 293:
      if (lookahead == 's')
        ADVANCE(294);
      if (lookahead == 't')
        ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_res);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == 'i')
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_reti);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_rl);
      if (lookahead == 'a')
        ADVANCE(298);
      if (lookahead == 'c')
        ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_rla);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_rlc);
      if (lookahead == 'a')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_rlca);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_rr);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_rra);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_rrc);
      if (lookahead == 'a')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_rrca);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_rst);
      END_STATE();
    case 307:
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'e')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(313);
      if (lookahead == 'r')
        ADVANCE(315);
      if (lookahead == 't')
        ADVANCE(318);
      if (lookahead == 'u')
        ADVANCE(321);
      if (lookahead == 'w')
        ADVANCE(322);
      END_STATE();
    case 308:
      if (lookahead == 'c')
        ADVANCE(248);
      END_STATE();
    case 309:
      if (lookahead == 'f')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_scf);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 313:
      if (lookahead == 'a')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_sla);
      END_STATE();
    case 315:
      if (lookahead == 'a')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 318:
      if (lookahead == 'o')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'p')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 321:
      if (lookahead == 'b')
        ADVANCE(248);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'p')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 325:
      if (lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 326:
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      END_STATE();
    case 327:
      if (lookahead == '$')
        ADVANCE(170);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'B')
        ADVANCE(328);
      if (lookahead == 'D')
        ADVANCE(329);
      if (lookahead == 'H')
        ADVANCE(330);
      if (lookahead == 'b')
        ADVANCE(331);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'h')
        ADVANCE(334);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(155);
      END_STATE();
    case 328:
      if (lookahead == 'C')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 329:
      if (lookahead == 'E')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 330:
      if (lookahead == 'L')
        ADVANCE(31);
      if (lookahead == 'l')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 331:
      if (lookahead == 'c')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 332:
      if (lookahead == 'e')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_de);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 334:
      if (lookahead == 'L')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKCc_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 336:
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(336);
      END_STATE();
    case 337:
      if (lookahead == ' ')
        ADVANCE(338);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 339:
      if (lookahead == 'H')
        ADVANCE(340);
      if (lookahead == 'O')
        ADVANCE(344);
      if (lookahead == 'R')
        ADVANCE(347);
      if (lookahead == 'S')
        ADVANCE(351);
      if (lookahead == 'V')
        ADVANCE(355);
      if (lookahead == 'W')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      END_STATE();
    case 340:
      if (lookahead == 'R')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'A')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'M')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_HRAM);
      END_STATE();
    case 344:
      if (lookahead == 'A')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'M')
        ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_OAM);
      END_STATE();
    case 347:
      if (lookahead == 'O')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'M')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == '0' ||
          lookahead == 'X')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH);
      END_STATE();
    case 351:
      if (lookahead == 'R')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'A')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'M')
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SRAM);
      END_STATE();
    case 355:
      if (lookahead == 'R')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'A')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'M')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_VRAM);
      END_STATE();
    case 359:
      if (lookahead == 'R')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'A')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'M')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == '0' ||
          lookahead == 'X')
        ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH);
      END_STATE();
    case 364:
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(364);
      END_STATE();
    case 365:
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ']')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      END_STATE();
    case 366:
      if (lookahead == '$')
        ADVANCE(180);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == 'A')
        ADVANCE(367);
      if (lookahead == 'B')
        ADVANCE(368);
      if (lookahead == 'C')
        ADVANCE(26);
      if (lookahead == 'D')
        ADVANCE(369);
      if (lookahead == 'E')
        ADVANCE(29);
      if (lookahead == 'H')
        ADVANCE(370);
      if (lookahead == 'L')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == 'b')
        ADVANCE(371);
      if (lookahead == 'c')
        ADVANCE(372);
      if (lookahead == 'd')
        ADVANCE(373);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead == 'h')
        ADVANCE(375);
      if (lookahead == 'l')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(183);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(155);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_a);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_B);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_H);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_h);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_l);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 377:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == 'A')
        ADVANCE(378);
      if (lookahead == 'B')
        ADVANCE(383);
      if (lookahead == '[')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == 'L')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'I')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'G')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'N')
        ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_ALIGN);
      END_STATE();
    case 383:
      if (lookahead == 'A')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'N')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'K')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_BANK);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(387);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 156},
  [3] = {.lex_state = 156},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 156},
  [6] = {.lex_state = 169},
  [7] = {.lex_state = 179},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 179},
  [11] = {.lex_state = 189},
  [12] = {.lex_state = 212},
  [13] = {.lex_state = 213},
  [14] = {.lex_state = 189},
  [15] = {.lex_state = 189},
  [16] = {.lex_state = 220},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 231},
  [19] = {.lex_state = 232},
  [20] = {.lex_state = 233},
  [21] = {.lex_state = 233},
  [22] = {.lex_state = 233},
  [23] = {.lex_state = 156},
  [24] = {.lex_state = 156},
  [25] = {.lex_state = 156},
  [26] = {.lex_state = 156},
  [27] = {.lex_state = 233},
  [28] = {.lex_state = 156},
  [29] = {.lex_state = 156},
  [30] = {.lex_state = 326},
  [31] = {.lex_state = 156},
  [32] = {.lex_state = 156},
  [33] = {.lex_state = 156},
  [34] = {.lex_state = 156},
  [35] = {.lex_state = 326},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 326},
  [38] = {.lex_state = 326},
  [39] = {.lex_state = 326},
  [40] = {.lex_state = 327},
  [41] = {.lex_state = 326},
  [42] = {.lex_state = 336},
  [43] = {.lex_state = 326},
  [44] = {.lex_state = 326},
  [45] = {.lex_state = 326},
  [46] = {.lex_state = 326},
  [47] = {.lex_state = 156},
  [48] = {.lex_state = 213},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 326},
  [51] = {.lex_state = 337},
  [52] = {.lex_state = 339},
  [53] = {.lex_state = 156},
  [54] = {.lex_state = 156},
  [55] = {.lex_state = 233},
  [56] = {.lex_state = 233},
  [57] = {.lex_state = 156},
  [58] = {.lex_state = 169},
  [59] = {.lex_state = 156},
  [60] = {.lex_state = 179},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 169},
  [65] = {.lex_state = 364},
  [66] = {.lex_state = 364},
  [67] = {.lex_state = 365},
  [68] = {.lex_state = 364},
  [69] = {.lex_state = 364},
  [70] = {.lex_state = 364},
  [71] = {.lex_state = 366},
  [72] = {.lex_state = 366},
  [73] = {.lex_state = 156},
  [74] = {.lex_state = 189},
  [75] = {.lex_state = 364},
  [76] = {.lex_state = 213},
  [77] = {.lex_state = 339},
  [78] = {.lex_state = 337},
  [79] = {.lex_state = 377},
  [80] = {.lex_state = 377},
  [81] = {.lex_state = 156},
  [82] = {.lex_state = 156},
  [83] = {.lex_state = 233},
  [84] = {.lex_state = 156},
  [85] = {.lex_state = 156},
  [86] = {.lex_state = 327},
  [87] = {.lex_state = 364},
  [88] = {.lex_state = 326},
  [89] = {.lex_state = 364},
  [90] = {.lex_state = 364},
  [91] = {.lex_state = 326},
  [92] = {.lex_state = 326},
  [93] = {.lex_state = 156},
  [94] = {.lex_state = 156},
  [95] = {.lex_state = 339},
  [96] = {.lex_state = 337},
  [97] = {.lex_state = 169},
  [98] = {.lex_state = 189},
  [99] = {.lex_state = 377},
  [100] = {.lex_state = 156},
  [101] = {.lex_state = 156},
  [102] = {.lex_state = 364},
  [103] = {.lex_state = 364},
  [104] = {.lex_state = 326},
  [105] = {.lex_state = 189},
  [106] = {.lex_state = 189},
  [107] = {.lex_state = 364},
  [108] = {.lex_state = 387},
  [109] = {.lex_state = 156},
  [110] = {.lex_state = 364},
  [111] = {.lex_state = 156},
  [112] = {.lex_state = 189},
  [113] = {.lex_state = 156},
  [114] = {.lex_state = 377},
  [115] = {.lex_state = 364},
  [116] = {.lex_state = 156},
  [117] = {.lex_state = 156},
  [118] = {.lex_state = 156},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_asterisk_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__label_identifier] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_a] = ACTIONS(3),
    [sym_af] = ACTIONS(3),
    [sym_hl] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_sp] = ACTIONS(3),
    [anon_sym_b] = ACTIONS(3),
    [anon_sym_B] = ACTIONS(3),
    [anon_sym_c] = ACTIONS(3),
    [anon_sym_C] = ACTIONS(3),
    [anon_sym_d] = ACTIONS(3),
    [anon_sym_D] = ACTIONS(3),
    [anon_sym_e] = ACTIONS(3),
    [anon_sym_E] = ACTIONS(3),
    [anon_sym_h] = ACTIONS(3),
    [anon_sym_H] = ACTIONS(3),
    [anon_sym_l] = ACTIONS(3),
    [anon_sym_L] = ACTIONS(3),
    [anon_sym_bc] = ACTIONS(3),
    [anon_sym_BC] = ACTIONS(3),
    [anon_sym_de] = ACTIONS(3),
    [anon_sym_DE] = ACTIONS(3),
    [anon_sym_HL] = ACTIONS(3),
    [anon_sym_hl] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(3),
    [sym_u3] = ACTIONS(3),
    [sym_cc] = ACTIONS(3),
    [anon_sym_nop] = ACTIONS(3),
    [anon_sym_stop] = ACTIONS(3),
    [anon_sym_halt] = ACTIONS(3),
    [anon_sym_ei] = ACTIONS(3),
    [anon_sym_di] = ACTIONS(3),
    [anon_sym_reti] = ACTIONS(3),
    [anon_sym_ccf] = ACTIONS(3),
    [anon_sym_cpl] = ACTIONS(3),
    [anon_sym_daa] = ACTIONS(3),
    [anon_sym_scf] = ACTIONS(3),
    [anon_sym_rla] = ACTIONS(3),
    [anon_sym_rlca] = ACTIONS(3),
    [anon_sym_rra] = ACTIONS(3),
    [anon_sym_rrca] = ACTIONS(3),
    [anon_sym_jp] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_jr] = ACTIONS(3),
    [anon_sym_ret] = ACTIONS(3),
    [anon_sym_call] = ACTIONS(3),
    [anon_sym_rst] = ACTIONS(3),
    [anon_sym_ld] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(3),
    [anon_sym_add] = ACTIONS(3),
    [anon_sym_dec] = ACTIONS(3),
    [anon_sym_inc] = ACTIONS(3),
    [anon_sym_swap] = ACTIONS(3),
    [anon_sym_bit] = ACTIONS(3),
    [anon_sym_res] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(3),
    [anon_sym_rl] = ACTIONS(3),
    [anon_sym_rlc] = ACTIONS(3),
    [anon_sym_rr] = ACTIONS(3),
    [anon_sym_rrc] = ACTIONS(3),
    [anon_sym_sla] = ACTIONS(3),
    [anon_sym_sra] = ACTIONS(3),
    [anon_sym_srl] = ACTIONS(3),
    [anon_sym_push] = ACTIONS(3),
    [anon_sym_pop] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKCc_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_SECTION] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_VRAM] = ACTIONS(3),
    [anon_sym_SRAM] = ACTIONS(3),
    [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_OAM] = ACTIONS(3),
    [anon_sym_HRAM] = ACTIONS(3),
    [anon_sym_BANK] = ACTIONS(3),
    [anon_sym_ALIGN] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym_symbol] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__line] = STATE(24),
    [sym_label_definition] = STATE(20),
    [sym__global_label] = STATE(21),
    [sym__local_label] = STATE(22),
    [sym__instruction] = STATE(23),
    [sym_mnemonic] = STATE(23),
    [sym__r8_load] = STATE(5),
    [sym__a_load] = STATE(5),
    [sym_section] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__line_break] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_asterisk_comment] = ACTIONS(11),
    [sym__label_identifier] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(17),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_halt] = ACTIONS(17),
    [anon_sym_ei] = ACTIONS(17),
    [anon_sym_di] = ACTIONS(17),
    [anon_sym_reti] = ACTIONS(17),
    [anon_sym_ccf] = ACTIONS(17),
    [anon_sym_cpl] = ACTIONS(17),
    [anon_sym_daa] = ACTIONS(17),
    [anon_sym_scf] = ACTIONS(17),
    [anon_sym_rla] = ACTIONS(17),
    [anon_sym_rlca] = ACTIONS(17),
    [anon_sym_rra] = ACTIONS(17),
    [anon_sym_rrca] = ACTIONS(17),
    [anon_sym_jp] = ACTIONS(19),
    [anon_sym_jr] = ACTIONS(21),
    [anon_sym_ret] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(25),
    [anon_sym_rst] = ACTIONS(27),
    [anon_sym_ld] = ACTIONS(29),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(31),
    [anon_sym_add] = ACTIONS(33),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_swap] = ACTIONS(37),
    [anon_sym_bit] = ACTIONS(39),
    [anon_sym_res] = ACTIONS(39),
    [anon_sym_set] = ACTIONS(39),
    [anon_sym_rl] = ACTIONS(37),
    [anon_sym_rlc] = ACTIONS(37),
    [anon_sym_rr] = ACTIONS(37),
    [anon_sym_rrc] = ACTIONS(37),
    [anon_sym_sla] = ACTIONS(37),
    [anon_sym_sra] = ACTIONS(37),
    [anon_sym_srl] = ACTIONS(37),
    [anon_sym_push] = ACTIONS(41),
    [anon_sym_pop] = ACTIONS(41),
    [anon_sym_SECTION] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
  },
  [2] = {
    [sym__line_break] = ACTIONS(47),
  },
  [3] = {
    [sym__line_break] = ACTIONS(49),
  },
  [4] = {
    [sym__label_identifier] = ACTIONS(51),
  },
  [5] = {
    [sym__line_break] = ACTIONS(53),
    [sym_comment] = ACTIONS(55),
  },
  [6] = {
    [sym_label] = STATE(29),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n16] = STATE(33),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_hl] = ACTIONS(61),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(63),
    [sym_cc] = ACTIONS(65),
  },
  [7] = {
    [sym_label] = STATE(36),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n8] = STATE(36),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(67),
    [sym_cc] = ACTIONS(69),
  },
  [8] = {
    [sym__line_break] = ACTIONS(53),
    [sym_comment] = ACTIONS(55),
    [sym_cc] = ACTIONS(71),
  },
  [9] = {
    [sym_label] = STATE(29),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n16] = STATE(36),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(63),
    [sym_cc] = ACTIONS(73),
  },
  [10] = {
    [sym_label] = STATE(36),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n8] = STATE(36),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(67),
  },
  [11] = {
    [sym_deref_hl] = STATE(43),
    [sym_r8] = STATE(44),
    [sym_r16] = STATE(37),
    [sym_a] = ACTIONS(75),
    [sym_hl] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [sym_sp] = ACTIONS(81),
    [anon_sym_b] = ACTIONS(83),
    [anon_sym_B] = ACTIONS(83),
    [anon_sym_c] = ACTIONS(85),
    [anon_sym_C] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(83),
    [anon_sym_D] = ACTIONS(83),
    [anon_sym_e] = ACTIONS(85),
    [anon_sym_E] = ACTIONS(85),
    [anon_sym_h] = ACTIONS(83),
    [anon_sym_H] = ACTIONS(83),
    [anon_sym_l] = ACTIONS(85),
    [anon_sym_L] = ACTIONS(85),
    [anon_sym_bc] = ACTIONS(87),
    [anon_sym_BC] = ACTIONS(87),
    [anon_sym_de] = ACTIONS(87),
    [anon_sym_DE] = ACTIONS(87),
    [anon_sym_HL] = ACTIONS(87),
    [anon_sym_hl] = ACTIONS(87),
  },
  [12] = {
    [sym__line_break] = ACTIONS(53),
    [sym_comment] = ACTIONS(55),
    [sym_a] = ACTIONS(89),
  },
  [13] = {
    [sym_hl] = ACTIONS(91),
  },
  [14] = {
    [sym_deref_hl] = STATE(36),
    [sym_r8] = STATE(36),
    [sym_r16] = STATE(36),
    [sym_a] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [sym_sp] = ACTIONS(97),
    [anon_sym_b] = ACTIONS(99),
    [anon_sym_B] = ACTIONS(99),
    [anon_sym_c] = ACTIONS(93),
    [anon_sym_C] = ACTIONS(93),
    [anon_sym_d] = ACTIONS(99),
    [anon_sym_D] = ACTIONS(99),
    [anon_sym_e] = ACTIONS(93),
    [anon_sym_E] = ACTIONS(93),
    [anon_sym_h] = ACTIONS(99),
    [anon_sym_H] = ACTIONS(99),
    [anon_sym_l] = ACTIONS(93),
    [anon_sym_L] = ACTIONS(93),
    [anon_sym_bc] = ACTIONS(101),
    [anon_sym_BC] = ACTIONS(101),
    [anon_sym_de] = ACTIONS(101),
    [anon_sym_DE] = ACTIONS(101),
    [anon_sym_HL] = ACTIONS(101),
    [anon_sym_hl] = ACTIONS(101),
  },
  [15] = {
    [sym_deref_hl] = STATE(36),
    [sym_r8] = STATE(36),
    [sym_a] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_b] = ACTIONS(93),
    [anon_sym_B] = ACTIONS(93),
    [anon_sym_c] = ACTIONS(93),
    [anon_sym_C] = ACTIONS(93),
    [anon_sym_d] = ACTIONS(93),
    [anon_sym_D] = ACTIONS(93),
    [anon_sym_e] = ACTIONS(93),
    [anon_sym_E] = ACTIONS(93),
    [anon_sym_h] = ACTIONS(93),
    [anon_sym_H] = ACTIONS(93),
    [anon_sym_l] = ACTIONS(93),
    [anon_sym_L] = ACTIONS(93),
  },
  [16] = {
    [sym_u3] = ACTIONS(103),
  },
  [17] = {
    [sym_r16] = STATE(36),
    [sym_af] = ACTIONS(97),
    [anon_sym_bc] = ACTIONS(101),
    [anon_sym_BC] = ACTIONS(101),
    [anon_sym_de] = ACTIONS(101),
    [anon_sym_DE] = ACTIONS(101),
    [anon_sym_HL] = ACTIONS(101),
    [anon_sym_hl] = ACTIONS(101),
  },
  [18] = {
    [sym_section_name] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(105),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(107),
  },
  [20] = {
    [sym__instruction] = STATE(54),
    [sym_mnemonic] = STATE(54),
    [sym__r8_load] = STATE(5),
    [sym__a_load] = STATE(5),
    [sym_section] = STATE(54),
    [sym__line_break] = ACTIONS(47),
    [sym_comment] = ACTIONS(109),
    [anon_sym_nop] = ACTIONS(17),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_halt] = ACTIONS(17),
    [anon_sym_ei] = ACTIONS(17),
    [anon_sym_di] = ACTIONS(17),
    [anon_sym_reti] = ACTIONS(17),
    [anon_sym_ccf] = ACTIONS(17),
    [anon_sym_cpl] = ACTIONS(17),
    [anon_sym_daa] = ACTIONS(17),
    [anon_sym_scf] = ACTIONS(17),
    [anon_sym_rla] = ACTIONS(17),
    [anon_sym_rlca] = ACTIONS(17),
    [anon_sym_rra] = ACTIONS(17),
    [anon_sym_rrca] = ACTIONS(17),
    [anon_sym_jp] = ACTIONS(19),
    [anon_sym_jr] = ACTIONS(21),
    [anon_sym_ret] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(25),
    [anon_sym_rst] = ACTIONS(27),
    [anon_sym_ld] = ACTIONS(29),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(31),
    [anon_sym_add] = ACTIONS(33),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_swap] = ACTIONS(37),
    [anon_sym_bit] = ACTIONS(39),
    [anon_sym_res] = ACTIONS(39),
    [anon_sym_set] = ACTIONS(39),
    [anon_sym_rl] = ACTIONS(37),
    [anon_sym_rlc] = ACTIONS(37),
    [anon_sym_rr] = ACTIONS(37),
    [anon_sym_rrc] = ACTIONS(37),
    [anon_sym_sla] = ACTIONS(37),
    [anon_sym_sra] = ACTIONS(37),
    [anon_sym_srl] = ACTIONS(37),
    [anon_sym_push] = ACTIONS(41),
    [anon_sym_pop] = ACTIONS(41),
    [anon_sym_SECTION] = ACTIONS(43),
    [sym_symbol] = ACTIONS(111),
  },
  [21] = {
    [sym__local_label] = STATE(56),
    [sym__line_break] = ACTIONS(113),
    [sym_comment] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(115),
    [anon_sym_stop] = ACTIONS(115),
    [anon_sym_halt] = ACTIONS(115),
    [anon_sym_ei] = ACTIONS(115),
    [anon_sym_di] = ACTIONS(115),
    [anon_sym_reti] = ACTIONS(115),
    [anon_sym_ccf] = ACTIONS(115),
    [anon_sym_cpl] = ACTIONS(115),
    [anon_sym_daa] = ACTIONS(115),
    [anon_sym_scf] = ACTIONS(115),
    [anon_sym_rla] = ACTIONS(115),
    [anon_sym_rlca] = ACTIONS(115),
    [anon_sym_rra] = ACTIONS(115),
    [anon_sym_rrca] = ACTIONS(115),
    [anon_sym_jp] = ACTIONS(115),
    [anon_sym_jr] = ACTIONS(115),
    [anon_sym_ret] = ACTIONS(115),
    [anon_sym_call] = ACTIONS(115),
    [anon_sym_rst] = ACTIONS(115),
    [anon_sym_ld] = ACTIONS(115),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_add] = ACTIONS(115),
    [anon_sym_dec] = ACTIONS(115),
    [anon_sym_inc] = ACTIONS(115),
    [anon_sym_swap] = ACTIONS(115),
    [anon_sym_bit] = ACTIONS(115),
    [anon_sym_res] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_rl] = ACTIONS(115),
    [anon_sym_rlc] = ACTIONS(115),
    [anon_sym_rr] = ACTIONS(115),
    [anon_sym_rrc] = ACTIONS(115),
    [anon_sym_sla] = ACTIONS(115),
    [anon_sym_sra] = ACTIONS(115),
    [anon_sym_srl] = ACTIONS(115),
    [anon_sym_push] = ACTIONS(115),
    [anon_sym_pop] = ACTIONS(115),
    [anon_sym_SECTION] = ACTIONS(115),
    [sym_symbol] = ACTIONS(115),
  },
  [22] = {
    [sym__line_break] = ACTIONS(113),
    [sym_comment] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_nop] = ACTIONS(115),
    [anon_sym_stop] = ACTIONS(115),
    [anon_sym_halt] = ACTIONS(115),
    [anon_sym_ei] = ACTIONS(115),
    [anon_sym_di] = ACTIONS(115),
    [anon_sym_reti] = ACTIONS(115),
    [anon_sym_ccf] = ACTIONS(115),
    [anon_sym_cpl] = ACTIONS(115),
    [anon_sym_daa] = ACTIONS(115),
    [anon_sym_scf] = ACTIONS(115),
    [anon_sym_rla] = ACTIONS(115),
    [anon_sym_rlca] = ACTIONS(115),
    [anon_sym_rra] = ACTIONS(115),
    [anon_sym_rrca] = ACTIONS(115),
    [anon_sym_jp] = ACTIONS(115),
    [anon_sym_jr] = ACTIONS(115),
    [anon_sym_ret] = ACTIONS(115),
    [anon_sym_call] = ACTIONS(115),
    [anon_sym_rst] = ACTIONS(115),
    [anon_sym_ld] = ACTIONS(115),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_add] = ACTIONS(115),
    [anon_sym_dec] = ACTIONS(115),
    [anon_sym_inc] = ACTIONS(115),
    [anon_sym_swap] = ACTIONS(115),
    [anon_sym_bit] = ACTIONS(115),
    [anon_sym_res] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_rl] = ACTIONS(115),
    [anon_sym_rlc] = ACTIONS(115),
    [anon_sym_rr] = ACTIONS(115),
    [anon_sym_rrc] = ACTIONS(115),
    [anon_sym_sla] = ACTIONS(115),
    [anon_sym_sra] = ACTIONS(115),
    [anon_sym_srl] = ACTIONS(115),
    [anon_sym_push] = ACTIONS(115),
    [anon_sym_pop] = ACTIONS(115),
    [anon_sym_SECTION] = ACTIONS(115),
    [sym_symbol] = ACTIONS(115),
  },
  [23] = {
    [sym__line_break] = ACTIONS(47),
    [sym_comment] = ACTIONS(109),
  },
  [24] = {
    [sym__line] = STATE(57),
    [sym_label_definition] = STATE(20),
    [sym__global_label] = STATE(21),
    [sym__local_label] = STATE(22),
    [sym__instruction] = STATE(23),
    [sym_mnemonic] = STATE(23),
    [sym__r8_load] = STATE(5),
    [sym__a_load] = STATE(5),
    [sym_section] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym__line_break] = ACTIONS(121),
    [sym_comment] = ACTIONS(9),
    [sym_asterisk_comment] = ACTIONS(11),
    [sym__label_identifier] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(17),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_halt] = ACTIONS(17),
    [anon_sym_ei] = ACTIONS(17),
    [anon_sym_di] = ACTIONS(17),
    [anon_sym_reti] = ACTIONS(17),
    [anon_sym_ccf] = ACTIONS(17),
    [anon_sym_cpl] = ACTIONS(17),
    [anon_sym_daa] = ACTIONS(17),
    [anon_sym_scf] = ACTIONS(17),
    [anon_sym_rla] = ACTIONS(17),
    [anon_sym_rlca] = ACTIONS(17),
    [anon_sym_rra] = ACTIONS(17),
    [anon_sym_rrca] = ACTIONS(17),
    [anon_sym_jp] = ACTIONS(19),
    [anon_sym_jr] = ACTIONS(21),
    [anon_sym_ret] = ACTIONS(23),
    [anon_sym_call] = ACTIONS(25),
    [anon_sym_rst] = ACTIONS(27),
    [anon_sym_ld] = ACTIONS(29),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(31),
    [anon_sym_add] = ACTIONS(33),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_swap] = ACTIONS(37),
    [anon_sym_bit] = ACTIONS(39),
    [anon_sym_res] = ACTIONS(39),
    [anon_sym_set] = ACTIONS(39),
    [anon_sym_rl] = ACTIONS(37),
    [anon_sym_rlc] = ACTIONS(37),
    [anon_sym_rr] = ACTIONS(37),
    [anon_sym_rrc] = ACTIONS(37),
    [anon_sym_sla] = ACTIONS(37),
    [anon_sym_sra] = ACTIONS(37),
    [anon_sym_srl] = ACTIONS(37),
    [anon_sym_push] = ACTIONS(41),
    [anon_sym_pop] = ACTIONS(41),
    [anon_sym_SECTION] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym__line_break] = ACTIONS(123),
    [sym_comment] = ACTIONS(125),
    [sym_asterisk_comment] = ACTIONS(125),
    [sym__label_identifier] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_nop] = ACTIONS(125),
    [anon_sym_stop] = ACTIONS(125),
    [anon_sym_halt] = ACTIONS(125),
    [anon_sym_ei] = ACTIONS(125),
    [anon_sym_di] = ACTIONS(125),
    [anon_sym_reti] = ACTIONS(125),
    [anon_sym_ccf] = ACTIONS(125),
    [anon_sym_cpl] = ACTIONS(125),
    [anon_sym_daa] = ACTIONS(125),
    [anon_sym_scf] = ACTIONS(125),
    [anon_sym_rla] = ACTIONS(125),
    [anon_sym_rlca] = ACTIONS(125),
    [anon_sym_rra] = ACTIONS(125),
    [anon_sym_rrca] = ACTIONS(125),
    [anon_sym_jp] = ACTIONS(125),
    [anon_sym_jr] = ACTIONS(125),
    [anon_sym_ret] = ACTIONS(125),
    [anon_sym_call] = ACTIONS(125),
    [anon_sym_rst] = ACTIONS(125),
    [anon_sym_ld] = ACTIONS(125),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(125),
    [anon_sym_add] = ACTIONS(125),
    [anon_sym_dec] = ACTIONS(125),
    [anon_sym_inc] = ACTIONS(125),
    [anon_sym_swap] = ACTIONS(125),
    [anon_sym_bit] = ACTIONS(125),
    [anon_sym_res] = ACTIONS(125),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_rl] = ACTIONS(125),
    [anon_sym_rlc] = ACTIONS(125),
    [anon_sym_rr] = ACTIONS(125),
    [anon_sym_rrc] = ACTIONS(125),
    [anon_sym_sla] = ACTIONS(125),
    [anon_sym_sra] = ACTIONS(125),
    [anon_sym_srl] = ACTIONS(125),
    [anon_sym_push] = ACTIONS(125),
    [anon_sym_pop] = ACTIONS(125),
    [anon_sym_SECTION] = ACTIONS(125),
    [sym_symbol] = ACTIONS(125),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym__line_break] = ACTIONS(127),
    [sym_comment] = ACTIONS(129),
    [sym_asterisk_comment] = ACTIONS(129),
    [sym__label_identifier] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_nop] = ACTIONS(129),
    [anon_sym_stop] = ACTIONS(129),
    [anon_sym_halt] = ACTIONS(129),
    [anon_sym_ei] = ACTIONS(129),
    [anon_sym_di] = ACTIONS(129),
    [anon_sym_reti] = ACTIONS(129),
    [anon_sym_ccf] = ACTIONS(129),
    [anon_sym_cpl] = ACTIONS(129),
    [anon_sym_daa] = ACTIONS(129),
    [anon_sym_scf] = ACTIONS(129),
    [anon_sym_rla] = ACTIONS(129),
    [anon_sym_rlca] = ACTIONS(129),
    [anon_sym_rra] = ACTIONS(129),
    [anon_sym_rrca] = ACTIONS(129),
    [anon_sym_jp] = ACTIONS(129),
    [anon_sym_jr] = ACTIONS(129),
    [anon_sym_ret] = ACTIONS(129),
    [anon_sym_call] = ACTIONS(129),
    [anon_sym_rst] = ACTIONS(129),
    [anon_sym_ld] = ACTIONS(129),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_add] = ACTIONS(129),
    [anon_sym_dec] = ACTIONS(129),
    [anon_sym_inc] = ACTIONS(129),
    [anon_sym_swap] = ACTIONS(129),
    [anon_sym_bit] = ACTIONS(129),
    [anon_sym_res] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_rl] = ACTIONS(129),
    [anon_sym_rlc] = ACTIONS(129),
    [anon_sym_rr] = ACTIONS(129),
    [anon_sym_rrc] = ACTIONS(129),
    [anon_sym_sla] = ACTIONS(129),
    [anon_sym_sra] = ACTIONS(129),
    [anon_sym_srl] = ACTIONS(129),
    [anon_sym_push] = ACTIONS(129),
    [anon_sym_pop] = ACTIONS(129),
    [anon_sym_SECTION] = ACTIONS(129),
    [sym_symbol] = ACTIONS(129),
  },
  [27] = {
    [sym__line_break] = ACTIONS(131),
    [sym_comment] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_nop] = ACTIONS(133),
    [anon_sym_stop] = ACTIONS(133),
    [anon_sym_halt] = ACTIONS(133),
    [anon_sym_ei] = ACTIONS(133),
    [anon_sym_di] = ACTIONS(133),
    [anon_sym_reti] = ACTIONS(133),
    [anon_sym_ccf] = ACTIONS(133),
    [anon_sym_cpl] = ACTIONS(133),
    [anon_sym_daa] = ACTIONS(133),
    [anon_sym_scf] = ACTIONS(133),
    [anon_sym_rla] = ACTIONS(133),
    [anon_sym_rlca] = ACTIONS(133),
    [anon_sym_rra] = ACTIONS(133),
    [anon_sym_rrca] = ACTIONS(133),
    [anon_sym_jp] = ACTIONS(133),
    [anon_sym_jr] = ACTIONS(133),
    [anon_sym_ret] = ACTIONS(133),
    [anon_sym_call] = ACTIONS(133),
    [anon_sym_rst] = ACTIONS(133),
    [anon_sym_ld] = ACTIONS(133),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_add] = ACTIONS(133),
    [anon_sym_dec] = ACTIONS(133),
    [anon_sym_inc] = ACTIONS(133),
    [anon_sym_swap] = ACTIONS(133),
    [anon_sym_bit] = ACTIONS(133),
    [anon_sym_res] = ACTIONS(133),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_rl] = ACTIONS(133),
    [anon_sym_rlc] = ACTIONS(133),
    [anon_sym_rr] = ACTIONS(133),
    [anon_sym_rrc] = ACTIONS(133),
    [anon_sym_sla] = ACTIONS(133),
    [anon_sym_sra] = ACTIONS(133),
    [anon_sym_srl] = ACTIONS(133),
    [anon_sym_push] = ACTIONS(133),
    [anon_sym_pop] = ACTIONS(133),
    [anon_sym_SECTION] = ACTIONS(133),
    [sym_symbol] = ACTIONS(133),
  },
  [28] = {
    [sym__line_break] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
  },
  [29] = {
    [sym__line_break] = ACTIONS(139),
    [sym_comment] = ACTIONS(141),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(143),
  },
  [31] = {
    [sym__local_label] = STATE(59),
    [sym__line_break] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(15),
  },
  [32] = {
    [sym__line_break] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
  },
  [33] = {
    [sym__line_break] = ACTIONS(149),
    [sym_comment] = ACTIONS(151),
  },
  [34] = {
    [sym__line_break] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(157),
  },
  [36] = {
    [sym__line_break] = ACTIONS(159),
    [sym_comment] = ACTIONS(161),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(163),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(165),
  },
  [39] = {
    [anon_sym_COMMA] = ACTIONS(168),
  },
  [40] = {
    [sym_label] = STATE(66),
    [sym__global_label] = STATE(67),
    [sym__local_label] = STATE(68),
    [sym_r16] = STATE(69),
    [sym_n16] = STATE(70),
    [sym__label_identifier] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(172),
    [sym_hl] = ACTIONS(174),
    [anon_sym_bc] = ACTIONS(176),
    [anon_sym_BC] = ACTIONS(176),
    [anon_sym_de] = ACTIONS(176),
    [anon_sym_DE] = ACTIONS(176),
    [anon_sym_HL] = ACTIONS(176),
    [anon_sym_hl] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(178),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(180),
  },
  [42] = {
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
  },
  [43] = {
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(186),
  },
  [45] = {
    [anon_sym_COMMA] = ACTIONS(188),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(190),
  },
  [47] = {
    [sym__line_break] = ACTIONS(180),
    [sym_comment] = ACTIONS(192),
  },
  [48] = {
    [sym_hl] = ACTIONS(194),
  },
  [49] = {
    [sym__line_break] = ACTIONS(182),
    [sym_comment] = ACTIONS(196),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(198),
  },
  [51] = {
    [aux_sym_section_name_repeat1] = STATE(78),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(202),
  },
  [52] = {
    [sym_section_type] = STATE(80),
    [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = ACTIONS(204),
    [anon_sym_VRAM] = ACTIONS(204),
    [anon_sym_SRAM] = ACTIONS(204),
    [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = ACTIONS(204),
    [anon_sym_OAM] = ACTIONS(204),
    [anon_sym_HRAM] = ACTIONS(204),
  },
  [53] = {
    [sym__line_break] = ACTIONS(206),
  },
  [54] = {
    [sym__line_break] = ACTIONS(206),
    [sym_comment] = ACTIONS(208),
  },
  [55] = {
    [sym__line_break] = ACTIONS(210),
    [sym_comment] = ACTIONS(212),
    [anon_sym_nop] = ACTIONS(212),
    [anon_sym_stop] = ACTIONS(212),
    [anon_sym_halt] = ACTIONS(212),
    [anon_sym_ei] = ACTIONS(212),
    [anon_sym_di] = ACTIONS(212),
    [anon_sym_reti] = ACTIONS(212),
    [anon_sym_ccf] = ACTIONS(212),
    [anon_sym_cpl] = ACTIONS(212),
    [anon_sym_daa] = ACTIONS(212),
    [anon_sym_scf] = ACTIONS(212),
    [anon_sym_rla] = ACTIONS(212),
    [anon_sym_rlca] = ACTIONS(212),
    [anon_sym_rra] = ACTIONS(212),
    [anon_sym_rrca] = ACTIONS(212),
    [anon_sym_jp] = ACTIONS(212),
    [anon_sym_jr] = ACTIONS(212),
    [anon_sym_ret] = ACTIONS(212),
    [anon_sym_call] = ACTIONS(212),
    [anon_sym_rst] = ACTIONS(212),
    [anon_sym_ld] = ACTIONS(212),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(212),
    [anon_sym_add] = ACTIONS(212),
    [anon_sym_dec] = ACTIONS(212),
    [anon_sym_inc] = ACTIONS(212),
    [anon_sym_swap] = ACTIONS(212),
    [anon_sym_bit] = ACTIONS(212),
    [anon_sym_res] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_rl] = ACTIONS(212),
    [anon_sym_rlc] = ACTIONS(212),
    [anon_sym_rr] = ACTIONS(212),
    [anon_sym_rrc] = ACTIONS(212),
    [anon_sym_sla] = ACTIONS(212),
    [anon_sym_sra] = ACTIONS(212),
    [anon_sym_srl] = ACTIONS(212),
    [anon_sym_push] = ACTIONS(212),
    [anon_sym_pop] = ACTIONS(212),
    [anon_sym_SECTION] = ACTIONS(212),
    [sym_symbol] = ACTIONS(212),
  },
  [56] = {
    [sym__line_break] = ACTIONS(210),
    [sym_comment] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_COLON_COLON] = ACTIONS(214),
    [anon_sym_nop] = ACTIONS(212),
    [anon_sym_stop] = ACTIONS(212),
    [anon_sym_halt] = ACTIONS(212),
    [anon_sym_ei] = ACTIONS(212),
    [anon_sym_di] = ACTIONS(212),
    [anon_sym_reti] = ACTIONS(212),
    [anon_sym_ccf] = ACTIONS(212),
    [anon_sym_cpl] = ACTIONS(212),
    [anon_sym_daa] = ACTIONS(212),
    [anon_sym_scf] = ACTIONS(212),
    [anon_sym_rla] = ACTIONS(212),
    [anon_sym_rlca] = ACTIONS(212),
    [anon_sym_rra] = ACTIONS(212),
    [anon_sym_rrca] = ACTIONS(212),
    [anon_sym_jp] = ACTIONS(212),
    [anon_sym_jr] = ACTIONS(212),
    [anon_sym_ret] = ACTIONS(212),
    [anon_sym_call] = ACTIONS(212),
    [anon_sym_rst] = ACTIONS(212),
    [anon_sym_ld] = ACTIONS(212),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(212),
    [anon_sym_add] = ACTIONS(212),
    [anon_sym_dec] = ACTIONS(212),
    [anon_sym_inc] = ACTIONS(212),
    [anon_sym_swap] = ACTIONS(212),
    [anon_sym_bit] = ACTIONS(212),
    [anon_sym_res] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_rl] = ACTIONS(212),
    [anon_sym_rlc] = ACTIONS(212),
    [anon_sym_rr] = ACTIONS(212),
    [anon_sym_rrc] = ACTIONS(212),
    [anon_sym_sla] = ACTIONS(212),
    [anon_sym_sra] = ACTIONS(212),
    [anon_sym_srl] = ACTIONS(212),
    [anon_sym_push] = ACTIONS(212),
    [anon_sym_pop] = ACTIONS(212),
    [anon_sym_SECTION] = ACTIONS(212),
    [sym_symbol] = ACTIONS(212),
  },
  [57] = {
    [sym__line] = STATE(57),
    [sym_label_definition] = STATE(20),
    [sym__global_label] = STATE(21),
    [sym__local_label] = STATE(22),
    [sym__instruction] = STATE(23),
    [sym_mnemonic] = STATE(23),
    [sym__r8_load] = STATE(5),
    [sym__a_load] = STATE(5),
    [sym_section] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym__line_break] = ACTIONS(218),
    [sym_comment] = ACTIONS(221),
    [sym_asterisk_comment] = ACTIONS(224),
    [sym__label_identifier] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_nop] = ACTIONS(233),
    [anon_sym_stop] = ACTIONS(233),
    [anon_sym_halt] = ACTIONS(233),
    [anon_sym_ei] = ACTIONS(233),
    [anon_sym_di] = ACTIONS(233),
    [anon_sym_reti] = ACTIONS(233),
    [anon_sym_ccf] = ACTIONS(233),
    [anon_sym_cpl] = ACTIONS(233),
    [anon_sym_daa] = ACTIONS(233),
    [anon_sym_scf] = ACTIONS(233),
    [anon_sym_rla] = ACTIONS(233),
    [anon_sym_rlca] = ACTIONS(233),
    [anon_sym_rra] = ACTIONS(233),
    [anon_sym_rrca] = ACTIONS(233),
    [anon_sym_jp] = ACTIONS(236),
    [anon_sym_jr] = ACTIONS(239),
    [anon_sym_ret] = ACTIONS(242),
    [anon_sym_call] = ACTIONS(245),
    [anon_sym_rst] = ACTIONS(248),
    [anon_sym_ld] = ACTIONS(251),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(254),
    [anon_sym_add] = ACTIONS(257),
    [anon_sym_dec] = ACTIONS(260),
    [anon_sym_inc] = ACTIONS(260),
    [anon_sym_swap] = ACTIONS(263),
    [anon_sym_bit] = ACTIONS(266),
    [anon_sym_res] = ACTIONS(266),
    [anon_sym_set] = ACTIONS(266),
    [anon_sym_rl] = ACTIONS(263),
    [anon_sym_rlc] = ACTIONS(263),
    [anon_sym_rr] = ACTIONS(263),
    [anon_sym_rrc] = ACTIONS(263),
    [anon_sym_sla] = ACTIONS(263),
    [anon_sym_sra] = ACTIONS(263),
    [anon_sym_srl] = ACTIONS(263),
    [anon_sym_push] = ACTIONS(269),
    [anon_sym_pop] = ACTIONS(269),
    [anon_sym_SECTION] = ACTIONS(272),
    [sym_symbol] = ACTIONS(275),
  },
  [58] = {
    [sym_label] = STATE(29),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n16] = STATE(84),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(63),
  },
  [59] = {
    [sym__line_break] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
  },
  [60] = {
    [sym_label] = STATE(85),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n8] = STATE(85),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(67),
  },
  [61] = {
    [sym_label] = STATE(29),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_n16] = STATE(85),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(63),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(282),
  },
  [63] = {
    [sym_sp] = ACTIONS(284),
  },
  [64] = {
    [sym__label_identifier] = ACTIONS(286),
  },
  [65] = {
    [anon_sym_RBRACK] = ACTIONS(288),
    [aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH] = ACTIONS(290),
  },
  [66] = {
    [anon_sym_RBRACK] = ACTIONS(139),
  },
  [67] = {
    [sym__local_label] = STATE(90),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(145),
  },
  [68] = {
    [anon_sym_RBRACK] = ACTIONS(145),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(292),
  },
  [70] = {
    [anon_sym_RBRACK] = ACTIONS(294),
  },
  [71] = {
    [sym_label] = STATE(34),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_r8] = STATE(85),
    [sym_n8] = STATE(85),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_a] = ACTIONS(99),
    [anon_sym_b] = ACTIONS(99),
    [anon_sym_B] = ACTIONS(99),
    [anon_sym_c] = ACTIONS(99),
    [anon_sym_C] = ACTIONS(99),
    [anon_sym_d] = ACTIONS(99),
    [anon_sym_D] = ACTIONS(99),
    [anon_sym_e] = ACTIONS(99),
    [anon_sym_E] = ACTIONS(99),
    [anon_sym_h] = ACTIONS(99),
    [anon_sym_H] = ACTIONS(99),
    [anon_sym_l] = ACTIONS(99),
    [anon_sym_L] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(67),
  },
  [72] = {
    [sym_label] = STATE(34),
    [sym__global_label] = STATE(31),
    [sym__local_label] = STATE(32),
    [sym_deref_hl] = STATE(93),
    [sym_r8] = STATE(93),
    [sym_n8] = STATE(93),
    [sym__label_identifier] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_a] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_b] = ACTIONS(99),
    [anon_sym_B] = ACTIONS(99),
    [anon_sym_c] = ACTIONS(99),
    [anon_sym_C] = ACTIONS(99),
    [anon_sym_d] = ACTIONS(99),
    [anon_sym_D] = ACTIONS(99),
    [anon_sym_e] = ACTIONS(99),
    [anon_sym_E] = ACTIONS(99),
    [anon_sym_h] = ACTIONS(99),
    [anon_sym_H] = ACTIONS(99),
    [anon_sym_l] = ACTIONS(99),
    [anon_sym_L] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA2_RBRACE_SLASH] = ACTIONS(67),
  },
  [73] = {
    [sym__line_break] = ACTIONS(296),
    [sym_comment] = ACTIONS(298),
  },
  [74] = {
    [sym_r16] = STATE(85),
    [sym_sp] = ACTIONS(284),
    [anon_sym_bc] = ACTIONS(101),
    [anon_sym_BC] = ACTIONS(101),
    [anon_sym_de] = ACTIONS(101),
    [anon_sym_DE] = ACTIONS(101),
    [anon_sym_HL] = ACTIONS(101),
    [anon_sym_hl] = ACTIONS(101),
  },
  [75] = {
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [76] = {
    [sym_r8] = STATE(85),
    [sym_a] = ACTIONS(93),
    [sym_hl] = ACTIONS(284),
    [anon_sym_b] = ACTIONS(93),
    [anon_sym_B] = ACTIONS(93),
    [anon_sym_c] = ACTIONS(93),
    [anon_sym_C] = ACTIONS(93),
    [anon_sym_d] = ACTIONS(93),
    [anon_sym_D] = ACTIONS(93),
    [anon_sym_e] = ACTIONS(93),
    [anon_sym_E] = ACTIONS(93),
    [anon_sym_h] = ACTIONS(99),
    [anon_sym_H] = ACTIONS(99),
    [anon_sym_l] = ACTIONS(93),
    [anon_sym_L] = ACTIONS(93),
  },
  [77] = {
    [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = ACTIONS(302),
    [anon_sym_VRAM] = ACTIONS(302),
    [anon_sym_SRAM] = ACTIONS(302),
    [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = ACTIONS(302),
    [anon_sym_OAM] = ACTIONS(302),
    [anon_sym_HRAM] = ACTIONS(302),
  },
  [78] = {
    [aux_sym_section_name_repeat1] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(306),
  },
  [79] = {
    [sym__line_break] = ACTIONS(308),
    [sym_comment] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_BANK] = ACTIONS(310),
    [anon_sym_ALIGN] = ACTIONS(310),
  },
  [80] = {
    [sym_section_addr] = STATE(99),
    [sym_section_options] = STATE(100),
    [sym__line_break] = ACTIONS(312),
    [sym_comment] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_BANK] = ACTIONS(318),
    [anon_sym_ALIGN] = ACTIONS(318),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym__line_break] = ACTIONS(320),
    [sym_comment] = ACTIONS(322),
    [sym_asterisk_comment] = ACTIONS(322),
    [sym__label_identifier] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_nop] = ACTIONS(322),
    [anon_sym_stop] = ACTIONS(322),
    [anon_sym_halt] = ACTIONS(322),
    [anon_sym_ei] = ACTIONS(322),
    [anon_sym_di] = ACTIONS(322),
    [anon_sym_reti] = ACTIONS(322),
    [anon_sym_ccf] = ACTIONS(322),
    [anon_sym_cpl] = ACTIONS(322),
    [anon_sym_daa] = ACTIONS(322),
    [anon_sym_scf] = ACTIONS(322),
    [anon_sym_rla] = ACTIONS(322),
    [anon_sym_rlca] = ACTIONS(322),
    [anon_sym_rra] = ACTIONS(322),
    [anon_sym_rrca] = ACTIONS(322),
    [anon_sym_jp] = ACTIONS(322),
    [anon_sym_jr] = ACTIONS(322),
    [anon_sym_ret] = ACTIONS(322),
    [anon_sym_call] = ACTIONS(322),
    [anon_sym_rst] = ACTIONS(322),
    [anon_sym_ld] = ACTIONS(322),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(322),
    [anon_sym_add] = ACTIONS(322),
    [anon_sym_dec] = ACTIONS(322),
    [anon_sym_inc] = ACTIONS(322),
    [anon_sym_swap] = ACTIONS(322),
    [anon_sym_bit] = ACTIONS(322),
    [anon_sym_res] = ACTIONS(322),
    [anon_sym_set] = ACTIONS(322),
    [anon_sym_rl] = ACTIONS(322),
    [anon_sym_rlc] = ACTIONS(322),
    [anon_sym_rr] = ACTIONS(322),
    [anon_sym_rrc] = ACTIONS(322),
    [anon_sym_sla] = ACTIONS(322),
    [anon_sym_sra] = ACTIONS(322),
    [anon_sym_srl] = ACTIONS(322),
    [anon_sym_push] = ACTIONS(322),
    [anon_sym_pop] = ACTIONS(322),
    [anon_sym_SECTION] = ACTIONS(322),
    [sym_symbol] = ACTIONS(322),
  },
  [82] = {
    [sym__line_break] = ACTIONS(324),
  },
  [83] = {
    [sym__line_break] = ACTIONS(326),
    [sym_comment] = ACTIONS(328),
    [anon_sym_nop] = ACTIONS(328),
    [anon_sym_stop] = ACTIONS(328),
    [anon_sym_halt] = ACTIONS(328),
    [anon_sym_ei] = ACTIONS(328),
    [anon_sym_di] = ACTIONS(328),
    [anon_sym_reti] = ACTIONS(328),
    [anon_sym_ccf] = ACTIONS(328),
    [anon_sym_cpl] = ACTIONS(328),
    [anon_sym_daa] = ACTIONS(328),
    [anon_sym_scf] = ACTIONS(328),
    [anon_sym_rla] = ACTIONS(328),
    [anon_sym_rlca] = ACTIONS(328),
    [anon_sym_rra] = ACTIONS(328),
    [anon_sym_rrca] = ACTIONS(328),
    [anon_sym_jp] = ACTIONS(328),
    [anon_sym_jr] = ACTIONS(328),
    [anon_sym_ret] = ACTIONS(328),
    [anon_sym_call] = ACTIONS(328),
    [anon_sym_rst] = ACTIONS(328),
    [anon_sym_ld] = ACTIONS(328),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(328),
    [anon_sym_add] = ACTIONS(328),
    [anon_sym_dec] = ACTIONS(328),
    [anon_sym_inc] = ACTIONS(328),
    [anon_sym_swap] = ACTIONS(328),
    [anon_sym_bit] = ACTIONS(328),
    [anon_sym_res] = ACTIONS(328),
    [anon_sym_set] = ACTIONS(328),
    [anon_sym_rl] = ACTIONS(328),
    [anon_sym_rlc] = ACTIONS(328),
    [anon_sym_rr] = ACTIONS(328),
    [anon_sym_rrc] = ACTIONS(328),
    [anon_sym_sla] = ACTIONS(328),
    [anon_sym_sra] = ACTIONS(328),
    [anon_sym_srl] = ACTIONS(328),
    [anon_sym_push] = ACTIONS(328),
    [anon_sym_pop] = ACTIONS(328),
    [anon_sym_SECTION] = ACTIONS(328),
    [sym_symbol] = ACTIONS(328),
  },
  [84] = {
    [sym__line_break] = ACTIONS(330),
    [sym_comment] = ACTIONS(332),
  },
  [85] = {
    [sym__line_break] = ACTIONS(334),
    [sym_comment] = ACTIONS(336),
  },
  [86] = {
    [sym_label] = STATE(66),
    [sym__global_label] = STATE(67),
    [sym__local_label] = STATE(68),
    [sym_r16] = STATE(103),
    [sym_n16] = STATE(103),
    [sym__label_identifier] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(172),
    [sym_hl] = ACTIONS(338),
    [anon_sym_bc] = ACTIONS(176),
    [anon_sym_BC] = ACTIONS(176),
    [anon_sym_de] = ACTIONS(176),
    [anon_sym_DE] = ACTIONS(176),
    [anon_sym_HL] = ACTIONS(176),
    [anon_sym_hl] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKCc_RBRACK_SLASH] = ACTIONS(340),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(131),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(342),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(344),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(278),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(346),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(348),
  },
  [93] = {
    [sym__line_break] = ACTIONS(350),
    [sym_comment] = ACTIONS(352),
  },
  [94] = {
    [sym__line_break] = ACTIONS(342),
    [sym_comment] = ACTIONS(354),
  },
  [95] = {
    [aux_sym_SLASHROM_LBRACK0X_RBRACK_SLASH] = ACTIONS(356),
    [anon_sym_VRAM] = ACTIONS(356),
    [anon_sym_SRAM] = ACTIONS(356),
    [aux_sym_SLASHWRAM_LBRACK0X_RBRACK_SLASH] = ACTIONS(356),
    [anon_sym_OAM] = ACTIONS(356),
    [anon_sym_HRAM] = ACTIONS(356),
  },
  [96] = {
    [aux_sym_section_name_repeat1] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(360),
  },
  [97] = {
    [sym_label] = STATE(66),
    [sym__global_label] = STATE(67),
    [sym__local_label] = STATE(68),
    [sym_n16] = STATE(107),
    [sym__label_identifier] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(172),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_LBRACE1_COMMA5_RBRACE_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_BSLASH_DOLLAR_LBRACKa_DASHfA_DASHF0_DASH9_RBRACK_LBRACE1_COMMA4_RBRACE_SLASH] = ACTIONS(178),
  },
  [98] = {
    [anon_sym_LBRACK] = ACTIONS(365),
  },
  [99] = {
    [sym_section_options] = STATE(109),
    [sym__line_break] = ACTIONS(367),
    [sym_comment] = ACTIONS(369),
    [anon_sym_BANK] = ACTIONS(318),
    [anon_sym_ALIGN] = ACTIONS(318),
  },
  [100] = {
    [sym__line_break] = ACTIONS(367),
    [sym_comment] = ACTIONS(369),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym__line_break] = ACTIONS(371),
    [sym_comment] = ACTIONS(373),
    [sym_asterisk_comment] = ACTIONS(373),
    [sym__label_identifier] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_nop] = ACTIONS(373),
    [anon_sym_stop] = ACTIONS(373),
    [anon_sym_halt] = ACTIONS(373),
    [anon_sym_ei] = ACTIONS(373),
    [anon_sym_di] = ACTIONS(373),
    [anon_sym_reti] = ACTIONS(373),
    [anon_sym_ccf] = ACTIONS(373),
    [anon_sym_cpl] = ACTIONS(373),
    [anon_sym_daa] = ACTIONS(373),
    [anon_sym_scf] = ACTIONS(373),
    [anon_sym_rla] = ACTIONS(373),
    [anon_sym_rlca] = ACTIONS(373),
    [anon_sym_rra] = ACTIONS(373),
    [anon_sym_rrca] = ACTIONS(373),
    [anon_sym_jp] = ACTIONS(373),
    [anon_sym_jr] = ACTIONS(373),
    [anon_sym_ret] = ACTIONS(373),
    [anon_sym_call] = ACTIONS(373),
    [anon_sym_rst] = ACTIONS(373),
    [anon_sym_ld] = ACTIONS(373),
    [aux_sym_SLASH_LPARENad_LBRACKdc_RBRACK_RPAREN_PIPE_LPARENand_RPAREN_PIPE_LPARENcp_RPAREN_PIPE_LPARENx_QMARKor_RPAREN_PIPE_LPARENsbc_RPAREN_PIPE_LPARENsub_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_add] = ACTIONS(373),
    [anon_sym_dec] = ACTIONS(373),
    [anon_sym_inc] = ACTIONS(373),
    [anon_sym_swap] = ACTIONS(373),
    [anon_sym_bit] = ACTIONS(373),
    [anon_sym_res] = ACTIONS(373),
    [anon_sym_set] = ACTIONS(373),
    [anon_sym_rl] = ACTIONS(373),
    [anon_sym_rlc] = ACTIONS(373),
    [anon_sym_rr] = ACTIONS(373),
    [anon_sym_rrc] = ACTIONS(373),
    [anon_sym_sla] = ACTIONS(373),
    [anon_sym_sra] = ACTIONS(373),
    [anon_sym_srl] = ACTIONS(373),
    [anon_sym_push] = ACTIONS(373),
    [anon_sym_pop] = ACTIONS(373),
    [anon_sym_SECTION] = ACTIONS(373),
    [sym_symbol] = ACTIONS(373),
  },
  [102] = {
    [aux_sym_SLASH_BSLASH_PLUS_PIPE_DASH_SLASH] = ACTIONS(375),
  },
  [103] = {
    [anon_sym_RBRACK] = ACTIONS(377),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(379),
  },
  [105] = {
    [sym_a] = ACTIONS(381),
  },
  [106] = {
    [sym_a] = ACTIONS(381),
    [sym_sp] = ACTIONS(381),
  },
  [107] = {
    [anon_sym_RBRACK] = ACTIONS(383),
  },
  [108] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(385),
  },
  [109] = {
    [sym__line_break] = ACTIONS(387),
    [sym_comment] = ACTIONS(389),
  },
  [110] = {
    [anon_sym_RBRACK] = ACTIONS(391),
  },
  [111] = {
    [sym__line_break] = ACTIONS(393),
    [sym_comment] = ACTIONS(395),
  },
  [112] = {
    [sym_a] = ACTIONS(397),
  },
  [113] = {
    [sym__line_break] = ACTIONS(399),
    [sym_comment] = ACTIONS(401),
  },
  [114] = {
    [sym__line_break] = ACTIONS(403),
    [sym_comment] = ACTIONS(405),
    [anon_sym_BANK] = ACTIONS(405),
    [anon_sym_ALIGN] = ACTIONS(405),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(407),
  },
  [116] = {
    [sym__line_break] = ACTIONS(409),
    [sym_comment] = ACTIONS(411),
  },
  [117] = {
    [sym__line_break] = ACTIONS(413),
    [sym_comment] = ACTIONS(415),
  },
  [118] = {
    [sym__line_break] = ACTIONS(417),
    [sym_comment] = ACTIONS(419),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(21),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, SHIFT(4),
  [61] = {.count = 1, .reusable = false}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = false}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, SHIFT(34),
  [69] = {.count = 1, .reusable = false}, SHIFT(35),
  [71] = {.count = 1, .reusable = false}, SHIFT(36),
  [73] = {.count = 1, .reusable = false}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = false}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, SHIFT(40),
  [81] = {.count = 1, .reusable = true}, SHIFT(37),
  [83] = {.count = 1, .reusable = false}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = false}, SHIFT(45),
  [91] = {.count = 1, .reusable = true}, SHIFT(46),
  [93] = {.count = 1, .reusable = true}, SHIFT(47),
  [95] = {.count = 1, .reusable = true}, SHIFT(48),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = false}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(49),
  [103] = {.count = 1, .reusable = true}, SHIFT(50),
  [105] = {.count = 1, .reusable = true}, SHIFT(51),
  [107] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [109] = {.count = 1, .reusable = false}, SHIFT(53),
  [111] = {.count = 1, .reusable = false}, SHIFT(54),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_label_definition, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_label_definition, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(57),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2, .alias_sequence_id = 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2, .alias_sequence_id = 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__local_label, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__local_label, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 2, .dynamic_precedence = 1),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 2, .dynamic_precedence = 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_n16, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_n16, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(58),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_label, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 2, .dynamic_precedence = -1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 2, .dynamic_precedence = -1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_n8, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_n8, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(60),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(61),
  [165] = {.count = 2, .reusable = true}, REDUCE(sym_r8, 1), SHIFT(62),
  [168] = {.count = 1, .reusable = true}, SHIFT(63),
  [170] = {.count = 1, .reusable = false}, SHIFT(67),
  [172] = {.count = 1, .reusable = true}, SHIFT(64),
  [174] = {.count = 1, .reusable = false}, SHIFT(65),
  [176] = {.count = 1, .reusable = false}, SHIFT(42),
  [178] = {.count = 1, .reusable = true}, SHIFT(66),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_r8, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_r16, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(71),
  [186] = {.count = 1, .reusable = true}, SHIFT(72),
  [188] = {.count = 1, .reusable = true}, SHIFT(73),
  [190] = {.count = 1, .reusable = true}, SHIFT(74),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_r8, 1),
  [194] = {.count = 1, .reusable = true}, SHIFT(75),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_r16, 1),
  [198] = {.count = 1, .reusable = true}, SHIFT(76),
  [200] = {.count = 1, .reusable = false}, SHIFT(77),
  [202] = {.count = 1, .reusable = true}, SHIFT(78),
  [204] = {.count = 1, .reusable = true}, SHIFT(79),
  [206] = {.count = 1, .reusable = true}, SHIFT(81),
  [208] = {.count = 1, .reusable = false}, SHIFT(82),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_label_definition, 2),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_label_definition, 2),
  [214] = {.count = 1, .reusable = false}, SHIFT(83),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(86),
  [284] = {.count = 1, .reusable = true}, SHIFT(85),
  [286] = {.count = 1, .reusable = true}, SHIFT(87),
  [288] = {.count = 1, .reusable = true}, SHIFT(88),
  [290] = {.count = 1, .reusable = true}, SHIFT(89),
  [292] = {.count = 1, .reusable = true}, SHIFT(91),
  [294] = {.count = 1, .reusable = true}, SHIFT(92),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(94),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_section_name, 2),
  [304] = {.count = 1, .reusable = false}, SHIFT(95),
  [306] = {.count = 1, .reusable = true}, SHIFT(96),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_section_type, 1),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_section_type, 1),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [316] = {.count = 1, .reusable = false}, SHIFT(97),
  [318] = {.count = 1, .reusable = false}, SHIFT(98),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [324] = {.count = 1, .reusable = true}, SHIFT(101),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_label_definition, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_label_definition, 3),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 4, .dynamic_precedence = -1),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 4, .dynamic_precedence = -1),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 4),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 4),
  [338] = {.count = 1, .reusable = false}, SHIFT(102),
  [340] = {.count = 1, .reusable = false}, SHIFT(103),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_deref_hl, 3),
  [344] = {.count = 1, .reusable = true}, SHIFT(104),
  [346] = {.count = 1, .reusable = true}, SHIFT(105),
  [348] = {.count = 1, .reusable = true}, SHIFT(106),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym__r8_load, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym__r8_load, 4),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_deref_hl, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_section_name, 3),
  [358] = {.count = 1, .reusable = false}, REDUCE(aux_sym_section_name_repeat1, 2),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_name_repeat1, 2), SHIFT_REPEAT(96),
  [363] = {.count = 1, .reusable = true}, SHIFT(67),
  [365] = {.count = 1, .reusable = true}, SHIFT(108),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_section, 4),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [375] = {.count = 1, .reusable = true}, SHIFT(110),
  [377] = {.count = 1, .reusable = true}, SHIFT(111),
  [379] = {.count = 1, .reusable = true}, SHIFT(112),
  [381] = {.count = 1, .reusable = true}, SHIFT(113),
  [383] = {.count = 1, .reusable = true}, SHIFT(114),
  [385] = {.count = 1, .reusable = true}, SHIFT(115),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [391] = {.count = 1, .reusable = true}, SHIFT(116),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__a_load, 6),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym__a_load, 6),
  [397] = {.count = 1, .reusable = true}, SHIFT(117),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 6),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 6),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_section_addr, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_section_addr, 3),
  [407] = {.count = 1, .reusable = true}, SHIFT(118),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__a_load, 7),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym__a_load, 7),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_mnemonic, 7),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_mnemonic, 7),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_section_options, 4),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_section_options, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rgbasm() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
