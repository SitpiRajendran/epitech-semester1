/*
** EPITECH PROJECT, 2018
** my runner
** File description:
** draw
*/

#include "struct.h"

void draw(stru su, sfRenderWindow *window)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_drawSprite(window, su.bg.s_notmv, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_back, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_middle, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_front, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_lowland, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_road, NULL);
    sfRenderWindow_drawSprite(window, su.chr.s_chara, NULL);
    sfRenderWindow_drawSprite(window, su.bg.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.enn.one.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.enn.two.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.enn.three.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.obj.lava.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.obj.spike.s_obj, NULL);
    sfRenderWindow_drawSprite(window, su.obj.plat.s_obj, NULL);
}
