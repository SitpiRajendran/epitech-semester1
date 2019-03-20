/*
** EPITECH PROJECT, 2018
** CPool_Day03_2018-T2-my_print_revalpha
** File description:
** function z to a in lowercase in one line
*/
int my_print_revalpha(void)
{
    int i = 26;
    while (i != 0) {
        my_putchar(96 + i);
        i = i - 1;
    }
    return (0);
}
