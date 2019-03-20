/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int my_str_isnum(char *str, char *str2)
{
    int	i;
    int j;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i = i + 1;
        } else if (str[i] == str2[0] || str[i] == str2[1] || str[i] == str2[2]
                   || str[i] == str2[3] || str[i] == str2[4] ||
                   str[i] == str2[5] || str[i] == str2[6]) {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
