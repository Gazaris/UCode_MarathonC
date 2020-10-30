#include <stdbool.h>

bool mx_is_odd(int);

bool mx_is_odd(int value)
{
	bool a;
	if(value % 2 == 0) a = false;
	else a = true;
	return a;
}
