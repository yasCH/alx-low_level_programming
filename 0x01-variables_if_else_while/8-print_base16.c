#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints  all the numbers of base 16 in lowercase,
* followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
int number = 48;
int alpha = 97;
for (number = 48 ; number <= 57 ; number++)
{
putchar(number);
}
for (alpha = 97 ; alpha <= 102 ; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
