/*
** EPITECH PROJECT, 2022
** include struct
** File description:
** myls
*/

#ifndef STRUCT_DIR_
    #define STRUCT_DIR_

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
typedef struct dirExplorer dirExplore;

struct dirExplorer {
    char path[255];
    char options[255];
    char *path_vault[256];
    unsigned int max_n;
    int only_print;
    int val_options;
    int nbr_path;
    int nbr_arg;
    int is_a;
    int is_l;
    int is_R;
    int is_d;
    int is_r;
    int is_t;
} ;
#endif
