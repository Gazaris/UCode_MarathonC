#include "mx_printchar.c"

void mx_printchar(char);

void mx_only_printable(void);

void mx_only_printable(void)
{
	for(char i = 126; i > 31; i--)
		mx_printchar(i);
	mx_printchar('\n'); 
}
