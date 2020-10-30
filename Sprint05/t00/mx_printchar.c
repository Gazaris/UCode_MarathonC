#include <unistd.h>

void mx_printchar(char);

void mx_printchar(char a)
{
	write(1, &a, 1);
}
