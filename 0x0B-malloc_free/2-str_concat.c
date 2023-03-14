#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - Write a function that creates an array of chars,
* and initializes it with a specific char.
*
* @s1: to check
* @s2: to check
*
* Return: a pointer to the array, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
concat = malloc(sizeof(*s1 + *s2 + "\0"));
if (concat == NULL)
{
return (NULL);
} 
else
{
concat[0] = s1 + s2;
return (concat);
}
}
