#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
**jack_bauer - Prototype practicing
*
* Description:Write a function that cprints every minute
* of the day of Jack Bauer,starting from 00:00 to 23:59.
*
* Return:a
*/

void jack_bauer(void)
{
int numberA = 00;
int numberB = 00;
for (numberA = 00 ; numberA <= 23 ; numberA++)
{
for (numberB = 00 ; numberB <= 59 ; numberB++)
{
printf("%.2i:", numberA);
printf("%.2i", numberB);
putchar('\n');
}
}
}
