#ifndef XAPASHO
#define XAPASHO

#include <uistd.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_printchar(char);
void mx_printint(int);
void mx_printstr(const char *);
char *mx_strcpy(char*, const char*);
int mx_strlen(const char *);
int mx_strcmp(const char*, const char*);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char*);

int mx_count_substr(const char*, const char*);
int mx_factorial_iter(int);
int mx_count_words(const char*, char);
int mx_gcd(int, int);
int mx_lcm(int, int);
bool mx_is_odd(int);
bool mx_is_prime(int);
void mx_is_positive(int);
bool mx_isalpha(int);
bool mx_isupper(int);
bool mx_islower(int);
double mx_pow(double, unsigned int);
void mx_sort_arr_int(int*, int);
int mx_sqrt(int);
char *mx_strcat(char*, const char*);
char *mx_strchr(const char*, int);
int mx_strncmp(const char*, const char*, int);
char *mx_strncpy(char*, const char*, int);
char *mx_strstr(const char *, const char *);
void mx_swap_char(char*, char*);
int mx_tolower(int);
int mx_toupper(int);

#endif
