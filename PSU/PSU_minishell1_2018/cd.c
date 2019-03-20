/*
** EPITECH PROJECT, 2019
** psu minishel
** File description:
** cd command
*/

#include "minishell.h"

char **cd_minus(char *old, char **env)
{
    char pwd[100];

    if (chdir(old) == -1) {
        write(1, old, my_strlen(old));
        write(1, ": No such file or directory.\n", 29);
    } else {
        getcwd(pwd, sizeof(pwd));
        old = get_in_env(env, "PWD");
        env = put_in_env(env, "PWD", pwd);
        }
    return (env);
}

char **cdcommand(char **env, char **tab)
{
    char pwd[100];
    static char *old = "";

    if (tab[1] == NULL) {
        if (chdir(get_in_env(env, "HOME")) != -1) {
            old = get_in_env(env, "PWD");
            env = put_in_env(env, "PWD", getcwd(pwd, sizeof(pwd)));
        }
    } else if (tab[1][0] == '-') {
        env = cd_minus(old, env);
    } else {
        if (chdir(tab[1]) == -1) {
            write(1, tab[1], my_strlen(tab[1]));
            write(1, ": No such file or directory.\n", 29);
        } else {
            old = get_in_env(env, "PWD");
            env = put_in_env(env, "PWD", getcwd(pwd, sizeof(pwd)));
        }
    }
    return (env);
}