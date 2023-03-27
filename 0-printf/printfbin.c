#include <stdio.h>
#include "main.h"

/**
 * printfbin - convert int to binary.
 * @b: number to convert.
 * Return: number of printed caracters
 */

int printfbin(unsigned int b)
{	
int flag = 0;
int cont = 0;
int i, a = 1, n;
unsigned int p;

for (i = 0; i < 32; i++)
{
p = ((a << (31 - i)) & b);
if (p >> (31 - i))
flag = 1;
if (flag)
{
n = p >> (31 - i);
putchar(n + 48);
cont++;
}
}
if (cont == 0)
{
cont++;
putchar('0');
}
return (cont);
}
