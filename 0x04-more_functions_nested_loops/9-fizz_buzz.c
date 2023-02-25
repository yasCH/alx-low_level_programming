#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - Entry point
*
* Description: prints the numbers from 1 to 100,
* followed by a new line.
*
* Return:(0)
*/
int main (void)
{
int p;
for (p = 1; p <= 100; p++)
{
if (p % 3 == 0 && p % 5 == 0)
{
printf("FizzBuzz ");
}
else if (p % 5 == 0)
{
if (p == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
}
else if (p % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%i ", p);
}
}
putchar('\n');
return (0);
}
