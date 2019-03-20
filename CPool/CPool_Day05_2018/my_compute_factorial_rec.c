/*
** EPITECH PROJECT, 2018
** CPool_Day03_T2-my_compute_ractorial_rec
** File description:
** Recursive function the factorial of the number.
*/

int my_compute_factorial_rec (int nb)
{
    int fact;
    if (nb > 12) {
        fact = 0;
    } else {
        fact = 0;
    }
    if (nb > 0 && nb < 13) {
        fact = nb * my_compute_factorial_rec(nb - 1);
    } else if (nb == 0) {
        fact = 1;
    }
    return (fact);
}
