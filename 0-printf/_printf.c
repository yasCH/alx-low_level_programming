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
_putchar(c);
++printed_chars;
}
break;

case 's':
{
const char* s = va_arg(args, char*);
while (*s != '\0') {
_putchar(*s++);
++printed_chars;
}
}
break;

case '%':
{
_putchar('%');
++printed_chars;
}
break;

case 'i':
{
const int i = va_arg(args, int);
_putchar(i);
++printed_chars;
}
break;

default:
return (0);
}
}
else {
_putchar(*format);
++printed_chars;
}
++format;
}

va_end(args);
return printed_chars;
}
