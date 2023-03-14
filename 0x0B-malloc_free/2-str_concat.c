#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
concat = malloc(sizeof(*s1) + sizeof(*s2) + 1);
if (concat == NULL)
{
return (NULL);
} 
else
{
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}
}
