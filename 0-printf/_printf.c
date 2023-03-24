#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - Write a function that produces output according to a format.
 *
 * @format: is a character string.
 *
 * Return:  total number of characters printed excluding "\0"for strings.
 */
int _printf(const char *format, ...)
{
int printed_chars = 0;
char c;
char *s;
int d;

va_list args;
va_start(args, format);

while (*format != '\0') 
{
if (*format == '%') 
{
++format;
switch (*format) 
{

case 's':
{
s = (char*)va_arg(args, char*);
puts(s);
printed_chars = printed_chars + strlen(s);
}
break;

case 'd':
case 'i':
{
d = (int)va_arg(args, int);
putchar(d + 48);
printed_chars++;
}
break;

case 'c':
default:
{
c = (char)va_arg(args, int);
putchar(c);
printed_chars++;
}
break;
}
}
}
va_end(args);
return printed_chars;
}
