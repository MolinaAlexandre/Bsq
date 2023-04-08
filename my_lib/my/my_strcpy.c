/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** task1
*/

void my_strcpy(char *dest, const char *src)
{
    int i = 0;
    for (i; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}
