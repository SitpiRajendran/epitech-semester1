/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** h
*/

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <inttypes.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

typedef struct options_b
{
    int l;
    int R;
    int d;
    int r;
    int t;
    int a;
} option_t;

void my_putchar(char c);
void my_putstrtime(char *str);
long int my_put_nbrld(long int nb);
void my_putstr(char *str, int test);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *scr);
int my_strlen(char const *str);
void simple_ls(char *path);
void ls_l(char *path);
void ls_l_file(char *path);
void ls_lr_file(char *path, char *name);
struct dirent *ls_file_lr(char *path);
void ls_la(char *path);
void ls_d(char *path);
void ls_a(char *path);
void ls_r(char *path);
int ls_rcap(char *path);
int ls_rcap_l(char *path);
void lst(char *path);
char **is_dir(int type, char **tab, char *npath, char *path);
int options(char *option, char *path);
void print_lrcap(char **tab);
struct dirent *ls_file(char *path, DIR *dir);
struct dirent *ls_file_l(char *path);
struct dirent *ls_file_ld(char *path);