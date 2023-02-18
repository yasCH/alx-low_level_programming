#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'print the alphabet in lowercase, followed by a new line using putchar.'
*
* Return: Always 0 (success)
*/
int main(void)
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
putchar(alpha);
return (0);
}
