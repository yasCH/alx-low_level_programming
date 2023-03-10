#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* _strncpy - Write a function that copies a string.
*
*@dest: to check
*@src: to check
*@n: to check
*
* Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
