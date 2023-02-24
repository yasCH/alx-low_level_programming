#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
**print_most_numbers - Prototype practicing
*
* Description:Write a function that prints the numbers from
* 0 to 9, do not print two and four, followed by a new line.
*
* Return: (void)
*/

void print_most_numbers(void)
{
char number = '0';
for (number = '0'; number <= '9'; number++)
{
if ((number != '2') || (number != '4'))
{
_putchar(number);
}
else
{
continue;
}
_putchar('\n');
}
}
