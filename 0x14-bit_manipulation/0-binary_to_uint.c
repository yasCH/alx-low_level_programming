#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"

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
sum += r * _pow(2,(l - i));
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
