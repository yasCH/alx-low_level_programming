#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
**print_last_digit - Prototype practicing
*
* Description:Write a function that prints the sign of a number.
*
* @l:character to check if it islowercase.
*
* Return: value of the last digit
*/

int print_last_digit(int l)
{
int last =  l % 10;
if (last < 0)
{
last = -last;
}
_putchar(last + '0');
return (last);
}
