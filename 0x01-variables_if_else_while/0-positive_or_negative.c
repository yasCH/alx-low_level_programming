#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* print whether the number stored in the variable n is positive or negative.
* main - Entry point
* Return: Always 0 (success)
*/
int main(void) /*main - Entry point */
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
