/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** launchgame
*/

#include "matchstick.h"

int is_end(int line, int *tab, int nb_max)
{
    int finish = 1;

    for (int i = 0; i != line + 1; i++)
        (tab[i] != 0) ? (finish = 0) : (finish = finish);
    if (finish == 1) {
        print_tab(tab, nb_max, line);
        write(1, "You lost, too bad...", 20);
    }
    return finish;
}

int is_end_ai(int line, int *tab, int nb_max)
{
    int finish = 1;

    for (int i = 0; i != line + 1; i++)
        (tab[i] != 0) ? (finish = 0) : (finish = finish);
    if (finish == 1) {
        print_tab(tab, nb_max, line);
        write(1, "I lost... snif... but I'll get you next time!!", 46);
    }
    return finish;
}

int *ai_action(int *tab, int nb_max, int line)
{
    int la = 1;

    print_tab(tab, nb_max, line);
    for (; tab[la] == 0; la++);
    tab[la] = tab[la] - 1;
    write (1, "\nAI's turn...\nAI removed 1 match(es) from line ", 47);
    my_put_nbr(la);
    write (1, "\n", 1);
    return tab;
}

int launchgame(int line, int stick_max, int nb_max)
{
    int *tab = init_tab(line);
    int finish = 0;
    int nb = 1000;
    int la = line + 1;

    while (is_end_ai(line, tab, nb_max) != 1) {
        print_tab(tab, nb_max, line);
        write(1, "\nYour turn:\n", 12);
        while (nb != -77680 && (nb > stick_max || nb > tab[la])) {
            la = line_error(line);
            nb = stick_error(stick_max, tab, la);
        }
        if (nb == -77680 || la == -77680)
            return 0;
        tab = print_turn(nb, la, -1, tab);
        if ((finish = is_end(line, tab, nb_max)) == 1)
            return 2;
        (finish == 0) ? (tab = ai_action(tab, nb_max, line)) : (tab = tab);
        nb = 1000;
    }
    return 1;
}
