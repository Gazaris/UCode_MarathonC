#include "header.h"

void mx_print_usage()
{
    char s[] = "usage: ./matrix_rain [-s]\n";
    write(2, s, mx_strlen(s));
}
