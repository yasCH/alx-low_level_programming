#include <stdio.h>
#include <string.h>
#include "main.h"

int _pow_recursion(int x, int y);

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: array of char
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int l;
int i;
int r;
unsigned int sum;
if (b != NULL)
{
l = strlen(b) - 1;
sum = 0;
for (i = l; i >= 0; i--)
{
if (b[i] == '0' || b[i] == '1')
{
r = b[i] - 48;
sum += r * _pow_recursion(2,(l - i));
}
else
{
return (0);
}
}
return(sum);
}
return (0);
}

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
pow = x * _pow_recursion(x, y - 1);
return (pow);
}
}
