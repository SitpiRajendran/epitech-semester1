/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"
#include <stdlib.h>

char *newstr(char const *str, int ni)
{
    int i = 0;
    char *nstr = malloc(sizeof(char) * my_strlen(str));

    while (str[ni + i] != '\0') {
        nstr[i] = str[ni + i];
        i++;
    }
    nstr[i] = '\0';

    return(nstr);
}
