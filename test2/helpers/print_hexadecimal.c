#include "../main.h"
/**
 *Print Hex Number
 */
int print_hex(unsigned long int n, int uppercase)
{
  int count = 0;
  char *digits;
  char c;

  if (uppercase)
    digits = "0123456789ABCDEF";
  else
    digits = "0123456789abcdef";
  if (n / 16)
    count += print_hex(n / 16, uppercase);
  c = digits[n % 16];
  count += write(1, &c, 1);
  return (count);
}
