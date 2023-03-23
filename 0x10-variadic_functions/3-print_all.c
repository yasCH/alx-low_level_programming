#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_all - Function that prints anything.
*
* @format: to check
*
* Return: void
*/
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
char *form;
form = format;
int num_printed; 
num_printed = 0;
int lenght;
lenght = strlen(format);
va_list args;
va_start(args, lenght);
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
num_printed++;
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
num_printed++;
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
num_printed++;
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
num_printed++;
break;
default:
break;
}
form++;
}
va_end(args);
printf("\n");
}
