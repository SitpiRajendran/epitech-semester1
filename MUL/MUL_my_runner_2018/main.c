/*
** EPITECH PROJECT, 2018
** my runner
** File description:
** main
*/

#include "struct.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "./my_runner: bad arguments: only 1 is required\n", 47);
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        write(1, "my_runner - Created by Sitpi {EPITECH} 2023\n\n", 45);
        write(1, "USAGE\n ./my_runner map.txt\n\nOPTIONS", 35);
        write(1, "\n -h \t\t print the usages and quit.\n\n", 37);
        write(1, "USER INTERACTIONS\n  space_key or up : Jump\n", 43);
        write(1, "  down : (NOT AVALAIBALE YET)\n", 30);
        return (0);
    }
    if (launchgame(av[1]) == 84)
        return (84);
    return (0);
}
