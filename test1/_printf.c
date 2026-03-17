#include "main.c"
#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int total = 0, i = 0, j, printed;
  char tmp[2];

  char_check specchar[] = {
    {'\\', escape, pspec},
    {'%', percent, pspec},
    {'"', pstring, pspec},
    {'\'', pchar, pspec},
    
  };
  
  va_start(args, format);

  while (format && format[i])
    {
      j = 0, printed = 0;
      while (specchar[j].symbol)
	{
	  if ((format[i] == specchar[j].symbol) && (j != 0))
	    {
	      specchar[j].action[j];
	      printed = 1;
	    }
	  else if ((format[i] == specchar[j].symbol))
	    {
	      specchar[j].escape(format, i);
	      printed = 1;
	    }
	    j++;
	}
	  if (!printed)
	    {
	      tmp[0] = format[i];
	      tmp[1] = '\0';
	      pstring(tmp);
	    }
	  i++;
    }
  va_end(args);
  return (total);
}

int pspec(const char *format, int i, char_check *specchar)
{
  int l = 0;
  char tmp[2] = {format[i+1], '\0'};
  
  while(specchar[0].symbol[l])
    {
      if (specchar[0].symbol[l] == format[i])
	pchar(tmp);
      l++;
    }
  return (0);
}
