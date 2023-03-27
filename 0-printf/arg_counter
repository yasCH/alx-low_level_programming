#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* arg_counter - arguments counter
* @format: an array
* Return: number of arguments
*/
int arg_counter(const char *format)
{
int l;
int counter;
counter = 0;
int i;
l= strlen(format);
for(i = 0; i < l; i++)
{
if (format[i] == '%')
{
counter++;
}
}
return (counter);
}
