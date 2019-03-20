/*
** EPITECH PROJECT, 2019
** lib
** File description:
** str duplicate
*/

#include "my_ls.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    char *dest;
    int i;

    i = my_strlen(src);
    dest = malloc(sizeof(char) * (i + 1));
    my_strcpy(dest, src);
    return (dest);
}