#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**print_alphabet - Prototype practicing
*
* Description:Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: (void)
*/
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
