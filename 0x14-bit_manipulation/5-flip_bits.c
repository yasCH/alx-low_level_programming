#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flib from a number to another
 * @n: int
 * @m: int
 * Return: number of bits you would need to flip to get from
 * one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int r;
unsigned  int counter;
r = n ^ m;
counter = 0;
while (r > 0)
{
if (r & 1)
{
counter++;
r >>= 1;
}
}
return (counter);
}
