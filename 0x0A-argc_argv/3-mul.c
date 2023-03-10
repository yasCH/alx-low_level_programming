#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - Write a program that multiplies two numbers.
*
* @argc: to check
* @argv: to check
*
* Return: 0 or Error
*/
int main(int argc, char *argv[])
{
if (argc > 2)
{
int a = *argv[1] + 48;
int b = *argv[2] + 48;
printf("%i\n", a * b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
