#include <stdlib.h>

char *mx_strcpy(char*, const char*);

void mx_strdel(char**);

char *mx_strnew(const int);

int mx_strlen(const char *);

char *mx_strdup(const char*);

char *mx_strcat(char*, const char*);

char *mx_strjoin(const char*, const char*);

char *mx_concat_words(char**);

char *mx_concat_words(char **words)
{
	if(words == NULL) return NULL;
	char *joined = NULL;
	char **wordscp = words;

	while(*wordscp != NULL)
	{
		joined = mx_strjoin(joined, *wordscp);
		if(*(wordscp + 1) != NULL)
			joined = mx_strjoin(joined, " ");
		wordscp++;
	}

	/*for(int i = 0; *(words + i) != NULL; i++)
	{
		mx_strdel(words + i);
	}
	free(words);*/
	return joined;
}
