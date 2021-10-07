/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int term_sign = 1;
    int nbr = 0;

    for (; *str == '-' || *str == '+'; str++) {
        if (*str == '-')
            term_sign = - term_sign;
    }
    for (; *str != '\0' && *str >= '0' && *str <= '9'; str++) {
        if (nbr > 214748364)
            return (0);
        if (nbr == 214748364 && *str > 7 && term_sign == 1)
            return (0);
        if (nbr == 214748364 && *str > 8 && term_sign == -1)
            return (0);
        nbr = nbr * 10 + *str - 48;
    }
    if (term_sign == -1)
        nbr = -nbr;
    return (nbr);
}