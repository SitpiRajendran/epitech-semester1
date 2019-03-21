/*
** EPITECH PROJECT, 2018
** strcolones
** File description:
** colonn counter
*/

int my_strrow(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        i++;
        if (str[i] == '\n')
            j++;
    }
    j++;

    return (j);
}