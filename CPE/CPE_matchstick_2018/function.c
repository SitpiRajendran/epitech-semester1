/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** lib function
*/

#include "matchstick.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_getnbr(char const *str)
{
    int st = 0;

    if (str[0] == '\0')
        return 0;
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= '0' && str[x] <= '9')
            st = st * 10 + (str[x] - '0');
        else if (str[x] < '0' || str[x] > '9')
            return -77680;
        if (x > 10)
            return 2147483648;
    }
    return st;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        if (nb == -2147483648) {
            write (1, "-2147483648", 11);
            return (0);
        }
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return 0;
}

int my_str_isnum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return 0;
    return 1;
}
