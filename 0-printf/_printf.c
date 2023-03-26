#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"


int switching_function(const char *format, int printed_chars, va_list arg);

/**
* _printf - Write a function that produces output according to a format.
* @format: is a character string.
* Return:  total number of characters printed excluding "\0"for strings.
*/
int _printf(const char *format, ...)
{
int printed_chars = 0;
va_list arg;
va_start(arg, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
printed_chars = switching_function(format, printed_chars, arg);
}
else
{
putchar(*format);
printed_chars++;
}
format++;
}
va_end(arg);
return (printed_chars);
}

/**
* switching_function - external swith fucnction
* @format: an array
* @printed_chars: int
* @arg: va_list
* Return: printed_chars
*/
int switching_function(const char *format, int printed_chars, va_list arg)
{
char c;
char *s;
int d;
switch (*format)
{
case 's':
s = va_arg(arg, char*);
fputs(s, stdout);
printed_chars += strlen(s);
break;
case 'd':
case 'i':
d = va_arg(arg, int);
printed_chars+= convert_number(d, printed_chars);
break;
case 'c':
c = va_arg(arg, int);
putchar(c);
printed_chars++;
break;
case '%':
putchar('%');
printed_chars++;
break;
}
return (printed_chars);
}
