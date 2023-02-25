#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* print_square - Write a function that prints a square,
* followed by a new line.
*
* @size: to check
*
* Return: (void)
*/
void print_square(int size)
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
putchar(35);
j++,
}
putchar('\n');
i++;
}
}
