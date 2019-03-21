/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** color value
*/

#include "../my.h"

void color(void)
{
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
    attron(COLOR_PAIR(1));
}
