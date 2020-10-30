#include <unistd.h>

void mx_printint(int);

void mx_printint(int n)
{
	char v[20];
	int i = 0;
	if(n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	for( ; n != 0; )
	{
		 v[i] = n % 10 + 48;
		 n /= 10;
		 i++;
	}

	for( ; i >= 0; i--)
		write(1, &v[i], 1);
}
