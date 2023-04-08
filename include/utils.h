/*
** EPITECH PROJECT, 2022
** utils.h
** File description:
** bsq
*/

#ifndef _UTILS_
    #define _UTILS_
    #include "struct_info.h"
int convert_str_to_int(const char *str);
void get_nbr_lines(info_def *data);
void get_nbr_cols(info_def *data);
int	read_one_line(int fd, int len, char **line);
#endif
