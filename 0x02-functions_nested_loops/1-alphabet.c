#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
**main - Entry point
*
* Description:Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
