#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* convert_number - convert an integer into char.
*
* @n: integer to convert 
* @counter: number of characters printed 
*
* Return: counter
*/
int convert_number(int n, int counter)
{
int d;
int r;

if (n < 0)
{
_putchar(45);
counter = counter + 1;
}
n = abs(n);

d = n / 10;
r = n % 10;
if (n < 10)
{
_putchar(n + 48);
counter = counter + 1;
}
else
{
counter = counter + 1;
counter += convert_number(d, counter);
_putchar(r + 48);
}
return (counter);
}
