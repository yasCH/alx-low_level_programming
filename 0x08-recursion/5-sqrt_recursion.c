#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _sqrt_recursion - Write a function that returns the natural square
* root of a number.
*
* @n: to check
*
* Return: -1 fail
*
*/
int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
if (n > 1)
{
return (sqrt(n));
}
}
