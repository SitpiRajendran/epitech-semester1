/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int countcpar(char *str)
{
    int i =0;
    int j =0;

    while (str[i] != '\0') {
        if (str[i] == ')')
            j++;
        i++;
    }
    return (j);
}
