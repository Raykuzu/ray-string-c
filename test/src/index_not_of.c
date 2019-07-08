/*
** RAY PROJECT, 2019
** string
** File description:
** index_not_of
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(first_index_not_of, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_not_of(str, 'H') == 1);
}

Test(first_index_not_of, void_str) {

    char str[11] = "";

    cr_assert(first_index_not_of(str, 'H') == -1);
}

Test(first_index_not_of, not_found) {

    char str[11] = "JJJJ";

    cr_assert(first_index_not_of(str, 'J') == -1);
}

Test(first_index_not_of, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_not_of(str, '\0') == 0);
}

Test(last_index_not_of, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_not_of(str, 'S') == 8);
}

Test(last_index_not_of, void_str) {

    char str[11] = "";

    cr_assert(last_index_not_of(str, 'H') == -1);
}

Test(last_index_not_of, not_found) {

    char str[11] = "JJJJ";

    cr_assert(last_index_not_of(str, 'J') == -1);
}

Test(last_index_not_of, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_not_of(str, '\0') == 9);
}

Test(first_index_not_of_m, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_not_of_m(str, "H") == 1);
}

Test(first_index_not_of_m, void_str) {

    char str[11] = "";

    cr_assert(first_index_not_of_m(str, "H") == -1);
}

Test(first_index_not_of_m, not_found) {

    char str[11] = "JJJJ";

    cr_assert(first_index_not_of_m(str, "J") == -1);
}

Test(first_index_not_of_m, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_not_of_m(str, "\0") == 0);
}

Test(first_index_not_of_m, mult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_not_of_m(str, "LHE") == 4);
}

Test(first_index_not_of_m, mult_param_first) {

    char str[16] = "HELLO HELLO GUYS";

    cr_assert(first_index_not_of_m(str, "LHE") == 4);
}

Test(last_index_not_of_m, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_not_of_m(str, "S") == 8);
}

Test(last_index_not_of_m, void_str) {

    char str[11] = "";

    cr_assert(last_index_not_of_m(str, "H") == -1);
}

Test(last_index_not_of_m, not_found) {

    char str[11] = "JJJJ";

    cr_assert(last_index_not_of_m(str, "J") == -1);
}

Test(last_index_not_of_m, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_not_of_m(str, "\0") == 9);
}

Test(last_index_not_of_m, mult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_not_of_m(str, "SYGU") == 5);
}

Test(last_index_not_of_m, mult_param_last) {

    char str[16] = "HELLO GUYS GUYS";

    cr_assert(last_index_not_of_m(str, "SYGU") == 10);
}