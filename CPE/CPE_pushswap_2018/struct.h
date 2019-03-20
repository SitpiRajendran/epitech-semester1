/*
** EPITECH PROJECT, 2018
** Pushswap
** File description:
** Structure
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
    int val;
    struct s_list *next;
} list_t;

int my_getnbr(char const *str);

list_t *addlast(list_t *list, int val);
list_t *addfirst(list_t *list, int val);
list_t *delfirst(list_t *list1);
list_t *dellast(list_t *list1);
int voidlist(list_t *list1);
void printlist(list_t *list);

void swap_a(list_t **list1, int i);
void ra(list_t **list1);
void pa(list_t **list1, list_t **list2);

void swap_b(list_t **list1);
void rb(list_t **list1);
void pb(list_t **list1, list_t **list2, int i);