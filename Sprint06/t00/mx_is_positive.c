void mx_printstr(const char *);

void mx_is_positive(int);

void mx_is_positive(int i)
{
	if(i < 0) mx_printstr("false\n");
	else if (i > 0 ) mx_printstr("true\n");
	else mx_printstr("zero\n");
}
