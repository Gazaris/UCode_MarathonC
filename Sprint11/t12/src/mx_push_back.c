#include "playlist.h"

void mx_push_back(t_list *list, char *artist, char *name)
{
    t_list *new_node = mx_create_node();
    new_node->artist = artist;
    new_node->name = name;
    while(list->next != NULL)
        list = list->next;
    list->next = new_node;
}
