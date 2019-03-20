/*
** EPITECH PROJECT, 2018
** Bistromatic
** File description:
** Do an infinite calculator
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

char *eval_expr(char *str, char *sign);

void displayh(void)
{
    my_putstr("USAGE");
    my_putchar('\n');
    my_putstr("./calc base opertors size_read");
    my_putchar('\n');
    my_putchar('\n');
    my_putstr("DESCRIPTION");
    my_putchar('\n');
    my_putstr("- base: all the symbols of the base");
    my_putchar('\n');
    my_putstr("- operators: the symbols for the");
    my_putstr(" parentheses and the 5 operators");
    my_putchar('\n');
    my_putstr("- size_read: number of characters to be read");
    my_putchar('\n');
}

int erreur(int ac, char *av)
{
    if (ac == 2 && av[0] == '-' && av[1] == 'h' && av[2] == '\0') {
        displayh();
        return (84);
    }
    my_putstr("syntax error");
    return (84);
}

int erreurbuff(char *buff, char **av)
{
    int i = 0;
    int j = 0;
    int er = 0;

    if (countopar(buff) != countcpar(buff))
        er = 1;
    if (buff[0] == '\0')
        er = 1;
    if (my_strlen(buff) != my_getnbr(av[3]))
        er = 1;
    if (my_strlen(av[2]) != 7)
        er = 1;
    if (er == 1){
        my_putstr("syntax error");
        return (84);
    }
}

int main(int ac, char **av)
{
    char buff[8000000];
    int offset = 0;
    int i = 0;
    int len;
    char *result;

    if (ac != 4) {
        erreur(ac, av[1]);
        return (84);
    }
    while ((len = read(0, buff + offset, 8000000 - offset)) > 0)
        offset = offset + len;
    buff[offset - 1] = '\0';
    if (erreurbuff(buff, av) == 84)
        return (84);
    result = eval_expr(buff, av[2]);
    result = my_takenbr(result);
    return (0);
}
