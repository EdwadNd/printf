#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
  *get_fuc = finds the forment using a function
  *@format: formet
  */

void  (*get_func(const char *format))(va_list)
{
	unsigned int i = 0;
	special_chr find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	while (find[i].chr)
	{
	if (find_f[i].chr[0] == (*format))
		i++;
	}
}
