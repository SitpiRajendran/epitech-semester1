/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** ls_t
*/

#include "my_ls.h"

char **swap_elem_str(int index1, int index2, char **tab, long int *array)
{
    char *str;

    if (array[index1] > array[index2]) {
        str = tab[index1];
        tab[index1] = tab[index2];
        tab[index2] = str;
    }
    return (tab);
}

long int *swap_elem(long int *array, int index1, int index2)
{
    long int save;

    if (array[index1] > array[index2]) {
        save = array[index1];
        array[index1] = array[index2];
        array[index2] = save;
    }
    return (array);
}

void bubble_sort_array(long int *array, int size, char **tab)
{
    int modif = 1;

    while (modif !=0) {
        modif = 0;
        for (int i = 0; i < size - 1; i++) {
            (array[i] > array[i + 1]) ? (modif = 1) : (modif = modif);
            tab = swap_elem_str(i, i + 1, tab, array);
            array = swap_elem(array, i, i + 1);
        }
    }
    for (size = size - 1; size >= 0; size--)
        my_putstr(tab[size], 4);
}

void lst(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;
    int i = 0;
    char **tab = malloc(sizeof(char*) * 500);
    long int *itab = malloc(sizeof(long int) * 500);;

    box = ls_file(path, dir);
    while (box != NULL) {
        stat(box->d_name, &sb);
        if (box->d_name[0] != '.') {
            tab[i] = my_strdup(box->d_name);
            itab[i] = sb.st_mtime;
            i++;
        }
        box = readdir(dir);
    }
    bubble_sort_array(itab, i, tab);
    closedir(dir);
    exit (0);
}
