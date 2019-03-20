/*
** EPITECH PROJECT, 2018
** my runner
** File description:
** main
*/

#include "struct.h"

void print_text(sfRenderWindow *window)
{
    static int count = 0;
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("./rcr/font.ttf");

    sfText_setFont(text, font);
    sfText_setString(text, " Distance :");
    sfRenderWindow_drawText(window, text, NULL);
    sfText_setPosition(text, (sfVector2f){130, 0});
    sfText_setString(text, my_itoa(count / 10));
    sfRenderWindow_drawText(window, text, NULL);
    count++;
}

stru boxwhile(stru su, sfRenderWindow *window, char *map)
{
    su = jumping(su);
    su.bg = timer_backg(su.bg);
    su.enn = timer_ennemy(su.enn);
    draw(su, window);
    su.obj = timer_obj(su.obj, map);
    su.obj = gameover(su.chr, su.enn, su.obj);
    print_text(window);
    sfRenderWindow_display(window);
    return (su);
}

stru init_all(stru su)
{
    su.bg = init_backg(su.bg);
    su.chr = init_chara(su.chr);
    su.eve = init_event(su.eve);
    su.enn = init_ennemy(su.enn);
    su.obj = init_object(su.obj);
    return (su);
}

int launchgame(char *path)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfIntRect rect = {0, 0, 384, 580};
    sfEvent event;
    stru su = init_all(su);
    char *map = my_strismap(orstr(path));

    window = sfRenderWindow_create(mode, "Run", sfFullscreen | sfClose, NULL);
    if (map == NULL) {
        endall(su.bg, su.chr, window, 84);
        return (84);
    }
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window) && su.obj.end == 2) {
        while (sfRenderWindow_pollEvent(window, &event))
            su.eve = analyse_events(window, su.chr, su.eve, event);
        su = boxwhile(su, window, map);
        rect = timer_chara(su.chr, rect);
    }
    endall(su.bg, su.chr, window, su.obj.end);
    return (0);
}