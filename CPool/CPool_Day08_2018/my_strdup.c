/*
** EPITECH PROJECT, 2018
** D8 - T1 - strdup
** File description:
** allocates memory and copies the string
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int lon = 0;

    lon = my_strlen(src);
    dest = malloc(lon + 1);
    dest = my_strcpy(dest, src);
    return (dest);
}

