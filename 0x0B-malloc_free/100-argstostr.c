#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* argstostr - Write a function that concatenates all the
* arguments of your program.
*
* @argc: to check
* @argv: to check
*
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
