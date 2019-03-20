/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int divide(int nb1, int nb2, int f)
{
    if (nb1 == 0 || nb2 == 0)
        return (0);
    if (f == 1) {
        int result = nb1 / nb2;
        return (result);
    }
    if (f == 2) {
        int result = nb1 % nb2;
        return (result);
    }
}
