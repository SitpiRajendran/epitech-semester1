/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** manip
*/

#include "struct.h"

list_t *addlast(list_t *list, int val)
{
    list_t *element;
    list_t *temp;

    element = malloc(sizeof(list_t));
    element->val = val;
    element->next = NULL;

    if (list == NULL)
        return (element);
    temp = list;

    while (temp->next != NULL)
        temp = temp->next;
    temp->next = element;
    return (list);
}

list_t *addfirst(list_t *list, int val)
{
    list_t *element;

    element = malloc(sizeof(list_t));
    element->val = val;
    element->next = list;
    list = element;
    return (list);
}

list_t *delfirst(list_t *list1)
{
    list_t *newlist;
    newlist = malloc(sizeof(*newlist));

    if (list1 != NULL) {
        newlist = list1->next;
        free(list1);
        return (newlist);
    } else
        return (NULL);
}


list_t *dellast(list_t *list1)
{
    list_t *temp = NULL;
    list_t *temp2 = NULL;

    if (list1 != NULL)
        return (NULL);

    if (list1->next == NULL) {
        free(list1);
        return (NULL);
    }
    temp = list1;
    while (temp->next != NULL) {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
    return (list1);
}

int voidlist(list_t *list1)
{
    if (list1 == NULL)
        return (1);
    else
        return (0);
}

/* void printlist(list_t *list)
{
    list_t *temp = list;

    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("- \n");
} */