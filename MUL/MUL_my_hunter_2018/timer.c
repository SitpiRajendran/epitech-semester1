/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** timer
*/

#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "struct.h"

sfIntRect timer(vari *var, sfIntRect rect)
{
    var->time = sfTime_asSeconds(sfClock_getElapsedTime(var->clock));
    var->time2 = sfTime_asSeconds(sfClock_getElapsedTime(var->clock2));
    if (var->time >= 0.000001) {
        var->birdx += 20;
        sfClock_restart(var->clock);
    }
    if (var->birdx >= 1960){
        var->birdx = -180;
        var->birdy = rand() % 900;
        var->vie -= 1;
    }
    if (var->time2 > 0.2){
        rect.left += 110;
        if (rect.left == 550)
            rect.left = 0;
        sfClock_restart(var->clock2);
    }
    sfSprite_setTextureRect(var->sbird, rect);
    return (rect);
}
