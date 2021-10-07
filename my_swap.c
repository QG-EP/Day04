/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int tmp = *b;

    *b = *a;
    *a = tmp;
}