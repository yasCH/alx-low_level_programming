#include "main.h"

/**
* is_prime_number - Write a function that returns 1
* if the input integer is a prime number,otherwise return 0.
*
* @n: to check
*
* Return: 1 if n in prime otherwise return 0.
*/
int is_prime_number(int n)
{
if (n > 1 && n % n == 0)
return (1);
else
{
return (0);
}
}
