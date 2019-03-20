/*
** EPITECH PROJECT, 2018
** D8 - T3 - show word array
** File description:
** display content of array
*/

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putstr("\n");
        i++;
    }

    return (0);
}
