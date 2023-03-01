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
for (i = l - 1 ; i >= l / 2; i--)
{
char a = s[(l - 1) - i];
char b = s[i];

s[(l - 1) - i] = b;
s[i] = a;
}
}
