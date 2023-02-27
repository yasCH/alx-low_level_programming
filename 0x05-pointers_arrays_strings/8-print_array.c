#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* print_array - Write a function that prints n elements of an array 
* of integers, followed by a new line.
*
* @a: character to check
* @n: character to check
*
* Return: (void)
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d, ", &a[i]);
}
_putchar('\n');
}
