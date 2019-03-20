/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        if (nb == -2147483648) {
            write (1, "-2147483648", 11);
            return 0;
        }
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return 0;
}
