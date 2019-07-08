/*
** RAY PROJECT, 2019
** string
** File description:
** affix
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(start_with, standard) {

    char str[11] = "HELLO GUYS";
    char str2[6] = "HELL";

    cr_assert(start_with(str, str2) == 1);
}

Test(start_with, void_str) {

    char str[11] = "";
    char str2[6] = "HELL";

    cr_assert(start_with(str, str2) == -1);
}

Test(start_with, void_prefix) {

    char str[11] = "HELLO GUYS";
    char str2[6] = "";

    cr_assert(start_with(str, str2) == 0);
}

Test(start_with, prefix_len_sup_str) {

    char str[6] = "HELL";
    char str2[11] = "HELLO GUYS";

    cr_assert(start_with(str, str2) == -1);
}

Test(end_with, standard) {

    char str[11] = "HELLO GUYS";
    char str2[6] = "GUYS";

    cr_assert(end_with(str, str2) == 1);
}

Test(end_with, void_str) {

    char str[11] = "";
    char str2[6] = "HELL";

    cr_assert(end_with(str, str2) == -1);
}

Test(end_with, void_prefix) {

    char str[11] = "HELLO GUYS";
    char str2[6] = "";

    cr_assert(end_with(str, str2) == 1);
}

Test(end_with, prefix_len_sup_str) {

    char str[6] = "HELL";
    char str2[11] = "HELLO GUYS";

    cr_assert(end_with(str, str2) == -1);
}