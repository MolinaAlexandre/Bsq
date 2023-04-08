/*
** EPITECH PROJECT, 2022
** sum_string_length
** File description:
** part B
*/

#include <stdarg.h>
#include "../printf/include/my.h"

int sum_strings_length(int n, ...)
{
    va_list list;
    int result = 0;
    va_start(list, n);
    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            result += my_strlen (va_arg (list, char*));
        }
        va_end(list);
        return result;
    }
    return -1;
}
