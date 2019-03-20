/*
** EPITECH PROJECT, 2018
** D13 - T1-2 - pixels array
** File description:
** pixel array
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include "display_framebuffer.h"

void analyse_events(sfRenderWindow *window, sfEvent event);

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *fbt = malloc(sizeof(framebuffer_t));
    sfUint8 *pixels;

    pixels = malloc(width * height * 4);

    fbt->width = width;
    fbt->height = height;
    fbt->pixels = pixels;

    return (fbt);
}

int main()
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;

    sfTexture *bg;
    bg = sfTexture_createFromFile("background.jpg", NULL);
    sfSprite *sbg;
    sbg = sfSprite_create();

    sfEvent event;
    framebuffer_t *framebuffer;

    sfTexture *pika;
    pika = sfTexture_createFromFile("Pikachu.png", NULL);
    sfSprite *spika;
    spika = sfSprite_create();

    window = sfRenderWindow_create(mode, "SFML window",
                                   sfFullscreen | sfClose, NULL);

    framebuffer = framebuffer_create(1920, 1080);

    sfSprite_setTexture(sbg, bg, sfFalse);
    sfSprite_setTexture(spika, pika, sfFalse);

    sfSprite_setScale(spika, (sfVector2f){0.2, 0.2});

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_events(window, event);
            sfRenderWindow_clear(window, sfBlack);
            if (event.type == sfEvtMouseMoved)
                sfSprite_setPosition(spika, (sfVector2f){event.mouseMove.x - 180, event.mouseMove.y - 180});
            sfRenderWindow_drawSprite(window, sbg, NULL);
            sfRenderWindow_drawSprite(window, spika, NULL);
            sfRenderWindow_display(window);
        }
    }
    sfTexture_destroy(pika);
    sfSprite_destroy(spika);
    sfTexture_destroy(bg);
    sfSprite_destroy(sbg);
    sfRenderWindow_destroy(window);
    return (0);
}
