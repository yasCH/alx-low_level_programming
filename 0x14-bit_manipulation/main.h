#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _pow(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
* _pow - Write a function that returns the value of x
* raised to the power of y.
*
*@x: to check
*@y: to check
*
*Return: n
*
*/
int _pow(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
int pow;
pow = x * _pow(x, y - 1);
return (pow);
}
}

#endif
