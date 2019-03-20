/*
** EPITECH PROJECT, 2018
** MyHunter
** File description:
** Setting Sprite
*/

#include <SFML/Graphics.h>
#include "struct.h"

void setsprite(vari var)
{
    sfSprite_setTexture(var.sbg, var.bg, sfFalse);
    sfSprite_setTexture(var.spika, var.pika, sfFalse);
    sfSprite_setTexture(var.sbird, var.bird, sfFalse);
    sfSprite_setTexture(var.slost, var.lost, sfFalse);
    sfText_setFont(var.score, var.font);
    sfSprite_setScale(var.sbird, (sfVector2f){2, 2});
    sfMusic_play(var.music);
    sfMusic_setLoop(var.music, 1);
}
