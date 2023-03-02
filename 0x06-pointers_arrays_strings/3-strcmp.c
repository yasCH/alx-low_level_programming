#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* _strcmp - Write a function that compares two strings.
*
*@s1: to check
*@s2: to check
*
* Return: n
*/
int *_strcmp(char *s1, char *s2)
{
int n = 0;
while (*s1 != '\0' || *s2 != '\0')
{
s1++;
s2++;
n = (s1 - s2);
}
return (n);
}
