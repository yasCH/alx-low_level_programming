#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _print_rev_recursion - Write a function that prints a string in reverse.
*
* @s: to check
*
* return: void
*/
void _print_rev_recursion(char *s)
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
