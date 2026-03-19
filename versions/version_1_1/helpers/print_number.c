#include "../main.h"
/**
 *Prints a digit
 */
int print_digit(char *buffer, int buf_i, int d)
{
  char c = d + '0';
  return (buffer_write(buffer, buf_i, c));
}

/**
 *Prints a number
 */
int print_number(char *buffer, int buf_i, long n)
{
  int count = 0;

  if (n / 10)
    count += print_number(buffer, buf_i, n / 10);

  count += print_digit(buffer, buf_i, n % 10);

  return (count);
}
