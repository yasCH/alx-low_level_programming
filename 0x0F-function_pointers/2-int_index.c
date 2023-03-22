#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - Write a function that searches for an integer.
*
* @array: to creat
* @size: is the number of elements in the array 
* @cmp: is a pointer to the function to be used to compare values
*
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if((array != NULL) && (cmp != NULL) && (size >= 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
else
{
return (-1);
}
}
