#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - Write a function that creates an array of chars,
* and initializes it with a specific char.
*
* @size: to check
* @c: to check
*
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *creat;
creat = malloc(sizeof(char) * size);
if (creat == NULL || size == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size ; i++)
{
creat[i] = c;
}
return (creat);
}
}
