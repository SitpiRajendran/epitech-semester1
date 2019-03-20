/*
** EPITECH PROJECT, 2018
** D6 - T3 - my revstr
** File description:
** reverse string
*/

#include "struct.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str);
    char c;

    while(i < len / 2){
    c = *(str + i);
        *(str + i) = *(str + len - i -1);
        *(str + len - i -1) = c;
        i++;
    }
    return (str);
}
