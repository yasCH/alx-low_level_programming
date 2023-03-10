#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - Write a program that prints its name, followed by a new line.
*
* @argc: to check
* @argv: to check
*
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 2)
{
int a = (*argv[1] - 48);
int b = (*argv[2] - 48);
printf("%li\n", (a * b));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
