#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* main - Write a program that prints the minimum number
* of coins to make change for an amount of money.
*
* @argc: to check
* @argv: to check
*
* Return: 0(success) 1(fail)
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int a = atoi(argv[1]);
if (a < 0)
{
printf("0\n");
}
else
{
int r = cents(a);
printf("%i\n", r);
}
}
return (0);
}

/**
* cents - Write the amount of cents you need to give back.
*
* @a: to check
*
* Return: 0(success)
*/
int cents(int a)
{
int i = 0;
int value[5] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
int r = a / value[i];
if (a >= value[i] && r == 0)
{
return(r);
}
}
return (0);
}
