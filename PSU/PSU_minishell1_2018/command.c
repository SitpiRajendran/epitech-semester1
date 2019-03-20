/*
** EPITECH PROJECT, 2019
** psu minishell
** File description:
** command
*/

#include "minishell.h"

char **command(char **tab, char **env)
{
    int change = 0;

    if (my_strcmp(tab[0], "cd") == 0) {
        env = cdcommand(env, tab);
        change = 1;
    } else if (my_strcmp(tab[0], "env") == 0)
        change = printtab(env);
    if (my_strcmp(tab[0], "setenv") == 0 && tab[1] != NULL) {
        env = env_set(tab, env);
        change = 1;
    } else if (my_strcmp(tab[0], "setenv") == 0 && tab[1] == NULL)
        change = printtab(env);
    if (my_strcmp(tab[0], "unsetenv") == 0 && tab[1] != NULL) {
        env = env_unset(tab, env);
        change = 1;
    } else if (my_strcmp(tab[0], "unsetenv") == 0 && tab[1] == NULL)
        change = print_fewarg();
    if (change == 0)
        env = launch_execve(change, tab, env);
    return (env);
}