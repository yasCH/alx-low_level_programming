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
printf((v)*(-1));
}
else
{
printf(v);
}
return (0);
}
