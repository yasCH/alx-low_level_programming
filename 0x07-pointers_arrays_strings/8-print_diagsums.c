#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_diagsums - Write a function that prints the sum
* of the two diagonals of a square matrix of integers.
*
*@a: to check
*@size: to check
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int sum = 0;
int summ = 0;
int i;
int j;
int k;
for (i = 0; i < 1; i++)
{
for (k = size - 1; k <= (size * size) - size; k = k + (size - 1))
{
int *c = &(a[i]);
int p = c[k];
summ = summ + p;
}
for (j = 0; j < (size * size); j = j + size + 1)
{
int *c = &(a[i]);
int p = c[j];
sum = sum + p;
}
}
printf("%d, %d", sum, summ);
printf("\n");
}
