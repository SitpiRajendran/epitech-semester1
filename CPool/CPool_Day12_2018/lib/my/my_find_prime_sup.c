/*
** EPITECH PROJECT, 2018
** aez
** File description:
** zqdqdqd
*/

int my_find_prime_sup(int nb)
{
    if(nb > 2 && nb % 2 == 0) {
        nb = nb + 1;
    }
    while (!my_find_prime_sup(nb))
        nb = nb + 2;
    return (nb);
}
