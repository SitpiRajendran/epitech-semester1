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
    sfRenderWindow *window;

    sfVideoMode mode = {1920, 1080, 32};

    sfTexture *bg = sfTexture_createFromFile("background.jpg", NULL);
    sfTexture *pika = sfTexture_createFromFile("Pikachu.png", NULL);
    sfTexture *bird = sfTexture_createFromFile("sprite.png", NULL);
    sfSprite *sbg = sfSprite_create();
    sfSprite *spika = sfSprite_create();
    sfSprite *sbird = sfSprite_create();

    sfEvent event;
    sfIntRect rect = {0, 0, 110, 110};

    sfClock *clock = sfClock_create();
    float time;

    int birdx = 0;
    int birdy = 560;

    window = sfRenderWindow_create(mode, "SFML window", sfFullscreen | sfClose, NULL);

/////////////////////////////////////////////////////////

    sfSprite_setTexture(sbg, bg, sfFalse);
    sfSprite_setTexture(spika, pika, sfFalse);
    sfSprite_setTexture(sbird, bird, sfFalse);

    sfSprite_setScale(spika, (sfVector2f){0.2, 0.2});
    sfSprite_setScale(sbird, (sfVector2f){2, 2});

/////////////////////////////////////////////

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_events(window, event);
            sfRenderWindow_clear(window, sfBlack);
            if (event.type == sfEvtMouseMoved)
                sfSprite_setPosition(spika, (sfVector2f){event.mouseMove.x - 180, event.mouseMove.y - 180});
        }
        ////////////////////////////////////////////////
        sfSprite_setPosition(sbird, (sfVector2f){birdx, birdy});
        sfRenderWindow_setMouseCursorVisible(window, sfFalse);
        sfRenderWindow_drawSprite(window, sbg, NULL);
        sfRenderWindow_drawSprite(window, sbird, NULL);
        sfRenderWindow_drawSprite(window, spika, NULL);
        //////////////////////////////////////////////////////////

        time = sfTime_asSeconds(sfClock_getElapsedTime(clock));
        if (time >= 0.02) {
            birdx = birdx + 10;
            sfClock_restart(clock);
        }
        if (birdx >= 1960)
            birdx = -180;
        rect.left = rect.left + 110;
        if (rect.left == 330)
            rect.left = 0;
        sfSprite_setTextureRect(sbird, rect);
        sfRenderWindow_display(window);

    }
    sfTexture_destroy(pika);
    sfSprite_destroy(spika);
    sfTexture_destroy(bg);
    sfSprite_destroy(sbg);
    sfRenderWindow_destroy(window);
    return (0);
}
