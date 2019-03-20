/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** simple ls
*/

#include "my_ls.h"

void print_lrcapl(char **tab)
{
    my_putstr("\n", 0);
    for (int p = 0; tab[p][0] != '\0'; p++)
        ls_rcap_l(tab[p]);
}

char **is_dir_lr(int type, char **tab, char *npath, char *path)
{
    int i = 0;
    path = my_strcat(path, "/");
    ls_lr_file(my_strcat(path, npath), npath);
    while (tab[i][0] != '\0')
            i = i + 1;
    if (type == 4) {
        tab[i] = my_strcat(path, npath);
        i++;
    }
    tab[i] = "\0";
    return (tab);
}

int ls_rcap_l(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;
    char **tab = malloc(sizeof(char *) * 1000);

    box = ls_file_lr(path);
    box = readdir(dir);
    tab[0] = "\0";
    my_putstr(path, 0);
    my_putstr(":", 4);
    while (box != NULL) {
        stat(my_strcat(my_strcat(path, "/"), box->d_name), &sb);
        if (box->d_name[0] != '.')
            tab = is_dir_lr(box->d_type, tab, box->d_name, path);
        box = readdir(dir);
    }
    print_lrcapl(tab);
    closedir(dir);
    return (0);
}