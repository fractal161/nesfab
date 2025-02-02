#include "macro_lex_tables.hpp"
namespace macro_lex
{
extern unsigned const lexer_ec_table[256] = {
    0, 49, 49, 49, 49, 49, 49, 49, 49, 49, 98, 49, 49, 147, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
    49, 49, 196, 245, 49, 49, 49, 294, 49, 49, 343, 49, 49, 49, 49, 392,
    441, 441, 441, 441, 441, 441, 441, 441, 441, 441, 490, 49, 49, 49, 49, 49,
    49, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539,
    539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 539, 49, 49, 49, 49, 441,
    588, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637,
    637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 637, 49, 49, 49, 49, 49,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
    686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686, 686,
};
extern token_type_t const lexer_transition_table[735] = {

    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 7, 0, 0, 0, 0, 31, 0, 0, 5, 26, 5, 2, 30, 1,
    3, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 30, 6, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 7, 0, 0, 0, 0, 0, 0, 0, 5, 27, 5, 2, 30,
    1, 3, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 30, 6,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 7, 0, 0, 0, 0, 0, 0, 0, 5, 28, 5, 2,
    30, 1, 3, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 26, 30,
    6, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 7, 0, 0, 0, 0, 0, 0, 0, 5, 44, 26,
    2, 30, 1, 3, 0, 0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5,
    30, 6, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 7, 0, 0, 0, 0, 32, 0, 0, 5, 27,
    5, 2, 30, 1, 3, 19, 0, 11, 0, 0, 0, 9, 42, 42, 0, 8,
    5, 30, 6, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 18, 4, 0, 7, 0, 0, 0, 0, 33, 0, 0, 5,
    27, 5, 2, 30, 1, 3, 0, 35, 11, 0, 0, 39, 9, 0, 0, 43,
    8, 5, 30, 6, 48, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 7, 0, 0, 0, 0, 16, 0, 0,
    5, 27, 5, 2, 30, 1, 3, 20, 0, 11, 38, 38, 0, 9, 0, 0,
    0, 8, 5, 30, 6, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 30, 7, 0, 0, 0, 0, 0, 0,
    0, 5, 27, 5, 2, 45, 1, 3, 0, 0, 11, 0, 0, 0, 9, 0,
    0, 0, 8, 5, 30, 6, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 27, 7, 0, 0, 0, 0, 17,
    0, 0, 5, 27, 5, 2, 30, 1, 3, 0, 0, 11, 0, 0, 0, 9,
    0, 0, 0, 8, 5, 46, 6, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 13, 0, 15, 4, 0, 7, 0, 0, 0, 22,
    0, 24, 25, 5, 27, 5, 2, 30, 1, 3, 0, 0, 11, 36, 37, 0,
    9, 40, 41, 0, 8, 5, 30, 6, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 4, 0, 7, 0, 0, 0,
    34, 0, 0, 0, 5, 27, 5, 2, 30, 1, 3, 21, 0, 11, 0, 0,
    0, 9, 0, 0, 0, 8, 5, 30, 6, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 13, 25, 0, 4, 0, 7, 40, 36,
    13, 0, 0, 0, 25, 5, 27, 5, 2, 30, 1, 3, 12, 0, 11, 36,
    0, 0, 9, 40, 0, 0, 8, 5, 30, 6, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 7, 0,
    0, 0, 0, 29, 47, 47, 5, 27, 5, 2, 30, 1, 3, 14, 0, 11,
    0, 0, 0, 9, 0, 0, 0, 8, 5, 30, 6, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 15, 4, 0, 7,
    41, 37, 22, 22, 0, 24, 0, 5, 27, 5, 2, 30, 1, 3, 15, 0,
    11, 0, 37, 0, 9, 0, 41, 0, 8, 5, 30, 6, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 5, 0, 5, 2, 0, 1, 3, 0,
    0, 11, 0, 0, 0, 9, 0, 0, 0, 8, 5, 0, 6, 0, 10,
};
} // namespace macro_lex
