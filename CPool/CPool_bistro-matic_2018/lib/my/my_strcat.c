/*
** EPITECH PROJECT, 2018
** D7 - T2 - strcat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *scr)
{
    int i = 0;
    int f = 0;

    while (dest[f] != '\0') {
        f = f + 1;
    }
    while (scr[i] != '\0') {
        dest[f] = scr[i];
        i++;
        f++;
    }
    dest[f] = '\0';
    return (dest);
}
