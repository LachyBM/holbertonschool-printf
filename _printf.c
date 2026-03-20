#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int total = 0, i = 0, j;
  char buffer[1024];
  int x = 0, matched;
  int *buf_i = &x;

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
	/*if (*buf_i > 0)
	{
		write(1, buffer, *buf_i);
		total += *buf_i;
		*buf_i = 0;
	}*/
	while (specchar[j].symbol)
	{
	    if (format[i] == specchar[j].symbol)
		{
		  total += specchar[j].helper(args, buffer, buf_i);
		  matched = 1;
		  break;
		}
	j++;
	}
	  if (!matched)
	    {
		buffer_write(buffer, buf_i, '%');
	    buffer_write(buffer, buf_i, format[i]);
	    total += 2;
	    }
	}
      else
	{
	  buffer[(*buf_i)++] = format[i];
	  if (*buf_i == 1024)
	    {
	      write (1, buffer, *buf_i);
	      total += *buf_i;
	      *buf_i = 0;
	    }
	}
	i++;
    }
  if (*buf_i > 0)
    {
      write(1, buffer, *buf_i);
      total += *buf_i;
    }
  va_end(args);
  return (total);
}
