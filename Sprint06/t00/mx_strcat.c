int mx_strlen(const char *);

char *mx_strcat(char*, const char*);

char *mx_strcat(char *s1, const char *s2)
{
	char *cp = s1;
	for(long i = 0; i < mx_strlen(s1); i++)
		cp++;
	for(long i = 0; i < mx_strlen(s2); i++)
	{
		*cp = s2[i];
		cp++;
	}
	return s1;
}
