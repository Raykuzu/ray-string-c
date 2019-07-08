/*
** RAY PROJECT, 2019
** string-library
** File description:
** split
*/

#include <stdlib.h>
#include <string.h>
#include "ray_string.h"

static int copy_loop(char **tab, const char *str, const char *delims)
{
    size_t j = 0;
    size_t k = 0;

    for (size_t i = 0; str[i]; i++) {
        if (i == 0)
            if (!(tab[j] = calloc(1, first_index_of_m(str, delims) + 1)))
                return (-1);
        if (!first_index_of_m(&str[i], delims)) {
            k = 0;
            j++;
            if (!(tab[j] = calloc(1, first_index_of_m(&str[i], delims) + 1)))
                return (-1);
        }
        else if (str[i])
            tab[j][k++] = str[i];
    }
    return (0);
}

char **split(const char *str, const char *delims)
{
    char **tab = calloc(sizeof(char *), count_char_oc_m(str, delims) + 2);

    if (!tab)
        return (NULL);
    if (str[0] == '\0') {
        tab[0] = calloc(sizeof(char), 1);
        if (!tab[0])
            return (NULL);
        tab[0][0] = '\0';
    }
    else if (delims[0] == '\0') {
        tab[0] = strdup(str);
        if (!tab[0])
            return (NULL);
        return (tab);
    }
    if (copy_loop(tab, str, delims) == -1)
        return (NULL);
    return (tab);
}