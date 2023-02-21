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
  void print_alphabet();
   getchar();
   return 0;
}
void void print_alphabet()
{
   printf("void print_alphabet called");
}
char alpha = 'a';
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
