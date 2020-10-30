#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);

int mx_strlen(const char *);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

bool mx_isspace(int);

char *mx_strtrim(const char*);

char *mx_strtrim(const char *str)
{
	if(str == NULL)
		return NULL;
	
	int from_left = -1, from_right = -1;

	for(int i = 0; i < mx_strlen(str); i++) //finding the most left non-space symbol
		if(!mx_isspace(str[i]))
		{
			from_left = i;
			break;
		}

	for(int i = mx_strlen(str) - 1; i > 0; i--) //finding most right non-space symbol
		if(!mx_isspace(str[i]))
		{
			from_right = i;
			break;
		}

	if(from_left == -1 && from_right == -1) //if haven't found any symbols
		return NULL;

	if(from_left == -1) //setting index to 0 if the most right symbol was found 
		from_left = 0;

	if(from_right == -1) //setting index to 0 if the most left symbol was found 
		from_right = 0;

	int size_of_new = from_right - from_left + 1; //finding size of the new string
	char *new_str = mx_strnew(size_of_new); //allocating memory to the new string
	
	for(int i = 0; i < from_left; i++) //moving a pointer to most left symbol
		str++;
	new_str = mx_strncpy(new_str, str, size_of_new); //copying symbols

	if(new_str == NULL) //if nothing is copied return NULL
		return NULL;

	return new_str;
}
