#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**

* reverse_array - Write a function that reverses the content
* of an array of integers.
*
* @a: to check
* @n: to check
*
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
int p;
int m;
for (p = 0; p < n / 2; p++)
{
m = a[p];
a[p] = a[n - 1 - p];
a[n - 1 - p] = m;
}
}
