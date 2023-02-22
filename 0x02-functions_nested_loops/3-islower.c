#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
** _islower - Prototype practicing
*
* Description:Write a function that checks for lowercase character.
*
*
* character: Number to pass to _islower function
*
* Return: Always 1 (Success)
*/
int _islower(int character)
{
if (character >= 97 && character <= 122)
{
return (1);
}
else
{
return (0);
}
}
