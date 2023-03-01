#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
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
char *result;
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
result[j] = dest[i];
i++;
j++;
}
i = 0;
while (src[i] != '\0')
{
result[j] = src[i];
i++;
j++;
}
result[j] = '\0';
return (0);
}
