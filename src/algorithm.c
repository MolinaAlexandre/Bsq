/*
** EPITECH PROJECT, 2022
** algo.C
** File description:
** bsq
*/

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include "struct_info.h"
#include "map.h"
#include "utils.h"
#include "utils2.h"
#include "my.h"
#include "my_printf.h"

int** algorithm_map(info_def *data, char **map1, int **mapint)
{
    int col = 0;
    int less_sign = 0;
    int line = 0;
    *mapint = malloc(sizeof(int) * data->max_x);
    for (int i = 0; i < (data->max_x * data->max_y); i++){
        col = i % (data->max_x);
        if (map1[line][col] == '.'){
            mapint[line][col] = 1;
        }
        if (map1[line][col] == 'o'){
            mapint[line][col] = 0;
        }
        if (col == data->max_x - 1){
            line++;
            malloc_one_line_int(data->max_x, mapint + line);
        }
    }
    return &*mapint;
}

void write_coord (info_def *data, int y, int x, int **map1)
{
    int t = 0; int ox = 1; int oy = 1; int a = 1;
    if (y == 0){
        ox = 0;
        a = 0;
    }
    if (x == 0){
        oy = 0;
        a = 0;
    }
    if (map1[y][x] != 0) {
        t = lower(map1[y - ox][x - oy], map1[y - ox][x],map1[y][x - oy]) + a;
        if (y == 0) t = 1;
        map1[y][x] = t;
        if (t > data->s_max) {
            data->s_max = t;
            data->s_bx = x - t + 1;
            data->s_by = y - t + 1;
        }
    }
}

void process_int (info_def *data, int **map1)
{
    for (int yy = 0; yy < data->max_y; yy++) {
        for (int xx = 0; xx < data->max_x; xx++) {
            write_coord(data, yy, xx, map1);
        }
    }
}

void write_bsq (info_def *d, char **map1)
{
    int y = 0;
    while (d->max_x == 1 && y < d->max_y){
        if (map1[y][0] == '.'){
            map1[y][0] = 'x';
            return;
        }
        y++;
    }
    if (d->max_x == 1) return;
    for (int yy = d->s_by; yy < d->s_by + d->s_max; yy++) {
        for (int xx = d->s_bx; xx < d->s_bx + d->s_max; xx++) {
            map1[yy][xx] = 'x';
        }
    }
}

int test_char_map (int char_ok, char ch)
{
    switch (ch){
        case '.':
            break;
        case 'o':
            break;
        default:
            char_ok = 0;
            break;
    }
    return char_ok;
}
