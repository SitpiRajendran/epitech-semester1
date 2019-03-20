/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_getnbri(char *str)
{
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        i++;
    }
    return (i);
}
