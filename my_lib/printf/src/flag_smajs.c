/*
** EPITECH PROJECT, 2022
** flag S
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include "../include/my_printf.h"
#include <stdio.h>


void my_putstr_modified(char *str)
{
    int i = 0;
    int z = 0;
    int bcl = 0;
    int length = my_strlen(str);
    while (i <= my_strlen(str)) {
        while ((str[i] - '0' < 32 || str[i] - '0' >= 127) && str[i] != '\0') {
            z = (10 * z) + (str[i] - '0');
            i++;
            bcl = 1;
        }
        if (bcl == 1) {
            my_putchar('\\');
            octal_zero(z);
            bcl = 0;
            z = 0;
        }
        if (str[i] - '0' >= 32 && str[i] - '0' < 127)
            my_putchar(str[i]);
        i++;
    }
}

int flag_smajs(int i, const char *restrict format, va_list list)
{
    my_putstr_modified(va_arg(list, char*));
}
