/*
** EPITECH PROJECT, 2022
** flag d
** File description:
** my_printf
*/

#include "../include/my.h"
#include "../include/my_printf.h"
#include <stdarg.h>

int flag_d(int i, const char *restrict format, va_list list)
{
    if (format[i + 1] == 'd') {
        my_put_nbr(va_arg(list, int));
        return 0;
    }
    return 0;
}
