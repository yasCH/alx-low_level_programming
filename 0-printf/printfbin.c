#include <stdio.h>
#include "main.h"

/**
 * printfbin - convert int to binary.
 * @b: number to convert.
 * Return: number of printed caracters
 */

int printfbin(unsigned int b)
{
    if (b == 0) 
    {
        return (0);
    }
   if (b == 1)
    {
        return (1);   
    }
     return (b % 2) + 10 * printfbin(b / 2);

}
