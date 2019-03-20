/*
** EPITECH PROJECT, 2018
** PSU minishell
** File description:
** lib for env
*/

#include "minishell.h"

char **put_in_env(char **env, char *str, char *add)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (; env[i] != NULL; i++) {
        for (j = 0; env[i][j] == str[j]; j++);
        for (k = 0; env[i][k] != '='; k++);
        if (j == k)
            break;
    }
    env[i] = str;
    env[i] = my_strcat(my_strcat(env[i], "="), add);
    return (env);
}

char *get_in_env(char **env, char *str)
{
    int i = 0;
    int k = 0;
    char *envstr;
    char *path;

    i = search_env(env, str);
    envstr = env[i];
    for (i = 0; envstr[i] != '='; i++);
    path = malloc(sizeof(char) * (i++));
    for (k = 0; envstr[i] != '\0' && envstr[i] != '\n'; k++) {
        path[k] = envstr[i];
        i++;
    }
    path[k] = '\0';
    return (path);
}

int search_env(char **env, char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (; env[i] != NULL; i++) {
        for (j = 0; env[i][j] == str[j]; j++);
        for (k = 0; env[i][k] != '='; k++);
        if (j == k)
            return (i);
    }
    return (i);
}

int print_fewarg(void)
{
    write (1, "unsetenv: Too few arguments.", 28);
    return (1);
}

char **pathtotab(char *str, int len)
{
    int n = 0;
    int j = 0;
    int a = 0;
    char **tab = malloc(sizeof(char *) * len);

    for (int i = 0; i != len; i++)
        tab[i] = malloc(sizeof(char) * len);
    for (int i = a; str[i] != '\0'; i++) {
        if (str[i] != ':' && str[i] != '\t' && str[i] != '\n')
            tab[n][j++] = str[i];
        else {
            tab[n++][j++] = '\0';
            j = 0;
        }
    }
    tab[n + 1] = NULL;
    return (tab);
}