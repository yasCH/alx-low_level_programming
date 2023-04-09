#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number.
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int i;
unsigned long int bit;
if (n == 0)
{
_putchar('0');
return;
}
bit = 1LU >> (sizeof(unsigned long int) * 8 - 1);
for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((n & bit)!= 0)
{
_putchar('1');
}
else
{
_putchar('0');
}
bit <<= 1;
}
}
