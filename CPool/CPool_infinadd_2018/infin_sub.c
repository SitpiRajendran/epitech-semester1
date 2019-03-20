/*
** EPITECH PROJECT, 2018
** Pool - D18 - Bistro
** File description:
** InfinAdd
*/

#include <stdlib.h>
#include "./include/my.h"
#include <stdio.h>

int maxlen(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    return (len1 < len2 ? len2 : len1);
}

int print(char *result, int ret, int i)
{
    result = my_revstr(result);
    if (ret == 1) {
        result = my_revstr(my_strcat(result, "-"));
        i++;
    }
    result[i] = '\0';
    i = 0;
    return (i);
}

char *changelen(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    char *save = str2;

    str1 = my_revstr(str1);
    while (len1 < len2) {
        str1 = my_strcat(str1, "0");
        len1++;
    }
    str1 = my_revstr(str1);
    return (str1);
}

char *infadd(char *str1, char *str2, int len)
{
    int i = 0;
    int res = 0;
    int ret = 0;
    int a;
    int b;
    char *result = malloc(sizeof(char) * (len * 2));

    for (;i != len - 1; i++) {
        a = str1[i] - 48;
        b = str2[i] - 48;

        if (a >= b)
            res = a - b - ret;
        if (b > a)
            res = (b - a) * (-1);
        if (i == len-1 && b == 0 || i == len-1 && a ==0)
            res = 10 - res;
        printf("%d - %d = %d \n", a, b, res);
        ret = 0;
        if (res < 0) {
            ret = 1;
            res = -res;
        }
        result[i] = res + 48;
    }
    i = print(result, ret, i);
    for (i; result[i] == 0; i++)
        newstr(result,i);
    return (result);
}

int main (int ac, char **av)
{
    int i = 1;
    char *result;
    char *str1;
    char *str2;
    int len;
    int len2 = my_strlen(av[2]);

    if (ac != 3)
        return(0);
    while (i != 3) {
        if (my_str_isnum(av[i]) != 1)
            return(0);
        i++;
    }
    len = maxlen(av[1], av[2]) + 1;
    str1 = changelen(av[1], my_strdup(av[2]));
    str2 = changelen(my_strdup(av[2]), str1);
    result = infadd(my_revstr(str1), my_revstr(str2), len);
    my_putstr(result);
    return (0);
}
