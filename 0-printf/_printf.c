#include <stdio.h>
#include <stdarg.h>

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

default:
/* Unsupported conversion specifier. */
return -1;
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
