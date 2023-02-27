#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Write a function that reverses a string.
*
* @s: character to check
*
* Return: (void)
*/
void rev_string(char *s)
{
int l = strlen(s);
int i;
int m = l /2;
for (i = l - 1 ; i >= 0; i--)
{
s[(m - 1) - i] = *s[i];
}
}
