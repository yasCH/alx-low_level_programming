#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
**print_numbers - Prototype practicing
*
* Description:Write a function that prints numbers,
* from 0 to 9, followed by a new line.
*
* Return: (void)
*/
void print_numbers(void)
{
char number = '0';
for (number = '0'; number <= '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
