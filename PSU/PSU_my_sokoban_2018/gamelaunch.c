/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** game loop
*/

#include "my.h"

void gamelaunch(uct var)
{
    int compteur = 0;
    int key = 0;

    initscr();
    keypad(stdscr, true);
    color();
    while (var.end != 1) {
        while (var.nb_cols >= COLS || var.nb_rows >= LINES) {
            clear();
            mvprintw(LINES / 2 , (COLS / 2) - 9, "Resize the window");
            refresh();
        }
        clear();
        var = moves(key, var);
        for (int i = 0; i < var.nb_rows; i = i + 1)
            printw(var.arr[i]);
        refresh();
        var = win(var);
        var = lost(var);
        compteur++;
        key = getch();
    }
}
