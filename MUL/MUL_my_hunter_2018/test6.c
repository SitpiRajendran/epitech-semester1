/*
** EPITECH PROJECT, 2018
** D13 - T1-2 - pixels array
** File description:
** pixel array
*/

#include "struct.h"

int main(int ac, char **ar)
{
    vari var;
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    sfIntRect rect = {0, 0, 110, 110};

//    if (ac == 2)
//        return (help(ar));
    var = init(var);
    window = sfRenderWindow_create(mode, "Art13", sfFullscreen | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &var.event))
            var = analyse_events(window, var.event, var);
        draw(var, window);
        rect = timer(&var, rect);
        gameover(var, window);
        sfRenderWindow_display(window);
    }
    sfMusic_destroy(var.music);
    sfRenderWindow_destroy(window);
    return (0);
}
