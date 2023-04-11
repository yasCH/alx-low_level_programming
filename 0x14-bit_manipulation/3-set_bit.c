#include <stdio.h>
#include "main.h"

/**
* set_bit - Function that sets the value of a bit to 1 at a given index.
* @n: int
* @index: int
* Return:  1 on success -1 on failure.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}

