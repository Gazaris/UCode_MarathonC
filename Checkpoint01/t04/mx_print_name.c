#include <unistd.h>

void mx_printint(int n)
{
	if(n != 0)
	{
		char v[20];
		int i = 0;
		long val = n;
		if(val < 0)
		{
			write(1, '-', 1);
			val = -val;
		}
	
		while(val != 0)
		{
			 v[i++] = val % 10 + '0';
			 val /= 10;
		}
	
		for(int j = i - 1; j >= 0; j--)
			write(1, v[j], 1);
	} else write(1, '0', 1);
}

int mx_strlen(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++){}
	return i;
}

int main(int argc, char *argv[])
{
	write(1, argv[0], mx_strlen(argv[0]));
	write(1, '\n', 1);
	mx_printint(argc);
	write(1, '\n', 1);
	return 0;
}
