/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018-T2-my_putstr
** File description:
** show characters of a string one by one
*/

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
