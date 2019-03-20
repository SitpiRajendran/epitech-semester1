/*
** EPITECH PROJECT, 2018
** EvalExpr - Bistro
** File description:
** expresion in a string
*/

#include "./include/my.h"
#include <stdlib.h>

char *newstr(char const *str, int ni)
{
    int i = 0;
    char *nstr = malloc(sizeof(char) * my_strlen(str));

    while (str[ni + i] != '\0') {
        nstr[i] = str[ni + i];
        i++;
    }
    nstr[i] = '\0';

    return(nstr);
}

int operand(char *str, int nb1, int i)
{
    int resultat;
    char *nstr = newstr(str, i + 1);
    int nb2 = my_getnbr(nstr);

    if (str[i] ==  '+')
        resultat = addition(nb1, nb2, 1);
    if (str[i] == '-')
	resultat = addition(nb1, nb2, 2);
    if (str[i] ==  '*')
        resultat = multiplication(nb1, nb2);
    if (str[i] ==  '%')
        resultat = divide(nb1, nb2, 2);

    return (resultat);
}

int eval_expr(char *str)
{
    int i = 0;
    int nb1;
    char *ncstr = str;

    nb1 = my_getnbr(ncstr);
    i = my_getnbri(ncstr);
    while (my_strlen(ncstr) != i) {
        nb1 = operand(ncstr, nb1, i);
        i = i + my_getnbri(newstr(ncstr, i + 1)) + 1;
    }
    return (nb1);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
