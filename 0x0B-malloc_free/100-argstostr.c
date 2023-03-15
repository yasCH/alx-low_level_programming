#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* argstostr - Write a function that concatenates all the
* arguments of your program.
*
* @ac: to check
* @av: to check
*
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int i;
char *new = "\n";
char *creat;
creat = malloc(ac * sizeof(char));
for (i = 0; i < ac; i++)
{
creat = strcat(creat, av[i]);
creat = strcat(creat, new);
}
return (creat);
}
