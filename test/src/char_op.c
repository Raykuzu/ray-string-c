/*
** RAY PROJECT, 2019
** string
** File description:
** char_op
*/

#include <criterion/criterion.h>
#include "ray_string.h"

Test(pop_back, standard) {

    char str[11] = "HELLO GUYS";

    pop_back(str);
    cr_assert_str_eq(str, "HELLO GUY");
}

Test(pop_back, void_str) {

    char str[11] = "";

    cr_assert(pop_back(str), -1);
    cr_assert_str_eq(str, "");
}

Test(pop_back, one_char) {

    char str[11] = "A";

    pop_back(str);
    cr_assert_str_eq(str, "");
}

Test(push_back, standard) {

    char str[12] = "HELLO GUYS";

    str[11] = '\0';
    push_back(str, 'S');
    cr_assert_str_eq(str, "HELLO GUYSS");
}

Test(push_back, push_b_zero) {

    char str[12] = "HELLO GUYS";

    str[11] = '\0';
    push_back(str, '\0');
    cr_assert_str_eq(str, "HELLO GUYS");
}

Test(push_back, void_str) {

    char str[12] = "";

    str[11] = '\0';
    push_back(str, 'A');
    cr_assert_str_eq(str, "A");
}

Test(pop_front, standard) {

    char str[11] = "HELLO GUYS";

    pop_front(str);
    cr_assert_str_eq(str, "ELLO GUYS");
}

Test(pop_front, void_str) {

    char str[11] = "";

    cr_assert(pop_front(str), -1);
    cr_assert_str_eq(str, "");
}

Test(pop_front, one_char) {

    char str[11] = "A";

    pop_front(str);
    cr_assert_str_eq(str, "");
}

Test(push_front, standard) {

    char str[12] = "HELLO GUYS";

    str[11] = '\0';
    push_front(str, 'S');
    cr_assert_str_eq(str, "SHELLO GUYS");
}

Test(push_front, push_b_zero) {

    char str[12] = "HELLO GUYS";

    str[11] = '\0';
    push_front(str, '\0');
    cr_assert_str_eq(str, "");
}

Test(push_front, void_str) {

    char str[12] = "";

    str[11] = '\0';
    push_front(str, 'A');
    cr_assert_str_eq(str, "A");
}