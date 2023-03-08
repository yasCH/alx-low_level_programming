#include "main.h"
#include <stdio.h>

/**
* factorial - Write a function that returns the factorial
* of a given number.
*
* @n: to check
*
* Return: v
*/
int factorial(int n)
{
int v;
if (n < 0)
{
return (-1);
}
else
{
v =  n * (n - 1);
return (v);
}
}
