#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* _strncat - Write a function that concatenates two strings.
*
*@dest: to check
*@src: to check
*@n: to check
*
* Returns: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
