void mx_printchar(char);

int mx_strlen(const char *);

void mx_printstr(const char *);

char *mx_strchr(const char*, int);

int main(int argc, char *argv[])
{
	argc += 0;
	char *cp = argv[0];
	int slash = 0;
	//mx_printstr(cp);
	for(int i = 0; cp[i]; i++)
		if(cp[i] == '/')
			slash++;
	if(cp[0] == '/')
		slash--;
	for(int i = 0; i < slash; i++)
		cp = mx_strchr(cp, '/');
	if(cp[0] == '/')
		//cp++;
		cp = mx_strchr(cp, cp[1]);
	mx_printstr(cp);
	mx_printchar('\n');
	return 0;
}
