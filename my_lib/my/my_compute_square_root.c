/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** Task05
*/
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    int a = 0;
    if (nb < 0 || nb == 0)
        return 0;
    while (a * a != nb){
        a ++;
        if (a > nb) {
            return 0;
        }
    }
    return (a);
}
