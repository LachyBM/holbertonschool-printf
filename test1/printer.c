#include "main.h"

/* Print a single character */
int pchar(va_list args)
{
  char c = va_arg(args, int);
  return write(1, &c, 1);
}

/* Print a string */
int pstring(va_list args)
{
  char *str = va_arg(args, char *);
  int len = 0;

  if (!str)
    str = "(null)";

  while (str[len])
    len++;
  write(1, str, len);
  return len;
}

/* Print signed integer */
int pint(va_list args)
{
  int num = va_arg(args, int);
  char buf[20];
  int i = 0, len = 0;
  unsigned int n;

  if (num < 0)
    {
      write(1, "-", 1);
      len++;
      n = -num;
    }
  else
    n = num;

  /* Convert number to string in reverse */
  do {
    buf[i++] = (n % 10) + '0';
    n /= 10;
  } while (n);

  /* Print in correct order */
  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

int percent(va_list args)
{
  (void)args;
  return write(1, "%", 1);
}
