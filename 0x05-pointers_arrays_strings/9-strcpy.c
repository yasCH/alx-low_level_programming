#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* _strcpy - Write a function that copies the string pointed
* to by src, including the terminating null byte (\0),
* to the buffer pointed to by dest.

Return value: the pointer to dest
*
* @dest: character to check
* @src: character to check
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return(dest);
}
