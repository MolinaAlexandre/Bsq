/*
** EPITECH PROJECT, 2022
** header for my_printf
** File description:
** header
*/
#ifndef _MY_PRINTF_H_
    #define _MY_PRINTF_H_

    #include <stdarg.h>
    #include "my.h"

void my_putstr_modified(char *str);
void octal_zero(int real_nb);
int my_put_unsigned_int(unsigned int nb);
int print_unsigned_int(int nb);
int flag_u(int i, const char *restrict format, va_list list);
int flag_o(int i, const char *restrict format, va_list list);
int flag_x(int i, const char *restrict format, va_list list);
int flag_xmajs(int i, const char *restrict format, va_list list);
int modulation_by_2(unsigned int nb);
int modulation_by_16majs(int nb);
int modulation_by_16(int nb);
int modulation_by_8(int nb);
int flag_b(int i, const char *restrict format, va_list list);
int flag_smajs(int i, const char *restrict format, va_list list);
int flag_c(int i, const char *restrict format, va_list list);
int flag_i(int i, const char *restrict format, va_list list);
int flag_s(int i, const char *restrict format, va_list list);
int flag_percent(int i, const char *restrict format, va_list list);
int flags_list(int i,int count, const char *restrict format, va_list list);
int flag_f(int i, const char *restrict format, va_list list);
void my_printf(const char *restrict format, ...);
int flags_calling1(int i, int count, const char *restrict format, va_list list);
int flags_calling2(int i,int count, const char *restrict format, va_list list);
int flag_e(const char *restrict format, va_list list);

#endif
