#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
* _pow_recursion - Write a function that returns the value of x
* raised to the power of y.
*
*@x: to check
*@y: to check
*
*Return: n 
*
*/
int _pow_recursion(int x, int y)
{
int n;
if (y < 0)
{
return (-1);
}
n = pow(x, y);
return (n);
}
