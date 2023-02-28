#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
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
int n = 612852475143;
int i;
{
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
printf("%i, ", i);
printf("\n");
}
}
}
return (0);
}
