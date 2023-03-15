#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* free_grid - Write a function that frees a 2 dimensional grid
* previously created by your alloc_grid function.
*
* @grid: to check
* @height: to check
*
* Return: a pointer to the array, or NULL if it fails
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0, i < height; i++)
{
free (grid[i]);
}
free(grid);
}
