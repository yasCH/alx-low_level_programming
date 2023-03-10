#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'print the alphabet in lowercase and then in uppercase
* followed by a new line using putchar.'
*
* Return: Always 0 (success)
*/
int main(void)
{
char alphaLower = 'a';
char alphaUpper = 'A';
for (alphaLower = 'a' ; alphaLower <= 'z' ; alphaLower++)
{
putchar(alphaLower);
}
for (alphaUpper = 'A' ; alphaUpper <= 'Z' ; alphaUpper++)
{
putchar(alphaUpper);
}
putchar('\n');
return (0);
}
