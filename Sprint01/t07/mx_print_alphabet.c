#include "mx_printchar.c"

void mx_print_alphabet(void)
{	
	for (int i = 0; i < 26; i++)
	{
		char c;
		if(i % 2 == 0)
		{ 
			c = (char)i + 65; 
		}
		if(i % 2 == 1)
		{ 
			c = (char)i + 97; 
		}
		mx_printchar(c);
	}
		mx_printchar('\n');
}
