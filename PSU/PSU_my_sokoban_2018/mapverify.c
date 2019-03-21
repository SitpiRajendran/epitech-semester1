/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** map verify
*/

#include "my.h"

uct verifo(uct var)
{
    if (var.ori[var.save_y][var.save_x] == 'O')
        var.arr[var.save_y][var.save_x] = 'O';
    else
        var.arr[var.save_y][var.save_x] = ' ';
    return (var);
}

uct verifp(char c, int x, int y, uct var)
{
    if (c == 'P') {
        var.p += 1;
        var.save_x = x;
        var.save_y = y;
    }
    if (c == 'O')
        var.o += 1;
    if (c == 'X')
        var.x += 1;
    return (var);
}

char *mapverify(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n' || str[i] == '#' || str[i] == 'X' ||
            str[i] == 'O' || str[i] == 'P' || str[i] == ' ')
            i = i + 1;
        else {
            error("unknow character");
        }
    }
    return (str);
}