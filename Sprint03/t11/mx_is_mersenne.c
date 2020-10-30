#include <stdbool.h>

double mx_pow(double, unsigned int);

bool mx_is_prime(int);

bool mx_is_mersenne(int);

bool mx_is_mersenne(int n)
{
	if(!mx_is_prime(n))
		return false;
	for(int i = 1; i < 32; i++)
		if(mx_pow(2, i) == n + 1)
			return true;
	return false;
}
