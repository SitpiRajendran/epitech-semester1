/*
** EPITECH PROJECT, 2018
** structure
** File description:
** my hunter
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

typedef struct vari_s
{
    sfTexture *bg;
    sfSprite *sbg;
    sfTexture *pika;
    sfSprite *spika;
    sfTexture *bird;
    sfSprite *sbird;
    sfTexture *lost;
    sfSprite *slost;
    sfText *score;
    sfClock *clock;
    sfClock *clock2;
    sfEvent event;
    sfFont *font;
    int birdx;
    int birdy;
    int vie;
    int points;
    float time;
    float time2;
    char *str;
    sfMusic *music;
} vari;

vari analyse_events(sfRenderWindow *window, sfEvent event, vari var);
vari init(vari var);
void draw(vari var, sfRenderWindow *window);
sfIntRect timer(vari *var, sfIntRect rect);
int my_strlen(char const *str);
char *my_revstr(char *str);
char *my_itoa(int nbr);
void gameover(vari var, sfRenderWindow *window);
int my_putstr(char const *str);
int help(char **ar);
