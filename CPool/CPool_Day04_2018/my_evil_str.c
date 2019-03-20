/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018-T4-my_eveil_str
** File description:
** change the order of the string
*/

char *my_evil_str(char *str)
{
    int start = 0;
    int end = 0;
    int temp;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    while (start <= end) {
        temp = str[start];
        str[start] = str[end];
        str [end] = temp;
        end--;
        start++;
    }
    return(str);
}
