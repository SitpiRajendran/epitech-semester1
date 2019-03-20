/*
** EPITECH PROJECT, 2018
** CPool_Day05_2018-T1-my_compute_factorial_it
** File description:
** Function that returns the factorial of the number.
*/
int my_compute_factorial_it (int nb)
{
    int fact = 0;
    if (nb < 0) {
        fact = 0;
    }
    if (nb == 0 || nb == 1) {
        fact = 1;
    }
    if (nb > 12) {
        fact = 0;
    }
    if (nb > 1 && nb < 13) {
        fact = nb;
        while (nb != 2) {
            fact = fact	* (nb-1);
            nb--;
        }
    }
    return(fact);
}
