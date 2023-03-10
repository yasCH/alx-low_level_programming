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
if (length % 2 == 0)
{
for (i = length / 2; i < length ; i++)
{
_putchar(str[i]);
}
}
else if  (length % 2 != 0)
{
for (i = (length + 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
