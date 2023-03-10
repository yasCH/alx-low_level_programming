#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - function that locates a character in a string.
*
*@s: to check
*@c: to check
*
* Return: s
*/
char *_strchr(char *s, char c)
{
while (*s != (char) c)
{
if (!*s++)
return (NULL);
}
return ((char *)s);
}
