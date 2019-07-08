/*
** RAY PROJECT, 2019
** string
** File description:
** split
*/

#include <criterion/criterion.h>
#include "ray_string.h"

static void free_tab(char **tab)
{
    for (size_t i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}

Test(split, standard) {

    char str[11] = "HELLO GUYS";
    char **tab = split(str, " ");

    cr_assert_str_eq(tab[0], "HELLO");
    cr_assert_str_eq(tab[1], "GUYS");
    cr_assert(tab[2] == NULL);
    free_tab(tab);
}

Test(split, void_str) {

    char str[11] = "";
    char **tab = split(str, " ");

    cr_assert_str_eq(tab[0], "");
    cr_assert(tab[1] == NULL);
    free_tab(tab);
}

Test(split, no_delims) {

    char str[11] = "HELLO GUYS";
    char **tab = split(str, "");

    cr_assert_str_eq(tab[0], "HELLO GUYS");
    cr_assert(tab[1] == NULL);
    free_tab(tab);
}

Test(split, void_str_and_no_delims) {

    char str[11] = "";
    char **tab = split(str, "");

    cr_assert_str_eq(tab[0], "");
    cr_assert(tab[1] == NULL);
    free_tab(tab);
}

Test(split, standard_multiple_delims) {

    char str[11] = "HELLO GUYS";
    char **tab = split(str, " U");

    cr_assert_str_eq(tab[0], "HELLO");
    cr_assert_str_eq(tab[1], "G");
    cr_assert_str_eq(tab[2], "YS");
    cr_assert(tab[3] == NULL);
    free_tab(tab);
}

Test(split, first_last) {

    char str[11] = "HELLO GUYS";
    char **tab = split(str, "HS");

    cr_assert_str_eq(tab[0], "");
    cr_assert_str_eq(tab[1], "ELLO GUY");
    cr_assert_str_eq(tab[2], "");
    cr_assert(tab[3] == NULL);
    free_tab(tab);
}