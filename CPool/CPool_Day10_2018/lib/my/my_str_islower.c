/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_str_islower(char *str)
{
    while (*str) {
        if (!((*str > 96) && (*str < 123)))
            return (0);
        ++str;
    }
    return (1);
}
