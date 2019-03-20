/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** 4.2
*/

#include <stdlib.h>
#include "my.h"

char **load_str_in_mem(char *buff, int nb_rows, int nb_cols)
{
    int k = 0;
    char **arr = malloc(sizeof(char *) * (nb_rows + 1));

    for (int i = 0; i != nb_rows; i++)
        arr[i] = malloc(sizeof(char) * (nb_cols + 1));

    for (k = 0; buff[k] != '\n'; k++);
    k++;
    for (int j = 0; j != nb_rows; j++) {
        for (int i = 0; i != nb_cols; i++) {
            if (buff[k] == '\0')
                arr[j][i] = '\n';
            else
                arr[j][i] = buff[k];
            k++;
        }
    }
    return (arr);
}
