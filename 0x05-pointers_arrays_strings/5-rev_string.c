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
void print_rev(char *s);
void rev_string(char *s)
{
printf("%s\n", s);
print_rev(s);
}
