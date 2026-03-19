#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int total = 0, i = 0, j;
  char buffer[1024];
  int buf_i = 0;

  if (format == NULL)
    return (-1);

  va_start(args, format);

  while (format && format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  if (format[i] == '\0')
	    return (-1);
	  while (specchar[j].symbol)
	    {
	      if (format[i] == specchar[j].symbol)
		{
		  total += specchar[j].helper(args, buffer, buf_i);
		  break;
		}
	      j++;
	    }
	  if (specchar[j].symbol == '\0')
	    {
	      write(1, "%", 1);
	      write(1, &format[i], 1);
	      total += 2;
	    }
	}
      else
	{
	  buffer[buf_i++] = format[i];
	  if (buf_i == 1024)
	    {
	      write (1, buffer, buf_i);
	      total += buf_i;
	      buf_i = 0;
	    }
	  i++;
	}
    }
  if (buf_i > 0)
    {
      write(1, buffer, buf_i);
      total += buf_i;
    }
  va_end(args);
  return (total);
}
