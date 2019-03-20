/*
** EPITECH PROJECT, 2018
** D13 - T1-2 - pixels array
** File description:
** pixel array
*/

#include "struct.h"
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics.h>

void analyse_events(sfRenderWindow *window, sfEvent event);

sfIntRect move_rect(sfIntRect rect)
{
    if (rect.left == 220) {
        rect.left = 0;
    }
    if (rect.left == 0) {
        rect.left = 110;
    }
    if (rect.left == 110) {
        rect.left = 220;
    }
    return (rect);
}

int main(void)
{
    vari *var;

    sfVideoMode mode = {1920, 1080, 32};

    var->bg = sfTexture_createFromFile("background.jpg", NULL);
    var->pika = sfTexture_createFromFile("Pikachu.png", NULL);
    var->bird = sfTexture_createFromFile("sprite.png", NULL);
    var->sbg = sfSprite_create();
    var->spika = sfSprite_create();
    var->sbird = sfSprite_create();

    var->rect = {0, 0, 110, 110};

    var->clock = sfClock_create();

    var->birdx = 0;
    var->bitdy = 560;

    var->window = sfRenderWindow_create(mode, "SFML window",
                                        sfFullscreen | sfClose, NULL);

/////////////////////////////////////////////////////////

    sfSprite_setTexture(var->sbg, var->bg, sfFalse);
    sfSprite_setTexture(var->spika, var->pika, sfFalse);
    sfSprite_setTexture(var->sbird, var->bird, sfFalse);

    sfSprite_setScale(var->spika, (sfVector2f){0.2, 0.2});
    sfSprite_setScale(var->sbird, (sfVector2f){2, 2});

/////////////////////////////////////////////

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(var->window, &var->event)) {
            analyse_events(var->window, var->event);
            sfRenderWindow_clear(var->window, sfBlack);
            if (var->event->type == sfEvtMouseMoved)
                sfSprite_setPosition(var->spika, (sfVector2f){var->event.mouseMove.x - 180, var->event.mouseMove.y - 180});
        }
        ////////////////////////////////////////////////
        sfSprite_setPosition(var->sbird, (sfVector2f){var->birdx, var->birdy});
        sfRenderWindow_setMouseCursorVisible(var->window, sfFalse);
        sfRenderWindow_drawSprite(var->window, var->sbg, NULL);
        sfRenderWindow_drawSprite(var->window, var->sbird, NULL);
        sfRenderWindow_drawSprite(var->window, var->spika, NULL);
        //////////////////////////////////////////////////////////

        var->time = sfTime_asSeconds(sfClock_getElapsedTime(var->clock));
        if (var->time >= 0.002) {
            var->birdx = var->birdx + 10;
            sfClock_restart(clock);
        }
        if (var->birdx >= 1960)
            var->birdx = -180;
        var->rect.left = var->rect.left + 110;
        if (var->rect.left == 330)
            var->rect.left = 0;
        sfSprite_setTextureRect(var->sbird, var->rect);
        sfRenderWindow_display(var->window);

    }
    sfTexture_destroy(var->pika);
    sfSprite_destroy(var->spika);
    sfTexture_destroy(var->bg);
    sfSprite_destroy(var->sbg);
    sfRenderWindow_destroy(var->window);
    return (0);
}
