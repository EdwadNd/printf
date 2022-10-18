#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int  (*get_func(const char *format))(va_list);

int print_int(va_list i);
int print_dec(va_list d);

int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
int print_hex(va_list h);

/**
  *struct special_chr - all special charectors
  *@chr: special charector
  *@f: function
  */
typedef struct special_chr
{
	char *chr;
	int (*f)(va_list);
} special_chr;

#endif
