#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* _switch
* @sign: the ident of incoming
* @ap: 
* Return:
*/

int _switch(char sign, va_list ap)
{
        switch (sign)
        {
                case 'd':
                case 'i':
                {
                        int num = va_arg(ap, int);
                        return (_print_int(num));

                }
                case 'u':
                {
                        unsigned int unum = va_arg(ap, unsigned int);
                        return (_print_uint(unum));
                }
                case 's':
                {
                        char *string = va_arg(ap,char *);
                        return (_print_string(string));
                }
                case 'c':
                {
                       	char *c = va_arg(ap, char *);
                        return (_print_char(c));
                }
                case 'x':
		{
			unsigned int hex = va_arg(ap,unsigned int);
			return(_print_hex(hex,0));
		}	
                case 'X':
                {
                        unsigned int hex = va_arg(ap,unsigned int);
                        return(_print_hex(hex,1));
                }
                       
                case 'p':
		{
                        void *addr = va_arg(ap, void *);
                        return (_print_address(addr));
		}
                case 'o':
		{
                      	unsigned int oct = va_arg(ap, unsigned int);
                 	return(_print_oct(oct));
		}
		case '%':
			{
                      	write(1, "%", 1);		
                        return(1);
			}
                default:
                        write(1, "%", 1);
                        write(1, &sign, 1);
                        return (2);
        }
}
