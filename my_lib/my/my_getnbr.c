/*
** EPITECH PROJECT, 2022
** test
** File description:
** test
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 0;
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb *= 10;
            nb += str[i] - '0';
            i++;
        } else
            return nb * sign;
    }
    return nb * sign;
}
