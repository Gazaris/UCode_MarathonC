#include <unistd.h>

void mx_printstr(const char *);

void mx_printstr(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++){}
	write(1, s, i);
}
