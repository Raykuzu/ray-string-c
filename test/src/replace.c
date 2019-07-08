/*
** RAY PROJECT, 2019
** string
** File description:
** replace
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(replace, standard) {

    char str[11] = "HELLO GUYS";

    replace(str, 'L', 'M');
    cr_assert_str_eq(str, "HEMMO GUYS");
}

Test(replace, void_str) {

    char str[11] = "";

    replace(str, 'L', 'M');
    cr_assert_str_eq(str, "");
}

Test(replace, old_not_found) {

    char str[11] = "HELLO GUYS";

    replace(str, 'J', 'M');
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(replace, old_eq_bzero) {

    char str[11] = "HELLO GUYS";

    replace(str, '\0', 'M');
    cr_assert(!strncmp(str, "HELLO GUYSM", 11));
}

Test(replace, void_str_and_old_eq_bzero) {

    char str[11] = "";

    replace(str, '\0', 'M');
    cr_assert(!strncmp(str, "M", 1));
}

Test(replace, new_eq_bzero) {

    char str[11] = "HELLO GUYS";

    replace(str, 'O', '\0');
    cr_assert_str_eq(str, "HELL");
}