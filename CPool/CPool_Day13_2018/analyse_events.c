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
#include "display_framebuffer.h"
#include <stdio.h>

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window);
    }
    if (event.type == sfEvtMouseButtonPressed)
        printf("Mouse : bouton = %d / X = %d / Y = %d\n", event.mouseButton.button, event.mouseButton.x, event.mouseButton.y);
}
