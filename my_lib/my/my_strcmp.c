/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** task1
*/

int my_strcmp(const char  *s1, const char  *s2)
{
    if (s1[0] == '\0' && s2[0] == '\0')
        return (0);
    if (s1[0] == '\0')
        return (-1);
    if (s2[0] == '\0')
        return (1);
    int cpt = 0;
    while (s1[cpt] != '\0' || s2[cpt] != '\0'){
        if (s1[cpt] > s2[cpt]) {
            return (1);
        }
        if (s1[cpt] < s2[cpt]) {
            return (-1);
        }
        cpt++;
    }
    return (0);
}
