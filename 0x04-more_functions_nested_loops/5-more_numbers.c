#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* more_numbers -  Write a function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*
* Return: (void)
*/
void more_numbers(void)
{
int times = 1;
int number = 0;
for (times = 1; times <= 10; times++)
{
for (number = 0; number <= 14; number++)
{
printf("%i", number);
}
putchar('\n');
}
}
