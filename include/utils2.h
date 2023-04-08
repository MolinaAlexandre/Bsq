/*
** EPITECH PROJECT, 2022
** include utils2
** File description:
** bsq
*/

#ifndef _UTILS2_
    #define _UTILS2_
    #include "struct_info.h"
void malloc_one_line (int len, char **line);
void malloc_one_line_int (int len, int **line);
int lower (int hg, int hd, int bg);
int testfile(info_def *data);
int check_valid_map(info_def *data, char **map);
#endif
