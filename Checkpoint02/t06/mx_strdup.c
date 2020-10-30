#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src)
{
	char *tmp = dst;
	while(*dst != '\0' || *src != '\0')
	{
		*dst = *src;
		dst++, src++;
	}
	return tmp;
}

char *mx_strnew(const int size)
{
	if(size < 1) return NULL;
	char *str = (char*)malloc(size + 1);

	for(int i = 0; i <= size; i++)
		str[i] = '\0';

	return str;
}

int mx_strlen(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++){}
	return i;
}

char *mx_strdup(const char *str)
{
    if (str == NULL) return NULL;
    char *rv = mx_strnew(mx_strlen(str));
    return mx_strcpy(rv, str);
}
