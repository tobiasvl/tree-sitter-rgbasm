module.exports = grammar({
  name: 'rgbasm',

  rules: {
    // The syntax is line‐based
    source_file: $ => repeat(
      $._line
    ),
    _line_break: $ => '\n',

    // One instruction or pseudo‐op per line:
    // [label] [instruction] [;comment]
    _line: $ => prec.left(
      seq(
        choice(
          alias($.asterisk_comment, 'comment'),
          seq(
            optional($.label_definition),
            optional($._instruction),
            optional($.comment),
          )
        ),
        $._line_break
      )
    ),

    // There are two syntaxes for comments. In both cases, a comment ends at the end of the line.
    // Anything that follows a semicolon ‘;’ (that isn't inside a string) is a comment.
    comment: $ => /;.*/,
    // Anything that follows a ‘*’ that is placed right at the start of a line is a comment.
    asterisk_comment: $ => /\*.*/,

    // Labels
    // In the line where a label is defined there musn't be any whitespace before it.
    label_definition: $ => seq(
      choice(
        seq($._local_label, optional(':')),
        prec.right(seq(
            $._global_label,
            optional($._local_label),
            optional(choice('::', ':')),
        )),
      ),
    ),

    label: $ => seq(
      choice(
        seq($._local_label),
        prec.right(seq(
            $._global_label,
            optional($._local_label),
        )),
      ),
    ),

    _label_identifier: $ => /[_A-Za-z][_A-Za-z0-9]+/,
    _global_label: $ => $._label_identifier,
    _local_label: $ => seq('.', $._label_identifier),

    _instruction: $ => choice($.mnemonic, $.section, $.symbol),

    a: $ => /A|a/,
    af: $ => /[Aa][Ff]/,
    hl: $=> /[Hh][Ll]/,
    deref_hl: $ => seq('[', $.hl, ']'),
    sp: $ => /[Ss][Pp]/,
    r8: $ => choice($.a, 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'h', 'H', 'l', 'L'),
    r16: $ => choice('bc', 'BC', 'de', 'DE', 'HL', 'hl'),

    n8: $ => choice($.label, /[0-9]{1,3}/, /\$[a-fA-F0-9]{1,2}/),
    n16: $ => choice($.label, /[0-9]{1,5}/, /\$[a-fA-F0-9]{1,4}/),

    u3: $ => /[0-7]/,

    cc: $ => /[Nn]?[ZzCc]/,

    mnemonic: $ => choice(
      // Instructions with no operands
      'nop',
      'stop',
      'halt',
      'ei',
      'di',
      'reti',
      'ccf',
      'cpl',
      'daa',
      'scf',
      'rla',
      'rlca',
      'rra',
      'rrca',

      // Jumps and subroutines
      seq('jp', choice(prec.dynamic(1, $.hl), prec.dynamic(-1, seq(optional(seq($.cc, ',')), $.n16)))),
      seq('jr', optional(seq($.cc, ',')), choice(prec(1, $.n8), prec(2, $.label))),
      seq('ret', optional($.cc)),
      seq('call', optional(seq($.cc, ',')), $.n16),
      seq('rst', choice(prec(1, $.n8), prec(2, $.label))),

      // Load
      $._r8_load,
      $._a_load,
      seq('ld', choice($.r16, $.sp), ',', $.n16),
      seq('ld', $.deref_hl, ',', choice($.n8, $.r8)),
      seq('ld', '[', $.hl, /\+|-/, ']', ',', $.a),
      seq('ld', '[', $.n16, ']', ',', $.sp),
      seq('ld', $.hl, ',', $.sp),
      seq('ld', '[', choice($.r16, $.n16), ']', ',', $.a),

      // Arithmetic
      seq(/(ad[dc])|(and)|(cp)|(x?or)|(sbc)|(sub)/, optional(seq($.a, ','), choice($.r8, $.n8, $.deref_hl))),
      seq('add', $.hl, ',', choice($.r16, $.sp)),
      seq(choice("dec", "inc"), choice($.r8, $.r16, $.deref_hl, $.sp)),

      // Bit operations
      seq('swap', choice($.r8, $.deref_hl)),
      seq(choice('bit', 'res', 'set'), $.u3, ',', choice($.r8, $.hl)),

      // Bit shift
      seq(choice('rl', 'rlc', 'rr', 'rrc', 'sla', 'sra', 'srl'), choice($.r8, $.deref_hl)),

      // Stack operations
      seq(choice('push', 'pop'), choice($.r16, $.af)),
    ),


    _r8_load: $ => seq('ld', $.r8, ',', choice($.n8, $.r8, $.deref_hl)),
    _a_load: $ => choice(seq('ld', $.a, ',', '[', choice($.r16, $.n16, /[Cc]/), ']'), seq('ld', $.a, ',', '[', $.hl, /\+|-/, ']')),

    section: $ => seq(
      'SECTION',
      $.section_name,
      $.section_type,
      optional($.section_addr),
      optional($.section_options)
    ),

    section_name: $ => seq(
      '"',
      repeat(/[A-Za-z0-9_ ]/),
      '"'
    ),

    section_type: $ => choice(
      /ROM[0X]/,
      "VRAM",
      "SRAM",
      /WRAM[0X]/,
      "OAM",
      "HRAM"
    ),

    section_addr: $ => seq(
      "[",
      $.n16,
      "]"
    ),

    section_options: $ => seq(
      choice(
        "BANK",
        "ALIGN"
      ),
      "[",
      /[0-9]+/,
      "]"
    ),

    symbol: $ => 'MACRO',

  },
  conflicts: $ => [[$.r8, $._a_load], [$.hl, $.n16]]
});

