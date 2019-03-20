/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018-T2-my_putstr
** File description:
** show characters of a string one by one
*/

#include "struct.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str) + 1);
    return (0);
}
