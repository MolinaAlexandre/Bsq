/*
** EPITECH PROJECT, 2022
** va_args
** File description:
** task01
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    va_list list;
    int result = 0;
    va_start(list, n);
    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            result += va_arg(list, int);
        }
        va_end(list);
        return result;
    }
    return -1;
}
