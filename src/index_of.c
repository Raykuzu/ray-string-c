/*
** RAY PROJECT, 2019
** string-library
** File description:
** index_of
*/

#include <sys/types.h>
#include <stdint.h>
#include <string.h>

ssize_t first_index_of(const char *str, int c)
{
    size_t str_size = strlen(str);

    if (c == '\0') {
        if (str_size == 0)
            return (0);
        return (str_size - 1);
    }
    for (size_t i = 0; str[i]; i++)
        if (str[i] == c)
            return (i);
    return (-1);
}

ssize_t last_index_of(const char *str, int c)
{
    size_t str_size = strlen(str);

    if (c == '\0') {
        if (str_size == 0)
            return (0);
        return (str_size - 1);
    }
    for (size_t i = str_size; i > 0; i--) {
        if (str[i] == c)
            return (i);
        if (i == 0)
            break;
    }
    return (-1);
}

ssize_t first_index_of_m(const char *str, const char *cs)
{
    ssize_t index = 0;
    size_t minor = SIZE_MAX;
    size_t cs_size = strlen(cs);

    if (cs[0] == '\0')
        return (first_index_of(str, '\0'));
    for (size_t i = 0; cs[i]; i++) {
        index = first_index_of(str, cs[i]);
        if (index == -1)
            cs_size--;
        else if ((size_t)index < minor)
            minor = index;
    }
    if (cs_size == 0)
        return (-1);
    return (minor);
}

ssize_t last_index_of_m(const char *str, const char *cs)
{
    ssize_t index = 0;
    size_t major = 0;
    size_t cs_size = strlen(cs);

    if (cs[0] == '\0')
        return (last_index_of(str, '\0'));
    for (size_t i = 0; cs[i]; i++) {
        index = last_index_of(str, cs[i]);
        if (index == -1)
            cs_size--;
        else if ((size_t)index > major)
            major = index;
    }
    if (cs_size == 0)
        return (-1);
    return (major);
}
