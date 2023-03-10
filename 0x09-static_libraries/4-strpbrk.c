#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes.
*
*@s: to check
*@accept: to check
*
* Return: r
*/
char *_strpbrk(char *s, char *accept)
{
char *r;
r = strpbrk(s, accept);
if (r != 0)
{
return (r);
}
else
{
return (NULL);
}
}
