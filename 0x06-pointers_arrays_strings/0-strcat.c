#include <stdio.h>
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
int i = 0;
int j = 0;
while(dest[i] != '\0')
{
i++;
}
j = i;
i = 0;
while(src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return dest;
}
