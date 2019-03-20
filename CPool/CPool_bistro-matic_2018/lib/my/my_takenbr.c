/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"
#include <stdlib.h>

char *my_takenbr(char *str)
{
    int i = 0;
    char *nstr = malloc(sizeof(char) * 100000);

    while (str[i] == '0') {
        i++;
    }
    str = newstr(str, i);
    i = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        nstr[i] = str[i];
        i++;
    }
    nstr[i] = '\0';
    return (nstr);
}
