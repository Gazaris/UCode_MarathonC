#include <stdbool.h>

bool mx_isupper(int);

bool mx_isupper(int c)
{
	bool a = false;
	if(c >= 65 && c <= 90) { a = true; }
	else { a = false; }
	return a; 
}
