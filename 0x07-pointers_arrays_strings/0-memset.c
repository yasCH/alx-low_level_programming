#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
*
*@s: to check
*@b: to check
*@n: to check
*
* return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *s;
char b;
unsigned int n;
memset(*s, b,n);
return (*s);
}
