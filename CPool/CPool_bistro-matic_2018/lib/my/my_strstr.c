/*
** EPITECH PROJECT, 2018
** D6 - T4 - my_strstr
** File description:
** do strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int i2 = 1;

    while (str[i] != to_find[i2])
        i++;
    if (str[i] == to_find[i2]) {
        int isave = i;

        while (str[i] == to_find[i2] || to_find[i2] != '\0') {
            i++;
            i2++;
        }
    }
    return (str);
}
