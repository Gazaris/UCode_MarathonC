int mx_strlen(const char *);

void mx_swap_char(char*, char*);

void mx_str_reverse(char*);

void mx_str_reverse(char *s)
{
	int a = mx_strlen(s);
	for(int i = 0; i < a/2; i++)
		mx_swap_char(&s[i], &s[a-1-i]);
}
