/*
** EPITECH PROJECT, 2018
** D12 - T1 - cat
** File description:
** Make Cat
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void my_putstr(char *str);

int main(int ac, char **av)
{
    int i = 1;
    int fd;
    int size;
    char buf[30000] = "";

    for (i; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("Error during the opening\n");
            return (84);
        }
        read(fd, buf, 29999);
        my_putstr(buf);
    }

    close(fd);
    return (0);
}
