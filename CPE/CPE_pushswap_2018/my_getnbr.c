/*
** EPITECH PROJECT, 2018
** Wrote by Alexis LAGIER (ou pas)
** File description:
** Task05 - non ! CPool_evalexpr_2018: my_getnbr
*/

int my_getnbr(char const *str)
{
    int st = 0;
    int x = 0;
    int negatif = 0;

    if (str[0] == '\0')
        return (0);
    for (x; str[x] != '\0'; x = x + 1) {
        if (str[x] == '-')
            negatif = 1;
        if (str[x] >= '0' && str[x] <= '9') {
            st = st * 10 + (str[x] - '0');
        }
    }
    if (negatif == 1)
        st = -st;
    return (st);
}
