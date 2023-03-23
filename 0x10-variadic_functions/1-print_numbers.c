#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Function that  prints numbers, followed by a new line.
*
* @n: to check
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int number;
if (separator != NULL)
{
va_list ptr;
va_strat(ptr, n);
for (i = 0; i < n; i++)
{
number += va_arg(ptr, unsigned int);
va_end(ptr);
printf("%d", "%c", number, separator");
}
printf("\n");
}
