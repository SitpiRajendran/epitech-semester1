/*
** EPITECH PROJECT, 2018
** .H file
** File description:
** minishell
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

int my_strlen(char const *str);
int my_strcmp(char *str1, char *str2);
int printtab(char **env);
char **strtotab(char *str, int len);
char *my_strcat(char *dest, char const *scr);

char *get_in_env(char **env, char *str);
char **put_in_env(char **env, char *str, char *add);
int search_env(char **env, char *str);
int print_fewarg(void);

int whilebox(char **env);
char **command(char **tab, char **env);
char **cdcommand(char **env, char **tab);

char **env_set(char **tab, char **env);
char **env_unset(char **tab, char **env);

char **launch_execve(int change, char **tab, char **env);
char **pathtotab(char *str, int len);