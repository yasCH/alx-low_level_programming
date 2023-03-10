#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - Write a program that prints all arguments it receives.
*
* @argc: to check
* @argv: to check
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);       
}
return (0);
}
