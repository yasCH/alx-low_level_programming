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
unsigned long int bit;
if (n == 0)
{
_putchar('0');
_putchar('\n');
return;
}
bit = 1 << 31;
for (i = 0; i < 32; i++)
{
if (n & bit)
{
_putchar('1');
}
else
{
_putchar('0');
}
bit >>= 1;
}
_putchar('\n');
}
