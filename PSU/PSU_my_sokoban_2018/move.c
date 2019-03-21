/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** move up
*/

#include "my.h"

uct moves(int key, uct var)
{
    if (key == KEY_UP || key == 'z' || key == 'Z')
        var = move_up(var);
    if (key == KEY_DOWN || key == 's' || key == 'S')
        var = move_dw(var);
    if (key == KEY_RIGHT || key == 'd' || key == 'D')
        var = move_rt(var);
    if (key == KEY_LEFT || key == 'q' || key == 'Q')
        var = move_lf(var);
    if (key == 'p' || key == 'P'){
        clear();
        endwin();
        exit (1);
    }
    if (key == ' ') {
        clear();
        endwin();
        var = strtoarr(var.str, var);
        gamelaunch(var);
        exit (1);
    }
    return (var);
}

uct move_up(uct var)
{
    if (var.save_y - 1 > 0 && var.arr[var.save_y - 1][var.save_x] != '#') {
        if (var.arr[var.save_y - 1][var.save_x] != 'X') {
            var = verifo(var);
            var.save_y -= 1;
            var.arr[var.save_y][var.save_x] = 'P';
        } else if (var.arr[var.save_y - 2][var.save_x] != '#' &&
                var.arr[var.save_y - 2][var.save_x] != 'X') {
            var.arr[var.save_y - 1][var.save_x] = 'P';
            var.arr[var.save_y][var.save_x] = ' ';
            var = verifo(var);
            var.save_y -= 1;
            var.arr[var.save_y - 1][var.save_x] = 'X';
        }
    }
    return (var);
}

uct move_dw(uct var)
{
    if (var.save_y + 1 < var.nb_rows &&
        var.arr[var.save_y + 1][var.save_x] != '#') {
        if (var.arr[var.save_y + 1][var.save_x] != 'X') {
            var = verifo(var);
            var.save_y += 1;
            var.arr[var.save_y][var.save_x] = 'P';
        } else if (var.arr[var.save_y + 2][var.save_x] != '#' &&
                var.arr[var.save_y + 2][var.save_x] != 'X') {
            var.arr[var.save_y + 1][var.save_x] = 'P';
            var.arr[var.save_y][var.save_x] = ' ';
            var = verifo(var);
            var.save_y += 1;
            var.arr[var.save_y + 1][var.save_x] = 'X';
        }
    }
    return (var);
}

uct move_rt(uct var)
{
    if (var.save_x + 1< var.nb_cols &&
        var.arr[var.save_y][var.save_x + 1] != '#') {
        if (var.arr[var.save_y][var.save_x + 1] != 'X') {
            var = verifo(var);
            var.save_x += 1;
            var.arr[var.save_y][var.save_x] = 'P';
        } else if (var.arr[var.save_y][var.save_x + 2] != '#' &&
                var.arr[var.save_y][var.save_x + 2] != 'X') {
            var.arr[var.save_y][var.save_x + 1] = 'P';
            var.arr[var.save_y][var.save_x] = ' ';
            var = verifo(var);
            var.save_x += 1;
            var.arr[var.save_y][var.save_x + 1] = 'X';
        }
    }
    return (var);
}

uct move_lf(uct var)
{
    if (var.save_x - 1 > 0 && var.arr[var.save_y][var.save_x - 1] != '#') {
        if (var.arr[var.save_y][var.save_x - 1] != 'X') {
            var = verifo(var);
            var.save_x -= 1;
            var.arr[var.save_y][var.save_x] = 'P';
        } else if (var.arr[var.save_y][var.save_x - 2] != '#' &&
                var.arr[var.save_y][var.save_x - 2] != 'X') {
            var.arr[var.save_y][var.save_x - 1] = 'P';
            var.arr[var.save_y][var.save_x] = ' ';
            var = verifo(var);
            var.save_x -= 1;
            var.arr[var.save_y][var.save_x - 1] = 'X';
        }
    }
    return (var);
}
