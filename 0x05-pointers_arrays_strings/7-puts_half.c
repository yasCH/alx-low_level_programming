#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* puts_half - Write a function that prints half of a string,
* followed by a new line.
*
* @str: character to check
*
* Return: (void)
*/
void puts_half(char *str)
{
int length = strlen(str);
int i;
int j;
if (length % 2 == 0)
{
j = length / 2;
}
else if  (length % 2 != 0)
{
j = (length - 1) / 2;
}
for (i = j ; i <= length - 1 ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
