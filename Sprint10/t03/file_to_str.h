#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

char *mx_strdup(const char *);
char *mx_strcat(char *, const char *);
int mx_strlen(const char *);
char *mx_strcpy(char *, const char *);
char *mx_strnew(const int);
char *mx_strjoin(char const *, char const *);
char *mx_file_to_str(const char*);
