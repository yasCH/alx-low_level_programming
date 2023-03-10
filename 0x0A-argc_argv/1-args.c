#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - Write a program that prints the number of arguments passed into it.
*
* @argc: to check
* @argv: to check
*
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 1)
{
printf("%li\n", sizeof(argv) - 1);
}
else
{
printf("0\n");
}
return (0);
}
