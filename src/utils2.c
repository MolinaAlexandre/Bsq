/*
** EPITECH PROJECT, 2022
** utils2
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
#include "algorithm.h"
#include "../my_lib/printf/include/my.h"

void malloc_one_line ( int len, char **line)
{
    *line = malloc(sizeof(char *) * (len));
}

void malloc_one_line_int (int len, int **line)
{
    *line = malloc(sizeof(int *) * len);
}

int lower (int hg, int hd, int bg)
{
    int min = hd;
    if (hg <= hd)
        min = hg;
    if (bg <= min)
        min = bg;
    return min;
}

int testfile(info_def *data)
{
    int txtfile = open(data->f_name, O_RDONLY);
    if (txtfile == -1)
        return 84;
}

int check_valid_map (info_def *data, char **map)
{
    int is_valid = 1;
    for (int y = 0; y < data->max_y; y++) {
        for (int x = 0; x < data->max_x; x++){
            is_valid = test_char_map(is_valid, map[y][x]);
        }
    }
    return (is_valid);
}
