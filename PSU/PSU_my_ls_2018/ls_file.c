/*
** EPITECH PROJECT, 2019
** PSU my ls
** File description:
** ls File, if not directory
*/

#include "my_ls.h"

struct dirent *ls_file(char *path, DIR *dir)
{
    struct stat sb;
    struct dirent *box;

    stat(path, &sb);
    if (S_ISDIR(sb.st_mode) != 1) {
        my_putstr(path, 4);
        exit (0);
    }
    if (dir == NULL) {
        write(2, "No such file", 13);
        exit (84);
    }
    box = readdir(dir);
    if (box == NULL) {
        write(2, "Don't have rights", 18);
        exit (84);
    }
    return (box);
}

struct dirent *ls_file_l(char *path)
{
    DIR *dir = opendir(path);
    struct stat sb;
    struct dirent *box;

    if (dir == NULL) {
        write(2, "No such file", 13);
        exit (84);
    }
    stat(path, &sb);
    if (S_ISDIR(sb.st_mode) != 1) {
        ls_l_file(path);
    }
    box = readdir(dir);
    if (box == NULL) {
        write(2, "Don't have rights", 18);
        exit (84);
    }
    return (box);
}

struct dirent *ls_file_ld(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;

    if (dir == NULL) {
        write(2, "No such file", 13);
        exit (84);
    }

    box = readdir(dir);
    if (box == NULL) {
        write(2, "Don't have rights", 18);
        exit (84);
    }

    ls_l_file(path);
    return (box);
}

struct dirent *ls_file_lr(char *path)
{
    DIR *dir = opendir(path);
    struct stat sb;
    struct dirent *box;

    if (dir == NULL) {
        write(2, "No such file", 13);
        exit (84);
    }
    stat(path, &sb);
    if (S_ISDIR(sb.st_mode) != 1) {
        ls_l_file(path);
    }
    box = readdir(dir);
    if (box == NULL) {
        write(2, "Don't have rights", 18);
        exit (84);
    }
    return (box);
}