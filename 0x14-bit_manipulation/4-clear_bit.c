#include <stdio.h>
#include "main.h"

/**
* clear_bit - function that sets the value of a bit to 0
* at a given index.
* @n: int
* @index: int
* Return:  1 on success -1 on failure.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= 0 << index;
return (1);
}
