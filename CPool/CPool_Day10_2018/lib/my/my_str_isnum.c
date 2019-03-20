/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_str_isnum(char *str)
{
    int	i;

    i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            i = i + 1;
        } else if (str[i] == '-' && i == 0) {
            i = i + 1;
        } else if (str[i] == '+' && i == 0) {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
