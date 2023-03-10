#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints lowercase alphabet in reversel,
* followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
char alpha = 'z';
for (alpha = 'z' ; alpha >= 'a' ; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
