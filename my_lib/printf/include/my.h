/*
** EPITECH PROJECT, 2022
** my_header
** File description:
** task02
*/

#ifndef MY_H_
    #define MY_H_
    #include "struct_dir_explorer.h"
    #include "struct_tableau.h"
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char const *src, int nb);
int base_ls(const char *path);
int ls_a(const char *path);
int path_finder2(dirExplore *dirE);
int path_finder(dirExplore *dirE, struct tableau *t);
void struct_init(dirExplore* d1);
void struct_display(dirExplore d1);
int alpha_sorter(struct tableau *t, int n);
unsigned long nb_files(const char *filename, int *max);
int my_compare(const char *s1, const char *s2);
int my_comparator(const char *s1);
void display_dir(struct tableau *t, dirExplore *dirE);
void test(dirExplore *dirE, struct tableau *t);
void gestion_is(dirExplore *dirE, tab *t);
int ls_t(dirExplore *dirE, tab *t);
int ls_rmajs(dirExplore *dirE, tab *t);
int flag_checkerv2(char **argv, dirExplore *dirE, tab *t);
int print_modified(char *s1, int n, int x);
#endif
