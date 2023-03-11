
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - Write a program that adds positive numbers.
*
* @argc: to check
* @argv: to check
*
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("0\n");
}
else
{
int i;
for (i = 0; i < argc; i++)
{
int m = atoi(argv[i]);
printf("%i\n", m);
if (i >= 48 && i <= 57)
{
printf("Error\n");
return (1);
}
}
}
return (0);
}
