/*
** EPITECH PROJECT, 2018
** by Sitpi (ou pas)
** File description:
** Task05 - non ! my_getnbr
*/

int my_getnbr(char *str)
{
    int st = 0;
    int x = 0;

    if (str[0] == '\0')
        return (0);
    for (x; str[x] != '\0'; x++) {
        if (str[x] >= '0' && str[x] <= '9') {
            st = st * 10 + (str[x] - '0');
        } else if (str[x] < '0' || str[x] > '9')
            return (st);
    }
    return (st);
}
