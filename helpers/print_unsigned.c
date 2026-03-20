#include "../main.h"
/**
 *Prints unsigned number
 */
int print_uns(char *buffer, int *buf_i, unsigned int n)
{
  int count = 0;

  if (n / 10)
    print_uns(buffer, buf_i, n / 10);

  print_digit(buffer, buf_i, n % 10);
  return (0);
}
