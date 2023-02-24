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
int l;
for (l = 0; l < n; l++)
{
if (n <= 0)
{
putchar('\n');
}
else
{
putchar(32);
}
}
putchar(92);
}
