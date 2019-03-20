/*
** EPITECH PROJECT, 2018
** CPool_Day03_18-T1-my_swap
** File description:
** two integrers whose given as parameter
*/

void my_swap(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
}
