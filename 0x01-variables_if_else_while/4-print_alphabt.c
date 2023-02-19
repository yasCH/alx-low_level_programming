#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'print the alphabet in lowercase exept q & e,
* followed by a new line 
*
* Return: Always 0 (success)
*/
int main(void)
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
if (alpha = 'e' || alpha = 'q')
{
continue;
}
putchar(alpha);
}
putchar('\n');
return (0);
}
