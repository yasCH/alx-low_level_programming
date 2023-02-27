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
printf("%d", l);
return (0);
}
