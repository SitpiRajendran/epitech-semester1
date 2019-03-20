/*
** EPITECH PROJECT, 2018
** structure
** File description:
** my hunter
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

typedef struct trash_s
{
    sfTexture *back;
    sfSprite *s_back;
    int r_back;

    sfTexture *middle;
    sfSprite *s_middle;
    int r_middle;

    sfTexture *lowland;
    sfSprite *s_lowland;
    int r_lowland;

    sfTexture *front;
    sfSprite *s_front;
    int r_front;

    sfTexture *road;
    sfSprite *s_road;
    int r_road;

    sfTexture *t_obj;
    sfSprite *s_obj;
    int r_obj;
    int y_obj;

    sfTexture *notmv;
    sfSprite *s_notmv;

    sfClock *clock;
    sfMusic *music;
} backg;

typedef struct chara_s
{
    sfTexture *t_chara;
    sfSprite *s_chara;
    sfTexture *t_charadown;
    sfSprite *s_charadown;
    sfMusic *jump;
    int y_chara;
    sfClock *clock;
} chara;

typedef struct obje_s
{
    sfTexture *t_obj;
    sfSprite *s_obj;
    int x_obj;
    int y_obj;
    sfClock *clock;
} obje;


typedef struct enemmy_s
{
    obje one;
    obje two;
    obje three;
    int end;
} ennemy;

typedef struct object_s
{
    obje lava;
    obje spike;
    obje plat;
    int end;
    sfClock *clock;
} object;

typedef struct event_s
{
    int jump;
    int down;
    int slide;
    int getup;
    int real;
} happn;

typedef struct struct_s
{
    backg bg;
    chara chr;
    happn eve;
    ennemy enn;
    object obj;
} stru;

char *my_itoa(int nbr);
char *my_revstr(char *str);
int my_strlen(char const *str);

char *orstr(char *filepath);
char *my_strismap(char *str);

int launchgame(char *path);

backg init_backg(backg bg);
void draw(stru su, sfRenderWindow *window);
backg timer_backg(backg bg);

chara init_chara(chara chr);
sfIntRect timer_chara(chara chr, sfIntRect rect);

happn init_event(happn eve);
happn analyse_events(sfRenderWindow *win, chara chr, happn eve, sfEvent event);
stru jumping(stru su);

obje init_obj(obje obj);
ennemy init_ennemy(ennemy enn);
ennemy timer_ennemy(ennemy enn);

object init_object(object obj);
object timer_obj(object obj, char *str);

object gameover (chara chr, ennemy enn, object obj);
int gameover_plat(chara chr, obje obj);
void endall(backg bg, chara chr, sfRenderWindow *window, int end);
void endgame(int end, sfRenderWindow *window, sfSprite *sprite);