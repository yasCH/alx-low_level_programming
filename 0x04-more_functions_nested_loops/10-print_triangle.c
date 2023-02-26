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
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar(35);
_putchar('\n');
}
}
}
