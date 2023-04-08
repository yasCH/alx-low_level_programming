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
printf("0\n");
return;
} 
bit = 1UL << 63;
for (i = 0;i < 64; i++)
{
if (n & bit)
{
printf("1");
}
else
{
printf("0");
}
bit >>= 1;
}
printf("\n");
}
