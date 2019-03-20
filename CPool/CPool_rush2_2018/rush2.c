/*
** EPITECH PROJECT, 2018
** R2 - S2
** File description:
** Count occurences of a letter
*/

int my_put_nbr(int nb);

void my_putchar(char c);

char *my_strlowcase(char *str);

int counts(int argc, char **argv, int a)
{
    int i = 0;
    int count = 0;
    char *str = my_strlowcase(argv[1]);
    int maj;
    int min;
    char *lettre = my_strlowcase(argv[a]);

    while (str[i] != '\0') {
        if (str[i] == lettre[0])
            count++;
        i++;
    }
    return (count);
}

int freq(char **argv, int count)
{
    char *str = my_strlowcase(argv[1]);
    int tletter = 0;
    int i;

    while (str[i] != '\0') {
        if (97 <= str[i] <= 122)
            tletter++;
        i++;
    }

    int percent = (10000 / tletter) * count;
    int dec = percent % 100;
    int ent = percent / 100;
    my_putchar(40);
    my_put_nbr(ent);
    my_putchar(46);
    my_put_nbr(dec);
    my_putchar(37);
    my_putchar(41);
}

int main(int argc, char **argv)
{
    int count;
    int a = 2;
    char *lettre = my_strlowcase(argv[a]);

    while (a < argc) {
        if ('a' <= lettre[0] && lettre[0] <= 'z') {
            count = counts(argc, argv, a);
        }  else {
            write(2, "84 error code\n", 14);
            return (84);
        }
        my_putchar(*argv[a]);
        my_putchar(58);
        my_put_nbr(count);
        freq(argv, count);
        my_putchar('\n');
        a++;
    }
    return (0);
}
