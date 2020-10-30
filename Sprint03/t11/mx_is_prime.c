#include <stdbool.h>

bool mx_is_prime(int);

bool mx_is_prime(int num)
{
	if(num < 2 || (num % 2 == 0))
		return false;
	if(num == 2)
		return true;
	for(int i = 3; i < num; i += 2)
		if(num % i == 0)
			return false;
	return true;
}
