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
int **creat;
if (width <= 0 || height <= 0)
{
return (NULL);
}
creat = malloc(height * sizeof(int *));
if (creat == NULL)
{
free(creat);
return (creat);
}
else
{
for (i = 0; i < height; i++)
{
creat[i] = malloc((width) * sizeof(int));
if (creat[i] == NULL)
{
free(creat);
return (creat);
}
else
{
for (j = 0; j < width; j++)
{
creat[i][j] = 0;
}
}
}
free(creat[i]);
return (creat);
}
}
