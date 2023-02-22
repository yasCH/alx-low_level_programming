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
for (j = i + 1; j <= 9; j++)
{
printf("%i, ",j);
}
printf("\n");
}
return (0);
}
