/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"
#include <stdlib.h>

void bshex2(long int nb)
{
    int r;
    int i = 0;
    char *str;

    if (nb < 0) {
        str = malloc(sizeof(char) * 10);
        my_putchar('-');
        nb = nb * (-1);
    } else
        str = malloc(sizeof(char) * 11);
    for (i; nb != 0; i++) {
        r = nb % 16;
        nb = nb / 16;
        if (r >= 0 && r <= 9)
            str[i] = r + 48;
        if (r >= 10 && r <= 15)
            str[i] = r + 55;
    }
    str[i] = '\0';
    my_putstr(my_revstr(str));
}
