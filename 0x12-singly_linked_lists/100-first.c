#include <stdlib.h>
#include <stdio.h>

/**
* calledFirst - function
* Return: void
**/
void __attribute__((constructor)) calledFirst()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
