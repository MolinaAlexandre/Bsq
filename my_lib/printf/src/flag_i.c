/*
** EPITECH PROJECT, 2022
** flag i
** File description:
** my_printf
*/

#include "../include/my.h"
#include "../include/my_printf.h"
#include <stdarg.h>

int flag_i_plus(int isSup)
{
    if (isSup > 0) {
        my_putchar('+');
        my_put_nbr(isSup);
    }
    if (isSup < 0) {
        my_put_nbr(isSup);
    }
}

int flag_i_blank(int isSup)
{
    if (isSup > 0) {
        my_putchar(' ');
        my_put_nbr(isSup);
    }
    if (isSup < 0) {
        my_put_nbr(isSup);
    }
}

int flag_i(int i, const char *restrict format, va_list list)
{
    if (format[i + 1] == '+') {
        int isSup = va_arg(list, int);
        flag_i_plus(isSup);
    }
    if (format[i + 1] == ' ') {
        int isSup = va_arg(list, int);
        flag_i_blank(isSup);
    }
    if (format[i + 1] != '+' && format[i + 1] != ' ') {
        my_put_nbr(va_arg(list, int));
    }
}
