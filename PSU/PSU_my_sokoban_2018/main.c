/*
** EPITECH PROJECT, 2018
** My Sokoban
** File description:
** Main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        error("only one argument needed");
    sokoban(av[1]);
    return (0);
}
