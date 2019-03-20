/*
** EPITECH PROJECT, 2018
** D6 - T1 - strcpy
** File description:
** copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
