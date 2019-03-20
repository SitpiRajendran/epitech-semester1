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

void affichage(char *result, int ret, int i)
{
    result = my_revstr(result);
    if (ret == 1) {
        result = my_revstr(my_strcat(my_revstr(result), "1"));
        i++;
    }
    result[i] = '\0';
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

    for (i; i != len - 1; i++) {
        a = str1[i] - 48;
        b = str2[i] - 48;
        res = a + b + ret;
        ret = 0;
        if (res > 9) {
            ret = 1;
            res = res - 10;
        }
        result[i] = res + 48;
    }
    affichage(result, ret, i);
    return (result);
}

char *infaddstart(char *av1, char *av2)
{
    int i = 1;
    char *result;
    char *str1;
    char *str2;
    int len = maxlen(av1, av2) + 1;

    str2 = my_strdup(av2);
    str1 = my_revstr(changelen(av1, str2));
    str2 = my_revstr(changelen(str2, str1));
    result = my_revstr(infadd(str1, str2, len));
    return (result);
}
