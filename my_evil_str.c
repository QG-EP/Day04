/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_evil_str
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int end = my_strlen(str) - 1;
    char tmp;

    for (int i = 0; i < end; i++) {
        tmp = str[i];
        str[i] = str[end];
        str[end] = tmp;
        end -= 1;
    }
    return (str);
}