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
creat = malloc((width * height) * sizeof(int));
if (creat == NULL || width <= 0 || height <= 0)
{
free(creat);
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
creat[i] = malloc((width) * sizeof(int));
if (creat[i] == NULL)
{
free(creat[i]);
return (NULL);
}
else
{
for (j = 0; j < width; j++)
{
creat[i][j] = 0;
}
}
}
return (creat);
}
}
