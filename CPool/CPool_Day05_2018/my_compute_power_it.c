/*
** EPITECH PROJECT, 2018
** CPool_Day05_2018-T3-my_compute_power_it
** File description:
** returns the argument raised to the power p,
*/

int my_compute_power_it(int nb, int p)
{
    int save = nb;
    
    if (p < 0) {
        return (0);
    } else if (p = 0) {
        return(1);
    } else {
        while (p >1) {
            nb = nb * save;
            p--;
        }
    }
    return (nb);
}
