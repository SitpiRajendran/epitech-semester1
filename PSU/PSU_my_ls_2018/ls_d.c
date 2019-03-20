/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** simple ls
*/

#include "my_ls.h"

void ls_d(char *path)
{
    DIR *dir = opendir(path);

    ls_file_l(path);

    my_putstr(path, 0);
    my_putchar('\n');
    closedir(dir);
    exit (0);
}
