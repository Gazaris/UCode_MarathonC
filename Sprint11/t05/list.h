#pragma once

#include <stdlib.h>
#include <stdbool.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
}              t_list;


//t_list *mx_create_node(void*);
//void mx_push_front(t_list**, void*);
//void mx_push_back(t_list**, void*);
//void mx_pop_back(t_list**);
//void mx_pop_front(t_list**);
int mx_list_size(t_list*);
