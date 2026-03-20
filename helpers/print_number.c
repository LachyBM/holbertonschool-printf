#include "../main.h"
/**
 *Prints a digit
 */
int print_digit(char *buffer, int *buf_i, int d)
{
  char c = d + '0';
  buffer_write(buffer, buf_i, c);
  return (0);
}

/**
 *Prints a number
 */
int print_number(char *buffer, int *buf_i, long n)
{
  if (n / 10)
    print_number(buffer, buf_i, n / 10);

  print_digit(buffer, buf_i, n % 10);

  return (0);
}
