/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"
#include <stdlib.h>

void bsoct(long int nb)
{
    int r;
    int i = 0;
    char *str;

    if (nb < 0) {
        str = malloc(sizeof(char) * 11);
        my_putchar('-');
        nb = nb * (-1);
    } else
        str = malloc(sizeof(char) * 11);
    for (i; nb != 0; i++) {
        r = nb % 8;
        nb = nb / 8;
        if (r >= 0 && r <= 7)
            str[i] = r + 48;
    }
    str[i] = '\0';
    my_putstr(my_revstr(str));
}
