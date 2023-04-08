/*
** EPITECH PROJECT, 2022
** flag u
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include "../include/my_printf.h"


int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9 && nb >= 0) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    } else
        return -1;
    return 0;
}

int print_unsigned_int(int nb)
{
    unsigned int new_nb = 4294967296 + nb ;
    if (nb >= 0)
        my_put_unsigned_nbr(nb);
    else
        my_put_unsigned_nbr(new_nb);
    return 0;
}

int flag_u(int i, const char *restrict format, va_list list)
{
    int nb = va_arg(list, int);
    print_unsigned_int(nb);
    return 0;
}
