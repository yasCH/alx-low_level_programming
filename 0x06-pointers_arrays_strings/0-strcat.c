#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* _strcat - Write a function that concatenates two strings.
*
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*result != '\0')
{
result++;
}
while (*src != '\0')
{
*result++ = *src++;
}
*result = '\0';
return (dest);
}
