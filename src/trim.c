/*
** RAY PROJECT, 2019
** c
** File description:
** ray_trim
*/

#include <ctype.h>
#include <string.h>

int trimls(char *str)
{
    for (size_t i = 0; str[i] && isspace(str[i]); i++) {
        for (size_t j = i--; str[j]; j++)
            str[j] = str[j + 1];
    }
    return (0);
}

int trimts(char *str)
{
    for (size_t i = strlen(str) - 1; i > 0 && isspace(str[i]); i--)
        str[i] = '\0';
    if (isspace(str[0]))
        str[0] = '\0';
    return (0);
}

int trim(char *str)
{
    trimls(str);
    trimts(str);
    return (0);
}