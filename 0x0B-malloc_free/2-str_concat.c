#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* str_concat - Write a function that creates an array of chars,
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
concat = malloc(sizeof(*s1) + sizeof(*s2) + 10);
if (concat == NULL)
{
return (NULL);
}
else
{
if (s1 == NULL && s2 == NULL)
{
return (concat);
}
else if (s1 == NULL)
{
strcpy(concat, s2);
}
else if (s2 == NULL)
{
strcpy(concat, s1);
}
else
{
strcpy(concat, s1);
strcat(concat, s2);
}
return (concat);
}
}
