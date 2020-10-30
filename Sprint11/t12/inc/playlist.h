#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>
#define P_SIZE 8
#define ERROR "ERROR\n"
#define USAGE "usage: ./playlist [file] [command] [args]\n"

typedef struct s_list {
    char *artist;
    char *name;
    struct s_list *next;
}              t_list;

enum e_operation {
    NONE,
    ADD,
    REMOVE,
    SORT,
    PRINT
};

enum e_sort {
    ARTIST,
    NAME
};

void mx_printerr(const char*);
int mx_strncmp(const char*, const char*, int);
int mx_strlen(const char*);
char *mx_file_to_str(const char*);
bool mx_isspace(char);
char *mx_strnew(const int);
char *mx_strstr(const char*, const char*);
void mx_error();

int mx_count_songs(char*);
t_list *mx_parse_songs(char*, int);
t_list *mx_create_node();
//void mx_push_front(t_list**, void*);
void mx_push_back(t_list*, char*, char*);
//void mx_push_index(t_list**, void*, int);
void mx_pop_back(t_list*);
void mx_pop_front(t_list*);
//void mx_pop_index(t_list**, int);
//void mx_clear_list(t_list**);
//int mx_list_size(t_list*);
//void mx_foreach_list(t_list*, void(*)(t_list*));
//t_list *mx_sort_list(t_list*, bool(*)(void*, void*));
//void mx_del_node_if(t_list**, void*, bool(*cmp)(void*, void*));
