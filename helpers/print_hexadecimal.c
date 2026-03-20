#include "../main.h"
/**
 *Print Hex Number
 */
int print_hex(char *buffer, int *buf_i, unsigned long int n, int uppercase)
{
  char *digits;
  char c;

  if (uppercase)
    digits = "0123456789ABCDEF";
  else
    digits = "0123456789abcdef";
  if (n / 16)
    print_hex(buffer, buf_i, n / 16, uppercase);
  c = digits[n % 16];
  buffer_write(buffer, buf_i, c);
  return (0);
}
