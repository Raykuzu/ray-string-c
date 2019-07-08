/*
** RAY PROJECT, 2019
** string
** File description:
** caps
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(to_lower, standard) {

    char str[11] = "HELLO GUYS";

    to_lower(str);
    cr_assert_str_eq(str, "hello guys");
}

Test(to_lower, void_str) {

    char str[11] = "";

    to_lower(str);
    cr_assert_str_eq(str, "");
}

Test(to_lower, no_changes) {

    char str[11] = "hello guys";

    to_lower(str);
    cr_assert_str_eq(str, "hello guys");
}

Test(to_upper, standard) {

    char str[11] = "hello guys";

    to_upper(str);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(to_upper, void_str) {

    char str[11] = "";

    to_upper(str);
    cr_assert_str_eq(str, "");
}

Test(to_upper, no_changes) {

    char str[11] = "HELLO GUYS";

    to_upper(str);
    cr_assert_str_eq(str, "HELLO GUYS");
}

#ifdef __USE_XOPEN2K8

#include <locale.h>

Test(to_lower_l, standard) {

    char str[11] = "HELLO GUYS";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_lower_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "hello guys");
}

Test(to_lower_l, void_str) {

    char str[11] = "";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_lower_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "");
}

Test(to_lower_l, no_changes) {

    char str[11] = "hello guys";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_lower_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "hello guys");
}

Test(to_lower_l, bad_locale) {

    char str[11] = "HELLO GUYS";

    cr_assert(to_lower_l(str, (locale_t)0), -1);
    cr_assert_str_neq(str, "hello guys");
}

Test(to_upper_l, standard) {

    char str[11] = "hello guys";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_upper_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(to_upper_l, void_str) {

    char str[11] = "";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_upper_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "");
}

Test(to_upper_l, no_changes) {

    char str[11] = "HELLO GUYS";
    locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    to_upper_l(str, locale);
    freelocale(locale);
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(to_upper_l, bad_locale) {

    char str[11] = "hello guys";

    cr_assert(to_upper_l(str, (locale_t)0), -1);
    cr_assert_str_neq(str, "HELLO_GUYS");
}

#endif