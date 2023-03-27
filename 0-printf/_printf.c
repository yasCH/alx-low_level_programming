#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* _printf - Write a function that produces output according to a format.
* @format: is a character string.
* Return:  total number of characters printed excluding "\0"for strings.
*/
int _printf(const char *format, ...)
{
if (format == NULL)
{
return (0);
}
int argN;
argN = arg_counter(format);
if (argN == 0)
{
fputs(format, stdout);
return(strlen(format));
}
int printed_chars = 0;
va_list arg;
va_start(arg, format);
while (*format != '\0')
{
if (*format != '%')
{
putchar(*format);
printed_chars++;
}
else
{
format++;
printed_chars = switching_function(format, printed_chars, arg);
}
format++;
}
va_end(arg);
return (printed_chars);
}
va_end(arg);
return (printed_chars);
}
