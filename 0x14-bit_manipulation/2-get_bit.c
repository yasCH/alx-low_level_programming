#include <stdio.h>
#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: int
* @index: int
* Return:  the value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;
unsigned long int r;
bit = 1LU << (index);
if (n == 0)
{
return (0);
}
else if (bit <= n)
{
r = bit & n;
r >>= index;
return (r);
}
else
{
return (-1);
}
}
