#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
**times_table - Prototype practicing
*
* Description:Write a function that prints the 9 times table,
* starting with 0.
*
* Return: (void)
*/
void times_table(void)
{
int i = 0;
int j = 0;
for (i = 0; i <= 9; i++)
{
for (j = 0 ; j <= 9; j++)
{
if (j == 0)
{
printf("%i, ", i * j);
}
else if ((i * j) <= 9 && j == 9)
{
printf(" %i", i * j);
}
else if (j == 9)
{
printf("%i", i * j);
}
else if ((i * j) <= 9)
{
printf(" %i, ", i * j);
}
else
{
printf("%i, ", i * j);
}
}
printf("\n");
}
}
