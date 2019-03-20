/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** initialization
*/

#include "struct.h"

void setsprite(vari var);

vari init(vari var)
{
    var.clock = sfClock_create();
    var.clock2 = sfClock_create();
    var.score= sfText_create();
    var.birdx = -180;
    var.birdy = rand() % 800 + 15;
    var.vie = 3;
    var.bg = sfTexture_createFromFile("./ressource/background.png", NULL);
    var.pika = sfTexture_createFromFile("./ressource/cursor.png", NULL);
    var.bird = sfTexture_createFromFile("./ressource/a13.png", NULL);
    var.lost = sfTexture_createFromFile("./ressource/gameover.png", NULL);
    var.font = sfFont_createFromFile("./ressource/font.ttf");
    var.music = sfMusic_createFromFile("./ressource/music.ogg");
    var.slost= sfSprite_create();
    var.sbg = sfSprite_create();
    var.spika = sfSprite_create();
    var.sbird = sfSprite_create();
    var.points= 0;
    var.str = "0";
    setsprite(var);
    return (var);
}
