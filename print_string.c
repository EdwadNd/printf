#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_string - writes the character c to stdout
  * @s: The string to print
  *
  * Return: 
  */
int print_string(va_list s)
{
	char *str;
	int  i;
	
	i = 0;
	str = va_arg(s, char *);
	
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
