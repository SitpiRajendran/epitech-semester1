/*
** EPITECH PROJECT, 2018
** PushSwap
** File description:
** main
*/

#include "struct.h"

int sortedlist(list_t *list)
{
    while (list->next != NULL) {
        if (list->val > list->next->val)
            return (0);
        list = list->next;
    }
    return (1);
}

list_t *sortlist(list_t *list1, int a)
{
    list_t *list2 = NULL;
    list_t *temp = list1;

    while(list1->next != NULL) {
        if (list1->val > list1->next->val) {
            swap_a(&list1, a);
            a = 0;
        }
        pb(&list1, &list2, a);
        a = 0;
        temp = temp->next;
    }
    while (list2 != NULL)
        pa(&list2, &list1);
    return (list1);
}

int main(int argc, char **argv)
{
    list_t *list1 = NULL;
    int a = 1;

    if (argc < 2) {
        write (2, "Error", 6);
        return (0);
    }
    for (int i = 1; i < argc; i++)
        list1 = addlast(list1, my_getnbr(argv[i]));
    while (sortedlist(list1) != 1){
        list1 = sortlist(list1, a);
        a = 0;
    }
    write (1, "\n", 1);
    return (0);
}