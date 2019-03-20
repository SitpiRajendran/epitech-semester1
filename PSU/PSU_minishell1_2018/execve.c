/*
** EPITECH PROJECT, 2019
** psu minishell
** File description:
** fork and execve
*/

#include "minishell.h"

void printerror(char *str)
{
    write (1, str, my_strlen(str));
    write (1, ": Command not found.\n", 21);
}

void verify_error(int num)
{
    if (WTERMSIG(num) == SIGSEGV)
        write (1, "Segmentation fault", 18);
    if (WTERMSIG(num) == SIGFPE)
        write (1, "Floating exception", 18);
    if (WCOREDUMP(num))
        write (1, " (core dumped)", 14);
    if (WIFSIGNALED(num) || WCOREDUMP(num))
        write (1, "\n", 1);
}

char **launch_execve(int change, char **tab, char **env)
{
    pid_t pid;
    char *path = get_in_env(env, "PATH");
    char **pa_arr = pathtotab(path, my_strlen(path));
    char *str  = NULL;
    int num = 0;

    if (change == 1)
        return (env);
    for (int i = 0; pa_arr[i] != NULL; i++) {
        str = my_strcat(my_strcat(pa_arr[i], "/"), tab[0]);
        if (access(str, X_OK) != -1) {
            pid = fork();
            (pid == 0) ? execve(str, tab, env) : waitpid(pid, &num, 0);
            change = 1;
        }
    }
    verify_error(num);
    if (change == 0)
        printerror(tab[0]);
    return (env);
}