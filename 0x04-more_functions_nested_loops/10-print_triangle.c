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
void print_triangle(int size);
{
int i;
int j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j++)
{
putchar(35);
}
putchar(35);
putchar('\n');
}
}
}
