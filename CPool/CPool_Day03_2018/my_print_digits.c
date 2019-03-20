/*
** EPITECH PROJECT, 2018
** CPool_Day03_2018-T3-my_print_digits
** File description:
** display digits,on asingle line, ascending order
*/

int my_print_digits(void)
{
       
    int i = 0;
    while (i != 10) {
       	my_putchar(48 + i);
	i = i + 1;
    }
    return (0);
}
