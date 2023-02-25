#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
* print_number - Prototype practicing
*
* Description: void print_number(int n)
*
* @n: to check
*
* Return: void
*/
void print_number(int n)
{
if (n < 0)
{
_putchar(45);
}
n = abs(n);
if (n < 10)
_{
putchar(n + 48);
}
else if (n < 100)
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
else if (n < 1000)
{
_putchar((n / 100) + 48);
_putchar(((n % 100) / 10) + 48);
_putchar(((n % 100) % 10) + 48);
}
else if (n < 10000)
{
_putchar((n / 1000) + 48);
_putchar(((n % 1000) / 100) + 48);
_putchar(((n % 100) / 10) + 48);
_putchar(((n % 100) % 10) + 48);
}
}
