#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**islower - Prototype practicing
*
* Description:Write a function that checks for lowercase character.
*
* Return: (0)
*/
int _islower()
{
char caracter = 'a';
if (caracter <= 'z' && caracter >= 'a' )
{
return (1);
}
else
{
return (0);
}
}
