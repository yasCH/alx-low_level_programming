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
if (n < 0)
{
return (-1);
}
int v =  n * !(n - 1);
return (v);
}
