#include <stdlib.h>
#include <stdbool.h>

void mx_strdel(char**);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

int mx_count_words(const char*, char);

char **mx_strsplit(char const*, char);

char **mx_strsplit(char const *str, char delim) 
{
	int word_length = 0, start = 0, index = 0;
	bool exit = false, wasword = false;

	int count_words = mx_count_words(str, delim); //creating a varible with the numberr of words in s
	char** result = (char**)malloc(8 * count_words); //allocating memory for an array of strings

	for (int i = 0; i < count_words; i++) 
	{
		word_length = 0;
		exit = false;
		for(;!exit; index++)
		{
			if(str[index] != delim && !wasword)
			{
				start = index;
				word_length++;
				wasword = true;
			}
			else if(str[index] != delim && wasword)
			{
				word_length++;
			}
			else if(str[index] == delim && wasword)
			{
				exit = true;
				wasword = false;
				index++;
			}
			else if(str[index] == delim && !wasword)
				index++;
		}

		for(int k = 0; k <= start; k++)
			str++;
		result[i] = mx_strnew(word_length);
		result[i] = mx_strncpy(result[i], str, word_length);
		for(int k = start; k >= 0; k--)
			str--;
	}
	result[count_words] = NULL; //making this array NULL-terminated
	return result;
}
