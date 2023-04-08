#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number.
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i;
unsigned int binary;
unsigned int bit;
for (i = 0; i < 32; i++)
{
binary = 0;
bit = 1;
if (n != 0)
{
binary |= (1 <<=1);
}
bit <<= 1;
}
printf("%u\n", binary);
}
