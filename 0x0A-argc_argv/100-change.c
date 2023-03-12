#include <stdlib.h>
#include <time.h>
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
if (argc != 1)
{
printf("Error\n");
return (1);
}
else
{
int a = atoi(argv[0]);
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

int cents(int a)
{
int value[4] = {1; 2; 5; 10; 25};

}
