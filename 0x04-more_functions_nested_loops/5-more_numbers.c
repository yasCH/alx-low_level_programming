#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
**more_numbers- Prototype practicing
*
* Description: Write a function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*
* Return:0
*/

void more_numbers(void);
{
int number = 0;
int times = 1;
for (times = 1 ; times <= 10 ; times++)
{
for (number = 0 ; number <= 14 ; number++)
{
printf("%d",number);
}
putchar('\n');
}
return(0);
}
