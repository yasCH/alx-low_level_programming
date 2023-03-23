#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - Function that prints anything.
*
* @format: to check
*
* Return: int sum
*/
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
char c;
int i;
float f;
char *s;
int num_printed = 0;
while (*format != '\0')
{
if (num_printed > 0)
{
printf(", ");
}
switch (*format)
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
break;
default:
break;
}
format++;
num_printed++;
}
va_end(args);
printf("\n");
}
