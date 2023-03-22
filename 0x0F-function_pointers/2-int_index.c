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
int compare;
compare = cmp(array[size]);
if(size <= 0)
{
return (-1);
}
if((array != NULL) && (cmp != NULL))
{
if (compare != 0)
{
return (size);
}
else
{
return (-1);
}
}
}
