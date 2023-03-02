#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* leet - Write a function that encodes a string into 1337.
*
* @s: to check
*
* Return: Always 0 (success)
*/
char *leet(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 'e' || s[i] == 'E')
{
s[i] = '3';
}
else if (s[i] == 'o' || s[i] == 'O')
{
s[i] = '0';
}
else if (s[i] == 't' || s[i] == 'T')
{
s[i] = '7';
}
else if (s[i] == 'l' || s[i] == 'L')
{
s[i] = '1';
}
}
return (s);
}
