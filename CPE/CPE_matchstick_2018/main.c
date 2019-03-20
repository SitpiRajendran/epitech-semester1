/*
** EPITECH PROJECT, 2019
** MatchStick
** File description:
** main
*/

#include "matchstick.h"

int main(int ac, char **av)
{
    int line;
    int stick_max;
    int nb_max;
    int end;

    if (ac != 3) {
        write (2, "Not enough argument", 19);
        return (84);
    }
    line = my_getnbr(av[1]);
    stick_max = my_getnbr(av[2]);
    if (line < 2 || line > 99 || stick_max <= 0) {
        write (2, "Argument Invalid", 16);
        return (84);
    }
    nb_max = (line * 2) - 1;
    end = launchgame(line, stick_max, nb_max);
    return end;
}
