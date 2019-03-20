/*
** EPITECH PROJECT, 2018
** map
** File description:
** maps
*/

#include <stdlib.h>
#include <unistd.h>

char *my_strismap(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i = i + 1;
        } else if (str[i] == '.' || str[i] == 'o' || str[i] == '\n') {
            i = i + 1;
        } else {
            write(2, "Error", 6);
            exit (84);
        }
    }
    return (str);
}
