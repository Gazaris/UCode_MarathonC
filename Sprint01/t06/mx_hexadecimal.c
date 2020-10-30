#include "mx_printchar.c"

void mx_printchar(char);

void mx_hexadecimal(void);

void mx_hexadecimal(void)
{	
	for (short i = 0; i < 16; i++)
	{
		char c;
		if(i > 9) c = (char)i + 55;
		else c = (char)i + 48;
		mx_printchar(c);
	}
	mx_printchar('\n');
}
