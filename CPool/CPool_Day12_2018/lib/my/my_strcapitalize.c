/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

char *my_strcapitalize(char *str)
{
    int	i;

    i = 1;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
                str[i] = str[i] - ('A' - 'a');
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
                str[i] = str[i] + ('A' - 'a');
        i = i + 1;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A' - 'a');
    return (str);
}
