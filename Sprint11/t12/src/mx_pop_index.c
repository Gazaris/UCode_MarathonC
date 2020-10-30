#include "playlist.h"

void mx_pop_index(t_list *list, int index)
{
    if(list != NULL) {
        if(index <= 0)
            mx_pop_front(list);
        else {
            t_list *p = list;
            for(int i = 1; i < index; i++) {
                if(p->next != NULL)
                    p = p->next;
            }
            if(p->next == NULL)
                mx_pop_back(list);
            else {
                t_list *temp = p->next->next;
                free(p->next);
                p->next = temp;
            }
        }
    }
}
