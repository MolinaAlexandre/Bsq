/*
** EPITECH PROJECT, 2022
** flag_f
** File description:
** my_printf
*/

#include "../include/my.h"
#include "../include/my_printf.h"
#include <stdarg.h>

int flag_f_plus(int decimal_part,int integer_part)
{
    if (integer_part >= 0) {
        my_putchar('+');
        my_put_nbr(integer_part);
        my_putchar('.');
        my_put_nbr(decimal_part);
    }
    if (integer_part < 0) {
        my_put_nbr(integer_part);
        my_putchar('.');
        my_put_nbr(decimal_part * -1);
    }
}

int flag_f_blank(int decimal_part, int integer_part)
{
    if (integer_part >= 0) {
        my_putchar(' ');
        my_put_nbr(integer_part);
        my_putchar('.');
        my_put_nbr(decimal_part);
    }
    if (integer_part < 0) {
        my_put_nbr(integer_part);
        my_putchar('.');
        my_put_nbr(decimal_part * -1);
    }
}

int flag_f(int i, const char *restrict format, va_list list)
{
    float a = va_arg(list, double);
    int integer_part = (int)a;
    int decimal_part = a * 1000000 - integer_part * 1000000;
    if (format[i + 1] == '+')
        flag_f_plus(decimal_part, integer_part);
    if (format[i + 1] == ' ')
        flag_f_blank(decimal_part, integer_part);
    if (format[i + 1] != '+' && format[i + 1] != ' ') {
        if (integer_part > 0) {
            my_put_nbr(integer_part);
            my_putchar('.');
            my_put_nbr(decimal_part);
        }
        if (integer_part < 0) {
            my_put_nbr(integer_part);
            my_putchar('.');
            my_put_nbr(decimal_part * -1);
        }
    }
}
