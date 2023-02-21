#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**print_alphabet_x10 - Prototype practicing
*
* Description:Write a function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
*
* Return: (void)
*/
void print_alphabet_x10(void)
{
char alpha = 'a';
int times = 1;
for (times = 1 ; times <= 10 ; times++)
{
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
}
