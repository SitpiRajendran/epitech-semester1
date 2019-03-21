/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** unit test
*/

#include  <criterion/criterion.h>
#include "../my.h"

Test(sokoban, cols_nb)
{
    char *str = ("##########\n#          #\n#          #\n
                # PXO   ###\n#          #\n# OX      #\n##########\n");
    int nb_cols = my_strcol(str);

    cr_assert_eq(nb_cols, 13);
}

Test(sokoban, rows_nb)
{
    char *str = ("##########\n#          #\n#          #\n
                # PXO   ###\n#          #\n# OX      #\n##########\n");
    int nb_rows = my_strrow(str);

    cr_assert_eq(nb_rows, 8);
}