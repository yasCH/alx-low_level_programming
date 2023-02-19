#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (success)
*/
int main(void)
{
int number = 48;
int comma = 44;
int space = 32;
for (number = 48 ; number <= 57 ; number++)
{
putchar(number);
putchar (comma);
putchar (space);
}
putchar(number);
return (0);
}
