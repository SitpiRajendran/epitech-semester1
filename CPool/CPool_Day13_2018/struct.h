/*
** EPITECH PROJECT, 2018
** structure
** File description:
** my hunter
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics.h>

struct vari
{
    sfRenderWindow *window;
    sfEvent *event;
    sfTexture *bg;
    sfSprite *sbg;
    sfTexture *pika;
    sfSprite *spika;
    sfTexture *bird;
    sfSprite *sbird;
    sfIntRect rect;
    sfClock *clock;
    int *birdx;
    int *birdy;
    float *time;
};
typedef struct vari vari;
