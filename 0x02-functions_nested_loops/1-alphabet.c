#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**main - Entry point
*
* Description:Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: Always 0 (success)
*/
void print_alphabet(void); //prototype

int main(void)
{
print_alphabet();
}
void print_alphabet()
{
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
