#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * Handler Functions - Held in Specchar Struct
 */

int pchar(va_list args);
int pstring(va_list args);
int pint(va_list args);
int percent(va_list args);
int puint(va_list args);
int phex(va_list args);
	  
/**
 * Print_Numbers Functions
 */

int print_digit(int d);
int print_number(long n);
int print_uns(unsigned int n);
int print_hex(unsigned int n, int uppercase);
	  
/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*helper)(va_list args);
} char_check;

#endif
