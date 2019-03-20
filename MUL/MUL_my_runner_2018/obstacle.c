/*
** EPITECH PROJECT, 2019
** MUL Runner
** File description:
** obstacle
*/

#include "struct.h"

obje driveobj(obje obj)
{
    if (obj.x_obj >= -200)
        obj.x_obj -= 15;
    sfSprite_setPosition(obj.s_obj, (sfVector2f){obj.x_obj, obj.y_obj});
    return (obj);
}

obje launchobj(obje obj)
{
    if (obj.x_obj < -200)
        obj.x_obj = 1921;
    return (obj);
}

object timer_obj(object obj, char *str)
{
    static int i = 0;
    float timef = sfTime_asMicroseconds(sfClock_getElapsedTime(obj.clock));;
    int timer = ((int) timef) / 10000;

    if (timer >= 120) {
        if (str[i] == '1')
            obj.lava = launchobj(obj.lava);
        if (str[i] == '2')
            obj.spike = launchobj(obj.spike);
        if (str[i] == '3')
            obj.plat = launchobj(obj.plat);
        i++;
        if (str[i] == '4')
            obj.end = 3;
        sfClock_restart(obj.clock);
    }
    obj.lava = driveobj(obj.lava);
    obj.spike = driveobj(obj.spike);
    obj.plat = driveobj(obj.plat);
    return (obj);
}

int gameover_plat(chara chr, obje obj)
{
    int end = 0;
    if ((170 < obj.x_obj) && obj.x_obj < 300)
        if ((chr.y_chara + 150) > obj.y_obj - 150)
            end = 1;
    return (end);
}