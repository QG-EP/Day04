/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}