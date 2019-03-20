/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** help
*/

#include "struct.h"
#include <unistd.h>

int help(char **ar)
{
    if (ar[1][0] == '-' && ar[1][1] == 'h' && ar[1][2] == '\0') {
        my_putstr("-------------- AIDE --------------\n\n");
        my_putstr(" Vous devez empêcher l'Article 13 de passer\n pour cela");
        my_putstr(" aidez vous des pouces verts de vos\n abonnés ! Et");
        my_putstr(" faites régner la paix au sein du\n Youtube Game !\n\n");
        my_putstr("--------- COMMENT JOUER ? --------\n\n Utiliser votre");
        my_putstr(" souris (pouce vert), pour cliquer\n et abattre l'Article");
        my_putstr(" 13 !\n");
        return (0);
    }
    write(2, "Flag Error", 11);
    return (84);
}
