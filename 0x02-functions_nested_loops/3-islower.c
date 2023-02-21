#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
**_islower - Prototype practicing
*
* Description:Write a function that checks for lowercase character.
*
* Return: (1) success  - Return: (0) fail
*/
int _islower(int caracter)
{
if (caracter >= 97 && caracter <= 122)
{
return (1);
}
else
{
return (0);
}
}
