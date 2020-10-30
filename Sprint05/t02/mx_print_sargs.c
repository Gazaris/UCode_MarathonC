void mx_printchar(char);

int mx_strlen(const char*);

void mx_printstr(const char*);

int mx_strcmp(const char*, const char*);

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		int pr = 1, i;
		char *tmp;
		while(pr == 1)
		{
			pr = 0;
			for(i = 1; i < argc - 1; i++)
			{
				if(mx_strcmp(argv[i], argv[i + 1]) > 0)
				{
					pr = 1;
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
				}
			}
		}

		for(int i = 1; i < argc; i++)
		{
			mx_printstr(argv[i]);
			mx_printchar('\n');
		}
	}
	return 0;
}
