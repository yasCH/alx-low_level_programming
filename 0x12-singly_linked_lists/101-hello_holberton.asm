#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* __attribute__ 
*
* Return: void
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
