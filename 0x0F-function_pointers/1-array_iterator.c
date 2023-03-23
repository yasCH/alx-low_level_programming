#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Write a function that executes
* a function given as a parameter on each element of an array.
*
* @array: to creat
* @size: is the size of the array
* @action: is the size of the array
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if ((array != NULL) && (action != NULL) && (size > 0))
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
