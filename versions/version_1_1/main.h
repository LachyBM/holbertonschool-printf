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

int pchar(va_list args, char *buffer, int buf_i);
int pstring(va_list args, char *buffer, int buf_i);
int pint(va_list args, char *buffer, int buf_i);
int percent(va_list args, char *buffer, int buf_i);
int puint(va_list args, char *buffer, int buf_i);
int phexu(va_list args, char *buffer, int buf_i);
int phexl(va_list args, char *buffer, int buf_i);
int pbin(va_list args, char *buffer, int buf_i);
int poct(va_list args, char *buffer, int buf_i);
int paddr(va_list args, char *buffer, int buf_i);
int buffer_write(char *buffer, int buf_i, char c);
int buffer_nil(char *buffer, int buf_i);

/**
 * Print_Numbers Functions
 */

int print_digit(char *buffer, int buf_i, int d);
int print_number(char *buffer, int buf_i, long n);
int print_uns(char *buffer, int buf_i,unsigned int n);
int print_hex(char *buffer, int buf_i,unsigned long int n, int uppercase);
int print_bin(char *buffer, int buf_i,unsigned int n);
int print_oct(char *buffer, int buf_i,unsigned int n);
int print_addr(char *buffer, int buf_i, void *addr);

/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*helper)(va_list args, char *buffer, int buf_i);
} char_check;

extern char_check specchar[];

#endif
