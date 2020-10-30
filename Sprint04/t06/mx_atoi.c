#include <stdbool.h>

int mx_atoi(const char*);

int mx_atoi(const char *str)
{
  int sign = 0;
  unsigned int i = 0;
  int digit = 0;
  for (; str[i]; ++i) {
    if (!mx_isspace(str[i])) {
      if (mx_isdigit(str[i])) {
        digit *= 10;
        digit += str[i] - '0';
      }
      else {
        if (str[i] == '-') {
          if (sign == 0) { sign = 1;}
          else {return (sign == 1 ? -digit : digit);}
        }
      }
    }
  }
  return (sign == 1 ? -digit : digit);
}
