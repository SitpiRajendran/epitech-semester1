/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_is_prime(int nb)
{
    int i;

    if (nb < 2 || nb % 2 == 0) {
        return (0);
    }
    if (nb == 2) {
        return (1);
    } else {
        i = 3;
        while (i * i <= nb) {
            if (nb % i == 0) {
                return (0);
            }
            i = i + 2;
        }
    }
    return (1);
}
