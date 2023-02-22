#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_abs - Prototype practicing
*
* Description:Write a function that computes 
* the absolute value of an integer.
*
* @v:character to check if it islowercase.
*
* Return:0
*/

int _abs(int v)
{
if (v < 0)
{
_putchar(v*(-1));
}
else
{
_putchar(v);
}
}
