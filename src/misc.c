/*
** RAY PROJECT, 2019
** string-library
** File description:
** misc
*/

#include <string.h>

int revstr(char *str)
{
    char c = 0;
    size_t begin = 0;
    size_t end = strlen(str);

    if (end == 0)
        return (0);
    end--;
    while (begin < end) {
        c = str[begin];
        str[begin] = str[end];
        str[end] = c;
        begin++;
        end--;
    }
    return (0);
}