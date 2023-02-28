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
int n = 612852475143/50829599;
int m = 50829599;
int i;
for (i = 3; i <= sqrt(n*50829599); i++)
{
if ( n % i != 0)
{
n = n / i;
}
}
printf("%i\n", (m));

return (0);
}
