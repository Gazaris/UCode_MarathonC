#include <unistd.h>

void mx_printchar(char a)
{
	write(1, &a, 1);
}

int mx_strlen(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++){}
	return i;
}

void mx_printstr(const char *s)
{
	write(1, s, mx_strlen(s));
}

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		for(int i = 1; i < argc; i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
	}
	return 0;
}
