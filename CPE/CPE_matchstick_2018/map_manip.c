/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** map manip
*/

#include "matchstick.h"

int *init_tab(int line)
{
    int nb_stick = 0;
    int *tab = malloc(sizeof(int) * line + 1);

    for (int i = 1; i <= line; i++) {
        nb_stick = (i * 2) - 1;
        tab[i] = nb_stick;
    }
    return tab;
}

void print_tab(int *tab, int nb_max, int line)
{
    int y;
    int z;

    for (int i = 0; i != nb_max + 2; i++)
        write (1, "*", 1);
    write(1, "\n", 1);
    for (int i = 1; i <= line; i++) {
        write (1, "*", 1);
        for (y = 0; (nb_max - (i * 2 - 1)) / 2 != y; y++)
            write(1, " ", 1);
        for (z = 0;  tab[i] != z; z++)
            write(1, "|", 1);
        y = y + z;
        for (; nb_max != y; y++)
            write(1, " ", 1);
        write (1, "*\n", 2);
    }
    for (int i = 0; i != nb_max + 2; i++)
        write (1, "*", 1);
    write(1, "\n", 1);
}
