/*
** EPITECH PROJECT, 2018
** .H file
** File description:
** GETNEXTLINE
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

#ifndef READ_SIZE
#define READ_SIZE 1
#endif /* READ_SIZE */

#ifndef ERROR_MESSAGE
#define BAD_INPUT "Error: invalid input (positive number expected)\n"
#endif /* ERROR_MESSAGE */

int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_str_isnum(char *str);

char *get_next_line(int fd);
int *init_tab(int line);
void print_tab(int *tab, int nb_max, int line);
int *print_turn(int nb, int la, int stick_max, int *tab);
int line_error(int li);
int stick_error(int stick_max, int *tab, int la);
int launchgame(int line, int stick_max, int nb_max);
