#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "4-print_rev.c"
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
int i;
char n[length];
for (i = length - 1 ; i >= 0; i--)
{
n[i] = s[i];
}
s = &n;
}
