/*
** EPITECH PROJECT, 2018
** openreadstr
** File description:
** do an open, and read to create a buffer
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char *orstr(char *filepath, int size)
{
    int fd;
    int ret;
    char *str;

    str = malloc(size);
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        write(2, "Error", 6);
        exit (84);
    }
    ret = read(fd, str, size);
    if (ret != size || ret == 0){
        write(2, "Error", 6);
        exit (84);
    }
    str[size-1] = '\0';
    close(fd);
    return (str);
}
