#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - Write a function that prints a name.
*
* @name: to check
* @*f: to check
*
* Return void
**/
void print_name(char *name, void (*f)(char *))
{
puts(name);
}
