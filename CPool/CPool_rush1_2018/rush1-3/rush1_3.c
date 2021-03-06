/*
** EPITECH PROJECT, 2018
** rush1-3
** File description:
** Displays a square
*/

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
        my_putchar('B');
        i = 0;
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        j++;
        if (x > 1)
            my_putchar('B');
        my_putchar('\n');
    }
}

void display_line(int x, char c)
{
    int i = 0;

    my_putchar(c);
    while (i < x - 2) {
        my_putchar('B');
        i++;
    }
    if (x > 1)
        my_putchar(c);
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_putstr("Invalid size\n");
        return;
    }
    else if (x > 1 && y > 1) {
        display_line(x, 'A');
        display_column(x, y);
        display_line(x, 'C');
    }
    if (y == 1) {
        display_line(x, 'B');
        display_column(x, y);
    }
    else if (x == 1) {
        display_line(x, 'B');
        display_column(x, y);
        display_line(x, 'B');
    }
}

