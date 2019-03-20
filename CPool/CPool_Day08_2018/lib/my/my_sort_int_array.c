/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_sort_int_array(int *tab, int size)
{
    int	modif;
    int	pos;

    modif = 1;
    while (modif == 1) {
        pos = 0;
        modif = 0;
        while (pos < (size - 1)) {
            if (tab[pos] > tab[pos + 1]) {
                my_swap(tab + pos, tab + pos + 1);
                modif = 1;
            }
            pos = pos + 1;
        }
    }
}
