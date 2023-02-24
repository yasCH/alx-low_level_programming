#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* void print_line - Write a function that draws a straight line in the terminal.
*
* @n:character to check
*
* Return: void
*/
void print_line(int n)
{
int l;
for (l = '0'; l < n; l++)
{
putchar(59);
}
putchar('\n');
}
