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
int **creat;
creat = malloc(((width * height) * sizeof(int)));
if (creat == NULL || width <= 0 || height <= 0)
{
return (NULL);
free(creat);
}
else
{
return (creat);
}
}
