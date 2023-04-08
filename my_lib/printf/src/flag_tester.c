/*
** EPITECH PROJECT, 2022
** flag tester
** File description:
** look for flags
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/my.h"
#include "../include/my_printf.h"

int flags_list(int i,int count, const char *restrict format, va_list list)
{
    flags_calling1(i,count, format, list);
    flags_calling2(i,count, format, list);
}

int flags_calling2(int i,int count, const char *restrict format, va_list list)
{
    if (format[i + count] == 'f')
        flag_f(i, format, list);
}

int flags_calling1(int i,int count, const char *restrict format, va_list list)
{
    if (format[i + count] == 'c')
        flag_c(i, format, list);
    if (format[i + count] == 'b')
        flag_b(i, format, list);
    if (format[i + count] == 'i' || format[i + count] == 'd')
        flag_i(i, format, list);
    if (format[i + count] == 's')
        flag_s(i, format, list);
    if (format[i + count] == '%')
        flag_percent(i, format, list);
    if (format[i + count] == 'S')
        flag_smajs(i, format, list);
    if (format[i + count] == 'x')
        flag_x(i, format, list);
    if (format[i + count] == 'X')
        flag_xmajs(i, format, list);
    if (format[i + count] == 'o')
        flag_o(i, format, list);
    if (format[i + count] == 'u')
        flag_u(i, format, list);
}

int help_checker(int i, const char *restrict format, va_list list)
{
    int count = 1;
    int k = 0;
    char *flags = "cbidsSxXouf%";
    int j = i + 1;
    while (format[j] != flags[k]) {
        k++;
        if (flags[k] == '\0') {
            k = 0;
            j ++;
            count++;
        }
    }
    flags_list(i ,count, format, list);
    return count;
}

void my_printf(const char *restrict format, ...)
{
    va_list list;
    int i = 0;
    int k = 0;
    int count = 1;
    int length = my_strlen(format);
    va_start(list, format);
    while (i < length) {
        if (format[i] == '%') {
            i += help_checker(i, format, list);
        } else
            my_putchar(format[i]);
        i++;
    }
    va_end(list);
}
