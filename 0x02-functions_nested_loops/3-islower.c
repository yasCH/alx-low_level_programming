#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_islower - Prototype practicing
*
* Description:Write a function that prints the alphabet, in lowercase,
* followed by a new line
*
* @c:character to check if it islowercase.
*
* Return:0-if lowercase,1-if not.
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
