#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
**main - Entry point
*
* Description: Write a program that prints _putchar, followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
