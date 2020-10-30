#include "list.h"

void mx_push_index(t_list **list, void *data, int index)
{
    if(list != NULL && *list != NULL) {
        if(index <= 0)
            mx_push_front(list, data);
        else {
            t_list *p = *list;
            for(int i = 1; i < index; i++) {
                if(p->next != NULL)
                    p = p->next;
            }
            if(p->next == NULL)
                mx_push_back(list, data);
            else {
                t_list *new_node = mx_create_node(data);
                new_node->next = p->next;
                p->next = new_node;
            }
        }
    }
}
