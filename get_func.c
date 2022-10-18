#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  *get_fuc = finds the format using a function
  *@format: format
  * Return:function or NULL
  */

int  (*get_func(const char *format))(va_list)
{
	unsigned int i = 0;
	special_chr get_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"i", print_int},
		{"o", print_octal},
		{"u", print_unsig},
		{"R", print_rot13},
		{NULL, NULL}
	};
	while (get_f[i].chr)
	{
	if (get_f[i].chr[0] == (*format))
		return (get_f[i].f);
	i++;
	}
	return (NULL);
}
