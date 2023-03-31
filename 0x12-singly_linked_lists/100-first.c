#include <stdlib.h>
#include <stdio.h>

/**
* __attribute__ - function
*
* Return: void
**/
void __attribute__((constructor)) calledFirst();

/**
* calledFirst - function 
*
* Return: void
**/
void calledFirst()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
