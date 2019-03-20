/*
** EPITECH PROJECT, 2018
** CPool_Day03_2018-T1-my_print_alpha
** File description:
** Function that display alphabt in lowercase in ascending order
*/

int my_print_alpha(void)
{
       
    int i = 0;
    while (i != 26) {
       	my_putchar(97 + i);
	i = i + 1;
    }
    return (0);
}
