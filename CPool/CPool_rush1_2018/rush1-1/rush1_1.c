/*
** EPITECH PROJECT, 2018
** rush1-1
** File description:
** Displays a square
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

void display_column(int x, int y)
{
    int i = 0;
    int j = 0;

    while (j < y - 2) {
        my_putchar('|');
        i = 0;
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        j++;
        if (x > 1)
            my_putchar('|');
        my_putchar('\n');
    }
}

void display_line(int x)
{
    int i = 0;

    my_putchar('o');
    while (i < x - 2) {
        my_putchar('-');
        i++;
    }
    if (x > 1)
        my_putchar('o');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_putstr("Invalid size\n");
	return;
    }
    else if (x > 1 && y > 1) {
        display_line(x);
        display_column(x, y);
        display_line(x);
    }
    if (y == 1) {
        display_line(x);
        display_column(x, y);
    }
    else if (x == 1) {
        display_line(x);
        display_column(x, y);
        display_line(x);
    }
}

int main()
{
    rush(1,5);
    return(0);
}
