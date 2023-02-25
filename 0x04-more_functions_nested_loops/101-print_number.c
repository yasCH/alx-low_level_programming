#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
* void print_number - Prototype practicing
*
* Description: void print_number(int n);
*
* @n: to check
*
* Return: void
*/
void print_number(int n)
{
if (n < 0)
{
putchar(45);
}
n = abs(n);
if (n < 10)
{
putchar(n);
putchar('\n');
}
else if (n < 100)
{
putchar(n / 10);
putchar(n % 10);
putchar('\n');
}
else if (n < 1000)
{
putchar(n / 100);
putchar((n % 100) / 10);
putchar((n % 100) % 10);
putchar('\n');
}
else if (n < 1000)
{
putchar(n / 1000);
putchar((n % 1000) / 100);
putchar((n % 100) / 10);
putchar((n % 100) % 10);
putchar('\n');
}
return (0);
}
