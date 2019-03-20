/*
** EPITECH PROJECT, 2019
** MUL Runner
** File description:
** ennemy
*/

#include "struct.h"

ennemy driveflight(ennemy enn)
{
    if (enn.one.x_obj >= -200)
        enn.one.x_obj -= 10;
    if (enn.two.x_obj >= -200)
        enn.two.x_obj -= 10;
    if (enn.three.x_obj >= -200)
        enn.three.x_obj -= 10;
    sfSprite_setPosition(enn.one.s_obj, (sfVector2f){enn.one.x_obj, 630});
    sfSprite_setPosition(enn.two.s_obj, (sfVector2f){enn.two.x_obj, 600});
    sfSprite_setPosition(enn.three.s_obj, (sfVector2f){enn.three.x_obj, 660});
    return (enn);
}

ennemy launchflight(ennemy enn)
{
    if (enn.one.x_obj < -200)
        enn.one.x_obj = 1921;
    else if (enn.two.x_obj < -200)
        enn.two.x_obj = 1921;
    else if (enn.three.x_obj < -200)
        enn.three.x_obj = 1921;
    return (enn);
}

ennemy timer_ennemy(ennemy enn)
{
    int timer = rand() / 10000000;

    if (timer % 978 == 0)
        enn = launchflight(enn);
    enn = driveflight(enn);
    return (enn);
}
