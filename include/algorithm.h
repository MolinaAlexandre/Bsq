/*
** EPITECH PROJECT, 2022
** algorithm.h
** File description:
** bsq
*/

#ifndef _ALGORITHM_
    #define _ALGORITHM_
    #include "struct_info.h"
void algorithm_map(info_def *data, char **map1, int **mapint);
void write_bsq (info_def *d, char **map1);
void process_int (info_def *data, int **map1);
void write_coord (info_def *data, int yy, int xx, int **map1);
int test_char_map(int char_ok, char ch);
#endif
