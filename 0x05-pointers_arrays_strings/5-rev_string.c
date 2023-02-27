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
if (*s != '\0')
print_rev((s + 1));
printf("%c", *s);
}
