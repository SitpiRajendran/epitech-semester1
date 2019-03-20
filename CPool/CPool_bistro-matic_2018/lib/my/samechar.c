/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int samechar(char *str)
{
    int i = 0;
    int j = 0;

    for (i; str[i] != '\0'; i++) {
        for (j = 0; j != 6 - i; j++) {
            if (str[i] == str[i + j])
                return (84);
        }
    }
    return (0);
}
