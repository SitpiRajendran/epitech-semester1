/*
** EPITECH PROJECT, 2018
** Main FinalStumper
** File description:
** Main rush3
*/

#include <unistd.h>
#include "include/my.h"

void display(char *buff, int col, int lin, int len)
{
    if (buff[0] == 'o')
        my_putstr("[rush1-1] ");
    if (buff[0] == '/' || buff[0] == '*')
        my_putstr("[rush1-2] ");
    if (buff[0] == 'A') {
        if (buff[col - 1] == 'A')
            my_putstr("[rush1-3] ");
        if (buff[col - 1] == 'C' && buff[len - col - 1] == 'A')
            my_putstr("[rush1-4] ");
        if (buff[col - 1] == 'C' && buff[len - col - 1] == 'C')
            my_putstr("[rush1-5] ");
    }
    my_put_nbr(col);
    my_putchar(' ');
    my_put_nbr(lin);
    my_putchar('\n');
}

void display2(int col, int lin)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(col);
    my_putchar(' ');
    my_put_nbr(lin);
    my_putstr(" || [rush1-4] ");
    my_put_nbr(col);
    my_putchar(' ');
    my_put_nbr(lin);
    my_putstr(" || [rush1-5] ");
    my_put_nbr(col);
    my_putchar(' ');
    my_put_nbr(lin);
    my_putchar('\n');
}

void rush3(char *buff)
{
    int col = 0;
    int lin = 0;
    int i = 0;
    int len = my_strlen(buff);

    for (col; buff[col] != '\n'; col++);
    for (i; buff[i]; i++)
        if (buff[i] == '\n')
            lin++;
    if (col < 1 || lin < 1) {
        my_putstr("none\n");
        return;
    }
    if (buff[0] == 'B') {
        display2(col, lin);
        return;
    }
    display(buff, col, lin, len);
}

int main()
{
    char buff [8000000];
    int offset = 0;
    int len;

    while ((len = read (0, buff + offset, 8000000 - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
