/*
** EPITECH PROJECT, 2018
** CPool_Day03_2018-T5-my_print_comb
** File description:
** display ascending order, all numbers by tree different digits
*/
int my_print_comb(void)
{
    int a = '0';
    int b = '1';
    int c = '2';

    while (a < '8') {
        while (b < '9') {
            while (c <= '9') {
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
                if (a != '7') {
                    my_putchar(',');
		    my_putchar(' ');
		}
	        c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}
