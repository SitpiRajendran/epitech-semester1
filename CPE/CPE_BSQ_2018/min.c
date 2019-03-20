/*
** EPITECH PROJECT, 2018
** min
** File description:
** find the mnin beetween 3
*/

int min(int g, int h, int f)
{
    int min = g;

    if (h < min)
        min = h;
    if (f < min)
        min = f;

    return (min);
}
