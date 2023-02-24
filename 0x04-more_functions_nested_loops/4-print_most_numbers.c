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
for (number = 48; number <= 57; number++)
{
if (number != 50 || number != 52)
{
_putchar(number);
}
_putchar('\n');
}
}
