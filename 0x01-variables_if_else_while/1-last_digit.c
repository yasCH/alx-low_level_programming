#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'print the last digit of the number stored in the variable n'
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("Last digit of %i is %i  and is grater than 5\n",n) 
}
else if (n = 0)
{
printf("Last digit of %i is %i  and is 0\n",n) 
}
else if (n < 6)
{
printf("Last digit of %i is %i  and is less than 6 and not 0\n",n) 
}
	return (0);
}
