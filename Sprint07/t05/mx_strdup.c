#include <stdlib.h>

char *mx_strcpy(char*, const char*);

char *mx_strnew(const int);

int mx_strlen(const char *);

char *mx_strdup(const char*);

char *mx_strdup(const char *str)
{
    if (str == NULL) return NULL;
    char *rv = mx_strnew(mx_strlen(str));
    return mx_strcpy(rv, str);
}
