#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Write a function that produces output according to a format.
 *
 * @format: is a character string.
 *
 * Return: number of characters printed excluding "\0"for strings.
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;

va_start(args, format);

while (*format != '\0') {
if (*format == '%') {
++format;
switch (*format) {

case 'c':
{
const char c = (char)va_arg(args, int);
putchar(c);
++printed_chars;
}
break;

case 's':
{
const char* s = va_arg(args, char*);
while (*s != '\0') {
putchar(*s++);
++printed_chars;
}
}
break;

case '%':
{
putchar('%');
++printed_chars;
}
break;

case 'i':
{
const int i = va_arg(args, int);
putchar(i);
++printed_chars;
}
break;

default:
return (0);
}
}
else {
putchar(*format);
++printed_chars;
}
++format;
}

va_end(args);
return printed_chars;
}
