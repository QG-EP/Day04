/*
** EPITECH PROJECT, 2021
** Day4
** File description:
** my_sort-int-array
*/

void my_swap(int *a, int *b);

void my_sort_int_array(int *array, int size)
{
    int	modif = 1;
    int	pos;

    while (modif == 1) {
        pos = 0;
        modif = 0;
        while (pos < (size - 1)) {
            if (array[pos] > array[pos + 1]) {
                my_swap(array + pos, array + pos + 1);
                modif = 1;
            }
            pos = pos + 1;
        }
    }
}

int main(int ac, char **av)
{
    int oui[] = {1, 2, 3, 8, 5, 0, 5};
    my_sort_int_array(oui, 7);

    for (int i = 0; i < 7; i++) {
        printf("%d\n", oui[i]);
    }
    return (0);
}