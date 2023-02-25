#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
* Description: Fizz Buzz
*
* Return:(0)
*/

int main (void)
{
int p;
for (p = 1 ;p <= 100; p++)
{
if (p % 3 == 0 &&  p % 5 == 0)
{
printf("FizzBuzz ");
}
else if (p % 3 == 0)
{
printf("Fizz ");
}
else if (p % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%i, ",p);
}
}
putchar('\n');
return (0);
}

