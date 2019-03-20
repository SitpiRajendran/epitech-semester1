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

void my_put_pixel(framebuffer_t *buffer, unsigned int x,
                  unsigned int y, sfColor color)
{
    buffer->pixels[0] = color.r;
    buffer->pixels[1] = color.g;
    buffer->pixels[2] = color.b;
    buffer->pixels[3] = color.a;
}

int main()
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfEvent event;
    sfFont *font;
    sfText* text;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window",
                                   sfFullscreen | sfClose, NULL);

    framebuffer = framebuffer_create(1920, 1080);
    texture = sfTexture_createFromFile("background.jpg", NULL);

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.type == sfEvtKeyPressed) {
                if (event.key.code == sfKeyEscape)
                    sfRenderWindow_close(window);
            }
            /* sfTexture_updateFromPixels(texture, framebuffer->pixels, */
            /*                            800, 600, 0, 0); */
            sfRenderWindow_clear(window, sfBlack);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            text = sfText_create();
            sfText_setString(text, "Hello SFML");
            sfText_setCharacterSize(text, 100);
            sfRenderWindow_display(window);
        }
    }
    sfRenderWindow_destroy(window);

    return (0);
}
