
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
int m = 0;
int a = atoi(argv[i]);
if (argc < 2)
{
printf("0\n");
}
else
{
int i;
for (i = 1; i < argc; i++)
{
if (a <= 0)
{
printf("Error\n");
return (1);
}
else
{
m = m + a;
}
}
printf("%i\n", m);
}
return (0);
}
