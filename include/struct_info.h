/*
** EPITECH PROJECT, 2022
** struct info.h
** File description:
** bsq
*/

#ifndef _STRUCT_INFO_
    #define _STRUCT_INFO_
typedef struct info {
    int max_x;
    int max_y;
    int offset;
    char *f_name;
    char seq[255];
    int square_current_x;
    int square_current_y;
    int s_bx;
    int s_by;
    int s_max;
    int square_dx;
} info_def;
#endif
