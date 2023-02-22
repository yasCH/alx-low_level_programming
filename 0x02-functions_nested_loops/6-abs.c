#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
**_abs - Prototype practicing
*
* Description:Write a function that computes 
* the absolute value of an integer.
*
* @v:character to check 
*
* Return:0
*/

int _abs(int v)
{
if (v < 48)
{
_putchar((v)*(-1));
}
else
{
_putchar(v);
}
return (0);
}
