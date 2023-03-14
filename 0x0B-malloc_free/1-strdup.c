#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup - Write a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
*
* @str: to check
*
* Return: a pointer to the string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *to = strdup(str);
return (to);
}
