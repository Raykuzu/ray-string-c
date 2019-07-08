/*
** RAY PROJECT, 2019
** string-library
** File description:
** caps
*/

#include <ctype.h>
#include <stddef.h>

int to_lower(char *str)
{
    for (size_t i = 0; str[i]; i++)
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
    return (0);
}

int to_upper(char *str)
{
    for (size_t i = 0; str[i]; i++)
        if (islower(str[i]))
            str[i] = toupper(str[i]);
    return (0);
}

#ifdef __USE_XOPEN2K8

#include <locale.h>

int to_lower_l(char *str, locale_t locale)
{
    if (locale == 0)
        return (-1);
    for (size_t i = 0; str[i]; i++)
        if (isupper_l(str[i], locale))
            str[i] = tolower_l(str[i], locale);
    return (0);
}

int to_upper_l(char *str, locale_t locale)
{
    if (locale == 0)
        return (-1);
    for (size_t i = 0; str[i]; i++)
        if (islower_l(str[i], locale))
            str[i] = toupper_l(str[i], locale);
    return (0);
}

#endif