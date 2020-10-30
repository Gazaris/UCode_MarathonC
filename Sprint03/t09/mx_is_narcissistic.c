#include <stdbool.h>

double mx_pow(double, unsigned int);

bool mx_is_narcissistic(int);

bool mx_is_narcissistic(int num)
{
	int sum = 0, counter = 0, cp = num;
	while(cp != 0)
	{
		counter++;
		cp /= 10;
	}
	cp = num;
	while(cp != 0)
	{
		sum += mx_pow((cp % 10), counter);
		cp /= 10;
	}
	if(sum == num)
		return true;
	else
		return false;s
	return false;
}
