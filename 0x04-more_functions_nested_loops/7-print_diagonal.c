#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* print_diagonal - Write a function that draws a diagonal line
* on the terminal.
*
* @n: character to check
*
* Return: void
*/

void print_diagonal(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar(32);
}
putchar(92);
putchar('\n');
}
}
