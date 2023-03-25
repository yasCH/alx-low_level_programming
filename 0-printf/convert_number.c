#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
* convert_number: Write a function that converts an integer into char.
*
* @n: integer to convert 
*
* Return: void
*/
void convert_number(int n)
{
int d;
int r;
if (n < 0)
{
putchar(45);
}
n = abs(n);
d = n / 10;
r = n % 10;
if (n < 10)
{
putchar(n + 48);
}
else
{
convert_number(d);
putchar(r + 48);
}
}
