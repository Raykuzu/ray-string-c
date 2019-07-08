/*
** RAY PROJECT, 2019
** string-library
** File description:
** index_not_of
*/

#include <sys/types.h>
#include <string.h>

ssize_t first_index_not_of(const char *str, int c)
{
    for (size_t i = 0; str[i]; i++)
        if (str[i] != c)
            return (i);
    return (-1);
}

ssize_t last_index_not_of(const char *str, int c)
{
    size_t str_size = strlen(str);

    if (str_size == 0)
        return (-1);
    for (size_t i = str_size - 1; i > 0; i--) {
        if (str[i] != c)
            return (i);
        if (i == 0)
            break;
    }
    return (-1);
}

ssize_t first_index_not_of_m(const char *str, const char *cs)
{
    size_t accept_len = strspn(str, cs);
    size_t str_size = strlen(str);

    if (accept_len == str_size)
        return (-1);
    return (accept_len);
}

ssize_t last_index_not_of_m(const char *str, const char *cs)
{
    size_t count = 0;
    size_t str_size = strlen(str);
    size_t cs_size = strlen(cs);

    if (str_size == strspn(str, cs))
        return (-1);
    for (size_t i = str_size - 1; str[i]; i--) {
        count = 0;
        for (size_t j = 0; cs[j]; j++) {
            if (str[i] != cs[j])
                count++;
        }
        if (count == cs_size) {
            return (i);
        }
    }
    return (0);
}