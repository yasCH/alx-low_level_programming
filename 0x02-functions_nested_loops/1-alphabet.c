#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "main.c"

/**
**main - Entry point
*
* Description:Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: Always 0 (success)
*/
void print_alphabet(void);
int main(void)
{
print_alphabet(void);
return (0);
}
void print_alphabet(void){
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
