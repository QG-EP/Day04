/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0')
        a++;
    return (a);
}