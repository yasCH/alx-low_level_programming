#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* alloc_grid - Write a function that returns a pointer
* to a 2 dimensional array of integers.
*
* @width: to check
* @height: to check
*
* Return: a pointer to the array, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
char **creat;
creat = malloc(sizeof(width) + sizeof(height));
if (creat == NULL || width <= 0 || height <= 0)
{
return (NULL);
}
else
{
for (i = 0; i < width ; i++)
{
for (j = 0; j < height ; j++)
{
creat[j] = 0;
}
creat[i] = 0;
return(creat)
}
}

