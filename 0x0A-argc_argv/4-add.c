#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include<math.h> 
#include "main.h"

/**
* main - Write a program that adds positive numbers.
*
* @argc: to check
* @argv: to check
*
* Return: 0(success) 1(fail)
*/
int main(int argc, char *argv[])
{
int m = 0;
if (argc < 2)
{
printf("0\n");
}
else
{
int i;
for (i = 1; i < argc; i++)
{
int a = atoi(argv[i]);
int l = strlen(argv[i]);
int p = pow(10, l);
if (a <= 0 && a < p)
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
