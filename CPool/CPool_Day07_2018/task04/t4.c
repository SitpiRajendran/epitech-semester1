/*
** EPITECH PROJECT, 2018
** d6 - T4 - print params
** File description:
** displays its arguments
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_print_params(int *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i = 1;

    while (i < argc) {
        my_print_params('argv[i]');
        my_print_params('\n');
        i++;
    }
    return (0);
}
