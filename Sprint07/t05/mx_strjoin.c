#include <stdlib.h>

char *mx_strcpy(char*, const char*);

char *mx_strnew(const int);

int mx_strlen(const char *);

char *mx_strdup(const char*);

char *mx_strcat(char*, const char*);

char *mx_strjoin(const char*, const char*);

char *mx_strjoin(const char *s1, const char *s2)
{
	if(s1 == NULL && s2 == NULL) return NULL;
	if(s1 == NULL && s2 != NULL) return mx_strdup(s2);
	if(s1 != NULL && s2 == NULL) return mx_strdup(s1);

	char *joined; 

	if (!(joined = mx_strnew(mx_strlen(s1) + mx_strlen(s2))))
        return (NULL);

    mx_strcat(joined, s1);
    mx_strcat(joined, s2);

    return joined;
}
