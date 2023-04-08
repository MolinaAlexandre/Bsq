/*
** EPITECH PROJECT, 2022
** flag x
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my_printf.h"
#include "../include/my.h"

int modulation_by_16(int nb)
{
    if ((nb / 16) > 0) {
        modulation_by_16(nb / 16);
    }
    if (nb % 16 < 9)
        my_put_nbr(nb % 16);
    else {
        my_putchar(nb % 16 + 87);
    }
}

int flag_x(int i, const char *restrict format, va_list list)
{
    int nb = va_arg(list, int);
    modulation_by_16(nb);
    return 0;
}
