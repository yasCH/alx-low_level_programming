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
* Return: s
*/
char *leet(char *s)
{
int i;
int j;
a1[]="aAeEoOtTlL";
a2[]="4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <10; j++)
{
if (s[i] == a1[j])
{
s[i] = a2[j];
}
}
}
return (s);
}
