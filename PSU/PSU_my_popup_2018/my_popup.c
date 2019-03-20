/*
** EPITECH PROJECT, 2018
** Bootstrap my_sokoban
** File description:
** my_popup
*/

#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char const *str);

int main(int ac, char **av)
{
    int i = 1;
    WINDOW *boite;

    if (ac != 2) {
        write(2, "Error", 6);
        return (84);
    }
    initscr();
    while (i == 1) {
        clear();
        mvprintw(LINES / 2 , (COLS / 2) - (my_strlen(av[1]) / 2), av[1]);
        refresh();
        if (getch() == ' ') {
            i = 0;
        }
    }
    endwin();
    return (0);
}
