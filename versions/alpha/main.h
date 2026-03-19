#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *formet, ...);
int _print_int(int num);
unsigned int _print_uint(unsigned int unum);
int _switch(char sign, va_list ap);
int _print_string(char *);
int _print_char(char *);
unsigned int _print_hex(unsigned long hex, int upper);
unsigned int _print_oct(unsigned int oct);
unsigned int _print_address(void *addr);

#endif
