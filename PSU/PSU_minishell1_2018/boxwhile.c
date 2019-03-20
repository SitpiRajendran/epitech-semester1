/*
** EPITECH PROJECT, 2019
** PSU minishell
** File description:
** while box
*/

#include "minishell.h"

int whilebox(char **real_env)
{
    int ret;
    char *str = NULL;
    size_t size = 0;
    char **tab;
    char **env = real_env;

    while (1) {
        if ((ret = getline(&str, &size, stdin)) == -1)
            str = "exit";
        if (my_strcmp(str, "exit") == 0) {
            write (1, "exit\n", 5);
            return (0);
        }
        if (str[0] != '\n') {
            tab = strtotab(str, my_strlen(str));
            env = command(tab, env);
        }
        write(1, "$> ", 3);
    }
    return (0);
}