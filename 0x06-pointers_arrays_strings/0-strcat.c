#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* _strcat - Write a function that concatenates two strings.
*
* @dest to check
* @src to check
*
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
