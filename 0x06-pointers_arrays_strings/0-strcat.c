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
int i = 0;
int k = 0;
while (dest[i] != '\0') {
i++;
}
while (src[k] != '\0') {
dest[i] = src[k];
i++;
k++;
}
dest[i] = '\0';
return (dest);
}
