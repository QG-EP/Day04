/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nbr = 0;
    int	isneg = 1;
    int	a = 0;

    while (str[a] == '+' || str[a] == '-') {
        if (str[a] == '-')
            isneg = isneg * -1;
        a = a + 1;
    }
    while (str[a] != '\0') {
        if (str[a] >= '0' && str[a] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[a] - '0';
            a = a + 1;
        } else
            return (nbr * isneg);
    }
    return (nbr * isneg);
}