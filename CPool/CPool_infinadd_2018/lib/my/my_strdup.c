/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** strdup
*/

#include <stdlib.h>
#include "./my.h"

char *my_strdup(char const *src)
{
    char *dest;
    int i;

    i = my_strlen(src);
    dest = malloc(sizeof(char) * (i + 1));
    my_strcpy(dest, src);
    return (dest);
}
