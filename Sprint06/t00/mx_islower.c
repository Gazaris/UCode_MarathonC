#include <stdbool.h>

bool mx_islower(int);

bool mx_islower(int c)
{
	bool a = false;
	if(c >= 97 && c <= 122) { a = true; }
	else { a = false; }
	return a; 
}
