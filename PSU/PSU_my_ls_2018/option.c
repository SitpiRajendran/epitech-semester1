/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** option
*/

#include "my_ls.h"

option_t init_option(option_t option_s)
{
    option_s.l = 0;
    option_s.R = 0;
    option_s.d = 0;
    option_s.r = 0;
    option_s.t = 0;
    option_s.a = 0;
    return (option_s);
}

option_t option_checker(char *str, option_t option_s)
{
    for (int i = 0; str[i] != '\0'; i++) {
        (str[i] == 'l') ? (option_s.l = 1) : (option_s.l = option_s.l);
        (str[i] == 'R') ? (option_s.R = 1) : (option_s.R = option_s.R);
        (str[i] == 'd') ? (option_s.d = 1) : (option_s.d = option_s.d);
        (str[i] == 'r') ? (option_s.r = 1) : (option_s.r = option_s.r);
        (str[i] == 't') ? (option_s.t = 1) : (option_s.t = option_s.t);
        (str[i] == 'a') ? (option_s.a = 1) : (option_s.a = option_s.a);
    }
    return (option_s);
}

void calls(option_t option_s, char *path)
{
    if (option_s.R == 1 && option_s.l == 1) {
        ls_rcap_l(path);
        exit (0);
    }
    if (option_s.d == 1 && option_s.l == 1) {
        ls_file_ld(path);
        exit (0);
    }
    if (option_s.a == 1 && option_s.l == 1)
        ls_la(path);
    if (option_s.a == 1)
        ls_a(path);
    if (option_s.l == 1)
        ls_l(path);
    if (option_s.r == 1)
        ls_r(path);
    if (option_s.d == 1)
        ls_d(path);
}
int options(char *option, char *path)
{
    option_t option_s;
    char *temp;
    if (option[0] != '-') {
        temp = option;
        option = path;
        path = temp;
    }
    option_s = init_option(option_s);
    if (path[0] == '-') {
        option_s = option_checker(path, option_s);
        path = ".";
    }
    option_s = option_checker(option, option_s);
    calls(option_s, path);
    if (option_s.t == 1)
        lst(path);
    if (option_s.R == 1) {
        ls_rcap(path);
        return (0);
    }
    return (0);
}