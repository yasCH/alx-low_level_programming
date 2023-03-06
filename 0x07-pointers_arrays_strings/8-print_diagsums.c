#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_chessboard - Write a function that prints the chessboard.
*
*@a: to check
*@size: to check
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int r = 0;
int i;
int j;
for(i=0; i<size; i++)
{
for(j=0; j<size; j++)
{
if (i==j)
{
int rij=a[i][j];
r= r + rij;
printf ("%d ",r);
}
}
}
}
