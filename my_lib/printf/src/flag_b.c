/*
** EPITECH PROJECT, 2022
** flag de S b xX
** File description:
** flag for my_printf
*/

#include "../include/my.h"
#include <stdarg.h>
#include "../include/my_printf.h"

int modulation_by_2(unsigned int nb)
{
    if ((nb / 2) > 0) {
        modulation_by_2(nb / 2);
    }
    my_put_nbr(nb % 2);
}

int flag_b(int i, const char *restrict format, va_list list)
{
    unsigned int nb = va_arg(list, int);
    int result_modulo = 0;
    modulation_by_2(nb);
}
