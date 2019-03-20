/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"
#include <stdlib.h>

void bsbi(long int nb)
{
    int r;
    int i = 0;
    char *str = malloc(sizeof(char) * 10);

    while (nb != 0) {
        r = nb % 2;
        nb = nb / 2;
        if (r == 0)
            str[i] = '0';
        if (r == 1)
            str[i] = '1';
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
}
