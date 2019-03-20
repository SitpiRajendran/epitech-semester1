/*
** EPITECH PROJECT, 2019
** MUL Runner
** File description:
** Game Over ?
*/

#include "struct.h"

void endgame(int end, sfRenderWindow *window, sfSprite *sprite)
{
    sfEvent event;
    sfTexture *win = sfTexture_createFromFile("./rcr/win.png", NULL);
    sfTexture *lost = sfTexture_createFromFile("./rcr/lost.png", NULL);

    if (end == 1)
        sfSprite_setTexture(sprite, lost, sfFalse);
    else
        sfSprite_setTexture(sprite, win, sfFalse);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
            sfRenderWindow_close(window);
}

void endall(backg bg, chara chr, sfRenderWindow *window, int end)
{
    sfSprite *sprite = sfSprite_create();

    sfMusic_destroy(bg.music);
    sfMusic_destroy(chr.jump);
    while (sfRenderWindow_isOpen(window) && end != 84)
        endgame(end, window, sprite);
}

int gameover_ennemy(chara chr, ennemy enn)
{
    int end = 0;
    if ((170 < enn.one.x_obj && enn.one.x_obj < 300) && (chr.y_chara <= 560))
        end = 1;
    if ((170 < enn.two.x_obj && enn.two.x_obj < 300) && (chr.y_chara <= 540))
        end = 1;
    if ((170 < enn.three.x_obj && enn.three.x_obj < 300)
        && (chr.y_chara <= 590))
        end = 1;
    return (end);
}

int gameover_object(chara chr, obje obj, int vari)
{
    int end = 0;
    if ((170 < obj.x_obj) && obj.x_obj < 300)
        if ((obj.y_obj + vari) >= chr.y_chara + 335
            && chr.y_chara + 335 >= obj.y_obj)
            end = 1;
    return (end);
}

object gameover (chara chr, ennemy enn, object obj)
{
    if (gameover_ennemy(chr, enn) == 1)
        obj.end = 1;
    if (gameover_object(chr, obj.lava, 100) == 1)
        obj.end = 1;
    if (gameover_plat(chr, obj.plat) == 1)
        obj.end = 1;
    if (gameover_object(chr, obj.spike, 100) == 1)
        obj.end = 1;
    return (obj);
}