/*
** EPITECH PROJECT, 2019
** MUL my_runner
** File description:
** Open Read map
*/

#include "struct.h"

char *orstr(char *filepath)
{
    int fd;
    int ret;
    int size = 5000;
    char *str;

    str = malloc(size);
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        write(2, "Error fd", 9);
        return (NULL);
    }
    ret = read(fd, str, size);
    if (ret == -1 || ret == 0) {
        write(2, "Error ret", 10);
        return (NULL);
    }
    str[ret] = '\0';
    close(fd);
    return (str);
}

char *my_strismap(char *str)
{
    int	i = 0;
    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '4')
            i = i + 1;
        else if (str[i] == '\n')
            i = i + 1;
        else {
            write(2, "Error character", 16);
            return (NULL);
        }
    }
    return (str);
}

