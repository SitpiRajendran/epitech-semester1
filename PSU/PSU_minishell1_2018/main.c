/*
** EPITECH PROJECT, 2019
** bootstrap minishell
** File description:
** my exec
*/

#include "minishell.h"

int main(int ac, char **av, char **env)
{
    (void) av;
    if (ac != 1) {
        write(2, "Too many arguments", 18);
        return (84);
    }
    write(1, "$> ", 3);
    whilebox(env);
    return (0);
}