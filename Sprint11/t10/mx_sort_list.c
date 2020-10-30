#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b))
{
    int pr = 1;
    t_list *copy;
    t_list *temp;
    while(pr)
    {
        pr = 0;
        temp = list;
        while(temp->next != NULL)
        {
            if(cmp(temp->data, temp->next->data))
            {
                pr = 1;
                copy = temp;
                temp = temp->next;
                temp->next = temp;
            }
        }
    }
    return list;
}
