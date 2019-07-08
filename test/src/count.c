/*
** RAY PROJECT, 2019
** string
** File description:
** count
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(count_char_oc, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc(str, 'O') == 1);
}

Test(count_char_oc, not_found) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc(str, 'J') == 0);
}

Test(count_char_oc, first_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc(str, 'H') == 1);
}

Test(count_char_oc, last_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc(str, 'S') == 1);
}

Test(count_char_oc, void_str) {

    char str[11] = "";

    cr_assert(count_char_oc(str, 'O') == 0);
}

Test(count_char_oc, mul_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc(str, 'L') == 2);
}

Test(count_char_oc_m, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "O") == 1);
}

Test(count_char_oc_m, not_found) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "J") == 0);
}

Test(count_char_oc_m, not_found_mult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "JK") == 0);
}

Test(count_char_oc_m, first_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "H") == 1);
}

Test(count_char_oc_m, last_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "S") == 1);
}

Test(count_char_oc_m, void_str) {

    char str[11] = "";

    cr_assert(count_char_oc_m(str, "O") == 0);
}

Test(count_char_oc_m, mul_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "L") == 2);
}

Test(count_char_oc_m, mul_char_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_char_oc_m(str, "LY") == 3);
}

Test(count_str_oc, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "O") == 1);
}

Test(count_str_oc, not_found) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "J") == 0);
}

Test(count_str_oc, not_foundult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "JK") == 0);
}

Test(count_str_oc, first_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "H") == 1);
}

Test(count_str_oc, last_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "S") == 1);
}

Test(count_str_oc, void_str) {

    char str[11] = "";

    cr_assert(count_str_oc(str, "O") == 0);
}

Test(count_str_oc, mul_char) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "L") == 2);
}

Test(count_str_oc, find_str_standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "LLO") == 1);
}

Test(count_str_oc, str_notfound) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "OLLEH") == 0);
}

Test(count_str_oc, find_str_first) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "HELLO") == 1);
}

Test(count_str_oc, find_str_last) {

    char str[11] = "HELLO GUYS";

    cr_assert(count_str_oc(str, "GUYS") == 1);
}