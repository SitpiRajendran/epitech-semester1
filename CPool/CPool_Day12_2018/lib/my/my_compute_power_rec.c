/*
** EPITECH PROJECT, 2018
** CPool_Day05_2018 - T4 - my compute power rec
** File description:
** puissances in recusrvice
*/

int my_compute_power_rec(int nb, int p)
{
    int puiss;

    if (p < 0)
        puiss = 0;
    if (p == 0)
        puiss = 1;
    if (nb > 0)
        puiss = nb * my_compute_power_rec(nb, p - 1);
    return (puiss);
}
