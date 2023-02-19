#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints all possible different combinations of two digits.
*
* Return: Always 0 (success)
*/
int main(void)
{
int numbernd = 49;
int number = 48;
int comma = 44;
int space = 32;
for (number = 48 ; number <= 57 ; number++)
{
if (number == 57)
{
putchar('\n');
break;
}
for (numbernd = 49 ; numbernd <= 57 ; numbernd++)
{
putchar(number);
putchar(numbernd);
putchar(comma);
putchar(space);
}
}
return (0);
}
