/*
** EPITECH PROJECT, 2022
** map.c
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
#include "utils.h"
#include "my.h"
#include "my_printf.h"
#include "utils2.h"
#include "algorithm.h"

char **load_map(info_def *data, char **map1)
{
    int x = data->max_x;
    int y = data->max_y;
    int offset = data->offset;
    int txtfile = open(data->f_name, O_RDONLY);
    if (txtfile == -1){
        return NULL;
    }
    int size = 0;
    int ligne = 0;
    *map1 = malloc(sizeof(char) * ((x + 1)));
    size = read (txtfile, *map1, offset);
    size = read (txtfile, *map1, x + 1);
    while (size > 0) {
        ligne++;
        size = read_one_line (txtfile, size, map1 + ligne);
    }
    close (txtfile);
    return map1;
}

int display_map (info_def *data, char **map1)
{
    for (int yy = 0; yy < data->max_y; yy++){
        write(1,map1[yy],data->max_x);
        my_putchar ('\n');
    }
    return 0;
}

int display_map_int (info_def *data, int **map1)
{
    for (int yy = 0; yy < data->max_y; yy++){
        for (int xx = 0; xx < data->max_x; xx++){
            my_put_nbr (map1[yy][xx]);
        }
        my_putchar ('\n');
    }
    return 0;
}

void create_map(info_def *data, char **map)
{
    *map = malloc(sizeof(char) * data->max_y);
    int pos_char_seq = 0;
    int col = 0;
    int line = 0;
    for (int i = 0; i < (data->max_x * data->max_y); i++){
        pos_char_seq = i % my_strlen(data->seq);
        col = i % (data->max_x);
        map[line][col] = data->seq[pos_char_seq];
        if (col == data->max_x - 1){
            line++;
            malloc_one_line(data->max_x, map + line);
        }
    }
}

void check_params(int argc, char *av[], info_def *data)
{
    my_strcpy (data->seq, av[argc - 1]);
    data->max_x = convert_str_to_int(av[argc - 2]);
    data->max_y = convert_str_to_int(av[argc - 2]);
}
