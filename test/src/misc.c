/*
** RAY PROJECT, 2019
** string
** File description:
** misc
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(revstr, standard) {

    char str[11] = "HELLO GUYS";

    revstr(str);
    cr_assert_str_eq(str, "SYUG OLLEH");
}

Test(revstr, void_str) {

    char str[11] = "";

    revstr(str);
    cr_assert_str_eq(str, "");
}

Test(revstr, odd_str) {

    char str[11] = "HELLOGUYS";

    revstr(str);
    cr_assert_str_eq(str, "SYUGOLLEH");
}