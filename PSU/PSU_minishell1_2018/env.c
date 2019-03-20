/*
** EPITECH PROJECT, 2019
** psu minishell
** File description:
** setenv commande
*/

#include "minishell.h"

char **env_set(char **tab, char **env)
{
    char **new;
    int line = 0;

    for (; env[line] != NULL; line++);
    if (search_env(env, tab[1]) != line) {
        env = put_in_env(env, tab[1], tab[2]);
        return (env);
    }
    new = malloc(sizeof(char *) * (line + 2));
    for (line = 0; env[line] != NULL; line++)
        new[line] = env[line];
    if (tab[2] == NULL) {
        new[line] = malloc(sizeof(char) * my_strlen(tab[1]));
        new[line] = my_strcat(tab[1], "=");
    } else if (tab[2] != NULL) {
        new[line] = malloc(sizeof(char) *my_strlen(tab[1])+my_strlen(tab[2]));
        new[line] = my_strcat(my_strcat(tab[1], "="), tab[2]);
    }
    new[line + 1] = NULL;
    return (new);
}

char **env_unset(char **tab, char **env)
{
    char **new;
    int line = 0;
    int find = 0;

    if (tab[1] == NULL)
        return (env);
    for (; env[line] != NULL; line++);
    new = malloc(sizeof(char *) * (line));
    if ((find = search_env(env, tab[1])) == line)
        return (env);
    line = 0;
    for (int k = 0; env[k] != NULL; k++) {
        (k == find && env[k + 1] != NULL) ? k++ : (k = k);
        if (k == find && env[k + 1] == NULL) {
            new[line] = NULL;
            break;
        }
        new[line++] = env[k];
    }
    new[line] = NULL;
    return (new);
}