#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* print_rev - Write a function that prints a string, in reverse,
* followed by a new line.
*
* @s: character to check
*
* Return: (void)
*/
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1 ; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
