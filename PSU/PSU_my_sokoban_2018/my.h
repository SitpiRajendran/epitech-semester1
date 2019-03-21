/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** h struc/ include / etcc..
*/

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct uct_s
{
    int save_x;
    int save_y;
    int x;
    int p;
    int o;
    int end;
    int nb_rows;
    int nb_cols;
    char *str;
    char **arr;
    char **ori;
} uct;

void error(char *str);
int help(void);
void sokoban(char *filepath);
char *mapverify(char *str);
char *init(char *filepath);
uct strtoarr(char *buff, uct var);
int my_strcol(char *str);
int my_strrow(char *str);
void gamelaunch(uct var);
uct win(uct var);
uct lost(uct var);
uct verifp(char c, int x, int y, uct var);
uct verifo(uct var);
uct moves(int key, uct var);
uct move_up(uct var);
uct move_dw(uct var);
uct move_lf(uct var);
uct move_rt(uct var);
void color(void);
