/*
** EPITECH PROJECT, 2019
** MUL Runner
** File description:
** Events analyser
*/

#include "struct.h"

stru jumping(stru su)
{
    if (su.eve.jump == 1) {
        sfSprite_setTexture(su.chr.s_chara, su.chr.t_chara, sfFalse);
        if (su.chr.y_chara >= 470)
            su.chr.y_chara -= 8;
        else {
            su.eve.jump = 0;
            su.eve.down = 1;
        }
    }
    if (su.eve.down == 1) {
        su.eve.jump = 0;
        if (su.chr.y_chara <= 635)
            su.chr.y_chara += 7;
        else
            su.eve.down = 0;
    }
    sfSprite_setPosition(su.chr.s_chara, (sfVector2f){60, su.chr.y_chara});
    return (su);
}

happn analyse_events(sfRenderWindow *win, chara chr, happn eve, sfEvent event)
{
    eve.real = 0;
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(win);
        if (event.key.code == sfKeySpace || event.key.code == sfKeyUp) {
            eve.jump = 1;
            eve.slide = 0;
            sfMusic_play(chr.jump);
        }
    }

    return (eve);
}