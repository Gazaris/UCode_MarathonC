char *mx_strchr(const char*, int);

int mx_strlen(const char *);

int mx_srtncmp(const char*, const char*, int);
 
char *mx_strstr(const char*, const char*);

int mx_count_substr(const char*, const char*);

int mx_count_substr(const char *str, const char *sub)
{
	const char *needle = sub;
	int total = 0;
	const char *p = str;
	while ((p = mx_strstr(p,needle)) != 0) 
	{
		p += mx_strlen(needle);
		total++;
	}
	return total;
}
