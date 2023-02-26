#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* print_triangle - Write a function that prints a triangle,
* followed by a new line.
*
* @size: to check
*
* Return: void
*/
void print_triangle(int size)
{
int i;
int j;
int k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size-1; j++)
{
_putchar(32);
}
for (k = 1; k < size; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
