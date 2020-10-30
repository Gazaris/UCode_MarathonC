void mx_printchar(char);

void mx_cude(int);

void mx_cude(int n)
{
	if(n > 1)
	{
		int i, k, f, l, p = 0;

		//printed first row
		for(i = 0; i < (n/2) + 1; i++)
			mx_printchar(' ');
		mx_printchar('+');
		for(i = 0; i < n*2; i++)
			mx_printchar('-');
		mx_printchar('+');
		mx_printchar('\n');

		//printed top layer
		f = n/2;
		l = 0;
		for(i = 0; i < n/2; i++)
		{
			for(k = 0; k < f; k++)
				mx_printchar(' ');
			mx_printchar('/');
			for(k = 0; k < n*2; k++)
				mx_printchar(' ');
			mx_printchar('/');

			for(k = 0; k < l; k++)
				mx_printchar(' ');
			f--, l++;
			mx_printchar('|');
			p++;
			mx_printchar('\n');
		}

		//printed second row
		mx_printchar('+');
		for(i = 0; i < n*2; i++)
			mx_printchar('-');
		mx_printchar('+');
		for(i = 0; i < l; i++)
			mx_printchar(' ');
		mx_printchar('|');
		p++;
		mx_printchar('\n');

		//printed front layer
		for(i = 0; i < n; i++)
		{
			mx_printchar('|');
			for(k = 0; k < n*2; k++)
			{
				mx_printchar(' ');
			}
			mx_printchar('|');

			for(k = 0; k < l; k++)
				mx_printchar(' ');
			if(p < n)
			{
				mx_printchar('|');
				p++;
			}
			else if(p == n)
			{
				mx_printchar('+');
				p++;
				l--;
			}
			else
			{
				mx_printchar('/');
				l--;
			}
			mx_printchar('\n');
		}

		//printed last row
		mx_printchar('+');
		for(i = 0; i < n*2; i++)
			mx_printchar('-');
		mx_printchar('+');
		mx_printchar('\n');

	} else { return; }
}
