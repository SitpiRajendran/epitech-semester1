/*
** EPITECH PROJECT, 2018
** D8 - T4 - str word array
** File description:
** split string into word
*/

#include <stddef.h>


int count_word(str)
{
    int word = 0;
    int i = 0;
    while (str[i] != NULL) {
        while (65 < str[i] < 90 || 48 < str[i] < 57 || 97 < str[i] < 122)
            i++;
        word++;
    }
    return (word);
}

int count_len(str)
{
    int i = 0;
    if (str[i] != NULL)
        i++;
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    char **array;
    char **dest;
    int i = 0;
    int new = 0;
    int word = count_word(str);
    int c_word = 0;
    int len = count_len(str);

    array = malloc(sizeof(char) * (len + 1));
    while (str[i] != NULL) {
        if (65 < str[i] < 90 || 48 < str[i] < 57 || 97 < str[i] < 122) {
            i++;
        } else {
            new = i;
            i = 0;
            while (i < new) {
                my_strcat(dest[c_word],str[i]);
                i++;
            }
            array[c_word] = &dest[c_word];
            c_word++;
            i = new + 1;
        }
    }
    array[i] = NULL;
    return (array);
}

int main(void)
{
    char **tab;
    int i = 0;
    tab = my_str_to_world_array("The Best is Sitpi");
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        printf("\n");
        i++;
    }
}
