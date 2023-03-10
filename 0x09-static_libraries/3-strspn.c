#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strspn - function that gets the length of a prefix substring.
*
*@s: to check
*@accept: to check
*
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int m;
m = strspn(s, accept);
return (m);
}
