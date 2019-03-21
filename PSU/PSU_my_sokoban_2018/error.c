/*
** EPITECH PROJECT, 2018
** my oskoban
** File description:
** Error Exit
*/

#include "my.h"

void error(char *str)
{
    write(2, "Error", 6);
    printf("%s", str);
    exit (84);
}
