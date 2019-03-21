/*
** EPITECH PROJECT, 2018
** My Sokoban
** File description:
** Starting
*/

#include "my.h"

void sokoban(char *filepath)
{
    uct var;

    if (filepath[0] == '-' && filepath[1] == 'h' && filepath[2] == '\0')
        help();

    var.str = mapverify(init(filepath));
    var.nb_cols = my_strcol(var.str);
    var.nb_rows = my_strrow(var.str);
    var = strtoarr(var.str, var);
    gamelaunch(var);
}