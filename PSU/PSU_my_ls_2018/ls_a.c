/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** simple ls
*/

#include "my_ls.h"

void ls_a(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;

    ls_file(path, dir);

    box = readdir(dir);
    stat(box->d_name, &sb);

    while (box != NULL) {
        my_putstr(box->d_name, 1);
        box = readdir(dir);
        stat(box->d_name, &sb);
    }
    closedir(dir);
    exit (0);
}
