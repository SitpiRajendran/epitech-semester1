/*
** EPITECH PROJECT, 2018
** EvalExpr - Bistro
** File description:
** expresion in a string
*/

#include "./include/my.h"
#include <stdlib.h>
#include <stdio.h>

char *infaddstart(char *av1, char *av2);

char *newstr(char const *str, int ni)
{
    int i = 0;
    char *nstr = malloc(sizeof(char) * my_strlen(str));

    while (str[ni + i] != '\0') {
        nstr[i] = str[ni + i];
        i++;
    }
    nstr[i] = '\0';
    return (nstr);
}

char *operand(char *str, char *nb1, int i, char *sign)
{
    char *resu;
    char *nstr = newstr(str, i + 1);
    char *nb2 = my_takenbr(nstr);

    if (str[i] == sign[2]) {
        resu = infaddstart(nb1, nb2);
        resu = my_revstr(resu);
    }
    if (str[i] == sign[3])
        resu = my_itoa(addition(my_getnbr(nb1), my_getnbr(nb2), 2));
    if (str[i] == sign[4])
        resu = my_itoa(multiplication(my_getnbr(nb1), my_getnbr(nb2)));
    if (str[i] == sign[5])
        resu = my_itoa(divide(my_getnbr(nb1), my_getnbr(nb2), 1));
    if (str[i] == sign[6])
        resu = my_itoa(divide(my_getnbr(nb1), my_getnbr(nb2), 2));
    return (resu);
}

char *eval_expr(char *str, char *sign)
{
    int i = 0;
    char *nb1;
    char *ncstr = str;

    nb1 = my_takenbr(ncstr);
    i = my_getnbri(ncstr);
    while (my_strlen(ncstr) != i) {
        nb1 = operand(ncstr, nb1, i, sign);
        i = i + my_getnbri(newstr(ncstr, i + 1)) + 1;
    }
    my_putstr(nb1);
    return (nb1);
}
