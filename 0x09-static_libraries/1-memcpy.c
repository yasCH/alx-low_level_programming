#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memcpy - function that copies memory area.
*
*@dest: to check
*@src: to check
*@n: to check
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
