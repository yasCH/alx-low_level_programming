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
int binary;
int i;
binary = printfbin(n);
for (i = 0; i <index; i++)
{
return (0);
}
}




/**
* printfbin - convert int to binary.
* @b: number to convert.
* Return: number of printed caracters
*/
int printfbin(unsigned int b)
{
if (b == 0) 
{
return (0);
}
if (b == 1)
{
return (1);   
}
return (b % 2) + 10 * printfbin(b / 2);
}
