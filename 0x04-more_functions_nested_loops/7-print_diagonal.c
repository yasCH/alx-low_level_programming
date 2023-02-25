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
if (n <= 0)
{
putchar('\n');
}
else
{
int end = n;
int i = ' ';

while (i <= end) 
{
putchar('\n');
int j = 1;
while (j <= i) 
{
putchar(j);
j = j + 1;
}
i = i + 1;
}
putchar('\n');
}
}
