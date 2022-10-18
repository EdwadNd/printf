  #include <stdio.h>
   #include <stdarg.h>
   #include <unistd.h>
   #include "main.h"
   /**
     *_printf- prints out a string based on the formet given
     *@format: formet
     *Return: the number of characters printed
     */
 int _printf(const char *format, ...)
  {
          va_list ap;
          int (*f)(va_list);
          unsigned int i = 0, cprint = 0;
 
          if (format == NULL)
                  return (-1);
          va_start(ap, format);
          while (format[i])
          {
                  while (format[i] != '%' && format[i])
                  {
                          _putchar(format[i]);
                          cprint++;
                          i++;
                 }
                  if (format[i] == '\0')
                          return (cprint);
                  f = get_func(&format[i + 1]);
                  if (f != NULL)
                  {
                          cprint += f(ap);
                          i += 2;
                          continue;
                  }
                  if (!format[i + 1])
                          return (-1);
                  _putchar(format[i]);
                  cprint++;
                  if (format[i + 1] == '%')
                          i += 2;
                  else
                          i++;
          }
          va_end(ap);
          return (cprint);
 }