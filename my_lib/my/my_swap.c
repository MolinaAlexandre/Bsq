/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** Task01
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
