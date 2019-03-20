/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** simple ls
*/

#include "my_ls.h"

void simple_ls(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;
    int i = 1;

    box = ls_file(path, dir);
    stat(box->d_name, &sb);

    while (box != NULL) {
        if (box->d_name[0] != '.') {
            my_putstr(box->d_name, 1);
            (i % 4 == 0) ? my_putchar('\n') : my_putstr(" \t", 0);
            i++;
        }
        box = readdir(dir);
        stat(box->d_name, &sb);
    }
    my_putchar('\n');
    closedir(dir);
    exit (0);
}