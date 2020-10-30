void mx_printchar(char);

void mx_str_separate(const char*, char);

void mx_str_separate(const char *str, char delim)
{
	int c = 0;
	while(*str != '\0')
	{
		if(*str == delim)
			c = 1;
		else
			if(c == 1)
			{
				mx_printchar('\n');
				mx_printchar(*str);
				c = 0;
			}
			else
				mx_printchar(*str);
		str++;
	}
}
