#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* _strlen - Write a function that returns the length of a string.
*
* @s: character to check
*
* Return: (0)
*/
int _strlen(char *s)
{
int l;
l = strlen(s);
s[l] = '\0';
l = strlen(s);
printf("%i", l);
return (0);
}
