#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints all possible combinations of two two-digit numbers.
*
* Return: Always 0 (success)
*/
int main(void)
{
int number = 48;
int numbernd = 48;
int comma = 44;
int space = 32;
for (number = 48 ; number <= 57 ; number++)
{
for (numbernd = number + 1 ; numbernd <= 57 ; numbernd++)
{
if (number == numbernd)
{
continue;
}
putchar(number);
putchar(numbernd);
putchar(space);
for (number = 48 ; number <= 57 ; number++)
{
for (numbernd = number + 1 ; numbernd <= 57 ; numbernd++)
{
putchar(number);
putchar(numbernd);
putchar(comma);
putchar(space);
}
}
}
}
return (0);
}
