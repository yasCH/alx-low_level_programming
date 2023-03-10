#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memset - function that fills memory with a constant byte.
*
*@s: to check
*@b: to check
*@n: to check
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
