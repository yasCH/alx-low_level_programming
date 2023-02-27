#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
* puts2 - Write a function that prints every other character of a string,
* starting with the first character, followed by a new line.
*
* @str: character to check
*
* Return: (void)
*/
void puts2(char *str)
{
int length = strlen(str);
int i;
for (i = 0 ; i < length; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
