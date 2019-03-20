/*
** EPITECH PROJECT, 2018
** CPool_tree
** File description:
** Faire un sapin
*/

int body(int size, int max)
{
    int leaf = -1;
    int count_lign = 0;
    
    while (count_lign < size + 3) {
        leaf = leaf + 2;
        int count_leaf = 1;
        int count_max = 0;
        while (count_max <= max) {
            my_putchar(' ');
            count_max++;
        }
        while (count_leaf <= leaf ) {
            my_putchar('*');
            count_leaf++;
        }
        max = max - 1;
        my_putchar('\n');
        count_lign++;
    }
}

int maxf(int size)
{
    int max;
    
    if (size == 1) {
        max = 2;
    } else {
        max = maxf((size - 1)) + size + 3 - (size / 2);
    }
    return(max);
}


int foot(int size, int max)
{
    int count_lign = 0;
    int count_column = 0;
    int count_max = 0;

    while (count_lign < size) {
        count_column = 0;
        count_max = 0;
        while (count_max <= max) {
            my_putchar(' ');
            count_max++;
        }
        while (count_column < size) {
            my_putchar('|');
            count_column++;
        }
        my_putchar('\n');
        count_lign++;
    }
}

int foot2(int size, int max)
{
    int count_lign = 0;
    int count_column = 0;
    int count_max = 0;

    while (count_lign < size) {
        count_column = 0;
        count_max = 0;
        while (count_max <= max) {
            my_putchar(' ');
            count_max++;
        }
        while (count_column < size + 1) {
            my_putchar('|');
            count_column++;
        }
        my_putchar('\n');
        count_lign++;
    }
}

void tree(int size)
{
    int max;
    if (size > 0) {
        max = maxf(size);
        body(size,max);
        if (size % 2 == 1 )
            foot(size, max);
        if (size % 2 == 0)
            foot2(size,max);
    }
    return;
}
