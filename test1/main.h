#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * Helper Functions
 */

int pchar(va_list args);
int pstring(va_list args);
int pint(va_list args);
int percent(va_list args);

/**
 * Escape
 */

/** int escape(char c); */

/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*helper)(va_list args);
} char_check;

#endif
