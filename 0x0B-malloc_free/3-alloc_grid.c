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
creat = malloc(width * height);
if (creat == NULL || width <= 0 || height <= 0)
{
return (NULL);
free(creat);
}
else
{
i = 0;
while (i < height)
{
j = 0;
while (j < width)
{
creat[j][j] = 0;
j++;
}
return (creat);
i++;
}     
return (creat);
}
}
