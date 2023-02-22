#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * Function that checks for lowercase character
 * @c:character to check if it islowercase.
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
