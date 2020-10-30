#include <stdbool.h>

bool mx_islower(int);
bool mx_isupper(int);
int mx_tolower(int);
int mx_toupper(int);

void mx_reverse_case(char *s)
{
	char *temp = s;
	while(*temp != '\0')
	{
		if(mx_islower(*temp))
			*temp = mx_toupper(*temp);
		else if(mx_isupper(*temp))
			*temp = mx_tolower(*temp);
		temp++;
	}
}
