/*
** EPITECH PROJECT, 2018
** D7 - T2 - strcat
** File description:
** concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    for (int k =0; k < j; k++) {
        dest[i] = src[k];
        i++;
    }
    return (dest);
}
