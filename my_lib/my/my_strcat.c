/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** task02
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = my_strlen(dest);
    while (src[a] != '\0'){
            dest[b] = src[a];
            b++;
            a++;
    }
    dest[b] = '\0';
    return dest;
}
