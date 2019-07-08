/*
** RAY PROJECT, 2019
** string-library
** File description:
** join
*/

#include <string.h>
#include <stdlib.h>

static size_t get_size(const char **tab, size_t cs_size)
{
    size_t i = 0;
    size_t k = 0;

    for (; tab[i]; i++) {
        for (size_t j = 0; tab[i][j]; j++) {
            k++;
        }
    }
    return (k + (i - 1) * cs_size);
}

char *join(const char **tab, const char *cs)
{
    char *str = NULL;
    size_t str_idx = 0;
    size_t cs_size = strlen(cs);

    str = calloc(sizeof(char), get_size(tab, cs_size) + 1);
    if (!str)
        return (NULL);
    for (size_t i = 0; tab[i]; i++) {
        strcpy(&str[str_idx], tab[i]);
        str_idx += strlen(tab[i]);
        if (tab[i + 1]) {
            strcpy(&str[str_idx], cs);
            str_idx += cs_size;
        }
    }
    return (str);
}