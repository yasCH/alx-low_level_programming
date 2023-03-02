#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
* leet: Write a function that encodes a string into 1337.
*
* @s: to check
*
* Return: Always 0 (success)
*/
char *leet(char *s)
{
for (i = s[0], i < sizeof(s), i++)
{
if (i = 'e' || 'E')
{
s[i] = '3'
}
else if (i = 'o' || 'O')
{
s[i] = '0'
}
else if (i = 't' || 'T')
{
s[i] = '7'
}
esle (i = 'l' || 'L')
{
s[i] = '1'
}
}
return (s);
}
