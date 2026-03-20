#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int i = 0, j;
  char buffer[1024];
  int x = 0, y = 0, matched;
  int *buf_i = &x, *total = &y;

  if (format == NULL)
    return (-1);

  va_start(args, format);

  while (format[i])
    {
    if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  matched = 0;
	
	  if (format[i] == '\0')
	    return (-1);
	while (specchar[j].symbol)
	{
	    if (format[i] == specchar[j].symbol)
		{
		  specchar[j].helper(args, buffer, buf_i, total);
		  matched = 1;
		  break;
		}
	j++;
	}
	  if (!matched)
	    {
		buffer_write(buffer, buf_i, '%', total);
	    buffer_write(buffer, buf_i, format[i], total);
	    *total += 2;
	    }
	}
      else
	{
	  buffer_write(buffer, buf_i, format[i], total);
	  if (*buf_i == 1024)
	    {
	      write (1, buffer, *buf_i);
	      *total += *buf_i;
	      *buf_i = 0;
	    }
	}
	i++;
    }
  if (*buf_i > 0)
    {
      write(1, buffer, *buf_i);
      *total += *buf_i;
    }
  va_end(args);
  return (*total);
}
