#include <stdlib.h>
#include <time.h>
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
if (argc == 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
