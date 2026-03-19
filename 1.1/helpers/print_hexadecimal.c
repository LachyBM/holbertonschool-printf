#include "../main.h"
/**
 *Print Hex Number
 */
int print_hex(char *buffer, int buf_i, unsigned long int n, int uppercase)
{
  int count = 0;
  char *digits;
  char c;

  if (uppercase)
    digits = "0123456789ABCDEF";
  else
    digits = "0123456789abcdef";
  if (n / 16)
    count += print_hex(buffer, buf_i, n / 16, uppercase);
  c = digits[n % 16];
  count += buffer_write(buffer, buf_i, c);
  return (count);
}
