/*
** EPITECH PROJECT, 2022
** map.h
** File description:
** bsq
*/

#ifndef _MAP_
    #define _MAP_
    #include "struct_info.h"
char **load_map(info_def *data, char **map1);
int display_map (info_def *data, char **map1);
int display_map_int (info_def *data, int **map1);
void check_params(int argc, char *av[], info_def *data);
void create_map(info_def *data, char **map);
#endif
