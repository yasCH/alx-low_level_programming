#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_all - Function that prints anything.
*
* @format: list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
int num_printed; 
va_list args;
va_start(args, format);
num_printed = 0;
while (format[num_printed] != '\0')
{
switch (format[num_printed])
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
if(s != NULL)
{
printf("%s", s);
}
printf("(nil)");
num_printed++;
break;
default:
break;
}
}
va_end(args);
printf("\n");
}
