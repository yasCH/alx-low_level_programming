#include <stdio.h>
#include <string.h>

/**
* _pow - Write a function that returns the value of x
* raised to the power of y.
*
*@x: to check
*@y: to check
*
*Return: n
*
*/
int _pow(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
int pow;
pow = x * _pow(x, y - 1);
return (pow);
}
}
