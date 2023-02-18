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
char number = '0';
for (number = '0' ; number <= '9' ; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
