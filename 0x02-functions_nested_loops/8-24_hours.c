#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
**jack_bauer - Prototype practicing
*
* Description:Write a function that cprints every minute of the day of Jack Bauer, 
* starting from 00:00 to 23:59.
* @a:character to check
*
* Return:a
*/

void jack_bauer(void)
{
int numberA = 48;
int numberB = 48;
int numberC = 48;
int numberD = 48;

int colomn = 58;
for (numberA = 48 ; numberA <= 50 ; numberA++)
{
for (numberB = 48 ; numberB <= 57 ; numberB++)
{
for (numberC = 48 ; numberC <= 53 ; numberC++)
{
for (numberD = 48 ; numberD <= 57 ; numberD++)
{
putchar(numberA);
putchar(numberB);
putchar(colomn);
putchar(numberC);
putchar(numberD);
putchar('\n');
}
}
}
}
}
