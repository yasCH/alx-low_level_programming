#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* string_toupper - Write a function that changes all lowercase letters
* of a string to uppercase.
*
* @str: to check
* Return: str
*/
char *string_toupper(char *str)
{

int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] =(int)str[i] - 32;
}
return (str);
}
