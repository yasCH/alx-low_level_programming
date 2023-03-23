#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Function that returns the sum of all its parameters.
*
* @n: to check
*
* Return: int sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum;
if(n != 0)
{
va_list ptr;
va_start(ptr, n);
sum + 1 = va_arg(ptr, int);
va_end(ptr);
return(sum);
}
return (0);
}
