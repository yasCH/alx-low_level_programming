#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - Function that prints strings, followed by a new line.
*
* @separator: to check
* @n: to check
*
* Return: int sum
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
const char *s;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, const char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

