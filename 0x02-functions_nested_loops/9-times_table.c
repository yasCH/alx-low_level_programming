#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

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
int i = 0 ,j;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
printf(j);
j++;
}
printf("\n");
i++;
}
}
