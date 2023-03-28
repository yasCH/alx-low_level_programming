#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

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
unsigned int b;
switch (*format)
{
case 'c':
c = va_arg(arg, int);
_putchar(c);
printed_chars++;
break;
case 's':
s = va_arg(arg, char*);
if (s == NULL)
{
return (printed_chars);
}
printed_chars += strlen(s);
write(1, s, strlen(s));
break;
case '%':
_putchar('%');
printed_chars++;
break;
case 'd':
case 'i':
d = va_arg(arg, int);
printed_chars += convert_number(d, 0);
break;
case 'b':
b = va_arg(arg, int);
printed_chars+= convert_number(printfbin(b), 0);
break;
default:
putchar('%');
putchar((*format));
}
return (printed_chars);
}
