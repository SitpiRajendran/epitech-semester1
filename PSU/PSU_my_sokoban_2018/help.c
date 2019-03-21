/*
** EPITECH PROJECT, 2018
** My Sokoban
** File description:
** Help
*/

#include "my.h"

int help(void)
{
    write(1, "USAGE\n", 7);
    write(1, "     ./my_sokoban map\n", 23);
    write(1, "DESCRIPTION\n", 13);
    write(1, "     map file representing the warehouse map", 45);
    write(1, "containing ‘#’ for walls,\n", 31);
    write(1, "         ‘P’ for the player, ‘X’ for boxes and ‘O’", 63);
    write(1, "for storage locations\n", 23);
    exit (0);
}