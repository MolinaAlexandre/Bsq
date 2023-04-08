/*
** EPITECH PROJECT, 2022
** flag_o
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my_printf.h"
#include "../include/my.h"

int modulation_by_8(int nb)
{
    if ((nb / 8) > 0) {
        modulation_by_8(nb / 8);
    }
    if (nb % 8 < 9) {
        nb = nb % 8;
        my_put_nbr(nb);
    }
}

void octal_zero(int real_nb)
{
    if (real_nb <= 9) {
        my_put_nbr(0);
        my_put_nbr(0);
        modulation_by_8(real_nb);
    }
    if (real_nb > 9 && real_nb < 100) {
        my_put_nbr(0);
        modulation_by_8(real_nb);
    }
    if (real_nb >= 100)
        modulation_by_8(real_nb);
}

int flag_o(int i, const char *restrict format, va_list list)
{
    int real_nb = va_arg(list, int);
    modulation_by_8(real_nb);
    return 0;
}
