#include "main.h"
#include <stdio.h>

/**
* factorial - Write a function that returns the factorial
* of a given number.
*
* @n: to check
*
* Return: factorial
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
