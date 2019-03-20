/*
** EPITECH PROJECT, 2018
** D7 - T2 - strcat
** File description:
** concatenates two strings
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int longdest = 0;

    while (dest[longdest] != '\0') {
        longdest++;
    }
    while (src[i] != '\0' && i < nb) {
        dest[longdest + i] = src[i];
        i++;
    }
    dest[longdest + i] = '\0';
    return(dest);
}
