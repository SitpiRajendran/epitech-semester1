/*
** EPITECH PROJECT, 2018
** D8 - T2 - concat params
** File description:
** arguments into a single string
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int lon = 0;
    char *str;

    while (i < argc) {
        lon = lon + 1 + my_strlen(argv[i]);
        i += 1;
    }
    i = 0;
    str = malloc(sizeof(char) * lon + 1);
    while (i != argc) {
        if (i == 0)
            my_strcpy(str, argv[i]);
        else
            my_strcat(str, argv[i]);
        my_strcat(str, "\n");
        i++;
    }
    str[lon] = '\0';
    return (str);
}
