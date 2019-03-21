/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** map reading
*/

#include "my.h"

char *init(char *filepath)
{
    struct stat sb;
    int fd;
    int ret;
    int size;
    char *str;

    if (stat(filepath, &sb) == -1)
        error("stat error");
    size = sb.st_size;
    str = malloc (size);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        error("fd error");
    ret = read(fd, str, size);
    if (ret != size)
        error("read error");
    str[size] = '\0';
    close(fd);
    return (str);
}