#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
int number = 1;
for (number = 1 ; number <= 9 ; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
