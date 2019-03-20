/*
** EPITECH PROJECT, 2018
** getnextline
** File description:
** el project
*/

#include "matchstick.h"

char *my_strcat(char *dest, char const *scr)
{
    int f = 0;
    char *new = malloc(sizeof(dest) * (10 + 1) * 2);
    int i = 0;

    if (scr == NULL)
        return (NULL);
    for (; dest[i] != '\0'; i++)
        new[i] = dest[i];
    new[i] = '\0';
    for (; new[f] != '\0'; f = f + 1);
    for (i = 0; scr[i] != '\0'; i++) {
        if (scr[i] != '\n') {
            new[f] = scr[i];
            f++;
        }
    }
    new[f] = '\0';
    return (new);
}

char *read_and_display_read_line_n(int fd, int n)
{
    static int ret = 123;
    char *str;
    int size = 1;

    if (ret == 0)
        return (NULL);
    size = n;
    str = malloc(sizeof(char) * (size));
    ret = read(fd, str, size);
    if (ret > 0) {
        str[ret + 1] = '\0';
        return (str);
    } else
        return (NULL);
}

int searchline(char *str)
{
    if (str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] == '\n')
            return (0);
    }
    return (1);
}

char *printline(char *str, int a)
{
    int i = 0;
    char *string = "\0";

    if (a == 1) {
        while (str[i] != '\0' && str[i] != '\n')
            i++;
        str[i] = '\0';
        return (str);
    }
    if (a == 2) {
        if (str == NULL)
            return (NULL);
        for (i = 0; str[i] != '\0' && str[i] != '\n'; i++);
        i++;
        string = my_strcat(string, &str[i]);
    }
    return (string);
}

char *get_next_line(int fd)
{
    int size = READ_SIZE;
    int search = 1;
    static char *str = "\0";
    char *string = malloc(sizeof(char) * (size + 2));

    string = my_strcat(string, printline(str, 2));

    while (search != 0) {
        str = read_and_display_read_line_n(fd, size);
        if (str == NULL || string == NULL)
            return (NULL);
        search = searchline(str);
        if (search != 0)
            string = my_strcat(string, str);
    }
    string = my_strcat(string, printline(str, 1));
    return (string);
}