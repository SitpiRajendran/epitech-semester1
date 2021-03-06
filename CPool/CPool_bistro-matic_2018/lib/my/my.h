/*
** EPITECH PROJECT, 2018
** day09
** File description:
** mylib
*/

#define MY_H_

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

int my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2);

char *my_strupcase(char * str);

char *my_strlowcase(char * str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char *str, char *str2);

int my_str_isupper(char const *str);

int my_str_islower(char const *str);

int my_str_isprintable(char const *str);

int my_strlen(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str);

char *my_strcat(char *dest, char const *str);

char *my_strncat(char *dest, char const *str, int nb);

int addition(int nb1, int nb2, int f);

int divide(int nb1, int nb2, int f);

int multiplication(int nb1, int nb2);

int my_getnbri(char *str);

char *my_strdup(char const *src);

char *newstr(char const *str, int ni);

char *my_itoa(int nbr);

char *my_takenbr(char *str);

int countopar(char *str);

int countcpar(char *str);

int samechar(char *str);
