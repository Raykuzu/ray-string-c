/*
** RAY PROJECT, 2019
** string
** File description:
** index_of
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(first_index_of, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_of(str, 'E') == 1);
}

Test(first_index_of, void_str) {

    char str[11] = "";

    cr_assert(first_index_of(str, 'H') == -1);
}

Test(first_index_of, not_found) {

    char str[11] = "KKKK";

    cr_assert(first_index_of(str, 'J') == -1);
}

Test(first_index_of, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_of(str, '\0') == 9);
}

Test(last_index_of, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_of(str, 'S') == 9);
}

Test(last_index_of, void_str) {

    char str[11] = "";

    cr_assert(last_index_of(str, 'H') == -1);
}

Test(last_index_of, not_found) {

    char str[11] = "KKKK";

    cr_assert(last_index_of(str, 'J') == -1);
}

Test(last_index_of, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_of(str, '\0') == 9);
}

Test(first_index_of_m, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_of_m(str, "E") == 1);
}

Test(first_index_of_m, void_str) {

    char str[11] = "";

    cr_assert(first_index_of_m(str, "H") == -1);
}

Test(first_index_of_m, not_found) {

    char str[11] = "KKKK";

    cr_assert(first_index_of_m(str, "J") == -1);
}

Test(first_index_of_m, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_of_m(str, "\0") == 9);
}

Test(first_index_of_m, mult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(first_index_of_m(str, "LHE") == 0);
}

Test(first_index_of_m, mult_param_first) {

    char str[16] = "HELLO HELLO GUYS";

    cr_assert(first_index_of_m(str, " G") == 5);
}

Test(last_index_of_m, standard) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_of_m(str, "S") == 9);
}

Test(last_index_of_m, void_str) {

    char str[11] = "";

    cr_assert(last_index_of_m(str, "H") == -1);
}

Test(last_index_of_m, not_found) {

    char str[11] = "KKKK";

    cr_assert(last_index_of_m(str, "J") == -1);
}

Test(last_index_of_m, search_b_zero) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_of_m(str, "\0") == 9);
}

Test(last_index_of_m, mult_param) {

    char str[11] = "HELLO GUYS";

    cr_assert(last_index_of_m(str, "LE") == 3);
}

Test(last_index_of_m, mult_param_last) {

    char str[16] = "HELLO GUYS GUYS";

    cr_assert(last_index_of_m(str, " LO") == 10);
}