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
int numbertrd = 49;
int numbernd = 48;
int number = 47;
int comma = 44;
int space = 32;
for (number = 48 ; number <= 57 ; number++)
{
for (numbernd = number + 1 ; numbernd <= 57 ; numbernd++)
{
if (number == numbernd)
for (numbertrd = numbernd + 1 ; numbertrd <= 57 ; numbertrd++)
{
continue;
}
putchar(number);
putchar(numbernd);
if (number == 55 && numbernd == 56 && numbertrd == 57)
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
