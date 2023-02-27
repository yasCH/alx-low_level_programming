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
int length = strlen(s);
char i;
for (i = length - 1 ; i >= 0; i--)
{
s[0] = s[i];
}
}
