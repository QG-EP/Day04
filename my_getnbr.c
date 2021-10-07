/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int i = 0;
    int j = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    for (;str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9'))
        j = j + str[i] - 48;
        j = j * 10;
    }
    j /= 10;
    if (str[0] == '-')
        return (-1 * j);
    else
        return (j);
}