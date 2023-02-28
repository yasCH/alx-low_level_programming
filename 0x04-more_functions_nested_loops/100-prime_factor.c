#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

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
int n = sqrt(612852475143);
int i;
for (i = 1; i <= n; i++)
{
if ( n % i != 0)
{
n = pow(n,2) / i;
}
}
printf("%i\n", n);

return (0);
}
