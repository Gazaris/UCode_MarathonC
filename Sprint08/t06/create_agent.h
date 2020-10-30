#ifndef CREATE_AGENT
#define CREATE_AGENT

#include <stdlib.h>
#include "agent.h"

typedef struct s_agent t_agent;

char *mx_strcpy(char*, const char*);
char *mx_strnew(const int);
int mx_strlen(const char *);
char *mx_strdup(const char*);
t_agent *mx_create_agent(char*, int, int);

#endif
