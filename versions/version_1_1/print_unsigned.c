#include "../main.h"
/**
 *Prints unsigned number
 */
int print_uns(char *buffer, int *buf_i, unsigned int n, int *total)
{
  if (n / 10)
    print_uns(buffer, buf_i, n / 10, total);

  print_digit(buffer, buf_i, n % 10, total);
  return (0);
}
