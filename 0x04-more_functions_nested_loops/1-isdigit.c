#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_isdigit - Prototype practicing
*
* Description:Write a function that checks digits.
*
* @c:character to check if it a digit.
*
* Return:1-if digit,0-if not.
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
