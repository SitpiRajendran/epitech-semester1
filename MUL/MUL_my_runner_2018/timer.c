/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** timer
*/

#include "struct.h"

sfIntRect timer_chara(chara chr, sfIntRect rect)
{
    float timef = sfTime_asMicroseconds(sfClock_getElapsedTime(chr.clock));;
    int timer = ((int) timef) / 10000;
    if (timer > 7 && chr.y_chara >= 630){
        rect.left += 580;
        if (rect.left == 3480)
            rect.left = 0;
        sfClock_restart(chr.clock);
    }
    sfSprite_setTextureRect(chr.s_chara, rect);
    return (rect);
}

backg verify_backg(backg bg)
{
    if (bg.r_road <= -3839)
        bg.r_road = 0;
    if (bg.r_front <= -3839)
        bg.r_front = 0;
    if (bg.r_lowland <= -3839)
        bg.r_lowland = 0;
    if (bg.r_middle <= -3839)
        bg.r_middle = 0;
    if (bg.r_back <= -3839)
        bg.r_back = 0;
    if (bg.y_obj <= -3839)
        bg.y_obj = 0;
    sfSprite_setPosition(bg.s_back, (sfVector2f){bg.r_back, 0});
    sfSprite_setPosition(bg.s_middle, (sfVector2f){bg.r_middle, 0});
    sfSprite_setPosition(bg.s_lowland, (sfVector2f){bg.r_lowland, 0});
    sfSprite_setPosition(bg.s_front, (sfVector2f){bg.r_front, 0});
    sfSprite_setPosition(bg.s_road, (sfVector2f){bg.r_road, 0});
    sfSprite_setPosition(bg.s_obj, (sfVector2f){bg.y_obj, 150});
    return (bg);
}

backg timer_backg(backg bg)
{
    float timef = sfTime_asMicroseconds(sfClock_getElapsedTime(bg.clock));
    int timer = ((int) timef) * 100;
    if (timer % 10 == 0) {
        bg.y_obj -= 20;
        bg.r_road -= 15;
        bg.r_front -= 10;
        bg.r_lowland -= 8;
    }
    if (timer % 20 == 0)
        bg.r_middle -= 4;
    if (timer % 50 == 0) {
        bg.r_back -= 1;
        sfClock_restart(bg.clock);
    }
    bg = verify_backg(bg);
    return (bg);
}
