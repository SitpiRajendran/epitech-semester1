/*
** EPITECH PROJECT, 2018
** bootstrap my hunter
** File description:
** analyse evennt
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include "struct.h"

vari analyse_events(sfRenderWindow *window, sfEvent event, vari var)
{
    int x = event.mouseButton.x;
    int y = event.mouseButton.y;

    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window);
    }
    if (event.type == sfEvtMouseButtonPressed)
        if (var.birdx + 210 <= x && var.birdx + 390 >= x &&
            var.birdy + 150 <= y && var.birdy + 380 >= y) {
            var.birdx = -180;
            var.birdy = rand() % 730;
            var.points += 1;
            var.str = my_itoa(var.points);
            sfText_setString(var.score, var.str);
        }
    if (event.type == sfEvtMouseMoved)
        sfSprite_setPosition(var.spika, (sfVector2f){event.mouseMove.x - 180,
        event.mouseMove.y - 180});
    sfRenderWindow_clear(window, sfBlack);
    return (var);
}
