#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* void print_line - Write a function that draws a straight line in the terminal.
*
* @n to check
*
* Return: void
*/
void print_line(int n)
{
char l = 45;
for (n = n; n >= n+1; n++)
{
if (n <= 0)
{
putchar('\n');
}
else
{
putchar(l);
}
}
putchar('\n');
}
