#include "main.c"

int _printf(const char *format, ...)
{
  va_list args;
  int total = 0, i = 0, j;

  char_check specchar[] = {
    {'\', escape, escape},
    {'%', percent, write(1, "\%", 1)},
    {'"', string, write(1, "\"", 1)},
    {'\'', character, write(1, "\'", 1)},
    
  }
  
  va_start(args, format);

  while (format && format[i])
    {
      j = 0;
      while (specchar[j])
	{
	  if ((format[i] == specchar[j].symbol) && (j != 0))
	    specchar[j].[2]
	    else
	      {
		j++;
		specchar[j].escape
	      }
	  j++;
	}
      i++;
    }
  va_end(args);
  return (total);
}
