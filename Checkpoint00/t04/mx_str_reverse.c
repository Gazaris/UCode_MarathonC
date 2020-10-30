void mx_str_reverse(char*);

void mx_str_reverse(char *s)
{
	int a;
	for(a = 0; s[a] != '\0'; a++){}

	for(int i = 0; i < a/2; i++)
	{
		char temp = s[i];
		s[i] = s[a-1-i];
		s[a-1-i] = temp;
	}
}
