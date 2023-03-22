#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Write a function that executes
* a function given as a parameter on each element of an array.
*
* @array: to check
* @size: to check
* @action: to check
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
action(array[size]);
}
