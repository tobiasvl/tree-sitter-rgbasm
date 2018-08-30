# tree-sitter-rgbasm

[RGBASM](https://rednex.github.io/rgbds/rgbasm.5.html) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## RGBASM

RGBASM is the assembler dialect used for programming Game Boy games with the [Rednex Game Boy Development System](https://github.com/rednex/rgbds) (RGBDS).

This is sometimes erroneously referred to as "Z80 assembler"; although the Game Boy's CPU is similar to Z80 and 8080, it's distinct from them, and using Z80 grammars isn't ideal, especially when using RGBASM features.

### Language references

* [RGBASM language description](https://rednex.github.io/rgbds/rgbasm.5.html)
* [RGBDS Game Boy CPU opcode reference](https://rednex.github.io/rgbds/gbz80.7.html)
* [Atom RGBASM language package](https://github.com/tobiasvl/language-rgbasm) (which will use this grammar when ready)

## Build

    PATH=$PATH:./node_modules/.bin
    install -g node-gyp
    tree-sitter generate
    npm install
    node-gyp build

Or something. Read [tree-sitter's documentation](http://tree-sitter.github.io/tree-sitter/creating-parsers#installing-the-tools).

## Test

This is a work in progress. Currently, many tests fail while I'm reworking the grammar to complete it.

To run the entire test suite:

    tree-sitter test

To run just a single test file, located in the `corpus/` directory, use `-f`. For example, to test comment parsing:

    tree-sitter test -f 'Comments'
