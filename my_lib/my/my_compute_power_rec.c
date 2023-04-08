/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** Task04
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_compute_power_rec (int nb,int p)
{
    if (p > 0)
        nb = nb * my_compute_power_rec(nb, p - 1);
    else if (p < 0)
        return 0;
    else
        return 1;
    return (nb);
}
