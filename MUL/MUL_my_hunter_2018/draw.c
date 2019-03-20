/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** draw
*/


#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include "struct.h"

void draw(vari var, sfRenderWindow *window)
{
    sfSprite_setPosition(var.sbird, (sfVector2f){var.birdx, var.birdy});
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_drawSprite(window, var.sbg, NULL);
    sfRenderWindow_drawSprite(window, var.sbird, NULL);
    sfRenderWindow_drawSprite(window, var.spika, NULL);
    sfRenderWindow_drawText(window, var.score, NULL);
    sfText_setPosition(var.score, (sfVector2f){1600, 992});
    if (var.vie > 0) {
        sfRenderWindow_drawText(window, var.score, NULL);
        sfText_setPosition(var.score, (sfVector2f){1600, 992});
    }
}
