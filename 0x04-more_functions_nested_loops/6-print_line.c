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
char l = 95;
int s = n + 1;
for (n = 0; n <= s; n++)
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
