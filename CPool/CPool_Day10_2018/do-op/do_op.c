/*
** EPITECH PROJECT, 2018
** D10 - T2 - DoOp
** File description:
** Do Opérations
*/

int addition(char *s1, char *s2, int i)
{
    int nb1 = my_getnbr(s1);
    int nb2 = my_getnbr(s2);

    printf("%d - nb1 \n",nb1);
    printf("%d - nb2 \n",nb2);
    if (i == 1) {
        int result = nb1 + nb2;
        return (result);
    }
    if (i == 2) {
        int result = nb1 - nb2;
        return (result);
    }
}

int multiplication(char *s1, char *s2)
{
    int nb1 = my_getnbr(s1);
    int nb2 = my_getnbr(s2);
    int result = nb1 * nb2;

    return (result);
}

int divide(char *s1, char *s2, int i)
{
    int nb1 = my_getnbr(s1);
    int nb2 = my_getnbr(s2);

    if (nb1 == 0 || nb2 == 0)
        return (0);
    if (i == 1) {
        int result = nb1 / nb2;
        return (result);
    }
    if (i == 2) {
        int result = nb1 % nb2;
        return (result);
    }
}

int main(int ac, char **av)
{
    int resultat;

    if (ac < 4) {
        my_put_nbr(0);
        return (84);
    }
    if (av[2][0] ==  '+')
        resultat = addition(av[1], av[3], 1);
    if (av[2][0] == '-')
        resultat = addition(av[1], av[3], 2);
    if (av[2][0] ==  '*')
        resultat = multiplication(av[1], av[3]);
    if (av[2][0] ==  '/')
        resultat = divide(av[1], av[3], 1);
    if (av[2][0] ==  '%')
        resultat = divide(av[1], av[3], 2);
    my_put_nbr(resultat);
    return (0);
}
