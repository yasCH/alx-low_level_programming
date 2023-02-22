#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**print_sign - Prototype practicing
*
* Description:Write a function that prints the sign of a number.
*
* @n:character to check if it islowercase.
*
* Return:1 if n is greater than zero 
*/

int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}
