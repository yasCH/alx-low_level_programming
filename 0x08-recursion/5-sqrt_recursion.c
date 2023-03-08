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
int i;
for (i = 1; i < n; i++)
{
if (n%i == n/i)
{
return (i);
}
}
return (-1);
}
