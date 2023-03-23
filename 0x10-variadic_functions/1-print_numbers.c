#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Function that  prints numbers, followed by a new line.
*
* @separator: to check
* @n: to check
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list ptr;
va_start(ptr, n);
if (separator != NULL && ptr != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, unsigned int));
if (i < n - 1)
{
printf("%s", separator);
}
}
va_end(ptr);
}
printf("\n");
}
