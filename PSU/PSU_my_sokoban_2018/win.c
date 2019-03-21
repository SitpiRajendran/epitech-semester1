/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** sdfcghdsoiuv bçfo
*/

#include "my.h"

int winnext(uct var, int i, int j)
{
    int count = 0;

    if (var.ori[j][i] == 'O') {
        if (var.arr[j][i] == 'X')
            count = 1;
    }
    return (count);
}

uct win(uct var)
{
    int count = 0;

    for (int j = 0; j != var.nb_rows; j++) {
        for (int i = 0; i != var.nb_cols; i++) {
            count += winnext(var, i, j);
        }
    }
    if (count == var.x) {
        var.end = 1;
        clear();
        endwin();
        free(var.arr);
        free(var.ori);
        exit (0);
    }
    return (var);
}

int lostnext(uct var, int i, int j)
{
    int count = 0;

    if (var.arr[j][i] == 'X') {
        if (var.arr[j - 1][i] == '#' && var.arr[j][i + 1] == '#')
            count += 1;
        if (var.arr[j + 1][i] == '#' && var.arr[j][i - 1] == '#')
            count += 1;
        if (var.arr[j + 1][i] == '#' && var.arr[j][i - 1] == '#')
            count += 1;
    }
    if (count >= 1)
        return (1);
    return (0);
}

uct lost(uct var)
{
    int count = 0;

    for (int j = 0; j != var.nb_rows; j++) {
        for (int i = 0; i != var.nb_cols; i++) {
            count += lostnext(var, i, j);
        }
    }

    if (count == var.x) {
        var.end = 1;
        free(var.arr);
        free(var.ori);
        clear();
        endwin();
        exit (1);
    }
    return (var);
}