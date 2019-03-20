/*
** EPITECH PROJECT, 2018
** D5 - T5 - sqaure root
** File description:
** return the square root
*/

int my_compute_square_root(int nb)    
{
    int i = 0;
    int square = 0;
    
    while (square < nb) {
        i++;
        square = i * i;
    }
    if (square = nb) {
        return (nb);
    } else {
        return (0);
    }
}
