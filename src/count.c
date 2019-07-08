/*
** RAY PROJECT, 2019
** string-library
** File description:
** count
*/

#include <string.h>

size_t count_char_oc(const char *str, int c)
{
    size_t count = 0;

    for (size_t i = 0; str[i]; i++)
        if (str[i] == c)
            count++;
    return (count);
}

size_t count_char_oc_m(const char *str, const char *cs)
{
    size_t count = 0;

    for (size_t i = 0; cs[i]; i++)
        count += count_char_oc(str, cs[i]);
    return (count);
}

size_t count_str_oc(const char *str, const char *sub)
{
    size_t count = 0;
    size_t sub_size = strlen(sub);

    for (size_t i = 0; str[i]; i++)
        if (str[i] == sub[0] && !strncmp(&str[i], sub, sub_size))
            count++;
    return (count);
}