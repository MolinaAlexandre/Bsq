/*
** EPITECH PROJECT, 2022
** flag s
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include "../include/my_printf.h"

int flag_s(int i, const char *restrict format, va_list list)
{
    if (format[i + 1] == 's') {
        my_putstr(va_arg(list, const char *));
        return 0;
    }
    return 0;
}
