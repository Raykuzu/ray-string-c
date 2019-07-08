/*
** RAY PROJECT, 2019
** string
** File description:
** join
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>
#include "ray_string.h"

Test(join, standard) {

    const char **tab = calloc(sizeof(char *), 3);
    char *str = NULL;

    if (!tab)
        return;
    tab[0] = strdup("HELLO");
    tab[1] = strdup(" GUYS");
    if (!tab[0] || !tab[1])
        return;
    str = join(tab, ", ");
    cr_assert_str_eq(str, "HELLO,  GUYS");
    free(str);
}

Test(join, multiple) {

    const char **tab = calloc(sizeof(char *), 5);
    char *str = NULL;

    if (!tab)
        return;
    tab[0] = strdup("HELLO");
    tab[1] = strdup(" GUYS");
    tab[2] = strdup(" GUYS");
    tab[3] = strdup(" GUYS");
    if (!tab[0] || !tab[1] || !tab[2] || !tab[3])
        return;
    str = join(tab, ", ");
    cr_assert_str_eq(str, "HELLO,  GUYS,  GUYS,  GUYS");
    free(str);
}

Test(join, without_cs) {

    const char **tab = calloc(sizeof(char *), 5);
    char *str = NULL;

    if (!tab)
        return;
    tab[0] = strdup("HELLO");
    tab[1] = strdup(" GUYS");
    tab[2] = strdup(" GUYS");
    tab[3] = strdup(" GUYS");
    if (!tab[0] || !tab[1] || !tab[2] || !tab[3])
        return;
    str = join(tab, "");
    cr_assert_str_eq(str, "HELLO GUYS GUYS GUYS");
    free(str);
}

Test(join, void_first_case) {

    const char **tab = calloc(sizeof(char *), 5);
    char *str = NULL;

    if (!tab)
        return;
    tab[0] = strdup("");
    tab[1] = strdup(" GUYS");
    tab[2] = strdup(" GUYS");
    tab[3] = strdup(" GUYS");
    if (!tab[0] || !tab[1] || !tab[2] || !tab[3])
        return;
    str = join(tab, "");
    cr_assert_str_eq(str, " GUYS GUYS GUYS");
    free(str);
}

Test(join, void_tab) {

    const char **tab = calloc(sizeof(char *), 3);
    char *str = NULL;

    if (!tab)
        return;
    tab[0] = strdup("");
    tab[1] = strdup("");
    if (!tab[0] || !tab[1])
        return;
    str = join(tab, "");
    cr_assert_str_eq(str, "");
    free(str);
}