/*
** EPITECH PROJECT, 2018
** D6 - T2.5 - test strncpy
** File description:
** test t2
*/

#include <criterion/criterion.h>

char *mystrrncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_five_characters_on_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest,"HelloWorld", 15);
    cr_assert_str_eq(dest, "Hello");
}
