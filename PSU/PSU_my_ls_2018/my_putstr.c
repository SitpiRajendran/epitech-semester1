/*
** EPITECH PROJECT, 2019
** lib
** File description:
** putstr
*/

#include "unistd.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

void my_putstr(char *str, int test)
{
    int length = my_strlen(str);

    write(1, str, length);
    if (test == 1)
        write(1, " ", 1);
    if (test == 2)
        write(1, "\t", 1);
    if (test == 4)
        write(1, "\n", 1);
}

void my_putstrtime(char *str)
{
    int i = 4;

    for (; i != 16; i++)
        write(1, &str[i], 1);
    write (1, "\t", 1);
}

long int my_put_nbrld(long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
    }
    if (nb > 9)
        my_put_nbrld(nb / 10);
    my_putchar(nb % 10 + 48);

    return (0);
}
