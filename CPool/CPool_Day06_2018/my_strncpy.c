/*
** EPITECH PROJECT, 2018
** D6 - T2 - strncpy
** File description:
** copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (src[i + 1] != '\0')
        dest[i] = '\0';
    return(dest);
}
