/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** manipulation b
*/

#include "struct.h"

void swap_b(list_t **list1)
{
    list_t *temp;

    temp = *list1;
    temp = temp->next;
    (*list1)->next = temp->next;
    temp->next = *list1;
    *list1 = temp;
    write (1, " sb", 4);
}

void rb(list_t **list1)
{
    list_t *newlist = *list1;

    while (newlist->next != NULL)
        newlist = newlist->next;

    newlist->next = *list1;
    *list1 = (*list1)->next;
    newlist->next->next = NULL;
    write (1, " rb", 4);
}

void pb(list_t **list1, list_t **list2, int i)
{
    int save = (*list1)->val;
    list_t *newlist;
    list_t *element;

    newlist = malloc(sizeof(*newlist));
    element = malloc(sizeof(list_t));

    if (list1 != NULL) {
        (*list1) = (*list1)->next;
        element->val = save;
        element->next = *list2;
        *list2 = element;
        if (i == 0)
            write(1, " ", 1);
        write (1, "pb", 2);
    }
}
