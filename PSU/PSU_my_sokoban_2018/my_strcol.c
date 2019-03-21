/*
** EPITECH PROJECT, 2018
** strcolones
** File description:
** colonn counter
*/

int my_strcol(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\n' && str[i] != '\0')
        i++;
    i++;

    while (str[i] != '\n' && str[i] != '\0') {
        j++;
        i++;
    }
    j++;

    return (j);
}
