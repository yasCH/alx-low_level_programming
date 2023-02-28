#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* main - Entry point
*
* Description: Write a program that finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
long long int  n;
int i;
for (i = 3; i <= sqrt(n); i++)
{
if (n % i == 0)
{
n = n / i;
}
}
printf("%lli\n", n);

return (0);
}
