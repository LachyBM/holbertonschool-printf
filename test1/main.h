#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "printer.h"


int _printf(const char *format, ...);
int percent(int i, const char *format, va_list args);
int pint(int num);
int pchar(char *c);
void pfloat(va_list args);
int pstring(char *string);
unsigned int puint(unsigned int unum);
const char *escape(const char *format);
int pspec(const char *format, int i, char_check *specchar);

typedef struct specchar
{
  char symbol;
  int (*action)(char *);
  int (*escape)(const char *format, int);
} char_check;

#endif
