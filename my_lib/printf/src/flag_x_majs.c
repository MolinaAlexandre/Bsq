/*
** EPITECH PROJECT, 2022
** flag %X
** File description:
** my_printf
*/

#include "../include/my.h"
#include "../include/my_printf.h"
#include <stdarg.h>

int modulation_by_16majs(int nb)
{
    if ((nb / 16) > 0) {
        modulation_by_16(nb / 16);
    }
    if (nb % 16 < 9)
        my_put_nbr(nb % 16);
    else {
        my_putchar(nb % 16 + 55);
    }
}

int flag_xmajs(int i, const char *restrict format, va_list list)
{
    int nb = va_arg(list, int);
    modulation_by_16majs(nb);
    return 0;
}
