/*
** EPITECH PROJECT, 2018
** my runner
** File description:
** initialization
*/

#include "struct.h"

backg next_backbg(backg bg)
{
    bg.r_back = 0;
    bg.r_middle = 0;
    bg.r_lowland = 0;
    bg.r_front = 0;
    bg.r_road = 0;
    bg.y_obj = 0;
    sfSprite_setTexture(bg.s_notmv, bg.notmv, sfFalse);
    sfSprite_setTexture(bg.s_back, bg.back, sfFalse);
    sfSprite_setTexture(bg.s_middle, bg.middle, sfFalse);
    sfSprite_setTexture(bg.s_lowland, bg.lowland, sfFalse);
    sfSprite_setTexture(bg.s_front, bg.front, sfFalse);
    sfSprite_setTexture(bg.s_road, bg.road, sfFalse);
    sfSprite_setTexture(bg.s_obj, bg.t_obj, sfFalse);
    sfMusic_play(bg.music);
    sfMusic_setLoop(bg.music, 1);
    return (bg);
}

backg init_backg(backg bg)
{
    bg.clock = sfClock_create();
    bg.notmv = sfTexture_createFromFile("./rcr/background.png", NULL);
    bg.back = sfTexture_createFromFile("./rcr/builds.png", NULL);
    bg.middle = sfTexture_createFromFile("./rcr/upland.png", NULL);
    bg.lowland = sfTexture_createFromFile("./rcr/lowland.png", NULL);
    bg.front = sfTexture_createFromFile("./rcr/front.png", NULL);
    bg.road = sfTexture_createFromFile("./rcr/road.png", NULL);
    bg.t_obj = sfTexture_createFromFile("./rcr/front.png", NULL);
    bg.music = sfMusic_createFromFile("./rcr/music.ogg");
    bg.s_notmv = sfSprite_create();
    bg.s_back = sfSprite_create();
    bg.s_middle = sfSprite_create();
    bg.s_front = sfSprite_create();
    bg.s_lowland = sfSprite_create();
    bg.s_road = sfSprite_create();
    bg.s_obj = sfSprite_create();
    bg = next_backbg(bg);
    return (bg);
}

object init_object(object obj)
{
    obj.lava.t_obj = sfTexture_createFromFile("./rcr/lava.png", NULL);
    obj.spike.t_obj = sfTexture_createFromFile("./rcr/spike.png", NULL);
    obj.plat.t_obj = sfTexture_createFromFile("./rcr/plat.png", NULL);
    obj.lava.s_obj = sfSprite_create();
    obj.spike.s_obj = sfSprite_create();
    obj.plat.s_obj = sfSprite_create();
    obj.lava.x_obj = -201;
    obj.spike.x_obj = -201;
    obj.plat.x_obj = -201;
    obj.lava.y_obj = 970;
    obj.spike.y_obj = 880;
    obj.plat.y_obj = 850;
    obj.end = 2;
    obj.clock = sfClock_create();
    sfSprite_setTexture(obj.lava.s_obj, obj.lava.t_obj, sfFalse);
    sfSprite_setTexture(obj.spike.s_obj, obj.spike.t_obj, sfFalse);
    sfSprite_setTexture(obj.plat.s_obj, obj.plat.t_obj, sfFalse);
    sfSprite_setPosition(obj.lava.s_obj, (sfVector2f){970, obj.lava.x_obj});
    sfSprite_setPosition(obj.spike.s_obj, (sfVector2f){880, obj.spike.x_obj});
    sfSprite_setPosition(obj.plat.s_obj, (sfVector2f){600, obj.plat.x_obj});
    return (obj);
}
