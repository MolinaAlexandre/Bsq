/*
** EPITECH PROJECT, 2022
** flag c
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include "../include/my_printf.h"

int flag_c(int i, const char *restrict format, va_list list)
{
    if (format[i + 1] == 'c') {
        char c = (char) va_arg(list, int);
        my_putchar(c);
        return 0;
    }
    return 0;
}
