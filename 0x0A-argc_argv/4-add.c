#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
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
int p = _pow_recursion(10, l);
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

/**
* _pow_recursion - Write a function that returns the value of x
* raised to the power of y.
*
*@x: to check
*@y: to check
*
*Return: n
*
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
int pow;
pow = x * _pow_recursion(x, y - 1);
return (pow);
}
}
