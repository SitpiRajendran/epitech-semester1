/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** error handling
*/

#include "matchstick.h"

int *print_turn(int nb, int la, int stick_max, int *tab)
{
    if (stick_max < 0) {
        write(1, "Player removed ", 15);
        my_put_nbr(nb);
        write(1, " match(es) from line ", 21);
        my_put_nbr(la);
        write (1, "\n", 1);
        tab[la] = tab[la] - nb;
    } else {
        write(1, "Error: you cannot remove more than ", 35);
        my_put_nbr(stick_max);
        write(1, " matches per turn\n", 18);
    }
    return (tab);
}

int line_error(int li)
{
    char *str;
    int la = 77680;
    int error = 0;

    while (la > li || la < 1) {
        write(1, "Line: ", 6);
        str = get_next_line(0);
        if (str == NULL)
            return (-77680);
        if (my_str_isnum(str) == 0) {
            write(1, "Error: invalid input (positive number expected)\n", 48);
            error = 1;
        } else
            la = my_getnbr(str);
        if (error == 0 && la > li)
            write(1, "Error: this line is out of range\n", 33);
        if (error == 0 && la < 1)
            write(1, "Error: this line is out of range\n", 33);
    }
    return la;
}

int stick_error(int stick_max, int *tab, int la)
{
    char *str;
    int nb = stick_max;

    if (la == -77680)
        return -77680;
    write(1, "Matches: ", 9);
    if ((str = get_next_line(0)) == NULL)
        return (-77680);
    (my_str_isnum(str) == 0) ? write(1, BAD_INPUT, 49) : (nb = my_getnbr(str));
    if (nb > stick_max) {
        tab = print_turn(-1, -1, stick_max, tab);
        return nb;
    }
    if (nb > tab[la])
        write(1, "Error: not enough matches on this line\n", 39);
    if (nb < 1) {
        write(1, "Error: you have to remove at least one match\n", 45);
        nb = 10000;
    }
    return nb;
}
