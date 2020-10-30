#include "list.h"

int mx_list_size(t_list *list)
{
    t_list *p = list;
    int count = 0;
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
