/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** BSQ - Main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void max(int **arr, char *str, int nb_rows, int nb_cols)
{
    int min = 0;
    int save_i = 0;
    int save_j = 0;
    char **fina = load_str_in_mem(str, nb_rows, nb_cols);

    for (int j = 0; j != nb_rows; j++) {
        for (int i = 0; i != nb_cols; i++) {
            save_i = (arr[j][i] > min) ? i : save_i;
            save_j = (arr[j][i] > min) ? j : save_j;
            min = (arr[j][i] > min) ? arr[j][i] : min;
        }
    }
    for (int j = save_j; j != (save_j - min); j = j - 1) {
        for (int i = save_i; i != (save_i - min); i = i - 1)
            fina[j][i] = (fina[j][i] == '\n') ? '\n' : 'x';
    }
    for (int j = 0; j != nb_rows; j++)
        write(1, fina[j], nb_cols);
    free (fina);
    free (str);
}

int intdupmd(char str, int **arr, int i, int j)
{
    if (str == 'o')
        return (0);
    if (str == '.') {
        if (i != 0 && j != 0)
            return (min(arr[j - 1][i], arr[j][i - 1], arr[j - 1][i - 1]) + 1);
        return (1);
    }
    return (0);
}

int **str2arr(char *str, int nb_rows, int nb_cols)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int **arr = malloc(sizeof(int *) * (nb_rows + 1));

    for (i = 0; i != nb_rows; i++)
        arr[i] = malloc(sizeof(int) * (nb_cols + 1));
    while (str[k] != '\0' && str[k] != '\n')
        k = k + 1;
    k = k + 1;
    for (j = 0; j != nb_rows; j++) {
        for (i = 0; i != nb_cols; i++) {
            arr[j][i] = intdupmd(str[k], arr, i ,j);
            k++;
        }
    }
    return (arr);
}

int main(int ac, char **av)
{
    struct stat sb;
    int size;
    char *str;
    int colons;
    int **arr;

    if (ac != 2 || stat(av[1], &sb) == -1) {
        write(2, "Error", 6);
        return (84);
    }

    size = sb.st_size;
    str = my_strismap(orstr(av[1], size));
    colons = my_strcol(str);
    arr = str2arr(str, my_getnbr(str), colons);
    max(arr, str, my_getnbr(str), colons);
//    my_putchar('\n');
    free (arr);
    return (0);
}
