/*
** RAY PROJECT, 2019
** string
** File description:
** trim
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(trimls, standard) {

    char str[16] = "\t\n   HELLO GUYS";

    trimls(str);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(trimls, void_str) {

    char str[16] = "";

    trimls(str);
    cr_assert_str_eq(str, "");
}

Test(trimls, str_full_space) {

    char str[16] = "   \t\f\n  ";

    trimls(str);
    cr_assert_str_eq(str, "");
}

Test(trimts, standard) {

    char str[16] = "HELLO GUYS\t\n   ";

    trimts(str);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(trimts, void_str) {

    char str[16] = "";

    trimts(str);
    cr_assert_str_eq(str, "");
}

Test(trimts, str_full_space) {

    char str[16] = "   \t\f\n  ";

    trimts(str);
    cr_assert_str_eq(str, "");
}

Test(trim, standard) {

    char str[24] = "   \f\t  \fHELLO GUYS\t\n   ";

    trim(str);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(trim, void_str) {

    char str[16] = "";

    trim(str);
    cr_assert_str_eq(str, "");
}

Test(trim, str_full_space) {

    char str[16] = "   \t\f\n  ";

    trim(str);
    cr_assert_str_eq(str, "");
}