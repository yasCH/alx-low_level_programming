#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* *_strcat - Write a function that concatenates two strings.
*
*@dest to check
*@src to check
*
* Returns dest
*/
char *_strcat(char *dest, char *src)
{
dest = strcat(dest, src);
char *src = "\0";
dest = strcat(dest, src);
return (dest);
}
