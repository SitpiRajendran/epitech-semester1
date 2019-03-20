/*
** EPITECH PROJECT, 2018
** psu minishell
** File description:
** lib
*/

#include "minishell.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i])
            return (1);
        if (str1[i] < str2[i])
            return (-1);
        i++;
    }
    if ((str1[i] != '\0' && str1[i] != '\n') || str2[i] != '\0')
        return (1);
    return (0);
}

int my_strlen(char const *str)
{
    int i = 0;
    if (str != NULL)
        while (str[i] != '\0')
            i = i + 1;
    return (i);
}

int printtab(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        write(1, env[i], my_strlen(env[i]));
        write(1, "\n", 1);
    }
    return (1);
}

char **strtotab(char *str, int len)
{
    int n = 0;
    int j = 0;
    int a = 0;
    char **tab = malloc(sizeof(char *) * len);

    for (int i = 0; i != len; i++)
        tab[i] = malloc(sizeof(char) * len);
    for (int i = a; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            tab[n][j] = str[i];
            j++;
        }
        else if (str[i - 1] != ' ' && str[i - 1] != '\t') {
            tab[n][j++] = '\0';
            n++;
            j = 0;
        }
    }
    tab[n] = NULL;
    return (tab);
}

char *my_strcat(char *dest, char const *scr)
{
    int f = 0;
    char *nw = malloc(sizeof(char *) *(my_strlen(dest) + my_strlen(scr) +1));
    int i = 0;

    if (scr == NULL)
        return (NULL);
    for (; dest[i] != '\0'; i++)
        nw[i] = dest[i];
    nw[i] = '\0';
    for (; nw[f] != '\0'; f = f + 1);
    for (i = 0; scr[i] != '\0'; i++) {
        if (scr[i] != '\n') {
            nw[f] = scr[i];
            f++;
        }
    }
    nw[f] = '\0';
    return (nw);
}