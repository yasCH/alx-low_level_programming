#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_isalpha - Prototype practicing
*
* Description:Write a function that checks for alphabetic character.
*
* @c:character to check if it islowercase.
*
* Return:0-if lowercase,1-if not.
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
