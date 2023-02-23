#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
**print_to_98 - Prototype practicing
*
* Description:Write a function that prints all natural numbers from n to 98,
* followed by a new line.
*
* @n:character to check
*
* Return: (result)
*/
void print_to_98(int n)
{
for(n = n ;n <= 98; n++)
{
if(n < 98)
{
printf("%i, ",n);
}
else
{
printf("%i",n);
}
}
_putchar('/n');
}

