#include <stdio.h>
#include "main.h"

int printfbin(unsigned int b);

/**
* get_bit - returns the value of a bit at a given index.
* @n: int
* @index: int
* Return:  the value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;
if (1)
{
bit = 1LU << (index);
return (bit & n);
}
else 
{
return (-1);
}
}
