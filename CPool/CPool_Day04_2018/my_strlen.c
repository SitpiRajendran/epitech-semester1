/*           
** EPITECH PROJECT, 2018
** CPool_Day04_2018-T3-my_strlen   
** File description:
** show numbers of characters of a string one by one 
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return(i);
}
