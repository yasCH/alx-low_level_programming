#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - Write a function that produces output according to a format.
* @format: is a character string.
* Return:  total number of characters printed excluding "\0"for strings.
*/
int _printf(const char *format, ...)
{
int argN;
int printed_chars;
va_list arg;
if (format == NULL)
{
return (0);
}
argN = arg_counter(format);
if (argN == 0)
{
write(1, format, strlen(format));
return(strlen(format));
}
printed_chars = 0;
va_start(arg, format);
while (*format != '\0')
{
if (*format != '%')
{
_putchar(*format);
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
