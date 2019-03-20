/*
** EPITECH PROJECT, 2018
** D6 - T3 - my revstr
** File description:
** reverse string
*/

char *my_revstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    int imax = i;
    int mid = imax / 2;
    char *temp;
    i = 0;

    while (i != mid) {
        temp[imax - i] = str[i];
        i++;
    }
    *str = str[i];
}
