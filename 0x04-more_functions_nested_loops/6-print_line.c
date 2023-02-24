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
int l = 95;
for (n = 1; n >= n+1; n++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar(l);
}
}
_putchar('\n');
}
