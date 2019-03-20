/*
** EPITECH PROJECT, 2018
** CPool_Day03_2018-T4-my_isneg
** File description:
** display N ou P if Negative or Positive
*/

int my_isneg(int n)
{
    if (n > -1) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}
