#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* swap_int -Write a function that swaps the values of two integers.
*
* @a: character to check
* @b: character to check
*
* Return: (void)
*/
void swap_int(int *a, int *b)
{
*a = *b;
*b = &a;
}
