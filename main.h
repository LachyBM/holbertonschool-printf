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

int pchar(va_list args, char *buffer, int *buf_i, int *total);
int percent(va_list args, char *buffer, int *buf_i, int *total);
int pstring(va_list args, char *buffer, int *buf_i, int *total);
int pint(va_list args, char *buffer, int *buf_i, int *total);
int puint(va_list args, char *buffer, int *buf_i, int *total);
int phexu(va_list args, char *buffer, int *buf_i, int *total);
int phexl(va_list args, char *buffer, int *buf_i, int *total);
int pbin(va_list args, char *buffer, int *buf_i, int *total);
int poct(va_list args, char *buffer, int *buf_i, int *total);
int paddr(va_list args, char *buffer, int *buf_i, int *total);
int buffer_write(char *buffer, int *buf_i, char c, int *total);
int buffer_nil(char *buffer, int *buf_i, int *total);

/**
 * Print_Numbers Functions
 */

int print_digit(char *buffer, int *buf_i, int d, int *total);
int print_number(char *buffer, int *buf_i, long n, int *total);
int print_uns(char *buffer, int *buf_i,unsigned int n, int *total);
int print_hex(char *buffer, int *buf_i,unsigned long int n, int uppercase, int *total);
int print_bin(char *buffer, int *buf_i,unsigned int n, int *total);
int print_oct(char *buffer, int *buf_i,unsigned int n, int *total);
int print_addr(char *buffer, int *buf_i, void *addr, int *total);

/**
 * Struct Mapping Specifiers to Handlers
 */

typedef struct specchar
{
  char symbol;
  int (*helper)(va_list args, char *buffer, int *buf_i, int *total);
} char_check;

extern char_check specchar[];

#endif
