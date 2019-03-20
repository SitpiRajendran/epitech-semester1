/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** gameover
*/

#include "struct.h"

void gameover(vari var, sfRenderWindow *window)
{
    sfIntRect three = {0, 0, 1920, 1080};
    sfIntRect two = {0, 1080, 1920, 1080};
    sfIntRect one = {0, 2160, 1920, 1080};
    sfIntRect zero = {0, 3240, 1920, 1080};

    sfRenderWindow_drawSprite(window, var.slost, NULL);
    if (var.vie == 3)
        sfSprite_setTextureRect(var.slost, three);
    if (var.vie == 2)
        sfSprite_setTextureRect(var.slost, two);
    if (var.vie == 1)
        sfSprite_setTextureRect(var.slost, one);
    if (var.vie <= 0){
        sfSprite_setTextureRect(var.slost, zero);
        sfText_setPosition(var.score, (sfVector2f){32, 30});
        sfRenderWindow_drawText(window, var.score, NULL);
    }
}
