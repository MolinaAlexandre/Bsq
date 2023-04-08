/*
** EPITECH PROJECT, 2022
** main
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
#include "algorithm.h"

void struct_init_bsq (char *filename, info_def *data)
{
    data->max_x = 0;
    data->max_y = 0;
    data->s_bx = 0;
    data->s_by = 0;
    data->s_max = 0;
    data->offset = 0;
    data->f_name = malloc(sizeof(char) * my_strlen(filename) + 1);
    my_strcpy(data->f_name, filename);
}

int case_two (info_def *data, char **map, int **mapint)
{
    if (testfile(data) == 84)
        return 84;
    get_nbr_lines(data);
    get_nbr_cols(data);
    map = malloc (sizeof (char *) * (data->max_y + 1));
    map = load_map (data, map);
    if (check_valid_map(data, map) == 0)
        return 84;
    mapint = malloc (sizeof(int *) * (data->max_y + 1));
    algorithm_map(data, map, mapint);
    process_int(data, mapint);
    write_bsq(data, map);
    display_map(data, map);
}

void case_three (info_def *data, char **map, int **mapint)
{
    map = malloc (sizeof(char*) * data->max_y + 1);
    create_map(data,map);
    mapint = malloc (sizeof(int *) * (data->max_y + 1));
    algorithm_map(data, map, mapint);
    process_int(data, mapint);
    write_bsq(data, map);
    display_map(data, map);
}

int bsq (int argc, char **argv)
{
    info_def *data = malloc(sizeof(info_def));
    char **map = NULL;
    int **mapint = NULL;
    switch (argc) {
    case 2:
        struct_init_bsq(argv[argc - 1], data);
        if (case_two(data, map, mapint) == 84)
            return 84;
        break;
    case 3:
        check_params (argc, argv, data);
        case_three(data, map, mapint);
        break;
    }
    free (map);
    free (mapint);
    free (data);
    return 0;
}

int main (int argc, char *argv[])
{
    struct stat check_param = {0};
    if (argc == 2){
        char *filepath = malloc(sizeof(char) * strlen(argv[1]) + 1);
        strcpy(filepath, argv[1]);
        stat(filepath, &check_param);
        if (S_ISREG(check_param.st_mode) == 0){
            free(filepath);
            return 84;
        }
        free(filepath);
    }
    if (bsq (argc, argv) == 84) return 84;
    return 0;
}
