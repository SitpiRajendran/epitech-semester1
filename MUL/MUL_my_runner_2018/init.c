/*
** EPITECH PROJECT, 2018
** my runner
** File description:
** initialization
*/

#include "struct.h"

chara init_chara(chara chr)
{
    chr.t_chara = sfTexture_createFromFile("./rcr/sprite.png", NULL);
    chr.s_chara = sfSprite_create();
    chr.t_charadown = sfTexture_createFromFile("./rcr/sprite_slide.png", NULL);
    chr.s_charadown = sfSprite_create();
    chr.y_chara = 635;
    chr.clock = sfClock_create();
    chr.jump = sfMusic_createFromFile("./rcr/jump.ogg");
    sfSprite_setTexture(chr.s_chara, chr.t_chara, sfFalse);
    sfSprite_setPosition(chr.s_chara, (sfVector2f){60, chr.y_chara});
    return (chr);
}

obje init_obj(obje obj)
{
    obj.t_obj = sfTexture_createFromFile("./rcr/flight.png", NULL);
    obj.s_obj = sfSprite_create();
    obj.x_obj = -201;
    obj.clock = sfClock_create();
    sfSprite_setTexture(obj.s_obj, obj.t_obj, sfFalse);
    sfSprite_setPosition(obj.s_obj, (sfVector2f){60, obj.x_obj});
    return (obj);
}

ennemy init_ennemy(ennemy enn)
{
    enn.one = init_obj(enn.one);
    enn.two = init_obj(enn.two);
    enn.three = init_obj(enn.three);
    enn.end = 2;
    return (enn);
}

happn init_event(happn eve)
{
    eve.down = 0;
    eve.jump = 0;

    return (eve);
}