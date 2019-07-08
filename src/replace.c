/*
** RAY PROJECT, 2019
** string-library
** File description:
** replace
*/

#include <string.h>

int replace(char *str, int old_c, int new_c)
{
    if (old_c == '\0')
        str[strlen(str)] = new_c;
    for (size_t i = 0; str[i]; i++) {
        if (str[i] == old_c)
            str[i] = new_c;
    }
    return (0);
}