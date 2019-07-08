/*
** RAY PROJECT, 2019
** string-library
** File description:
** affix
*/

#include <string.h>

int start_with(const char *str, const char *prefix)
{
    size_t str_size = strlen(str);
    size_t prefix_size = strlen(prefix);

    if (str_size < prefix_size)
        return (-1);
    if (!prefix_size)
        return (0);
    return ((!strncmp(str, prefix, prefix_size)) ? 1 : 0);
}

int end_with(const char *str, const char *suffix)
{
    size_t str_size = strlen(str);
    size_t suffix_size = strlen(suffix);

    if (str_size < suffix_size)
        return (-1);
    return ((!strncmp(&str[str_size - suffix_size], suffix,
    suffix_size)) ? 1 : 0);
}