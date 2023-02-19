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
for (numbernd = number++ ; numbernd <= 57 ; numbernd++)
{
if (number == numbernd)
{
continue;
}
putchar(number);
putchar(numbernd);
if (number == 57 && numbernd == 57)
{
putchar('\n');
break;
}
putchar(comma);
putchar(space);
}
}
return (0);
}
