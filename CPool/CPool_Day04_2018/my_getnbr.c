/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018-T5-my_getnbr
** File description:
** Returns a number, sent to the function as a string.
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    if (str[i] < 48 || str[i] > 57) {
        return (0)
            }

    while (str[i] >= 48 && str[i] <= 57) {
        nb = nb * 10;
        nb = nb + str[i] - 48;
        if (str[i-1] == '-')
            negatif = 1;
        i++;
    }
    
    if (negatif == 1) {
        nb = nb * (-1);
    }
    return (nb);
}
