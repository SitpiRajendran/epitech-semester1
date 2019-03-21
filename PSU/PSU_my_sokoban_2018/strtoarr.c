/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** strtoarr
*/

#include "my.h"

uct veriferro(uct var)
{
    if (var.p != 1)
        error("only one player");
    if (var.o < var.x)
        error("not enought o");
    return (var);
}

uct strtoarr(char *buff, uct var)
{
    int k = 0;

    var.arr = malloc(sizeof(char *) * (var.nb_rows + 1));
    var.ori = malloc(sizeof(char *) * (var.nb_rows + 1));
    var.p = 0;
    var.x = 0;
    var.end = 0;
    for (int i = 0; i != var.nb_rows; i++) {
        var.arr[i] = malloc(sizeof(char) * (var.nb_cols + 1));
        var.ori[i] = malloc(sizeof(char *) * (var.nb_rows + 1));
    }
    for (int j = 0; j != var.nb_rows; j++) {
        for (int i = 0; i != var.nb_cols; i++) {
            var.arr[j][i] = buff[k];
            var.ori[j][i] = buff[k];
            var = verifp(buff[k], i, j, var);
            k++;
        }
    }
    var = veriferro(var);
    return (var);
}
