/*
** RAY PROJECT, 2019
** string-library
** File description:
** char_op
*/

#include <string.h>

int pop_back(char *str)
{
    size_t size = strlen(str);

    if (size < 1)
        return (-1);
    str[size - 1] = '\0';
    return (0);
}

int push_back(char *str, int c)
{
    str[strlen(str)] = c;
    return (0);
}

int pop_front(char *str)
{
    size_t size = strlen(str);

    if (size < 1)
        return (-1);
    for (size_t i = 0; str[i]; i++)
        str[i] = str[i + 1];
    return (0);
}

int push_front(char *str, int c)
{
    memmove(str + 1, str, strlen(str));
    str[0] = c;
    return (0);
}