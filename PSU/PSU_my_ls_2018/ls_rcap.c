/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** simple ls
*/

#include "my_ls.h"

void print_lrcap(char **tab)
{
    my_putstr("\n\n", 0);
    for (int p = 0; tab[p][0] != '\0'; p++)
        ls_rcap(tab[p]);
}

char *my_strcat(char *dest, char const *scr)
{
    int f = 0;
    char *new = malloc(sizeof(char*) * (my_strlen(dest) + my_strlen(scr) + 1));
    int i = 0;

    if (scr == NULL)
        return (NULL);
    for (; dest[i] != '\0'; i++)
        new[i] = dest[i];
    new[i] = '\0';
    for (; new[f] != '\0'; f = f + 1);
    for (i = 0; scr[i] != '\0'; i++) {
        if (scr[i] != '\n') {
            new[f] = scr[i];
            f++;
        }
    }
    new[f] = '\0';
    return (new);
}

char **is_dir(int type, char **tab, char *npath, char *path)
{
    int i = 0;

    my_putstr(npath, 4);
    path = my_strcat(path, "/");
    if (type == 4) {
        while (tab[i][0] != '\0')
            i++;
        tab[i] = my_strcat(path, npath);
        i++;
    }
    tab[i + 1] = "\0";
    return (tab);
}

int ls_rcap(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;
    char **tab = malloc(sizeof(char *) * 500);

    box = ls_file(path, dir);
    stat(box->d_name, &sb);
    tab[0] = "\0";
    my_putstr(path, 0);
    my_putstr(":", 4);
    while (box != NULL) {
        if (box->d_name[0] != '.')
            tab = is_dir(box->d_type, tab, box->d_name, path);
        box = readdir(dir);
        stat(box->d_name, &sb);
    }
    print_lrcap(tab);
    closedir(dir);
    return (0);
}