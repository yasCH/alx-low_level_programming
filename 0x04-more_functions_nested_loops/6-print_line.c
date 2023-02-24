#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* void print_line(int n)- Write a function that draws a straight line in the terminal.
*
* @n
*
* Return:
*/

void print_line(int n)
{
int n;
char l = 45;
for (n =1; n > 0; n++)
{
putchar(l);
}
putchar('\n');
}
