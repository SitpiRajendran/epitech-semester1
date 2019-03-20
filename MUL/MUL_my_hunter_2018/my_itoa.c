/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdlib.h>
#include "struct.h"

char *my_itoa(int nbr)
{
    int i = 0;
    char *str = malloc(sizeof(char) * 9);

    while (nbr > 9) {
        str[i] = (nbr % 10) + 48;
        nbr = (nbr - (nbr % 10)) / 10;
        i++;
    }
    str[i] = nbr + 48;
    str[i + 1] = '\0';
    str = my_revstr(str);
    return (str);
}
