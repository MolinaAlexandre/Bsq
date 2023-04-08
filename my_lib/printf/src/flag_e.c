/*
** EPITECH PROJECT, 2022
** flag_e
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include "../include/my_printf.h"

void float_to_scient(va_list list)
{
    double dec = va_arg(list, double);
    int i = 0;
    while (dec >= 10 || dec <= -10) {
        dec /= 10;
        i++;
    }
    int integer_part = (int)dec;
    int decimal_part = dec * 1000000 - integer_part * 1000000;
    my_put_nbr(integer_part);
    my_putchar('.');
    my_put_nbr(decimal_part);
    my_putchar('e');
    my_putchar('+');
    if (i < 10)
        my_putchar('0');
    my_put_nbr(i);
}

int flag_e(const char *restrict format, va_list list)
{
    float_to_scient(list);
}
