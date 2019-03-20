/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** ls r
*/

#include "my_ls.h"

void ls_r(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;
    int i = 0;
    char **tab = malloc(sizeof(char*) * 500);

    ls_file(path, dir);
    box = readdir(dir);
    stat(box->d_name, &sb);
    while (box != NULL) {
        if (box->d_name[0] != '.') {
            tab[i] = my_strdup(box->d_name);
            i++;
        }
        box = readdir(dir);
    }
    for (i = i - 1; i >= 0; i--)
        my_putstr(tab[i], 4);
    closedir(dir);
    exit (0);
}