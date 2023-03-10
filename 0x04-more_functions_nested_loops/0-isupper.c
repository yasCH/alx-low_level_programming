#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_isupper - Prototype practicing
*
* Description:Write a function that checks for  character.
*
* @c:character to check if it is uppercase.
*
* Return:0-if lowercase,1-if not.
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
