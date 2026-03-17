#include "main.h"

int percent(int i, const char *format, va_list args)
{
int k, nomatch = 1;

char_check chartypes[] = {
{c, "char", pchar},
{d, "int", pint},
{f, "float", pfloat},
{u, "unsigned int", puint},
{s, "string", pstring}
};

 while (format && format[i])
   {
     i++;
     k = 0;
     while (chartypes[k].symbol)
       {
	 if (format[i] == chartypes[k].symbol)
	   {
	     chartypes[k][3];
	     nomatch == 0;
	   }
	 k++;
       }
     if (nomatch)
       return (0);
     return (1);
}
