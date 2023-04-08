/*
** EPITECH PROJECT, 2022
** utils.c
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
#include "../my_lib/printf/include/my.h"

int convert_str_to_int(const char *str)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nb *= 10;
            nb += str[i] - '0';
        }
    }
    if (nb < 0)
        return 84;
    return (nb);
}

int get_nbr_temp(char *ch, int temp_y)
{
    if (ch[0] == '\n')
        temp_y++;
    return temp_y;
}

void get_nbr_lines(info_def *data)
{
    int offset_number = 0; int temp_y = 0; int cpt = 0;
    int txtfile = open(data->f_name,O_RDONLY); char ch[1]; char nb_lignes[10];
    read (txtfile, ch, 1);
    if (ch[0] >= '0' && ch[0] <= '9') {
        while (ch[0] != '\n') {
            nb_lignes[cpt++] = ch[0];
            read (txtfile,ch,1);
        }
        nb_lignes[cpt++] = '\0';
        data->max_y = convert_str_to_int(nb_lignes);
        offset_number = my_strlen(nb_lignes)+1;
    } else {
        read(txtfile, ch, 1);
        while (read(txtfile, ch, 1) > 0){
            temp_y = get_nbr_temp(ch, temp_y);
        }
        data->max_y = temp_y;
    }
    data->offset = offset_number;
}

void get_nbr_cols (info_def *data)
{
    int offset = data->offset;
    char ch[10];
    int cpt = 0;
    int txtfile = open(data->f_name,O_RDONLY);
    if (offset > 0) {
        read (txtfile,ch,offset);
    }
    read (txtfile,ch,1);
    while ( ch[0] != '\n') {
            cpt++;
            read (txtfile,ch,1);
    }
    data->max_x = cpt;
}

int read_one_line(int fd, int len, char **line)
{
    int n = 0;
    int a = 0;
    *line = malloc(sizeof(char) * (len) + 1);
    n = read(fd, *line, len);
    return n;
}
